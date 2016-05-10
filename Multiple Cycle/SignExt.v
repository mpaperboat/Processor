`timescale 1ns/1ps
module SignExt(
	input [15:0]in,
	output reg[31:0]out
	);
	always@(*)
	begin
		if(in[15]==0)
			out=in;
		else
		begin
			out=in;
			out[31:16]=16'b1111111111111111;
		end
	end
endmodule