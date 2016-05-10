`timescale 1ns / 1ps
module Add(
	input[31:0]input1,
	input[31:0]input2,
	output reg[31:0]aluRes
   );
	always@(input1 or input2)
		aluRes=input1+input2;
endmodule
