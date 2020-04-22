`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   11:23:41 11/07/2019
// Design Name:   tester tema2
// Module Name:   tester
// Project Name:  tema2
// Target Device: ISim
// Tool versions: 14.7
// Description:   tester for homework 2: Simple ALU
////////////////////////////////////////////////////////////////////////////////

`define ALU_BUS_WITH        16  
`define ALU_BUFFER_SIZE     64
`define MAX_INSTR_NUMBER    1000

module tester;

// Tester
reg clk_reg;                                    // master clock
reg rst_n_reg;

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file
integer passed_tests = 0;

reg[16*8-1:0] test_name;
real test_value;
real test_penalty;
integer config_file;
integer data_file;

integer i, j, index[2:0], timeout[1:0];
reg mismatch;
reg match;

reg[1:0] packet_received = {1'b1 , 1'b1};

integer nof_payloads;
integer nof_instructions;
integer cc_count = 0;
integer instr_count = 0;

reg[`ALU_BUS_WITH - 1 : 0] header_in [`MAX_INSTR_NUMBER : 0];
reg[`ALU_BUS_WITH - 1 : 0] payload_in[`MAX_INSTR_NUMBER : 0][`ALU_BUFFER_SIZE : 0];
reg[`ALU_BUS_WITH - 1 : 0] ref_header_out [`MAX_INSTR_NUMBER : 0], tst_header_out [`MAX_INSTR_NUMBER : 0];
reg[`ALU_BUS_WITH - 1 : 0] ref_payload_out[`MAX_INSTR_NUMBER : 0], tst_payload_out[`MAX_INSTR_NUMBER : 0];

initial begin
    config_file = $fopen("test.config", "r");
    if(!config_file) begin
        $write("error opening config file\n");
        $finish;
    end
    
    if($fscanf(config_file, "name=%16s\n", test_name) != 1) begin
        $write("error reading test name\n");
        $finish;
    end
    
    if($fscanf(config_file, "value=%f\n", test_value) != 1) begin
        $write("error reading test value\n");
        $finish;
    end
    
    if($fscanf(config_file, "penalty=%f\n", test_penalty) != 1) begin
        $write("error reading test penalty\n");
        $finish;
    end

    data_file = $fopen("test.data", "r");
    if(!data_file) begin
        $write("error opening data file\n");
        $finish;
    end
    
    if($fscanf(data_file, "nof_instructions = %d\n", nof_instructions) != 1) begin
            $write("error reading nof_instructions\n");
            $finish;
    end
    
    for(i = 0; i < nof_instructions; i = i + 1) begin
        if($fscanf(data_file, "header = %x\n", header_in[i]) != 1) begin
            $write("error reading header\n");
            $finish;
        end
        
        nof_payloads = header_in[i][5:0];
        for(j = 0; j < nof_payloads; j = j + 1) begin
            if($fscanf(data_file, "%x\n", payload_in[i][j]) != 1) begin
                $write("error reading payload_%d for header_%d\n", j, i);
                $finish;
        end
        end
    end

    $fclose(data_file);

//----------------------------START OF TEST-------------------------
    // initialize inputs
    clk_reg         = 0;
    rst_n_reg       = 1;
    data_in_reg     = 0;
    valid_in_reg    = 0;
    cmd_in_reg      = 0;
    
    repeat(5) @(posedge clk);
    rst_n_reg = 0;
    
    repeat(2) @(posedge clk);
    rst_n_reg = 1;
    
    repeat(5) @(posedge clk);

    fork
        begin
            @(posedge clk);         
            drive_instruction();
        end

        begin
            monitor_instruction_tst();
        end

        begin
            monitor_instruction_ref();
        end
    join

    repeat(10) @(posedge clk);
    end_of_test_checks();

    print_test_results();
end

// Instantiate the Unit Under Test (UUT)
wire[`ALU_BUS_WITH - 1 : 0]     tst_data_out, ref_data_out, perf_data_out;
wire                            tst_valid_out, ref_valid_out, perf_valid_out;
wire                            tst_cmd_out, ref_cmd_out, perf_cmd_out; 
wire[`ALU_BUS_WITH - 1 : 0]     data_in;
wire                            valid_in;
wire                            cmd_in;

// Control regs
reg [`ALU_BUS_WITH - 1:0] data_in_reg;
reg valid_in_reg;
reg cmd_in_reg;

// ALU
alu_top tst_alu_top(
    .data_out(tst_data_out),
    .valid_out(tst_valid_out),
    .cmd_out(tst_cmd_out),

    .data_in(data_in),
    .valid_in(valid_in),
    .cmd_in(cmd_in),

    .clk(clk),
    .rst_n(rst_n)
);

alu_top perf_alu_top(
    .data_out(perf_data_out),
    .valid_out(perf_valid_out),
    .cmd_out(perf_cmd_out),

    .data_in(data_in),
    .valid_in(valid_in),
    .cmd_in(cmd_in),

    .clk(clk),
    .rst_n(rst_n)
);

ref_alu_top ref_alu_top(
    .data_out(ref_data_out),
    .valid_out(ref_valid_out),
    .cmd_out(ref_cmd_out),

    .data_in(data_in),
    .valid_in(valid_in),
    .cmd_in(cmd_in),

    .clk(clk),
    .rst_n(rst_n)
);

task drive_instruction();
begin
    for(index[0] = 0; index[0] < nof_instructions; index[0] = index[0] + 1) begin

        while(packet_received != 3)
            @(posedge clk);

        @(posedge clk);
        packet_received = 0;

        // driving header
        valid_in_reg = 1;
        cmd_in_reg = 1;
        data_in_reg = header_in[index[0]];

        @(posedge clk);
        //drive payload
        cmd_in_reg = 0;
        for(i = 0; i < header_in[index[0]][5:0]; i = i + 1)
        begin
            data_in_reg = payload_in[index[0]][i];
            @(posedge clk);
        end

        data_in_reg = 0;
        valid_in_reg = 0;

    end  
end
endtask

task monitor_instruction_ref();
begin
    for(index[1] = 0; index[1] < nof_instructions; index[1] = index[1] + 1) begin
        timeout[0] = 2000;
        while(ref_cmd_out === 0 || ref_valid_out === 0)
        begin
            timeout[0] = timeout[0] - 1;
            if(timeout[0] == 0)
            begin
                $display("[TIMEOUT]Instruction %0d timeout after 2000cc", index[1]);
                $finish;
            end
            @(posedge clk);
        end
        
        ref_header_out[index[1]] = ref_data_out;
        
        @(posedge clk);

        timeout[0] = 2000;
        while(ref_valid_out === 0)
        begin
            timeout[0] = timeout[0] - 1;
            if(timeout[0] == 0)
            begin
                $display("[TIMEOUT]Instruction %0d timeout after 2000cc", index[1]);
                $finish;
            end
            @(posedge clk);
        end

        ref_payload_out[index[1]] = ref_data_out;

        packet_received[0] = 1;
    end    
end
endtask

task monitor_instruction_tst();
begin
    for(index[2] = 0; index[2] < nof_instructions; index[2] = index[2] + 1) begin
        timeout[1] = 2000;
        while(tst_cmd_out === 0 || tst_valid_out === 0)
        begin
            timeout[1] = timeout[1] - 1;
            if(timeout[1] == 0)
            begin
                $display("[TIMEOUT]Instruction %0d timeout after 2000cc", index[2]);
                $finish;
            end
            @(posedge clk);
        end
        
        tst_header_out[index[2]] = tst_data_out;
        
        @(posedge clk);

        timeout[1] = 2000;
        while(tst_valid_out === 0)
        begin
            timeout[1] = timeout[1] - 1;
            if(timeout[1] == 0)
            begin
                $display("[TIMEOUT]Instruction %0d timeout after 2000cc", index[2]);
                $finish;
            end
            @(posedge clk);
        end

        tst_payload_out[index[2]] = tst_data_out;

        packet_received[1] = 1;
    end    
end
endtask

task print_test_results();
begin
    match = passed_tests == nof_instructions ? 1 : 0;

    // print results
    file = $fopen("result.tester");
    
    percentage = passed_tests * 1.0 / nof_instructions;
    grade = passed_tests * 1.0 / nof_instructions;

    $fwrite(file, "test %0s: %0d correct out of %0d (%6.2f%% completed)\n", test_name, passed_tests, nof_instructions, 100.0 * percentage);

    $fwrite(file, "%6.2f: test %0s",
        test_value * (grade - test_penalty),
        test_name);
    $fwrite(file, " %0s in %0d clock cycles\n", match ? "ok" : "failed", cc_count);

    $fclose(file);
    $finish;
end
endtask

task end_of_test_checks();
begin
    for(i = 0;  i < nof_instructions; i = i + 1)
    begin
        if(ref_header_out[i] !== tst_header_out[i] || ref_payload_out[i] !== tst_payload_out[i]) begin
            $write("\nMISMATCH for instruction %0d: \n", i);
            $write("header: 0x%x\n", header_in[i]);
            $write("payloads: ");

            nof_payloads = header_in[i][5:0];
            for(j = 0; j < nof_payloads; j = j + 1) begin
                $write("0x%x ", payload_in[i][j]);
            end
            $write("\n\n");
        end

        if(ref_header_out[i] !== tst_header_out[i]) begin
            $write("HEADER MISMATCH: expected header 0x%x, received header 0x%x \n\n", ref_header_out[i], tst_header_out[i]);
            mismatch = 1;
        end
        else
            mismatch = 0;

        if(ref_payload_out[i] !== tst_payload_out[i]) begin
            $write("PAYLOAD MISMATCH: expected payload 0x%x, received payload 0x%x \n\n", ref_payload_out[i], tst_payload_out[i]);
            mismatch = 1;
        end
        else
            mismatch = 0;

        if(mismatch == 0) begin
            $write("[INSTRUCTION PASSED] Instruction %0d was checked correctly \n", i);
            passed_tests = passed_tests + 1;
        end

    end
end
endtask

always #10 clk_reg = !clk_reg;

always@(posedge clk) begin
	if(instr_count != 1000)
		cc_count =  cc_count + 1;
	if(perf_cmd_out === 1)
		instr_count = instr_count + 1;
end

assign clk          = clk_reg;
assign rst_n        = rst_n_reg;
assign data_in      = data_in_reg;
assign valid_in     = valid_in_reg;
assign cmd_in       = cmd_in_reg; 

endmodule
