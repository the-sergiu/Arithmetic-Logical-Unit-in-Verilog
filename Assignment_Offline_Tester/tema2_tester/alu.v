// DESIGN SPECIFIC
`define ALU_BUS_WITH 		16
`define ALU_AMM_ADDR_WITH 	8
`define ALU_AMM_DATA_WITH	8   

/**

== Input packets ==

Header beat
+-----------------+--------------+---------------+------------------+
| reserved[15:12] | opcode[11:8] | reserved[7:6] | nof_operands[5:0]|
+-----------------+--------------+---------------+------------------+

Payload beat
+-----------------+----------+----------------------+
| reserved[15:10] | mod[9:8] | operands/address[7:0]|
+-----------------+----------+----------------------+

== Output packets ==

Header beat

+----------------+----------+-------------+
| reserved[15:5] | error[4] | opcode[3:0] |
+----------------+----------+-------------+

Payload beat

+-----------------+--------------+
| reserved[15:12] | result[11:0] |
+-----------------+--------------+

*/

module alu(
	 // Output interface
    output reg[`ALU_BUS_WITH - 1:0] data_out,
	 output reg							  valid_out,
	 output reg							  cmd_out,

	 //Input interface
	 input [`ALU_BUS_WITH - 1:0] data_in,
	 input 							  valid_in,
	 input 							  cmd_in,
	 
	 // AMM interface
	 output reg											amm_read,
	 output reg[`ALU_AMM_ADDR_WITH - 1:0] 		amm_address,
	 input [`ALU_AMM_DATA_WITH - 1:0] 		amm_readdata,
	 input 											amm_waitrequest,
	 input[1:0] 							 		amm_response,
	 
	 
	 //clock and reset interface
	 input clk,
	 input rst_n
    );
	
	// TODO: Implement Not-so-simple ALU
	
	//DEFINE OPCODE
	`define ADD 					0
	`define AND						1
	`define OR  					2
	`define XOR 					3
	`define NOT 					4
	`define INC 					5
	`define DEC 					6
	`define NEG 					7 
	`define SHR                8
	`define SHL                9
	
	//DEFINE STATES
	`define reset					'h00
	`define header_in				'h10
	`define payload_in			'h20
	`define payload_decode		'h30
	`define payload_im			'h40
	`define address_amm			'h50
	`define data_amm				'h60
	`define header_out			'h70
	`define payload_out			'h80
	
	reg[9:0] state;
	reg[9:0] state_next;
	reg[3:0] opcode;
	reg[5:0] nof_operands;
	reg[1:0] mod;
	reg[7:0] operand;
	reg[6:0] contor; //tinem cont de cate ori apelam o stare, in functie de numarul de operanzi (ex. suma)
	reg[11:0] result;
	reg[3:0] counter_handshake;
	reg[1:0] contor_shift;
	reg eroare;
	
	reg[7:0] buffer;
	
	reg [9:0] modop[63:0];
	integer i;
	reg test;
	reg test2;
	
	reg[6:0] MEMORY_COUNTER;
	reg[6:0] MEMORY_COUNTER_NEXT;
	reg[6:0] aux_shift;
	
	//FSM - sequential part
	always @(posedge clk) begin
			MEMORY_COUNTER <= MEMORY_COUNTER_NEXT;
			state <= state_next;
			
			
		 if(!rst_n) begin
			state <= `reset; 
		 end
	end
	
	//FSM - combinational part
	always @(*) begin

	valid_out = 0;
	cmd_out = 0;
	data_out = 0;
	
	case(state)
		`reset: begin
			eroare = 0;
			mod = 0;
			opcode = 0;
			nof_operands = 0;
			operand = 0;
			contor = 0;
			contor_shift = 0;
			buffer = 0;
			result = 0;
			counter_handshake = 0;
			amm_read = 0;
			amm_address = 0;
			test = 0;
			test2 = 0;
			
			MEMORY_COUNTER_NEXT = 0;
			aux_shift = 0;
			
			state_next = `header_in;		
		end
		
		`header_in: begin
			if(valid_in && cmd_in) begin
				opcode = data_in[11:8];
				nof_operands = data_in[5:0];
				
				state_next = `payload_in;
			end
		end
		
		`payload_in: begin
			if(!nof_operands) begin //EROARE
					eroare = 1;
					state_next = `header_out;
			end
			//ERORI NOF_OPERANDS LEGAT DE OPCODE
			case(opcode)
			`NOT, `INC, `DEC, `NEG: begin
				if(nof_operands != 1) begin
					eroare = 1;
					state_next = `header_out;
				end
			end
			`SHR, `SHL: begin
				if(nof_operands != 2) begin
					eroare = 1;
					state_next = `header_out;
				end
			end
			endcase
			
			if(valid_in) begin
				if(MEMORY_COUNTER_NEXT == MEMORY_COUNTER) begin
					test2 = 0;
				end
				if(test2==0) begin
					MEMORY_COUNTER_NEXT = MEMORY_COUNTER + 1;
					mod = data_in[9:8];
					operand = data_in[7:0];
					modop[MEMORY_COUNTER_NEXT] = {mod,operand};
					test2 = 1;
				end
				
				if(MEMORY_COUNTER_NEXT == nof_operands) begin
					MEMORY_COUNTER_NEXT = 0;
					state_next = `payload_decode;
				end
				else begin
					state_next = `payload_in;
				end
			end	
		end
		
		`payload_decode: begin
		
			test2 = 0;
			//se ramane in aceasta stare mai multi cicli de ceas, facand contorul sa incrementeze gresit
			//astfel, daca s-a intrat in aceasta stare avem o variabila de verificare
			//este setata la loc doar din afara acestei stari, deci se poate incrementa contorul doar o data
			if(test == 0) begin 
				contor = contor + 1;
				mod = modop[contor][9:8];
				operand = modop[contor][7:0];
				test = 1;
			end
			
			case(mod) 
				00: state_next = `payload_im;
				01: state_next = `address_amm;
				default: begin
					eroare = 1;
					state_next = `header_out;
				end
			endcase 
		end
		
		`payload_im: begin
			test = 0;
			test2 = 0;
			case(opcode)
				`ADD: begin
					if(mod == 00) begin
						result = result + operand;				
						if(contor < nof_operands) state_next = `payload_decode;
						else if(contor == nof_operands) state_next = `header_out;
					end
				end
				
				`AND: begin
					if(mod == 00) begin
						result = result & operand;				
						if(contor < nof_operands) state_next = `payload_decode;
						else if(contor == nof_operands) state_next = `header_out;
					end
				end
				
				`OR: begin
					if(mod == 00) begin
						result = result | operand;				
						if(contor < nof_operands) state_next = `payload_decode;
						else if(contor == nof_operands) state_next = `header_out;
					end
				end
				
				`XOR: begin
					if(mod == 00) begin
						result = result ^ operand;				
						if(contor < nof_operands) state_next = `payload_decode;
						else if(contor == nof_operands) state_next = `header_out;
					end
				end
				
				`NOT: begin
						result = (~operand);
						state_next = `header_out;
				end
				
				`INC: begin
						result = operand + 1;
						state_next = `header_out;
				end
				
				`DEC: begin
					if(mod == 00) begin
						result = operand - 1;
						state_next = `header_out;
					end
				end
				
				`NEG: begin
					result = (~operand) + 1;
					state_next = `header_out;
				end
				
				`SHR: begin
					contor_shift = contor_shift + 1;
					if(contor_shift == 1) begin
						buffer = operand;
						state_next = `payload_decode;
					end
					else if(contor_shift == 2) begin
						result = (buffer >> operand);
						contor_shift = 0;
						state_next = `header_out;
					end
					else begin
						eroare = 1;
						state_next = `header_out;
					end
				end
				
				`SHL: begin
					contor_shift = contor_shift + 1;
					if(contor_shift == 1) begin
						buffer = operand;
						state_next = `payload_decode;
					end
					else if(contor_shift == 2) begin
						result = (buffer << operand);
						contor_shift = 0;
						state_next = `header_out;
					end
					else begin
						eroare = 1;
						state_next = `header_out;
					end
				end
				
				default: begin
					eroare = 1;
					state_next = `header_out;
				end
					
			endcase
		end
		
		`address_amm: begin
			amm_read = 1;
			amm_address = operand; //AMM ADDRESS ????
			counter_handshake = counter_handshake + 'h1; //incrementam counter pt handshake
			test = 0;
			
			if(amm_waitrequest)
				if(counter_handshake < 'h3) state_next = `address_amm; //daca e mai mic ca 3, chemam iar starea
				else if (counter_handshake == 'h3) begin
					counter_handshake = 0;
					state_next = `data_amm; //daca e 3, putem sa trecem la citirea datelor pe amm
				end
				else begin 
					eroare = 1;//EROARE BAD
					state_next = `header_out;//next state header out
				end
			else if(amm_waitrequest == 0 && counter_handshake == 3) begin
					state_next = `data_amm;
			end
			
		end
		
		`data_amm: begin
			if(amm_waitrequest == 0) begin
				case(amm_response)
					2'b00: begin
						case(opcode)
							`ADD: begin
								result = result + amm_readdata; 
								if(contor < nof_operands) state_next = `payload_decode;
								else if(contor == nof_operands) state_next = `header_out;
							end
							
							`AND: begin
								result = result & amm_readdata; 
								if(contor < nof_operands) state_next = `payload_decode;
								else if(contor == nof_operands) state_next = `header_out;
							end
							
							`OR: begin
								result = result | amm_readdata; 
								if(contor < nof_operands) state_next = `payload_decode;
								else if(contor == nof_operands) state_next = `header_out;
							end
							
							`XOR: begin
								result = result ^ amm_readdata; 
								if(contor < nof_operands) state_next = `payload_decode;
								else if(contor == nof_operands) state_next = `header_out;
							end 
							
							`NOT: begin
								result = (~amm_readdata);
								state_next = `header_out;
							end
							
							`INC: begin
								result = amm_readdata + 1;
								state_next = `header_out;
							end
							
							`DEC: begin
								result = amm_readdata - 1;
								state_next = `header_out;
							end
							
							`NEG: begin
								result = (~amm_readdata) + 1;
								state_next = `header_out;
							end
							
							`SHR: begin
								contor_shift = contor_shift + 1;
								if(contor_shift == 1) begin
									buffer = amm_readdata;
									state_next = `payload_decode;
								end
								else if(contor_shift == 2) begin
									result = (buffer >> amm_readdata);
									contor_shift = 0;
									state_next = `header_out;
								end
								else begin
									eroare = 1;
									state_next = `header_out;
								end				
							end
							
							`SHL: begin
								contor_shift = contor_shift + 1;
								if(contor_shift == 1) begin
									buffer = amm_readdata;
									state_next = `payload_decode;
								end
								else if(contor_shift == 2) begin
									result = (buffer << amm_readdata);
									contor_shift = 0;
									state_next = `header_out;
								end
								else begin
									eroare = 1;
									state_next = `header_out;
								end
							end
							
							default:	begin
								eroare = 1;
								state_next = `header_out;
							end
						endcase
					end
					
					default: begin
						eroare = 1;
						state_next = `header_out;
					end
				endcase
			end
		end
		
		`header_out: begin
			valid_out = 1;
			cmd_out = 1;
			data_out[4] = eroare;
			data_out[3:0] = opcode;
			
			state_next = `payload_out;
		end
		
		`payload_out: begin
			valid_out = 1;
			
			case(opcode)
			`NOT, `SHL, `NEG: begin
				result = result[7:0];
			end
			default: begin end
			endcase
			
			if(eroare) begin
				data_out = 16'h0BAD;
			end
			else data_out = result;
				
			state_next = `reset;	
		end
	endcase
	
	end
	
endmodule
