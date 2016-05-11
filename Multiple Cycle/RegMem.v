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
	output reg[31:0]readData2,
	input IDEX_REG_WRITE,
	input[4:0]IDEX_REG_DES,
	input EXMEM_REG_WRITE,
	input[4:0]EXMEM_REG_DES,
	input[31:0]EXMEM_DATA,
	input[31:0]IDEX_DATA,
	input[31:0]IFID_INST,
	input IDEX_MEM_TO_REG,
	output reg regok
	);
	reg[31:0]regFile[31:0];
	always@(*)
	begin
			readData1=regFile[readReg1];
			readData2=regFile[readReg2];
			if(EXMEM_REG_WRITE&&EXMEM_REG_DES==readReg1)
				readData1=EXMEM_DATA;
			if(EXMEM_REG_WRITE&&EXMEM_REG_DES==readReg2)
				readData2=EXMEM_DATA;
			regok=1;
			if(IDEX_REG_WRITE&&IDEX_REG_DES==readReg1)
			begin
				readData1=IDEX_DATA;
				if(IDEX_MEM_TO_REG&&IFID_INST[31:26]!=6'b000100)
					regok=0;
			end
			if(IDEX_REG_WRITE&&IDEX_REG_DES==readReg2)
			begin
				readData2=IDEX_DATA;
				if(IDEX_MEM_TO_REG&&(IFID_INST[31:26]==6'b000000||IFID_INST[31:26]==6'b101011))
					regok=0;
			end
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




