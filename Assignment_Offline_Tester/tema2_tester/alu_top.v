`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:20:35 11/17/2019 
// Design Name: 
// Module Name:    alu_top 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////

`define ALU_BUS_WITH 		16
`define ALU_OUTPUT_WIDTH	12
`define ALU_AMM_ADDR_WITH 	8
`define ALU_AMM_DATA_WITH	8   

module alu_top(
	// Output interface
   output [`ALU_BUS_WITH - 1:0] data_out,
	output valid_out,
	output cmd_out,

	//Input interface
	input [`ALU_BUS_WITH - 1:0] data_in,
	input valid_in,
	input cmd_in,
	 
	//clock and reset interace
	input clk,
	input rst_n
   );

	 // AMM interface
	 wire 								  amm_read;
	 wire[`ALU_AMM_ADDR_WITH - 1:0] amm_address;
	 wire[`ALU_AMM_DATA_WITH - 1:0] amm_readdata;
	 wire 								  amm_waitrequest;
	 wire[1:0] 							  amm_response;
	 
	// Register file
	alu_regfile memory(
		.amm_read(amm_read),
		.amm_address(amm_address),
		.amm_readdata(amm_readdata),
		.amm_waitrequest(amm_waitrequest),
		.amm_response(amm_response),
		.clk(clk),
		.rst_n(rst_n)
	);
	
	// ALU
	alu alu_i(
		.data_out(data_out),
		.valid_out(valid_out),
		.cmd_out(cmd_out),
		
		.data_in(data_in),
		.valid_in(valid_in),
		.cmd_in(cmd_in),
		
		.amm_read(amm_read),
		.amm_address(amm_address),
		.amm_readdata(amm_readdata),
		.amm_waitrequest(amm_waitrequest),
		.amm_response(amm_response),
		.clk(clk),
		.rst_n(rst_n)
	);
	
endmodule
