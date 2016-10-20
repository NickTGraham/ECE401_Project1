// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS_ID.h"          // For This
#include "VMIPS__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS_ID) {
    VL_CELL (RegFile, VMIPS_RegFile);
    // Reset internal values
    // Reset structure values
    __PVT__CLK = VL_RAND_RESET_I(1);
    __PVT__RESET = VL_RAND_RESET_I(1);
    __PVT__Instr1_IN = VL_RAND_RESET_I(32);
    __PVT__Instr_PC_IN = VL_RAND_RESET_I(32);
    __PVT__Instr_PC_Plus4_IN = VL_RAND_RESET_I(32);
    __PVT__WriteRegister1_IN = VL_RAND_RESET_I(5);
    __PVT__WriteData1_IN = VL_RAND_RESET_I(32);
    __PVT__RegWrite1_IN = VL_RAND_RESET_I(1);
    __PVT__Alt_PC = VL_RAND_RESET_I(32);
    __PVT__Request_Alt_PC = VL_RAND_RESET_I(1);
    __PVT__Instr1_OUT = VL_RAND_RESET_I(32);
    __PVT__Instr1_PC_OUT = VL_RAND_RESET_I(32);
    __PVT__OperandA1_OUT = VL_RAND_RESET_I(32);
    __PVT__OperandB1_OUT = VL_RAND_RESET_I(32);
    __PVT__ReadRegisterA1_OUT = VL_RAND_RESET_I(5);
    __PVT__ReadRegisterB1_OUT = VL_RAND_RESET_I(5);
    __PVT__WriteRegister1_OUT = VL_RAND_RESET_I(5);
    __PVT__MemWriteData1_OUT = VL_RAND_RESET_I(32);
    __PVT__RegWrite1_OUT = VL_RAND_RESET_I(1);
    __PVT__ALU_Control1_OUT = VL_RAND_RESET_I(6);
    __PVT__MemRead1_OUT = VL_RAND_RESET_I(1);
    __PVT__MemWrite1_OUT = VL_RAND_RESET_I(1);
    __PVT__ShiftAmount1_OUT = VL_RAND_RESET_I(5);
    __PVT__Branch_JR_select_A_FU = VL_RAND_RESET_I(2);
    __PVT__Branch_JR_select_B_FU = VL_RAND_RESET_I(2);
    __PVT__reg_write = VL_RAND_RESET_I(1);
    __PVT__link_out = VL_RAND_RESET_I(1);
    __PVT__branch_out = VL_RAND_RESET_I(1);
    __PVT__jump_out = VL_RAND_RESET_I(1);
    __PVT__jump_reg_out = VL_RAND_RESET_I(1);
    __PVT__use_rd = VL_RAND_RESET_I(1);
    __PVT__Fwd_ALU_Result = VL_RAND_RESET_I(32);
    __PVT__Fwd_Mem_result = VL_RAND_RESET_I(32);
    __PVT__Fwd_Wb_result = VL_RAND_RESET_I(32);
    __PVT__SYS = VL_RAND_RESET_I(1);
    __PVT__WANT_FREEZE = VL_RAND_RESET_I(1);
    __PVT__ALU_control1 = VL_RAND_RESET_I(6);
    __PVT__link1 = VL_RAND_RESET_I(1);
    __PVT__RegDst1 = VL_RAND_RESET_I(1);
    __PVT__jump1 = VL_RAND_RESET_I(1);
    __PVT__branch1 = VL_RAND_RESET_I(1);
    __PVT__MemRead1 = VL_RAND_RESET_I(1);
    __PVT__MemWrite1 = VL_RAND_RESET_I(1);
    __PVT__ALUSrc1 = VL_RAND_RESET_I(1);
    __PVT__RegWrite1 = VL_RAND_RESET_I(1);
    __PVT__jumpRegister_Flag1 = VL_RAND_RESET_I(1);
    __PVT__sign_or_zero_Flag1 = VL_RAND_RESET_I(1);
    __PVT__syscal1 = VL_RAND_RESET_I(1);
    __PVT__Request_Alt_PC1 = VL_RAND_RESET_I(1);
    __PVT__Alt_PC1 = VL_RAND_RESET_I(32);
    __PVT__RegA1 = VL_RAND_RESET_I(5);
    __PVT__RegB1 = VL_RAND_RESET_I(5);
    __PVT__WriteRegister1 = VL_RAND_RESET_I(5);
    __PVT__OpA1 = VL_RAND_RESET_I(32);
    __PVT__OpB1 = VL_RAND_RESET_I(32);
    __PVT__rtval1 = VL_RAND_RESET_I(32);
    __PVT__syscall_bubble_counter = VL_RAND_RESET_I(3);
    __PVT__rsval_jump1 = VL_RAND_RESET_I(32);
    __PVT__NIA1__DOT__jumpDestination_immediate = VL_RAND_RESET_I(32);
    __PVT__NIA1__DOT__branchDestination_immediate = VL_RAND_RESET_I(32);
    __Vdly__Request_Alt_PC = VL_RAND_RESET_I(1);
    __Vdly__syscall_bubble_counter = VL_RAND_RESET_I(3);
    __Vdly__Alt_PC = VL_RAND_RESET_I(32);
}

void VMIPS_ID::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS_ID::~VMIPS_ID() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS_ID::_sequent__TOP__v__ID__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_sequent__TOP__v__ID__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter 
	= vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter;
    vlSymsp->TOP__v__ID.__Vdly__Request_Alt_PC = vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC;
    vlSymsp->TOP__v__ID.__Vdly__Alt_PC = vlSymsp->TOP__v__ID.__PVT__Alt_PC;
}

VL_INLINE_OPT void VMIPS_ID::_sequent__TOP__v__ID__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_sequent__TOP__v__ID__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//ID.v:213
    if (vlTOPp->RESET) {
	vlSymsp->TOP__v__ID.__Vdly__Request_Alt_PC 
	    = vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC1;
	vlSymsp->TOP__v__ID.__PVT__ReadRegisterA1_OUT 
	    = vlSymsp->TOP__v__ID.__PVT__RegA1;
	vlSymsp->TOP__v__ID.__PVT__ReadRegisterB1_OUT 
	    = vlSymsp->TOP__v__ID.__PVT__RegB1;
	if ((((5U == (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)) 
	      | (4U == (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))) 
	     | (3U == (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)))) {
	    vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter 
		= (7U & ((IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter) 
			 - (IData)(1U)));
	} else {
	    if ((2U == (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))) {
		vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter 
		    = (7U & ((IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter) 
			     - (IData)(1U)));
		vlSymsp->TOP__v__ID.__PVT__SYS = ((0x28U 
						   != (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_control1)) 
						  & (0x36U 
						     != (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_control1)));
	    } else {
		if ((1U == (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))) {
		    vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter 
			= (7U & ((IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter) 
				 - (IData)(1U)));
		    vlSymsp->TOP__v__ID.__PVT__SYS = 0U;
		}
	    }
	}
	if (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
	     & (0U == (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)))) {
	    vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter = 4U;
	}
	if (((((((8U == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			  << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))) 
		 | (0xdU == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			      << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)))) 
		| (0xcU == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			     << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)))) 
	       | (0xbU == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			    << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)))) 
	      | (9U == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			 << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter)))) 
	     | (1U == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			<< 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))))) {
	    vlSymsp->TOP__v__ID.__PVT__Instr1_OUT = 
		((0xcU == vlSymsp->TOP__v.__PVT__Instr1_IFID)
		  ? vlSymsp->TOP__v.__PVT__Instr1_IFID
		  : 0U);
	    vlSymsp->TOP__v__ID.__PVT__OperandA1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__OperandB1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__ReadRegisterA1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__ReadRegisterB1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__WriteRegister1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__MemWriteData1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__RegWrite1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT 
		= (0x3fU & ((0xcU == vlSymsp->TOP__v.__PVT__Instr1_IFID)
			     ? (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_control1)
			     : 0U));
	    vlSymsp->TOP__v__ID.__PVT__MemRead1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__MemWrite1_OUT = 0U;
	    vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT = 0U;
	} else {
	    if (((0xaU == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			    << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))) 
		 | (0U == (((IData)(vlSymsp->TOP__v__ID.__PVT__syscal1) 
			    << 3U) | (IData)(vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter))))) {
		vlSymsp->TOP__v__ID.__PVT__Instr1_OUT 
		    = vlSymsp->TOP__v.__PVT__Instr1_IFID;
		vlSymsp->TOP__v__ID.__PVT__OperandA1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__OpA1;
		vlSymsp->TOP__v__ID.__PVT__OperandB1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__OpB1;
		vlSymsp->TOP__v__ID.__PVT__ReadRegisterA1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__RegA1;
		vlSymsp->TOP__v__ID.__PVT__ReadRegisterB1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__RegB1;
		vlSymsp->TOP__v__ID.__PVT__WriteRegister1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__WriteRegister1;
		vlSymsp->TOP__v__ID.__PVT__MemWriteData1_OUT 
		    = vlSymsp->TOP__v__ID__RegFile.__PVT__DataC1;
		vlSymsp->TOP__v__ID.__PVT__RegWrite1_OUT 
		    = ((0U != (IData)(vlSymsp->TOP__v__ID.__PVT__WriteRegister1)) 
		       & (IData)(vlSymsp->TOP__v__ID.__PVT__RegWrite1));
		vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__ALU_control1;
		vlSymsp->TOP__v__ID.__PVT__MemRead1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__MemRead1;
		vlSymsp->TOP__v__ID.__PVT__MemWrite1_OUT 
		    = vlSymsp->TOP__v__ID.__PVT__MemWrite1;
		vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT 
		    = (0x1fU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
				>> 6U));
		vlSymsp->TOP__v__ID.__PVT__Instr1_PC_OUT 
		    = vlSymsp->TOP__v.__PVT__Instr_PC_IFID;
	    }
	}
	VL_WRITEF("ID1:Instr=%x,Instr_PC=%x,Req_Alt_PC=%1u:Alt_PC=%x;SYS=%1u(%1u);  REAL Alt_PC=%x\n",
		  32,vlSymsp->TOP__v.__PVT__Instr1_IFID,
		  32,vlSymsp->TOP__v.__PVT__Instr_PC_IFID,
		  1,(IData)(vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC1),
		  32,vlSymsp->TOP__v__ID.__PVT__Alt_PC1,
		  1,(IData)(vlSymsp->TOP__v__ID.__PVT__syscal1),
		  3,vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter,
		  32,vlSymsp->TOP__v__ID.__PVT__Alt_PC);
	fflush (stdout);
	vlSymsp->TOP__v__ID.__Vdly__Alt_PC = vlSymsp->TOP__v__ID.__PVT__Alt_PC1;
    } else {
	VL_WRITEF("ID:RESET\n");
	fflush (stdout);
	vlSymsp->TOP__v__ID.__Vdly__Alt_PC = 0U;
	vlSymsp->TOP__v__ID.__Vdly__Request_Alt_PC = 0U;
	vlSymsp->TOP__v__ID.__PVT__Instr1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__OperandA1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__OperandB1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__ReadRegisterA1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__ReadRegisterB1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__WriteRegister1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__MemWriteData1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__RegWrite1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__MemRead1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__MemWrite1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__Instr1_PC_OUT = 0U;
	vlSymsp->TOP__v__ID.__PVT__SYS = 0U;
	vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter = 0U;
    }
    vlSymsp->TOP__v__ID.__PVT__syscall_bubble_counter 
	= vlSymsp->TOP__v__ID.__Vdly__syscall_bubble_counter;
}

VL_INLINE_OPT void VMIPS_ID::_sequent__TOP__v__ID__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_sequent__TOP__v__ID__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC = vlSymsp->TOP__v__ID.__Vdly__Request_Alt_PC;
    vlSymsp->TOP__v__ID.__PVT__Alt_PC = vlSymsp->TOP__v__ID.__Vdly__Alt_PC;
    vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__jumpDestination_immediate 
	= ((0xf0000000U & vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID) 
	   | (0xffffffcU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
			    << 2U)));
    vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__branchDestination_immediate 
	= (((0xfffc0000U & (VL_NEGATE_I((IData)((1U 
						 & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						    >> 0xfU)))) 
			    << 0x12U)) | (0x3fffcU 
					  & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
					     << 2U))) 
	   + vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
    // ALWAYS at verilog//Decoder.v:71
    if ((0x80000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
	if ((0x40000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
	    if ((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		if (VL_UNLIKELY((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
		    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    VL_WRITEF("Not an Instruction!\n");
		    fflush (stdout);
		} else {
		    if (VL_UNLIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]swc1\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x39U;
			} else {
			    VL_WRITEF("[1]SC\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x36U;
			}
		    }
		}
	    } else {
		if (VL_UNLIKELY((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
		    VL_WRITEF("Not an Instruction!\n");
		    fflush (stdout);
		    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		} else {
		    if (VL_UNLIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]lwc1\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x35U;
			} else {
			    VL_WRITEF("[1]LL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x28U;
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if (VL_LIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			} else {
			    VL_WRITEF("[1]SWR\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x33U;
			}
		    } else {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]SW\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x31U;
			} else {
			    VL_WRITEF("[1]SWL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x32U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]SH\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x30U;
			} else {
			    VL_WRITEF("[1]SB\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2fU;
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			} else {
			    VL_WRITEF("[1]LWR\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2eU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LHU\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2cU;
			} else {
			    VL_WRITEF("[1]LBU\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2aU;
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LW\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3dU;
			} else {
			    VL_WRITEF("[1]LWL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2dU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LH\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2bU;
			} else {
			    VL_WRITEF("[1]LB\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x21U;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x40000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
	    if (VL_UNLIKELY((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
		VL_WRITEF("Not an Instruction!\n");
		fflush (stdout);
		vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
	    } else {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			} else {
			    VL_WRITEF("[1]blezl\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3bU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]bnel\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3cU;
			} else {
			    VL_WRITEF("[1]beql\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3aU;
			}
		    }
		} else {
		    if (VL_UNLIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("UNHANDLED CASE - COP1\n");
			    fflush (stdout);
			    if ((0x2000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				if (VL_UNLIKELY((0x1000000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if (VL_UNLIKELY(
						    (0x800000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x400000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if (VL_UNLIKELY(
							    (0x200000U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("[1]fp cvt.s\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 8U;
					    } else {
						if (VL_UNLIKELY(
								(3U 
								 == 
								 (0xfU 
								  & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
								     >> 4U))))) {
						    VL_WRITEF("[1]fp c.cond\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1fU;
						} else {
						    if (VL_UNLIKELY(
								    (0x20U 
								     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
							VL_WRITEF("Not an Instruction!\n");
							fflush (stdout);
						    } else {
							if (VL_UNLIKELY(
									(0x10U 
									 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
							    VL_WRITEF("Not an Instruction!\n");
							    fflush (stdout);
							} else {
							    if (VL_UNLIKELY(
									    (8U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
								VL_WRITEF("Not an Instruction!\n");
								fflush (stdout);
							    } else {
								if (
								    (4U 
								     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
								    if (
									(2U 
									 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp neg\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x10U;
									} else {
									    VL_WRITEF("[1]fp mov\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 4U;
									}
								    } else {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp abs\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x37U;
									} else {
									    VL_WRITEF("Not an Instruction!\n");
									    fflush (stdout);
									}
								    }
								} else {
								    if (
									(2U 
									 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp div\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 5U;
									} else {
									    VL_WRITEF("[1]fp mul\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xdU;
									}
								    } else {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp sub\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
									} else {
									    VL_WRITEF("[1]fp add\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1bU;
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x1000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				    if (VL_UNLIKELY(
						    (0x800000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x400000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if (VL_UNLIKELY(
							    (0x200000U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						if (VL_UNLIKELY(
								(0x10000U 
								 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						    VL_WRITEF("[1]bc1t\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1dU;
						} else {
						    if (VL_UNLIKELY(
								    (1U 
								     & (~ 
									(vlSymsp->TOP__v.__PVT__Instr1_IFID 
									 >> 0x10U))))) {
							VL_WRITEF("[1]bc1f\n");
							fflush (stdout);
							vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
							vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
							vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xfU;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0x800000U 
					 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if ((0x400000U 
					     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]ctc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x34U;
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]mtc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x38U;
					    }
					}
				    } else {
					if ((0x400000U 
					     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]cfc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1aU;
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]mfc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1cU;
					    }
					}
				    }
				}
			    }
			} else {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LUI\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 8U;
			} else {
			    VL_WRITEF("[1]xori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x20U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]ori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x10U;
			} else {
			    VL_WRITEF("[1]andi\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 4U;
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]sltiu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3fU;
			} else {
			    VL_WRITEF("[1]slti\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x15U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]addiu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 2U;
			} else {
			    VL_WRITEF("[1]addi\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]bgtz\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x25U;
			} else {
			    VL_WRITEF("[1]blez\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x26U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]BNE\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x29U;
			} else {
			    VL_WRITEF("[1]BEQ\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x22U;
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]JAL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
			} else {
			    VL_WRITEF("[1]J\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xeU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    if ((0x100000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				if (VL_UNLIKELY((0x80000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if (VL_UNLIKELY(
						    (0x40000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x20000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((0x10000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("[1]bgezal\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
					    } else {
						VL_WRITEF("[1]bltzal\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
					    }
					}
				    }
				}
			    } else {
				if (VL_UNLIKELY((0x80000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if (VL_UNLIKELY(
						    (0x40000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x20000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((0x10000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("[1]bgez\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x23U;
					    } else {
						VL_WRITEF("[1]bltz\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x27U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x20U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				if (VL_UNLIKELY((0x10U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if ((8U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if (VL_UNLIKELY(
							(4U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if (VL_LIKELY(
							  (2U 
							   & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]sltu\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3fU;
						} else {
						    VL_WRITEF("[1]slt\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x15U;
						}
					    } else {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]nor\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xfU;
						} else {
						    VL_WRITEF("[1]xor\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1fU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]or\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x10U;
						} else {
						    VL_WRITEF("[1]and\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 4U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]subu\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1eU;
						} else {
						    VL_WRITEF("[1]sub\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1dU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]addu\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x37U;
						} else {
						    VL_WRITEF("[1]add\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x10U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				    if ((8U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if (VL_UNLIKELY(
							(4U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]DIVU\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 6U;
						} else {
						    VL_WRITEF("[1]DIV\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 5U;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]MULTU\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xdU;
						} else {
						    VL_WRITEF("[1]MULT\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xdU;
						}
					    }
					}
				    } else {
					if (VL_UNLIKELY(
							(4U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]mtlo\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xcU;
						} else {
						    VL_WRITEF("[1]mflo\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xaU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]mthi\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xbU;
						} else {
						    VL_WRITEF("[1]mfhi\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 9U;
						}
					    }
					}
				    }
				} else {
				    if ((8U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if ((4U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if (VL_UNLIKELY(
							    (2U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]break\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x13U;
						} else {
						    VL_WRITEF("[1]Syscall\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 3U;
						}
					    }
					} else {
					    if (VL_UNLIKELY(
							    (2U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]JALR\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
						} else {
						    VL_WRITEF("[1]JR\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3eU;
						}
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]srav\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1aU;
						} else {
						    VL_WRITEF("[1]srlv\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1cU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("Not an Instruction!\n");
						    fflush (stdout);
						} else {
						    VL_WRITEF("[1]sllv\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x14U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]sra\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x19U;
						} else {
						    VL_WRITEF("[1]srl\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1bU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("Not an Instruction!\n");
						    fflush (stdout);
						} else {
						    VL_WRITEF("[1]sll,nop\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x13U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    VL_WRITEF("Decode[1]: Instr=%x Instr_PC=%x Link1=%1u, RegDest=%1u, Jump=%1u, Branch=%1u, MemRead=%1u, MemWrite=%1u, ALUSrc=%1u, RegWrite=%1u, JumpRegister=%1u,SignOrZero=%1u,Syscall=%1u,ALUControl=%x\n",
	      32,vlSymsp->TOP__v.__PVT__Instr1_IFID,
	      32,vlSymsp->TOP__v.__PVT__Instr_PC_IFID,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__link1),
	      1,vlSymsp->TOP__v__ID.__PVT__RegDst1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__jump1),
	      1,vlSymsp->TOP__v__ID.__PVT__branch1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__MemRead1),
	      1,vlSymsp->TOP__v__ID.__PVT__MemWrite1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__ALUSrc1),
	      1,vlSymsp->TOP__v__ID.__PVT__RegWrite1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1),
	      1,vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__syscal1),
	      6,vlSymsp->TOP__v__ID.__PVT__ALU_control1);
    fflush (stdout);
}

void VMIPS_ID::_settle__TOP__v__ID__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_settle__TOP__v__ID__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__jumpDestination_immediate 
	= ((0xf0000000U & vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID) 
	   | (0xffffffcU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
			    << 2U)));
    vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__branchDestination_immediate 
	= (((0xfffc0000U & (VL_NEGATE_I((IData)((1U 
						 & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						    >> 0xfU)))) 
			    << 0x12U)) | (0x3fffcU 
					  & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
					     << 2U))) 
	   + vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
    // ALWAYS at verilog//Decoder.v:71
    if ((0x80000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
	if ((0x40000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
	    if ((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		if (VL_UNLIKELY((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
		    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    VL_WRITEF("Not an Instruction!\n");
		    fflush (stdout);
		} else {
		    if (VL_UNLIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]swc1\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x39U;
			} else {
			    VL_WRITEF("[1]SC\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x36U;
			}
		    }
		}
	    } else {
		if (VL_UNLIKELY((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
		    VL_WRITEF("Not an Instruction!\n");
		    fflush (stdout);
		    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
		    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		} else {
		    if (VL_UNLIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]lwc1\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x35U;
			} else {
			    VL_WRITEF("[1]LL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x28U;
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if (VL_LIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			} else {
			    VL_WRITEF("[1]SWR\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x33U;
			}
		    } else {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]SW\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x31U;
			} else {
			    VL_WRITEF("[1]SWL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x32U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]SH\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x30U;
			} else {
			    VL_WRITEF("[1]SB\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2fU;
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			} else {
			    VL_WRITEF("[1]LWR\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2eU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LHU\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2cU;
			} else {
			    VL_WRITEF("[1]LBU\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2aU;
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LW\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3dU;
			} else {
			    VL_WRITEF("[1]LWL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2dU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LH\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x2bU;
			} else {
			    VL_WRITEF("[1]LB\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x21U;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x40000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
	    if (VL_UNLIKELY((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
		VL_WRITEF("Not an Instruction!\n");
		fflush (stdout);
		vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
		vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
	    } else {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			} else {
			    VL_WRITEF("[1]blezl\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3bU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]bnel\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3cU;
			} else {
			    VL_WRITEF("[1]beql\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3aU;
			}
		    }
		} else {
		    if (VL_UNLIKELY((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
			VL_WRITEF("Not an Instruction!\n");
			fflush (stdout);
			vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("UNHANDLED CASE - COP1\n");
			    fflush (stdout);
			    if ((0x2000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				if (VL_UNLIKELY((0x1000000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if (VL_UNLIKELY(
						    (0x800000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x400000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if (VL_UNLIKELY(
							    (0x200000U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("[1]fp cvt.s\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 8U;
					    } else {
						if (VL_UNLIKELY(
								(3U 
								 == 
								 (0xfU 
								  & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
								     >> 4U))))) {
						    VL_WRITEF("[1]fp c.cond\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1fU;
						} else {
						    if (VL_UNLIKELY(
								    (0x20U 
								     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
							VL_WRITEF("Not an Instruction!\n");
							fflush (stdout);
						    } else {
							if (VL_UNLIKELY(
									(0x10U 
									 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
							    VL_WRITEF("Not an Instruction!\n");
							    fflush (stdout);
							} else {
							    if (VL_UNLIKELY(
									    (8U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
								VL_WRITEF("Not an Instruction!\n");
								fflush (stdout);
							    } else {
								if (
								    (4U 
								     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
								    if (
									(2U 
									 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp neg\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x10U;
									} else {
									    VL_WRITEF("[1]fp mov\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 4U;
									}
								    } else {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp abs\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x37U;
									} else {
									    VL_WRITEF("Not an Instruction!\n");
									    fflush (stdout);
									}
								    }
								} else {
								    if (
									(2U 
									 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp div\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 5U;
									} else {
									    VL_WRITEF("[1]fp mul\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xdU;
									}
								    } else {
									if (
									    (1U 
									     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
									    VL_WRITEF("[1]fp sub\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
									} else {
									    VL_WRITEF("[1]fp add\n");
									    fflush (stdout);
									    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
									    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
									    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1bU;
									}
								    }
								}
							    }
							}
						    }
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x1000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				    if (VL_UNLIKELY(
						    (0x800000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x400000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if (VL_UNLIKELY(
							    (0x200000U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						if (VL_UNLIKELY(
								(0x10000U 
								 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						    VL_WRITEF("[1]bc1t\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1dU;
						} else {
						    if (VL_UNLIKELY(
								    (1U 
								     & (~ 
									(vlSymsp->TOP__v.__PVT__Instr1_IFID 
									 >> 0x10U))))) {
							VL_WRITEF("[1]bc1f\n");
							fflush (stdout);
							vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
							vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
							vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
							vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xfU;
						    }
						}
					    }
					}
				    }
				} else {
				    if ((0x800000U 
					 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if ((0x400000U 
					     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]ctc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x34U;
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]mtc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x38U;
					    }
					}
				    } else {
					if ((0x400000U 
					     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]cfc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1aU;
					    }
					} else {
					    if ((0x200000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						VL_WRITEF("[1]mfc1\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1cU;
					    }
					}
				    }
				}
			    }
			} else {
			    VL_WRITEF("Not an Instruction!\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
			}
		    }
		}
	    }
	} else {
	    if ((0x20000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]LUI\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 8U;
			} else {
			    VL_WRITEF("[1]xori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x20U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]ori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x10U;
			} else {
			    VL_WRITEF("[1]andi\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 4U;
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]sltiu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3fU;
			} else {
			    VL_WRITEF("[1]slti\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x15U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]addiu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 2U;
			} else {
			    VL_WRITEF("[1]addi\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
			}
		    }
		}
	    } else {
		if ((0x10000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]bgtz\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x25U;
			} else {
			    VL_WRITEF("[1]blez\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x26U;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]BNE\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x29U;
			} else {
			    VL_WRITEF("[1]BEQ\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x22U;
			}
		    }
		} else {
		    if ((0x8000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    VL_WRITEF("[1]JAL\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
			} else {
			    VL_WRITEF("[1]J\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
			    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
			    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xeU;
			}
		    } else {
			if ((0x4000000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
			    if ((0x100000U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				if (VL_UNLIKELY((0x80000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if (VL_UNLIKELY(
						    (0x40000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x20000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((0x10000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("[1]bgezal\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
					    } else {
						VL_WRITEF("[1]bltzal\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
					    }
					}
				    }
				}
			    } else {
				if (VL_UNLIKELY((0x80000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if (VL_UNLIKELY(
						    (0x40000U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					VL_WRITEF("Not an Instruction!\n");
					fflush (stdout);
				    } else {
					if (VL_UNLIKELY(
							(0x20000U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((0x10000U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						VL_WRITEF("[1]bgez\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x23U;
					    } else {
						VL_WRITEF("[1]bltz\n");
						fflush (stdout);
						vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x27U;
					    }
					}
				    }
				}
			    }
			} else {
			    if ((0x20U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				if (VL_UNLIKELY((0x10U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
				    VL_WRITEF("Not an Instruction!\n");
				    fflush (stdout);
				} else {
				    if ((8U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if (VL_UNLIKELY(
							(4U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if (VL_LIKELY(
							  (2U 
							   & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]sltu\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3fU;
						} else {
						    VL_WRITEF("[1]slt\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x15U;
						}
					    } else {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]nor\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xfU;
						} else {
						    VL_WRITEF("[1]xor\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1fU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]or\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x10U;
						} else {
						    VL_WRITEF("[1]and\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 4U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]subu\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1eU;
						} else {
						    VL_WRITEF("[1]sub\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1dU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]addu\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x37U;
						} else {
						    VL_WRITEF("[1]add\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0U;
						}
					    }
					}
				    }
				}
			    } else {
				if ((0x10U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
				    if ((8U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if (VL_UNLIKELY(
							(4U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]DIVU\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 6U;
						} else {
						    VL_WRITEF("[1]DIV\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 5U;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]MULTU\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xdU;
						} else {
						    VL_WRITEF("[1]MULT\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xdU;
						}
					    }
					}
				    } else {
					if (VL_UNLIKELY(
							(4U 
							 & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
					    VL_WRITEF("Not an Instruction!\n");
					    fflush (stdout);
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]mtlo\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xcU;
						} else {
						    VL_WRITEF("[1]mflo\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xaU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]mthi\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0xbU;
						} else {
						    VL_WRITEF("[1]mfhi\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 9U;
						}
					    }
					}
				    }
				} else {
				    if ((8U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					if ((4U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if (VL_UNLIKELY(
							    (2U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]break\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x13U;
						} else {
						    VL_WRITEF("[1]Syscall\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 3U;
						}
					    }
					} else {
					    if (VL_UNLIKELY(
							    (2U 
							     & vlSymsp->TOP__v.__PVT__Instr1_IFID))) {
						VL_WRITEF("Not an Instruction!\n");
						fflush (stdout);
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]JALR\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 1U;
						} else {
						    VL_WRITEF("[1]JR\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x3eU;
						}
					    }
					}
				    } else {
					if ((4U & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]srav\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1aU;
						} else {
						    VL_WRITEF("[1]srlv\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1cU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("Not an Instruction!\n");
						    fflush (stdout);
						} else {
						    VL_WRITEF("[1]sllv\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x14U;
						}
					    }
					} else {
					    if ((2U 
						 & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("[1]sra\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x19U;
						} else {
						    VL_WRITEF("[1]srl\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x1bU;
						}
					    } else {
						if (
						    (1U 
						     & vlSymsp->TOP__v.__PVT__Instr1_IFID)) {
						    VL_WRITEF("Not an Instruction!\n");
						    fflush (stdout);
						} else {
						    VL_WRITEF("[1]sll,nop\n");
						    fflush (stdout);
						    vlSymsp->TOP__v__ID.__PVT__link1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegDst1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jump1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__branch1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemRead1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__MemWrite1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALUSrc1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__RegWrite1 = 1U;
						    vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__syscal1 = 0U;
						    vlSymsp->TOP__v__ID.__PVT__ALU_control1 = 0x13U;
						}
					    }
					}
				    }
				}
			    }
			}
		    }
		}
	    }
	}
    }
    VL_WRITEF("Decode[1]: Instr=%x Instr_PC=%x Link1=%1u, RegDest=%1u, Jump=%1u, Branch=%1u, MemRead=%1u, MemWrite=%1u, ALUSrc=%1u, RegWrite=%1u, JumpRegister=%1u,SignOrZero=%1u,Syscall=%1u,ALUControl=%x\n",
	      32,vlSymsp->TOP__v.__PVT__Instr1_IFID,
	      32,vlSymsp->TOP__v.__PVT__Instr_PC_IFID,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__link1),
	      1,vlSymsp->TOP__v__ID.__PVT__RegDst1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__jump1),
	      1,vlSymsp->TOP__v__ID.__PVT__branch1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__MemRead1),
	      1,vlSymsp->TOP__v__ID.__PVT__MemWrite1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__ALUSrc1),
	      1,vlSymsp->TOP__v__ID.__PVT__RegWrite1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1),
	      1,vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1,
	      1,(IData)(vlSymsp->TOP__v__ID.__PVT__syscal1),
	      6,vlSymsp->TOP__v__ID.__PVT__ALU_control1);
    fflush (stdout);
    vlSymsp->TOP__v__ID.__PVT__RegA1 = (0x1fU & ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
						  ? 0U
						  : 
						 (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						  >> 0x15U)));
    vlSymsp->TOP__v__ID.__PVT__WriteRegister1 = (0x1fU 
						 & ((IData)(vlSymsp->TOP__v__ID.__PVT__RegDst1)
						     ? 
						    (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						     >> 0xbU)
						     : 
						    ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
						      ? 0x1fU
						      : 
						     (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						      >> 0x10U))));
    vlSymsp->TOP__v__ID.__PVT__RegB1 = (0x1fU & ((IData)(vlSymsp->TOP__v__ID.__PVT__RegDst1)
						  ? 
						 (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						  >> 0x10U)
						  : 0U));
}

VL_INLINE_OPT void VMIPS_ID::_combo__TOP__v__ID__6(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_combo__TOP__v__ID__6\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__rsval_jump1 = ((1U == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
					       ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1
					       : ((2U 
						   == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
						   ? vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1
						   : vlSymsp->TOP__v__ID__RegFile.__PVT__DataA1));
    vlSymsp->TOP__v__ID.__PVT__OpA1 = ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
				        ? 0U : ((1U 
						 == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
						 ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1
						 : 
						((2U 
						  == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
						  ? vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1
						  : 
						 ((((0x1fU 
						     & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							>> 0x15U)) 
						    == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						   & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						   : vlSymsp->TOP__v__ID__RegFile.__PVT__DataA1))));
}

VL_INLINE_OPT void VMIPS_ID::_sequent__TOP__v__ID__7(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_sequent__TOP__v__ID__7\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__RegA1 = (0x1fU & ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
						  ? 0U
						  : 
						 (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						  >> 0x15U)));
    vlSymsp->TOP__v__ID.__PVT__WriteRegister1 = (0x1fU 
						 & ((IData)(vlSymsp->TOP__v__ID.__PVT__RegDst1)
						     ? 
						    (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						     >> 0xbU)
						     : 
						    ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
						      ? 0x1fU
						      : 
						     (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						      >> 0x10U))));
    vlSymsp->TOP__v__ID.__PVT__RegB1 = (0x1fU & ((IData)(vlSymsp->TOP__v__ID.__PVT__RegDst1)
						  ? 
						 (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						  >> 0x10U)
						  : 0U));
}

void VMIPS_ID::_settle__TOP__v__ID__8(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_settle__TOP__v__ID__8\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__rsval_jump1 = ((1U == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
					       ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1
					       : ((2U 
						   == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
						   ? vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1
						   : vlSymsp->TOP__v__ID__RegFile.__PVT__DataA1));
    vlSymsp->TOP__v__ID.__PVT__OpA1 = ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
				        ? 0U : ((1U 
						 == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
						 ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1
						 : 
						((2U 
						  == (IData)(vlSymsp->TOP__v.__PVT__Branch_JR_select_A_FU))
						  ? vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1
						  : 
						 ((((0x1fU 
						     & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							>> 0x15U)) 
						    == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						   & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						   : vlSymsp->TOP__v__ID__RegFile.__PVT__DataA1))));
    vlSymsp->TOP__v__ID.__PVT__rtval1 = ((1U == (((0U 
						   != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg)) 
						  & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg) 
						     == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						  ? 1U
						  : 
						 (((0U 
						    != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg)) 
						   & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg) 
						      == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						   ? 2U
						   : 
						  (((0U 
						     != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg)) 
						    & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg) 
						       == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						    ? 3U
						    : 0U))))
					  ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1
					  : ((2U == 
					      (((0U 
						 != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg)) 
						& ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg) 
						   == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
					        ? 1U
					        : (
						   ((0U 
						     != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg)) 
						    & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg) 
						       == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						    ? 2U
						    : 
						   (((0U 
						      != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg)) 
						     & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg) 
							== (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						     ? 3U
						     : 0U))))
					      ? vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1
					      : (((
						   (0x1fU 
						    & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						       >> 0x10U)) 
						   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						  : vlSymsp->TOP__v__ID__RegFile.__PVT__DataB1)));
    // ALWAYS at verilog//NextInstructionCalculator.v:58
    vlSymsp->TOP__v__ID.__PVT__Alt_PC1 = ((IData)(vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1)
					   ? vlSymsp->TOP__v__ID.__PVT__rsval_jump1
					   : ((IData)(vlSymsp->TOP__v__ID.__PVT__jump1)
					       ? vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__jumpDestination_immediate
					       : vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__branchDestination_immediate));
    VL_WRITEF("Jump Analysis:jr=%1u[%2u]=%x; jd_imm=%x; branchd=%x => %x\n",
	      1,vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1,
	      5,(0x1fU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
			  >> 0x15U)),32,vlSymsp->TOP__v__ID.__PVT__rsval_jump1,
	      32,vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__jumpDestination_immediate,
	      32,vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__branchDestination_immediate,
	      32,vlSymsp->TOP__v__ID.__PVT__Alt_PC1);
    fflush (stdout);
}

VL_INLINE_OPT void VMIPS_ID::_combo__TOP__v__ID__9(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_combo__TOP__v__ID__9\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__rtval1 = ((1U == (((0U 
						   != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg)) 
						  & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg) 
						     == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						  ? 1U
						  : 
						 (((0U 
						    != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg)) 
						   & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg) 
						      == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						   ? 2U
						   : 
						  (((0U 
						     != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg)) 
						    & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg) 
						       == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						    ? 3U
						    : 0U))))
					  ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1
					  : ((2U == 
					      (((0U 
						 != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg)) 
						& ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_4_WriteReg) 
						   == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
					        ? 1U
					        : (
						   ((0U 
						     != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg)) 
						    & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_8_WriteReg) 
						       == (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						    ? 2U
						    : 
						   (((0U 
						      != (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg)) 
						     & ((IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__PC_12_WriteReg) 
							== (IData)(vlSymsp->TOP__v.__PVT__FwrdUnit__DOT__rt)))
						     ? 3U
						     : 0U))))
					      ? vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1
					      : (((
						   (0x1fU 
						    & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
						       >> 0x10U)) 
						   == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)) 
						  & (IData)(vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB))
						  ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
						  : vlSymsp->TOP__v__ID__RegFile.__PVT__DataB1)));
    // ALWAYS at verilog//NextInstructionCalculator.v:58
    vlSymsp->TOP__v__ID.__PVT__Alt_PC1 = ((IData)(vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1)
					   ? vlSymsp->TOP__v__ID.__PVT__rsval_jump1
					   : ((IData)(vlSymsp->TOP__v__ID.__PVT__jump1)
					       ? vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__jumpDestination_immediate
					       : vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__branchDestination_immediate));
    VL_WRITEF("Jump Analysis:jr=%1u[%2u]=%x; jd_imm=%x; branchd=%x => %x\n",
	      1,vlSymsp->TOP__v__ID.__PVT__jumpRegister_Flag1,
	      5,(0x1fU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
			  >> 0x15U)),32,vlSymsp->TOP__v__ID.__PVT__rsval_jump1,
	      32,vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__jumpDestination_immediate,
	      32,vlSymsp->TOP__v__ID.__PVT__NIA1__DOT__branchDestination_immediate,
	      32,vlSymsp->TOP__v__ID.__PVT__Alt_PC1);
    fflush (stdout);
    vlSymsp->TOP__v__ID.__PVT__OpB1 = ((IData)(vlSymsp->TOP__v__ID.__PVT__branch1)
				        ? ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
					    ? ((IData)(4U) 
					       + vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID)
					    : vlSymsp->TOP__v__ID.__PVT__rtval1)
				        : ((IData)(vlSymsp->TOP__v__ID.__PVT__RegDst1)
					    ? vlSymsp->TOP__v__ID.__PVT__rtval1
					    : ((IData)(vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1)
					        ? (
						   (0xffff0000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									       >> 0xfU)))) 
						       << 0x10U)) 
						   | (0xffffU 
						      & vlSymsp->TOP__v.__PVT__Instr1_IFID))
					        : (0xffffU 
						   & vlSymsp->TOP__v.__PVT__Instr1_IFID))));
}

void VMIPS_ID::_settle__TOP__v__ID__10(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_settle__TOP__v__ID__10\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__OpB1 = ((IData)(vlSymsp->TOP__v__ID.__PVT__branch1)
				        ? ((IData)(vlSymsp->TOP__v__ID.__PVT__link1)
					    ? ((IData)(4U) 
					       + vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID)
					    : vlSymsp->TOP__v__ID.__PVT__rtval1)
				        : ((IData)(vlSymsp->TOP__v__ID.__PVT__RegDst1)
					    ? vlSymsp->TOP__v__ID.__PVT__rtval1
					    : ((IData)(vlSymsp->TOP__v__ID.__PVT__sign_or_zero_Flag1)
					        ? (
						   (0xffff0000U 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									       >> 0xfU)))) 
						       << 0x10U)) 
						   | (0xffffU 
						      & vlSymsp->TOP__v.__PVT__Instr1_IFID))
					        : (0xffffU 
						   & vlSymsp->TOP__v.__PVT__Instr1_IFID))));
    vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC1 = (1U 
						  & (((~ 
						       (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							>> 0x1fU)) 
						      & ((~ 
							  (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							   >> 0x1eU)) 
							 & ((~ 
							     (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							      >> 0x1dU)) 
							    & ((0x10000000U 
								& vlSymsp->TOP__v.__PVT__Instr1_IFID)
							        ? 
							       ((0x8000000U 
								 & vlSymsp->TOP__v.__PVT__Instr1_IFID)
								 ? 
								((0x4000000U 
								  & vlSymsp->TOP__v.__PVT__Instr1_IFID)
								  ? 
								 ((~ 
								   (vlSymsp->TOP__v__ID.__PVT__OpA1 
								    >> 0x1fU)) 
								  & (0U 
								     != vlSymsp->TOP__v__ID.__PVT__OpA1))
								  : 
								 ((vlSymsp->TOP__v__ID.__PVT__OpA1 
								   >> 0x1fU) 
								  | (0U 
								     == vlSymsp->TOP__v__ID.__PVT__OpA1)))
								 : 
								((0x4000000U 
								  & vlSymsp->TOP__v.__PVT__Instr1_IFID)
								  ? 
								 (vlSymsp->TOP__v__ID.__PVT__OpA1 
								  != vlSymsp->TOP__v__ID.__PVT__OpB1)
								  : 
								 (vlSymsp->TOP__v__ID.__PVT__OpA1 
								  == vlSymsp->TOP__v__ID.__PVT__OpB1)))
							        : 
							       ((~ 
								 (vlSymsp->TOP__v.__PVT__Instr1_IFID 
								  >> 0x1bU)) 
								& ((vlSymsp->TOP__v.__PVT__Instr1_IFID 
								    >> 0x1aU) 
								   & ((~ 
								       (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									>> 0x13U)) 
								      & ((~ 
									  (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									   >> 0x12U)) 
									 & ((~ 
									     (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									      >> 0x11U)) 
									    & ((0x10000U 
										& vlSymsp->TOP__v.__PVT__Instr1_IFID)
									        ? 
									       (~ 
										(vlSymsp->TOP__v__ID.__PVT__OpA1 
										>> 0x1fU))
									        : 
									       (vlSymsp->TOP__v__ID.__PVT__OpA1 
										>> 0x1fU))))))))))) 
						     | (IData)(vlSymsp->TOP__v__ID.__PVT__jump1)));
}

VL_INLINE_OPT void VMIPS_ID::_combo__TOP__v__ID__11(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_ID::_combo__TOP__v__ID__11\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC1 = (1U 
						  & (((~ 
						       (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							>> 0x1fU)) 
						      & ((~ 
							  (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							   >> 0x1eU)) 
							 & ((~ 
							     (vlSymsp->TOP__v.__PVT__Instr1_IFID 
							      >> 0x1dU)) 
							    & ((0x10000000U 
								& vlSymsp->TOP__v.__PVT__Instr1_IFID)
							        ? 
							       ((0x8000000U 
								 & vlSymsp->TOP__v.__PVT__Instr1_IFID)
								 ? 
								((0x4000000U 
								  & vlSymsp->TOP__v.__PVT__Instr1_IFID)
								  ? 
								 ((~ 
								   (vlSymsp->TOP__v__ID.__PVT__OpA1 
								    >> 0x1fU)) 
								  & (0U 
								     != vlSymsp->TOP__v__ID.__PVT__OpA1))
								  : 
								 ((vlSymsp->TOP__v__ID.__PVT__OpA1 
								   >> 0x1fU) 
								  | (0U 
								     == vlSymsp->TOP__v__ID.__PVT__OpA1)))
								 : 
								((0x4000000U 
								  & vlSymsp->TOP__v.__PVT__Instr1_IFID)
								  ? 
								 (vlSymsp->TOP__v__ID.__PVT__OpA1 
								  != vlSymsp->TOP__v__ID.__PVT__OpB1)
								  : 
								 (vlSymsp->TOP__v__ID.__PVT__OpA1 
								  == vlSymsp->TOP__v__ID.__PVT__OpB1)))
							        : 
							       ((~ 
								 (vlSymsp->TOP__v.__PVT__Instr1_IFID 
								  >> 0x1bU)) 
								& ((vlSymsp->TOP__v.__PVT__Instr1_IFID 
								    >> 0x1aU) 
								   & ((~ 
								       (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									>> 0x13U)) 
								      & ((~ 
									  (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									   >> 0x12U)) 
									 & ((~ 
									     (vlSymsp->TOP__v.__PVT__Instr1_IFID 
									      >> 0x11U)) 
									    & ((0x10000U 
										& vlSymsp->TOP__v.__PVT__Instr1_IFID)
									        ? 
									       (~ 
										(vlSymsp->TOP__v__ID.__PVT__OpA1 
										>> 0x1fU))
									        : 
									       (vlSymsp->TOP__v__ID.__PVT__OpA1 
										>> 0x1fU))))))))))) 
						     | (IData)(vlSymsp->TOP__v__ID.__PVT__jump1)));
}
