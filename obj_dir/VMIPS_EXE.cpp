// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS_EXE.h"         // For This
#include "VMIPS__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS_EXE) {
    // Reset internal values
    // Reset structure values
    __PVT__CLK = VL_RAND_RESET_I(1);
    __PVT__RESET = VL_RAND_RESET_I(1);
    __PVT__Instr1_IN = VL_RAND_RESET_I(32);
    __PVT__Instr1_PC_IN = VL_RAND_RESET_I(32);
    __PVT__OperandA1_IN = VL_RAND_RESET_I(32);
    __PVT__OperandB1_IN = VL_RAND_RESET_I(32);
    __PVT__WriteRegister1_IN = VL_RAND_RESET_I(5);
    __PVT__MemWriteData1_IN = VL_RAND_RESET_I(32);
    __PVT__RegWrite1_IN = VL_RAND_RESET_I(1);
    __PVT__ALU_Control1_IN = VL_RAND_RESET_I(6);
    __PVT__MemRead1_IN = VL_RAND_RESET_I(1);
    __PVT__MemWrite1_IN = VL_RAND_RESET_I(1);
    __PVT__ShiftAmount1_IN = VL_RAND_RESET_I(5);
    __PVT__Instr1_OUT = VL_RAND_RESET_I(32);
    __PVT__Instr1_PC_OUT = VL_RAND_RESET_I(32);
    __PVT__ALU_result1_OUT = VL_RAND_RESET_I(32);
    __PVT__WriteRegister1_OUT = VL_RAND_RESET_I(5);
    __PVT__MemWriteData1_OUT = VL_RAND_RESET_I(32);
    __PVT__RegWrite1_OUT = VL_RAND_RESET_I(1);
    __PVT__ALU_Control1_OUT = VL_RAND_RESET_I(6);
    __PVT__MemRead1_OUT = VL_RAND_RESET_I(1);
    __PVT__MemWrite1_OUT = VL_RAND_RESET_I(1);
    __PVT__RegA_Select = VL_RAND_RESET_I(2);
    __PVT__RegB_Select = VL_RAND_RESET_I(2);
    __PVT__ALU_result_forward = VL_RAND_RESET_I(32);
    __PVT__Mem_result_forward = VL_RAND_RESET_I(32);
    __PVT__A1 = VL_RAND_RESET_I(32);
    __PVT__B1 = VL_RAND_RESET_I(32);
    __PVT__ALU_result1 = VL_RAND_RESET_I(32);
    HI = VL_RAND_RESET_I(32);
    LO = VL_RAND_RESET_I(32);
    __PVT__HI_new1 = VL_RAND_RESET_I(32);
    __PVT__LO_new1 = VL_RAND_RESET_I(32);
    __PVT__ALU1__DOT__temp = VL_RAND_RESET_Q(64);
}

void VMIPS_EXE::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS_EXE::~VMIPS_EXE() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS_EXE::_sequent__TOP__v__EXE__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_EXE::_sequent__TOP__v__EXE__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//ALU.v:21
    if ((0x20U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= ((vlSymsp->TOP__v__EXE.__PVT__A1 
				    > vlSymsp->TOP__v__EXE.__PVT__B1)
				    ? 0U : ((vlSymsp->TOP__v__EXE.__PVT__A1 
					     == vlSymsp->TOP__v__EXE.__PVT__B1)
					     ? 0U : 1U));
			    VL_WRITEF("ALU:sltu\n");
			    fflush (stdout);
			} else {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:Load,Store,...\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + ((0xffff0000U 
				       & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlSymsp->TOP__v__EXE.__PVT__B1 
								  >> 0xfU)))) 
					  << 0x10U)) 
				      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
			} else {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			}
		    }
		} else {
		    if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
			VL_WRITEF("ALU:NOP\n");
			fflush (stdout);
			vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:Load,Store,...\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + ((0xffff0000U 
				       & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlSymsp->TOP__v__EXE.__PVT__B1 
								  >> 0xfU)))) 
					  << 0x10U)) 
				      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
			} else {
			    VL_WRITEF("ALU:ctc,mtc\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= vlSymsp->TOP__v__EXE.__PVT__B1;
			}
		    }
		}
	    } else {
		if (VL_LIKELY((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:addx,lwc1\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + vlSymsp->TOP__v__EXE.__PVT__B1);
			} else {
			    VL_WRITEF("ALU:Load,Store,...\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + ((0xffff0000U 
				       & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlSymsp->TOP__v__EXE.__PVT__B1 
								  >> 0xfU)))) 
					  << 0x10U)) 
				      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:addx,lwc1\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + vlSymsp->TOP__v__EXE.__PVT__B1);
			} else {
			    VL_WRITEF("ALU:ctc,mtc\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= vlSymsp->TOP__v__EXE.__PVT__B1;
			}
		    }
		} else {
		    VL_WRITEF("ALU:Load,Store,...\n");
		    fflush (stdout);
		    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
			= (vlSymsp->TOP__v__EXE.__PVT__A1 
			   + ((0xffff0000U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__v__EXE.__PVT__B1 
								      >> 0xfU)))) 
					      << 0x10U)) 
			      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
		}
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		if (VL_UNLIKELY((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
		    VL_WRITEF("ALU:Load,Store,...\n");
		    fflush (stdout);
		    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
			= (vlSymsp->TOP__v__EXE.__PVT__A1 
			   + ((0xffff0000U & (VL_NEGATE_I((IData)(
								  (1U 
								   & (vlSymsp->TOP__v__EXE.__PVT__B1 
								      >> 0xfU)))) 
					      << 0x10U)) 
			      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
		} else {
		    if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
			VL_WRITEF("ALU:Load,Store,...\n");
			fflush (stdout);
			vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
			    = (vlSymsp->TOP__v__EXE.__PVT__A1 
			       + ((0xffff0000U & (VL_NEGATE_I((IData)(
								      (1U 
								       & (vlSymsp->TOP__v__EXE.__PVT__B1 
									  >> 0xfU)))) 
						  << 0x10U)) 
				  | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			} else {
			    VL_WRITEF("ALU:Load,Store,...\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + ((0xffff0000U 
				       & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlSymsp->TOP__v__EXE.__PVT__B1 
								  >> 0xfU)))) 
					  << 0x10U)) 
				      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
			}
		    }
		}
	    } else {
		if (VL_UNLIKELY((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
		    VL_WRITEF("ALU:NOP\n");
		    fflush (stdout);
		    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
		} else {
		    if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
			VL_WRITEF("ALU:NOP\n");
			fflush (stdout);
			vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:Load,Store,...\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   + ((0xffff0000U 
				       & (VL_NEGATE_I((IData)(
							      (1U 
							       & (vlSymsp->TOP__v__EXE.__PVT__B1 
								  >> 0xfU)))) 
					  << 0x10U)) 
				      | (0xffffU & vlSymsp->TOP__v__EXE.__PVT__B1)));
			} else {
			    VL_WRITEF("ALU:xor,xori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   ^ vlSymsp->TOP__v__EXE.__PVT__B1);
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:xor,xori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   ^ vlSymsp->TOP__v__EXE.__PVT__B1);
			} else {
			    VL_WRITEF("ALU:sub,subu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   - vlSymsp->TOP__v__EXE.__PVT__B1);
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:sub,subu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   - vlSymsp->TOP__v__EXE.__PVT__B1);
			} else {
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff00000000) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | (IData)((IData)(
						     (vlSymsp->TOP__v__EXE.__PVT__B1 
						      >> 
						      (0x1fU 
						       & vlSymsp->TOP__v__EXE.__PVT__A1)))));
			    VL_WRITEF("ALU:srlv\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp);
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:srl\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__B1 
				   >> (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT));
			} else {
			    VL_WRITEF("ALU:srav\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xfffffffeffffffff) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | ((QData)((IData)(
						      (1U 
						       & (vlSymsp->TOP__v__EXE.__PVT__B1 
							  >> 0x1fU)))) 
				      << 0x20U));
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff00000000) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | (IData)((IData)(
						     (vlSymsp->TOP__v__EXE.__PVT__B1 
						      >> 
						      (0x1fU 
						       & vlSymsp->TOP__v__EXE.__PVT__A1)))));
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff7fffffff) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | ((QData)((IData)(
						      (1U 
						       & (IData)(
								 (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								  >> 0x20U))))) 
				      << 0x1fU));
			    if ((1U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffbfffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1eU));
			    }
			    if ((2U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffdfffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1dU));
			    }
			    if ((3U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffefffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1cU));
			    }
			    if ((4U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffff7ffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1bU));
			    }
			    if ((5U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffbffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1aU));
			    }
			    if ((6U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffdffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x19U));
			    }
			    if ((7U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffeffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x18U));
			    }
			    if ((8U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffff7fffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x17U));
			    }
			    if ((9U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffbfffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x16U));
			    }
			    if ((0xaU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffdfffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x15U));
			    }
			    if ((0xbU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffefffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x14U));
			    }
			    if ((0xcU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffff7ffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x13U));
			    }
			    if ((0xdU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffbffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x12U));
			    }
			    if ((0xeU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffdffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x11U));
			    }
			    if ((0xfU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffeffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x10U));
			    }
			    if ((0x10U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffff7fff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xfU));
			    }
			    if ((0x11U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffbfff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xeU));
			    }
			    if ((0x12U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffdfff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xdU));
			    }
			    if ((0x13U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffefff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xcU));
			    }
			    if ((0x14U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffff7ff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xbU));
			    }
			    if ((0x15U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffbff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xaU));
			    }
			    if ((0x16U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffdff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 9U));
			    }
			    if ((0x17U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffeff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 8U));
			    }
			    if ((0x18U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffff7f) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 7U));
			    }
			    if ((0x19U <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffbf) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 6U));
			    }
			    if ((0x1aU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffdf) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 5U));
			    }
			    if ((0x1bU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffef) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 4U));
			    }
			    if ((0x1cU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffff7) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 3U));
			    }
			    if ((0x1dU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffb) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 2U));
			    }
			    if ((0x1eU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffd) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 1U));
			    }
			    if ((0x1fU <= (0x1fU & vlSymsp->TOP__v__EXE.__PVT__A1))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffe) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | (IData)((IData)(
							 (1U 
							  & (IData)(
								    (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								     >> 0x20U))))));
			    }
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp);
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:sra\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xfffffffeffffffff) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | ((QData)((IData)(
						      (1U 
						       & (vlSymsp->TOP__v__EXE.__PVT__B1 
							  >> 0x1fU)))) 
				      << 0x20U));
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff00000000) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | (IData)((IData)(
						     (vlSymsp->TOP__v__EXE.__PVT__B1 
						      >> (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT)))));
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((VL_ULL(0xffffffff7fffffff) 
				    & vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				   | ((QData)((IData)(
						      (1U 
						       & (IData)(
								 (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								  >> 0x20U))))) 
				      << 0x1fU));
			    if ((1U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffbfffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1eU));
			    }
			    if ((2U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffdfffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1dU));
			    }
			    if ((3U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffefffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1cU));
			    }
			    if ((4U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffff7ffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1bU));
			    }
			    if ((5U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffbffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x1aU));
			    }
			    if ((6U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffdffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x19U));
			    }
			    if ((7U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffeffffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x18U));
			    }
			    if ((8U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffff7fffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x17U));
			    }
			    if ((9U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffbfffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x16U));
			    }
			    if ((0xaU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffdfffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x15U));
			    }
			    if ((0xbU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffefffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x14U));
			    }
			    if ((0xcU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffff7ffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x13U));
			    }
			    if ((0xdU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffbffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x12U));
			    }
			    if ((0xeU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffdffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x11U));
			    }
			    if ((0xfU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffeffff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0x10U));
			    }
			    if ((0x10U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffff7fff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xfU));
			    }
			    if ((0x11U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffbfff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xeU));
			    }
			    if ((0x12U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffdfff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xdU));
			    }
			    if ((0x13U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffefff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xcU));
			    }
			    if ((0x14U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffff7ff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xbU));
			    }
			    if ((0x15U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffbff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 0xaU));
			    }
			    if ((0x16U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffdff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 9U));
			    }
			    if ((0x17U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffeff) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 8U));
			    }
			    if ((0x18U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffff7f) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 7U));
			    }
			    if ((0x19U <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffbf) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 6U));
			    }
			    if ((0x1aU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffdf) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 5U));
			    }
			    if ((0x1bU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xffffffffffffffef) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 4U));
			    }
			    if ((0x1cU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffff7) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 3U));
			    }
			    if ((0x1dU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffb) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 2U));
			    }
			    if ((0x1eU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffd) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | ((QData)((IData)(
							  (1U 
							   & (IData)(
								     (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								      >> 0x20U))))) 
					  << 1U));
			    }
			    if ((0x1fU <= (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT))) {
				vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				    = ((VL_ULL(0xfffffffffffffffe) 
					& vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp) 
				       | (IData)((IData)(
							 (1U 
							  & (IData)(
								    (vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
								     >> 0x20U))))));
			    }
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp);
			} else {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		    if (VL_UNLIKELY((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
			VL_WRITEF("ALU:NOP\n");
			fflush (stdout);
			vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:slt\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (((1U & (vlSymsp->TOP__v__EXE.__PVT__A1 
					   >> 0x1fU)) 
				    < (1U & (vlSymsp->TOP__v__EXE.__PVT__B1 
					     >> 0x1fU)))
				    ? 0U : (((0x7fffffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__A1) 
					     > (0x7fffffffU 
						& vlSymsp->TOP__v__EXE.__PVT__B1))
					     ? 0U : 
					    ((vlSymsp->TOP__v__EXE.__PVT__A1 
					      == vlSymsp->TOP__v__EXE.__PVT__B1)
					      ? 0U : 1U)));
			} else {
			    VL_WRITEF("ALU:sllv\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= ((0x1fU >= vlSymsp->TOP__v__EXE.__PVT__A1)
				    ? (vlSymsp->TOP__v__EXE.__PVT__B1 
				       << vlSymsp->TOP__v__EXE.__PVT__A1)
				    : 0U);
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:sll,NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__B1 
				   << (IData)(vlSymsp->TOP__v__ID.__PVT__ShiftAmount1_OUT));
			} else {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			} else {
			    VL_WRITEF("ALU:or,ori\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   | vlSymsp->TOP__v__EXE.__PVT__B1);
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:nor\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (~ (vlSymsp->TOP__v__EXE.__PVT__A1 
				      | vlSymsp->TOP__v__EXE.__PVT__B1));
			} else {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
				= ((QData)((IData)(vlSymsp->TOP__v__EXE.__PVT__A1)) 
				   * (QData)((IData)(vlSymsp->TOP__v__EXE.__PVT__B1)));
			    VL_WRITEF("ALU:mult,multu\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__HI_new1 
				= (IData)((vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp 
					   >> 0x20U));
			    vlSymsp->TOP__v__EXE.__PVT__LO_new1 
				= (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU1__DOT__temp);
			} else {
			    VL_WRITEF("ALU:mtlo\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__LO_new1 
				= vlSymsp->TOP__v__EXE.__PVT__A1;
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:mthi\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__HI_new1 
				= vlSymsp->TOP__v__EXE.__PVT__A1;
			} else {
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= vlSymsp->TOP__v__EXE.LO;
			    VL_WRITEF("ALU:mflo\n");
			    fflush (stdout);
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= vlSymsp->TOP__v__EXE.HI;
			    VL_WRITEF("ALU:mfhi\n");
			    fflush (stdout);
			} else {
			    VL_WRITEF("ALU:lui\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (0xffff0000U & (vlSymsp->TOP__v__EXE.__PVT__B1 
						  << 0x10U));
			}
		    }
		}
	    } else {
		if (VL_LIKELY((4U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT))) {
			    VL_WRITEF("ALU:NOP\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 = 0U;
			} else {
			    VL_WRITEF("ALU:divu\n");
			    fflush (stdout);
			    if ((0U != vlSymsp->TOP__v__EXE.__PVT__B1)) {
				vlSymsp->TOP__v__EXE.__PVT__LO_new1 
				    = VL_DIV_III(32, vlSymsp->TOP__v__EXE.__PVT__A1, vlSymsp->TOP__v__EXE.__PVT__B1);
				vlSymsp->TOP__v__EXE.__PVT__HI_new1 
				    = VL_MODDIV_III(32, vlSymsp->TOP__v__EXE.__PVT__A1, vlSymsp->TOP__v__EXE.__PVT__B1);
			    }
			}
		    } else {
			if (VL_LIKELY((1U & (IData)(vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT)))) {
			    if (VL_UNLIKELY((0U != vlSymsp->TOP__v__EXE.__PVT__B1))) {
				VL_WRITEF("ALU:div\n");
				fflush (stdout);
				vlSymsp->TOP__v__EXE.__PVT__LO_new1 
				    = ((0x7fffffffU 
					& vlSymsp->TOP__v__EXE.__PVT__LO_new1) 
				       | (0x80000000U 
					  & (vlSymsp->TOP__v__EXE.__PVT__A1 
					     | vlSymsp->TOP__v__EXE.__PVT__B1)));
				vlSymsp->TOP__v__EXE.__PVT__HI_new1 
				    = ((0x80000000U 
					& vlSymsp->TOP__v__EXE.__PVT__HI_new1) 
				       | (0x7fffffffU 
					  & VL_MODDIV_III(31, 
							  (0x7fffffffU 
							   & vlSymsp->TOP__v__EXE.__PVT__A1), 
							  (0x7fffffffU 
							   & vlSymsp->TOP__v__EXE.__PVT__B1))));
				vlSymsp->TOP__v__EXE.__PVT__LO_new1 
				    = ((0x80000000U 
					& vlSymsp->TOP__v__EXE.__PVT__LO_new1) 
				       | (0x7fffffffU 
					  & VL_DIV_III(31, 
						       (0x7fffffffU 
							& vlSymsp->TOP__v__EXE.__PVT__A1), 
						       (0x7fffffffU 
							& vlSymsp->TOP__v__EXE.__PVT__B1))));
				vlSymsp->TOP__v__EXE.__PVT__HI_new1 
				    = VL_MODDIVS_III(32, vlSymsp->TOP__v__EXE.__PVT__A1, vlSymsp->TOP__v__EXE.__PVT__B1);
				vlSymsp->TOP__v__EXE.__PVT__LO_new1 
				    = VL_DIVS_III(32, vlSymsp->TOP__v__EXE.__PVT__A1, vlSymsp->TOP__v__EXE.__PVT__B1);
			    }
			} else {
			    VL_WRITEF("ALU:and,andi\n");
			    fflush (stdout);
			    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
				= (vlSymsp->TOP__v__EXE.__PVT__A1 
				   & vlSymsp->TOP__v__EXE.__PVT__B1);
			}
		    }
		} else {
		    VL_WRITEF("ALU:addx,lwc1\n");
		    fflush (stdout);
		    vlSymsp->TOP__v__EXE.__PVT__ALU_result1 
			= (vlSymsp->TOP__v__EXE.__PVT__A1 
			   + vlSymsp->TOP__v__EXE.__PVT__B1);
		}
	    }
	}
    }
}

VL_INLINE_OPT void VMIPS_EXE::_sequent__TOP__v__EXE__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_EXE::_sequent__TOP__v__EXE__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//EXE.v:123
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (VL_UNLIKELY(vlTOPp->CLK)) {
	    vlSymsp->TOP__v__EXE.HI = vlSymsp->TOP__v__EXE.__PVT__HI_new1;
	    vlSymsp->TOP__v__EXE.__PVT__Instr1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__Instr1_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__Instr1_PC_OUT 
		= vlSymsp->TOP__v__ID.__PVT__Instr1_PC_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT 
		= vlSymsp->TOP__v__EXE.__PVT__ALU_result1;
	    vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__WriteRegister1_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__MemWriteData1_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__RegWrite1_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__MemRead1_OUT;
	    vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT 
		= vlSymsp->TOP__v__ID.__PVT__MemWrite1_OUT;
	    vlSymsp->TOP__v__EXE.LO = vlSymsp->TOP__v__EXE.__PVT__LO_new1;
	    VL_WRITEF("EXE:Instr1=%x,Instr1_PC=%x,ALU_result1=%x; Write?%1u to %2u\n",
		      32,vlSymsp->TOP__v__ID.__PVT__Instr1_OUT,
		      32,vlSymsp->TOP__v__ID.__PVT__Instr1_PC_OUT,
		      32,vlSymsp->TOP__v__EXE.__PVT__ALU_result1,
		      1,(IData)(vlSymsp->TOP__v__ID.__PVT__RegWrite1_OUT),
		      5,vlSymsp->TOP__v__ID.__PVT__WriteRegister1_OUT);
	    VL_WRITEF("EXE:ALU_Control1=%x; MemRead1=%1u; MemWrite1=%1u (Data:%x)\n",
		      6,vlSymsp->TOP__v__ID.__PVT__ALU_Control1_OUT,
		      1,(IData)(vlSymsp->TOP__v__ID.__PVT__MemRead1_OUT),
		      1,vlSymsp->TOP__v__ID.__PVT__MemWrite1_OUT,
		      32,vlSymsp->TOP__v__ID.__PVT__MemWriteData1_OUT);
	    VL_WRITEF("EXE:OpA1=%x; OpB1=%x; HI=%x; LO=%x;\n",
		      32,vlSymsp->TOP__v__EXE.__PVT__A1,
		      32,vlSymsp->TOP__v__EXE.__PVT__B1,
		      32,vlSymsp->TOP__v__EXE.__PVT__HI_new1,
		      32,vlSymsp->TOP__v__EXE.__PVT__LO_new1);
	    fflush (stdout);
	}
    } else {
	VL_WRITEF("EXE:RESET\n");
	fflush (stdout);
	vlSymsp->TOP__v__EXE.__PVT__Instr1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__Instr1_PC_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT = 0U;
	vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT = 0U;
    }
}

VL_INLINE_OPT void VMIPS_EXE::_sequent__TOP__v__EXE__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("        VMIPS_EXE::_sequent__TOP__v__EXE__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__EXE.__PVT__A1 = ((1U == (IData)(vlSymsp->TOP__v.__PVT__EXE_A_Select_FU))
				       ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT
				       : ((2U == (IData)(vlSymsp->TOP__v.__PVT__EXE_A_Select_FU))
					   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
					   : vlSymsp->TOP__v__ID.__PVT__OperandA1_OUT));
    vlSymsp->TOP__v__EXE.__PVT__B1 = ((1U == (IData)(vlSymsp->TOP__v.__PVT__EXE_B_Select_FU))
				       ? vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT
				       : ((2U == (IData)(vlSymsp->TOP__v.__PVT__EXE_B_Select_FU))
					   ? vlSymsp->TOP__v.__PVT__WriteData1_MEMWB
					   : vlSymsp->TOP__v__ID.__PVT__OperandB1_OUT));
}
