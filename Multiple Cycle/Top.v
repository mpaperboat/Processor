`timescale 1ns / 1ps
module Top(
		input clock,
		input reset
	);
	wire[31:0]INST;
	reg[31:0]PC;
	InstMem instMem(
		.readData(INST),
		.address(PC));
	wire[31:0]ADD1_OUT;
	Add add1(
		.input1(4),
		.input2(PC),
		.aluRes(ADD1_OUT));
	wire[31:0]SIGNEXT_OUT;
	SignExt signExt(
		.in(INST[15:0]),
		.out(SIGNEXT_OUT));
	wire[31:0]SHL22_OUT;
	ShL2 shL22(
		.in(SIGNEXT_OUT),
		.out(SHL22_OUT));
	wire[31:0]ADD2_OUT;
	Add add2(
		.input1(SHL22_OUT),
		.input2(ADD1_OUT),
		.aluRes(ADD2_OUT));
	wire REG_DST;
	wire ALU_SRC;
	wire MEM_TO_REG;
	wire REG_WRITE;
	wire MEM_READ;
	wire MEM_WRITE;
	wire BRANCH;
	wire[1:0]ALU_OP;
	wire JUMP;
	Ctr ctr(
		.opCode(INST[31:26]),
		.regDst(REG_DST),
		.aluSrc(ALU_SRC),
		.memToReg(MEM_TO_REG),
		.regWrite(REG_WRITE),
		.memRead(MEM_READ),
		.memWrite(MEM_WRITE),
		.branch(BRANCH),
		.aluOp(ALU_OP),
		.jump(JUMP));
	wire[31:0]MUX1_OUT;
	Mux mux1(
		.in0({27'b000000000000000000000000000,INST[20:16]}),
		.in1({27'b000000000000000000000000000,INST[15:11]}),
		.sel(REG_DST),
		.out(MUX1_OUT));
	wire[31:0]MUX5_OUT;
	wire[31:0]REGMEM_OUT1;
	wire[31:0]REGMEM_OUT2;
	RegMem regMem(
		.clock(clock),
		.reset(reset),
		.readReg1(INST[25:21]),
		.readReg2(INST[20:16]),
		.writeReg(MUX1_OUT),
		.writeData(MUX5_OUT),
		.regWrite(REG_WRITE),
		.readData1(REGMEM_OUT1),
		.readData2(REGMEM_OUT2));
	wire[31:0]MUX2_OUT;
	Mux mux2(
		.in0(REGMEM_OUT2),
		.in1(SIGNEXT_OUT),
		.sel(ALU_SRC),
		.out(MUX2_OUT));
	wire[3:0]ALUCTR_OUT;
	AluCtr aluCtr(
		.aluOp(ALU_OP),
		.funct(INST[5:0]),
		.aluCtr(ALUCTR_OUT));
	wire ALU_ZERO;
	wire[31:0]ALU_OUT;
	Alu alu(
		.input1(REGMEM_OUT1),
		.input2(MUX2_OUT),
		.aluCtr(ALUCTR_OUT),
		.aluRes(ALU_OUT),
		.zero(ALU_ZERO));
	wire AND_OUT;
	And and1(
		.in1(BRANCH),
		.in2(ALU_ZERO),
		.out(AND_OUT));
	wire[31:0]MUX3_OUT;
	Mux mux3(
		.in0(ADD1_OUT),
		.in1(ADD2_OUT),
		.sel(AND_OUT),
		.out(MUX3_OUT));
	wire[31:0]MUX4_OUT;
	wire[31:0]SHL21_OUT;
	ShL2 shL21(
		.in({6'b000000,INST[25:0]}),
		.out(SHL21_OUT));
	wire[31:0]JUMP_ADDR;
	assign JUMP_ADDR={INST[31:28],SHL21_OUT[27:0]};
	Mux mux4(
		.in0(MUX3_OUT),
		.in1(JUMP_ADDR),
		.sel(JUMP),
		.out(MUX4_OUT));
	always@(posedge clock)
	begin
		if(reset==0)
		begin
			PC=MUX4_OUT;
		end
		else
		begin
			PC=0;
		end
	end
	wire[31:0]DATAMEM_OUT;
	DataMem dataMem(
		.clock(clock),
		.memRead(MEM_READ),
		.memWrite(MEM_WRITE),
		.writeData(REGMEM_OUT2),
		.readData(DATAMEM_OUT),
		.address(ALU_OUT));
	Mux mux5(
		.in0(ALU_OUT),
		.in1(DATAMEM_OUT),
		.sel(MEM_TO_REG),
		.out(MUX5_OUT));
endmodule
