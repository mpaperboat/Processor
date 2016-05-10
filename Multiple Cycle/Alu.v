`timescale 1ns/1ps
module Alu(
	input [31:0]input1,
	input [31:0]input2,
	input [3:0] aluCtr,
	output reg zero,
	output reg [31:0]aluRes
	);
	always@(input1 or input2 or aluCtr)
	begin
		if(aluCtr==4'b0000)
			aluRes=input1&input2;
		if(aluCtr==4'b0001)
			aluRes=input1|input2;
		if(aluCtr==4'b0010)
			aluRes=input1+input2;
		if(aluCtr==4'b0110)
			aluRes=input1-input2;
		if(aluCtr==4'b0111)
		begin
			aluRes=0;
			if(input1<input2)
				aluRes=1;
		end
		if(aluCtr==4'b1100)
			aluRes=~(input1|input2);
		zero=0;
		if(aluRes==0)
			zero=1;
	end
endmodule