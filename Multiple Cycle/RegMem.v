`timescale 1ns / 1ps
module RegMem(
	input reset,
	input clock,
	input [4:0]readReg1,
	input [4:0]readReg2,
	input [4:0]writeReg,
	input [31:0]writeData,
	input regWrite,
	output reg[31:0]readData1,
	output reg[31:0]readData2
	);
	reg[31:0]regFile[31:0];
	always@(readReg1 or readReg2)
	begin
			readData1=regFile[readReg1];
			readData2=regFile[readReg2];
	end
	reg[15:0]idx;
	always@(negedge clock)
	begin
		if(regWrite==1)
		begin
			regFile[writeReg]=writeData;
		end
		if(reset==1)
		begin
			idx=0;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=4;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=8;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=12;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=16;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=20;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=24;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
			idx=28;
			regFile[idx]=0;regFile[idx+1]=0;regFile[idx+2]=0;regFile[idx+3]=0;
		end
	end
endmodule




