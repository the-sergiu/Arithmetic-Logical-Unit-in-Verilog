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
	
	reg[9:0] state; //reg pentru schimbarea starii in bloc secvential
	reg[9:0] state_next;//reg pentru schimbarea starii in bloc secvential, la o stare noua
	
	reg[6:0] MEMORY_COUNTER; //counter pt citire payload, utilizat si in bloc secvential
	reg[6:0] MEMORY_COUNTER_NEXT; //counter pt citire payload, utilizat si in bloc secvential
	
	reg[3:0] opcode; //codul operatiei
	reg[5:0] nof_operands; //nr de operanzi
	reg[1:0] mod;
	reg[7:0] operand; //aici stocam operand
	reg[6:0] contor; //tinem cont de cate ori apelam o stare, in functie de numarul de operanzi (ex. suma)
	reg[11:0] result; //aici stocam rezultatul final
	
	reg[3:0] counter_handshake; //contor pentru handshake cu memoria
	reg[1:0] contor_shift; //contor pentru SHL, SHR, sa stim care e primul operand si care al doilea
	reg eroare; //reg care retine daca programul urmeaza sa returneze o eroare
	reg[7:0] buffer; //reg folosit exclusiv pt SHL, SHR; stocam primul operand in el
	reg [9:0] modop[63:0]; //vector de reg folosit pt stocarea tuturor operanzilor
	reg test; //variabila de ajustare contor
	reg test2; //variabila de ajustare contor
	
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
		`reset: begin //initializam variabilele ce vor fi folosite intre stari
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
			
			state_next = `header_in;		
		end
		
		`header_in: begin //stare de citit header in, daca bitii necesari sunt asertati
			if(valid_in && cmd_in) begin
				opcode = data_in[11:8];
				nof_operands = data_in[5:0];
				
				state_next = `payload_in;
			end
		end
		
		`payload_in: begin //citim payload-uri, verificam pt erori, stocam in vector
			if(!nof_operands) begin //EROARE NR OPERANZI
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
			//daca bitul valid_in e asertat, putem sa citim
			if(valid_in) begin
				if(MEMORY_COUNTER_NEXT == MEMORY_COUNTER) begin //ajustare contor
					test2 = 0;
				end
				if(test2==0) begin //ajustare contor cu variabila
					MEMORY_COUNTER_NEXT = MEMORY_COUNTER + 1;
					mod = data_in[9:8];
					operand = data_in[7:0];
					modop[MEMORY_COUNTER_NEXT] = {mod,operand};
					test2 = 1;
				end
				//daca am citit toti operanzii, putem sa continuam
				if(MEMORY_COUNTER_NEXT == nof_operands) begin
					MEMORY_COUNTER_NEXT = 0;
					state_next = `payload_decode;
				end
				else begin
					state_next = `payload_in;
				end
			end	
		end
		
		`payload_decode: begin //parcurgem vectorul si ajungem in stari bazat pe modul de adresare
			test2 = 0;  //variabila de ajustare contor pentru scriere (stare payload_in)
			//se ramane in aceasta stare mai multi cicli de ceas, facand contorul sa incrementeze gresit
			//astfel, daca s-a intrat in aceasta stare avem o variabila de verificare
			//este setata la loc doar din afara acestei stari, deci se poate incrementa contorul doar o data
			if(test == 0) begin 
				contor = contor + 1;
				mod = modop[contor][9:8];
				operand = modop[contor][7:0];
				test = 1;
			end
			//parcurgem vectorul; in functie de tipul de adresare, mergem in stari separate
			case(mod) 
				00: state_next = `payload_im; //adresare imediata
				01: state_next = `address_amm;//adresare indirecta
				default: begin
					eroare = 1;
					state_next = `header_out;
				end
			endcase 
		end
		//stare pentru adresare imediata, contine tipurile de operatii si implementare
		`payload_im: begin 
			test = 0;
			test2 = 0; //variabile de ajustare contor stari anterioare
			
			//contor specifica indexul vectorului. daca nu am parcurs tot vectorul, ne intoarcem si continuam
			//daca am parcurs tot vectorul, mergem in starea header_out de finalizare
			case(opcode) //in functie de opcode, efectuam operatia
				`ADD: begin
					result = result + operand;				
					if(contor < nof_operands) state_next = `payload_decode;
					else if(contor == nof_operands) state_next = `header_out;
				end
				
				`AND: begin
					result = result & operand;				
					if(contor < nof_operands) state_next = `payload_decode;
					else if(contor == nof_operands) state_next = `header_out;
				end
				
				`OR: begin
					result = result | operand;				
					if(contor < nof_operands) state_next = `payload_decode;
					else if(contor == nof_operands) state_next = `header_out;
				end
				
				`XOR: begin
					result = result ^ operand;				
					if(contor < nof_operands) state_next = `payload_decode;
					else if(contor == nof_operands) state_next = `header_out;
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
					result = operand - 1;
					state_next = `header_out;
				end
				
				`NEG: begin
					result = (~operand) + 1;
					state_next = `header_out;
				end
				
				`SHR: begin //primul operand e stocat. al doilea il shifteaza pe primul
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
				
				`SHL: begin //primul operand e stocat. al doilea il shifteaza pe primul
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
		
		//stare de adresare indirecta. aici se stabileste handshake-ul
		`address_amm: begin
			amm_read = 1;
			amm_address = operand;
			counter_handshake = counter_handshake + 'h1; //incrementam counter pt handshake
			test = 0;
			
			if(amm_waitrequest)
				if(counter_handshake < 'h3) state_next = `address_amm; //daca e mai mic ca 3, chemam iar starea
				else if (counter_handshake == 'h3) begin
					counter_handshake = 0;
					state_next = `data_amm; //daca s-a stabilit legatura, putem continua in primirea datelor
				end
				else begin 
					eroare = 1;//EROARE BAD
					state_next = `header_out;
				end
			else if(amm_waitrequest == 0 && counter_handshake == 3) begin
			//daca s-a stabilit legatura si bitul amm_waitrequest s-a deasertat, mergem mai departe
					state_next = `data_amm;
			end
		end
		
		//stare de primit date de la memorie. dupa ce e primit operandul, efectuam operatia necesara
		//verificam daca a fost ultimul operand sau daca mai sunt operatii de efectuat.
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
							
							`SHR: begin //primul operand e stocat. al doilea il shifteaza pe primul
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
							
							`SHL: begin //primul operand e stocat. al doilea il shifteaza pe primul
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
		
		//stare de trimis header_out, cu bitii necesari
		`header_out: begin
			valid_out = 1;
			cmd_out = 1;
			data_out[4] = eroare;
			data_out[3:0] = opcode;
			
			state_next = `payload_out;
		end
		
		//stare pentru payload final. 
		`payload_out: begin
			valid_out = 1;
			//trunchiam dupa caz
			case(opcode)
				`NOT, `SHL, `NEG: begin
					result = result[7:0];
				end
				default: begin end
			endcase
			//daca bitul de eroare a fost asertat de-a lungul programului, punem 0xBAD
			if(eroare) begin
				data_out = 16'h0BAD;
			end
			else data_out = result;
				
			state_next = `reset;	
		end
		
	endcase
	end
	
endmodule
