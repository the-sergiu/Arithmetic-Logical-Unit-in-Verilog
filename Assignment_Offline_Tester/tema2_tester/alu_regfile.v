`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:24:20 11/17/2019 
// Design Name: 
// Module Name:    reg_file 
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

`define ALU_AMM_ADDR_WITH 	8
`define ALU_AMM_DATA_WITH	8   

`define MEMORY_ADDRESS_SPACE0_START 'h0
`define MEMORY_ADDRESS_SPACE0_END   'hF


`define MEMORY_ADDRESS_SPACE1_START 'h30
`define MEMORY_ADDRESS_SPACE1_END   'h7F


`define MEMORY_ADDRESS_SPACE2_START 'hA0
`define MEMORY_ADDRESS_SPACE2_END   'hFF


`define RESET 						0 
`define IDLE  						1
`define CHECK_SIGNAL_STABLE 	2
`define SEND_DATA 				4

// HARD requirement AMM READ and AMM address needs to be constant for three clock cycles before response
// Should not affect RTL design (AMM specification states that SLAVE may keep WAITREQ signal up as much as it needs
// IF AMM READ and AMM ADDRESS are not stable for three clock cycles, the transaction will be ignored

module alu_regfile(
	 input 									 amm_read,
	 input [`ALU_AMM_ADDR_WITH - 1:0] amm_address,
	 output[`ALU_AMM_DATA_WITH - 1:0] amm_readdata,
	 output 									 amm_waitrequest,
	 output[1:0] 							 amm_response,
	 
	 input clk,
	 input rst_n
    );
	 
	// Reg blocks 
	reg[7:0] regblock0[15:0];
	reg[7:0] regblock1[79:0];
	reg[7:0] regblock2[95:0];
	 
	initial begin 
		
//=======================================
// Initial values for regblock0 
//=======================================

regblock0[0] = 103 ;
regblock0[1] = 198 ;
regblock0[2] = 105 ;
regblock0[3] = 115 ;
regblock0[4] = 81 ;
regblock0[5] = 255 ;
regblock0[6] = 74 ;
regblock0[7] = 236 ;
regblock0[8] = 41 ;
regblock0[9] = 205 ;
regblock0[10] = 186 ;
regblock0[11] = 171 ;
regblock0[12] = 242 ;
regblock0[13] = 251 ;
regblock0[14] = 227 ;
regblock0[15] = 70 ;

//=======================================
// Initial values for regblock1 
//=======================================

regblock1[0] = 124 ;
regblock1[1] = 194 ;
regblock1[2] = 84 ;
regblock1[3] = 248 ;
regblock1[4] = 27 ;
regblock1[5] = 232 ;
regblock1[6] = 231 ;
regblock1[7] = 141 ;
regblock1[8] = 118 ;
regblock1[9] = 90 ;
regblock1[10] = 46 ;
regblock1[11] = 99 ;
regblock1[12] = 51 ;
regblock1[13] = 159 ;
regblock1[14] = 201 ;
regblock1[15] = 154 ;
regblock1[16] = 102 ;
regblock1[17] = 50 ;
regblock1[18] = 13 ;
regblock1[19] = 183 ;
regblock1[20] = 49 ;
regblock1[21] = 88 ;
regblock1[22] = 163 ;
regblock1[23] = 90 ;
regblock1[24] = 37 ;
regblock1[25] = 93 ;
regblock1[26] = 5 ;
regblock1[27] = 23 ;
regblock1[28] = 88 ;
regblock1[29] = 233 ;
regblock1[30] = 94 ;
regblock1[31] = 212 ;
regblock1[32] = 171 ;
regblock1[33] = 178 ;
regblock1[34] = 205 ;
regblock1[35] = 198 ;
regblock1[36] = 155 ;
regblock1[37] = 180 ;
regblock1[38] = 84 ;
regblock1[39] = 17 ;
regblock1[40] = 14 ;
regblock1[41] = 130 ;
regblock1[42] = 116 ;
regblock1[43] = 65 ;
regblock1[44] = 33 ;
regblock1[45] = 61 ;
regblock1[46] = 220 ;
regblock1[47] = 135 ;
regblock1[48] = 112 ;
regblock1[49] = 233 ;
regblock1[50] = 62 ;
regblock1[51] = 161 ;
regblock1[52] = 65 ;
regblock1[53] = 225 ;
regblock1[54] = 252 ;
regblock1[55] = 103 ;
regblock1[56] = 62 ;
regblock1[57] = 1 ;
regblock1[58] = 126 ;
regblock1[59] = 151 ;
regblock1[60] = 234 ;
regblock1[61] = 220 ;
regblock1[62] = 107 ;
regblock1[63] = 150 ;
regblock1[64] = 143 ;
regblock1[65] = 56 ;
regblock1[66] = 92 ;
regblock1[67] = 42 ;
regblock1[68] = 236 ;
regblock1[69] = 176 ;
regblock1[70] = 59 ;
regblock1[71] = 251 ;
regblock1[72] = 50 ;
regblock1[73] = 175 ;
regblock1[74] = 60 ;
regblock1[75] = 84 ;
regblock1[76] = 236 ;
regblock1[77] = 24 ;
regblock1[78] = 219 ;
regblock1[79] = 92 ;

//=======================================
// Initial values for regblock2 
//=======================================

regblock2[0] = 2 ;
regblock2[1] = 26 ;
regblock2[2] = 254 ;
regblock2[3] = 67 ;
regblock2[4] = 251 ;
regblock2[5] = 250 ;
regblock2[6] = 170 ;
regblock2[7] = 58 ;
regblock2[8] = 251 ;
regblock2[9] = 41 ;
regblock2[10] = 209 ;
regblock2[11] = 230 ;
regblock2[12] = 5 ;
regblock2[13] = 60 ;
regblock2[14] = 124 ;
regblock2[15] = 148 ;
regblock2[16] = 117 ;
regblock2[17] = 216 ;
regblock2[18] = 190 ;
regblock2[19] = 97 ;
regblock2[20] = 137 ;
regblock2[21] = 249 ;
regblock2[22] = 92 ;
regblock2[23] = 187 ;
regblock2[24] = 168 ;
regblock2[25] = 153 ;
regblock2[26] = 15 ;
regblock2[27] = 149 ;
regblock2[28] = 177 ;
regblock2[29] = 235 ;
regblock2[30] = 241 ;
regblock2[31] = 179 ;
regblock2[32] = 5 ;
regblock2[33] = 239 ;
regblock2[34] = 247 ;
regblock2[35] = 0 ;
regblock2[36] = 233 ;
regblock2[37] = 161 ;
regblock2[38] = 58 ;
regblock2[39] = 229 ;
regblock2[40] = 202 ;
regblock2[41] = 11 ;
regblock2[42] = 203 ;
regblock2[43] = 208 ;
regblock2[44] = 72 ;
regblock2[45] = 71 ;
regblock2[46] = 100 ;
regblock2[47] = 189 ;
regblock2[48] = 31 ;
regblock2[49] = 35 ;
regblock2[50] = 30 ;
regblock2[51] = 168 ;
regblock2[52] = 28 ;
regblock2[53] = 123 ;
regblock2[54] = 100 ;
regblock2[55] = 197 ;
regblock2[56] = 20 ;
regblock2[57] = 115 ;
regblock2[58] = 90 ;
regblock2[59] = 197 ;
regblock2[60] = 94 ;
regblock2[61] = 75 ;
regblock2[62] = 121 ;
regblock2[63] = 99 ;
regblock2[64] = 59 ;
regblock2[65] = 112 ;
regblock2[66] = 100 ;
regblock2[67] = 36 ;
regblock2[68] = 17 ;
regblock2[69] = 158 ;
regblock2[70] = 9 ;
regblock2[71] = 220 ;
regblock2[72] = 170 ;
regblock2[73] = 212 ;
regblock2[74] = 172 ;
regblock2[75] = 242 ;
regblock2[76] = 27 ;
regblock2[77] = 16 ;
regblock2[78] = 175 ;
regblock2[79] = 59 ;
regblock2[80] = 51 ;
regblock2[81] = 205 ;
regblock2[82] = 227 ;
regblock2[83] = 80 ;
regblock2[84] = 72 ;
regblock2[85] = 71 ;
regblock2[86] = 21 ;
regblock2[87] = 92 ;
regblock2[88] = 187 ;
regblock2[89] = 111 ;
regblock2[90] = 34 ;
regblock2[91] = 25 ;
regblock2[92] = 186 ;
regblock2[93] = 155 ;
regblock2[94] = 125 ;
regblock2[95] = 245 ;

	end	
	// State registers
	integer state;
	integer next_state;
	
	//OUTPUT registers
	reg[`ALU_AMM_DATA_WITH - 1:0] amm_readdata_reg;
	reg 									amm_waitrequest_reg;
	reg[1:0] 							amm_response_reg;
		
	//Other
	reg[`ALU_AMM_ADDR_WITH - 1:0] address;
	reg[`ALU_AMM_ADDR_WITH - 1:0] relative_address;

	always @ (posedge clk)
	begin
		state <= next_state;
		
		if(rst_n == 0)
			state <= `RESET;
	end
	
	always @(*)
	begin
	amm_readdata_reg    = 0;
	amm_waitrequest_reg = 1;
	amm_response_reg 	 = 0;
	 
	case(state)
	`RESET: begin
		address = 0;
		next_state = `IDLE;
	end
	
	`IDLE: begin
		address = 0;
		if(amm_read == 1) begin
			address = amm_address;
			next_state = `CHECK_SIGNAL_STABLE;
		end
	end
	
	`CHECK_SIGNAL_STABLE: begin
		if(amm_read == 1 && amm_address == address)
			next_state = `CHECK_SIGNAL_STABLE + 1;
		else
			next_state = `IDLE;
	end
	`CHECK_SIGNAL_STABLE + 1:  begin
		if(amm_read == 1 && amm_address == address)
			next_state = `SEND_DATA;
		else
			next_state = `IDLE;
	
	end
	`SEND_DATA: begin
		amm_waitrequest_reg = 0;
			
			if (address >= `MEMORY_ADDRESS_SPACE0_START  &&  `MEMORY_ADDRESS_SPACE0_END >= address) begin
				amm_response_reg = 2'b00; // OK
				amm_readdata_reg = regblock0[address];
			end
			else
				if( address >= `MEMORY_ADDRESS_SPACE1_START && `MEMORY_ADDRESS_SPACE1_END >= address) begin
				relative_address = address - `MEMORY_ADDRESS_SPACE1_START;
				amm_response_reg = 2'b00; // OK
				amm_readdata_reg = regblock1[relative_address];
			
			end 
			else
				if(address >= `MEMORY_ADDRESS_SPACE2_START && `MEMORY_ADDRESS_SPACE2_END >= address)begin
				relative_address = address - `MEMORY_ADDRESS_SPACE2_START;
				amm_response_reg = 2'b00; // OK
				amm_readdata_reg= regblock2[relative_address];
			
			end			
			else begin
				amm_response_reg = 2'b11; // DECODE ERROR (unmapped register)
				amm_readdata_reg = 8'b0;  // Data is irelevant 
			end
		next_state = `IDLE;	
	end
	endcase
	end
	
	assign amm_readdata    = amm_readdata_reg;
	assign amm_waitrequest = amm_waitrequest_reg;
	assign amm_response 	  = amm_response_reg;
	
endmodule
