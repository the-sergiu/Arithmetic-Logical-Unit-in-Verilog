`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:49:47 10/05/2019
// Design Name:   average
// Module Name:   average_test.v
// Project Name:  ex1_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: average
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

`define ALU_BUS_WITH 		16
`define ADD 4'd0
`define AND 4'd1
`define OR  4'd2
`define XOR 4'd3
`define NOT 4'd4
`define INC 4'd5
`define DEC 4'd6
`define NEG 4'd7 

`define NOF_TESTS 1000

module alu_test;

	// Inputs
	wire [`ALU_BUS_WITH - 1:0] data_in;
	wire valid_in;
	wire cmd_in;
	
	// Control regs
	reg [`ALU_BUS_WITH - 1:0] data_in_reg;
	reg valid_in_reg;
	reg cmd_in_reg;
	

	// Outputs
	wire [`ALU_BUS_WITH - 1:0] data_out;
	wire valid_out;
	wire cmd_out;
	
	// Clock and reset
	reg clk, rst_n;
	
	integer passed_tests = 0;
	reg[5:0] nof_operands;
	integer i,j, instruction_index = 0;
	
	reg mismatch;
	reg[1000*8 -1 : 0] error_string; 
	
	reg[`ALU_BUS_WITH - 1:0] test_header[`NOF_TESTS - 1: 0];
	reg[`ALU_BUS_WITH * 64 - 1:0] test_payload[`NOF_TESTS - 1: 0]; // TODO add define here
	
	reg[`ALU_BUS_WITH - 1:0] out_header[`NOF_TESTS - 1: 0]; 
	reg[`ALU_BUS_WITH - 1:0] out_payload[`NOF_TESTS - 1: 0];
	
	reg[`ALU_BUS_WITH - 1:0] expected_header[`NOF_TESTS - 1: 0];
	reg[`ALU_BUS_WITH - 1:0] expected_payload[`NOF_TESTS - 1: 0]; 
	
	integer timeout = 2000;
	
	// Syncronization signals;
	reg reset_sequence_end = 0;
	reg drive_done = 0;
	reg drive_start = 0;

	// Debugging 
	
	integer force_instruction_index;
	reg enable_force;
	
	/*
	
	initial begin
		test_header[0] = 16'h0002;
		test_payload[0] = {0,16'h00A0,16'h000C};
		
		test_header[1] = 16'h0002;
		test_payload[1] = {0,16'h0104, 16'h01A0 };
		
		test_header[2] = 16'h0001;
		test_payload[2] = {0,16'h0120};
	end
	
	initial begin
		expected_header[0] = 16'h0000;
		expected_payload[0] = 16'h00AC;
		
		expected_header[1] = 16'h0000;
		expected_payload[1] = 16'h053;
		
		expected_header[2] = 16'h0010;
		expected_payload[2] = 16'h0BAD;
	end
	
	*/
	`include "expected.out"
	`include "instructions.out"
	
	initial begin
		for(i = 0; i < `NOF_TESTS; i = i + 1)
		begin
			out_header[i] = 0;
			out_payload[i] = 0;
		end
	end
	
	
	task drive_instruction( integer index);
	begin
		nof_operands = test_header[index][5:0];
	
		// driving header
		valid_in_reg = 1;
		cmd_in_reg = 1;
		data_in_reg = test_header[index];
		
		@(posedge clk);
		//drive payload
		cmd_in_reg = 0;
		for(j = 0; j < nof_operands; j = j + 1)
		begin
			data_in_reg = test_payload[index][((j+1) * `ALU_BUS_WITH  - 1) -: 16];
			@(posedge clk);
		end
		
		data_in_reg = 0;
		valid_in_reg = 0;
	end
	endtask
	
	task monitor_instruction(integer index);
	begin
	timeout = 2000;
	while(cmd_out == 0)
	begin
		timeout = timeout - 1;
		if(timeout == 0)
		begin
			$display("[TIMEOUT]Test %0d timedout after 2000cc", index);
			print_failed_test(index);
			$finish;
		end
		@(posedge clk);
	end
	
	out_header[index] = data_out;
	
	@(posedge clk);
	out_payload[index] = data_out;
	
	end
	endtask
	
	function end_of_test_checks(integer test);
	begin
		for(i = 0;  i < `NOF_TESTS; i = i + 1)
		begin
			if(enable_force)
				i = force_instruction_index;
			mismatch = 0;
			if(out_header[i] !== expected_header[i]) begin
				$display("Mismatch expected header 0x%0x, received header 0x%0x",expected_header[i],out_header[i]);
				mismatch = 1;
			end
			if(out_payload[i] !== expected_payload[i]) begin
				$display("Mismatch expected payload 0x%0x, received payload 0x%0x",expected_payload[i],out_payload[i]);
				mismatch = 1;
			end
			if(mismatch == 0) begin
				$display("[TEST PASSED] Instruction %0d was checked correctly", i);
				passed_tests = passed_tests + 1;
			end
			else
				begin
					$display("[TEST FAILED] Check failed for instruction %0d Rerun with:",i);
					$display("failed_test_header = {16'h%0x};",test_header[i]);
					
					error_string = "failed_test_payload = { 0 ";
					for(j = 0; j < test_header[i][5:0]; j = j + 1)
						$sformat(error_string, "%0s ,16'h%0x",error_string, test_payload[i][((j+1) * `ALU_BUS_WITH  - 1) -: 16]);
					error_string =  {error_string, "};"};
					$display("%0s",error_string);
		
				end
				if(enable_force) // Verilog does not support break ...
					i = `NOF_TESTS;
		end
		$display("Passing rate: %0d/1000", passed_tests);
	end
	endfunction
	
	function print_failed_test(integer index);
	begin
		$display("failed_test_header = {16'h%0x};",test_header[index]);
					
		error_string = "failed_test_payload = { 0 ";
		for(j = 0; j < test_header[index][5:0]; j = j + 1)
			$sformat(error_string, "%0s ,16'h%0x",error_string, test_payload[index][((j+1) * `ALU_BUS_WITH  - 1) -: 16]);
		error_string =  {error_string, "};"};
		$display("%0s",error_string);
					
	end
	endfunction
	
	// Instantiate the Design Under Test (DUT)
	alu_top dut (		
		.data_out(data_out),
		.valid_out(valid_out),
		.cmd_out(cmd_out),
		
		.data_in(data_in),
		.valid_in(valid_in),
		.cmd_in(cmd_in),
		
		.clk(clk),
		.rst_n(rst_n)	);

	
	// Reset sequence
	initial begin
		rst_n 			= 1;
		clk 				= 0;
		data_in_reg		= 0;
		valid_in_reg 	= 0;
		cmd_in_reg	 	= 0;
		
		repeat(9)
			@(posedge clk);
		rst_n = 0;
		
		repeat(1)
			@(posedge clk);
			
		rst_n = 1;
		
		repeat(10)
			@(posedge clk);
		
		enable_force = 0;
		
		//// Uncomment and update this for debugging 
		//force_instruction_index	= 800;
		//enable_force = 1;
		
		reset_sequence_end = 1;
		
	end
	
	// Drive sequence
	always @(*)
		begin 
			if(enable_force)
				instruction_index = force_instruction_index;
			if(reset_sequence_end == 1 && drive_done == 0)
			begin
				drive_start = 1;
				@(posedge clk); // give time for the monitor to start
				drive_instruction(instruction_index);
				drive_done = 1;

			end
		end
		
	// Monitor sequence
	always @(*)
		begin 
			if(reset_sequence_end == 1 && drive_start == 1)
			begin
				monitor_instruction(instruction_index);
				
				if(drive_done == 0)
					@(posedge drive_done);
					
				@(posedge clk);
				if( instruction_index < `NOF_TESTS - 1) begin
					if(!enable_force)
						instruction_index = instruction_index + 1;
					else
					begin
						end_of_test_checks(0);
						$finish;
					end
					drive_done = 0;
					drive_start = 0;
				end
				else
					begin
						end_of_test_checks(0);
						$finish;
					end
			end
		end
	
	
	always #10 clk = !clk;
	
	
	// Assign inputs
	assign data_in 	= data_in_reg;
	assign valid_in 	= valid_in_reg;
	assign cmd_in 		= cmd_in_reg;
	

endmodule

