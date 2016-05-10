`timescale 1ns/1ps
module AluCtr(
	input [1:0]aluOp,
	input [5:0]funct,
	output reg[3:0]aluCtr
	);
	always@(aluOp or funct)
	begin
		if(aluOp==2'b00)
		begin
			aluCtr=4'b0010;
		end
		else if(aluOp[0]==1)
		begin
			aluCtr=4'b0110;
		end
		else if(funct[3:0]==2)
		begin
			aluCtr=4'b0110;
		end
		else if(funct[3:0]==4)
		begin
			aluCtr=4'b0000;
		end
		else if(funct[3:0]==5)
		begin
			aluCtr=4'b0001;
		end
		else if(funct[3:0]==10)
		begin
			aluCtr=4'b0111;
		end
		else if(funct[3:0]==0)
		begin
			aluCtr=4'b0010;
		end
		else
		begin
			aluCtr=4'b0000;
		end
	end
endmodule