// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS_MIPS.h"        // For This
#include "VMIPS__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS_MIPS) {
    VL_CELL (ID, VMIPS_ID);
    VL_CELL (EXE, VMIPS_EXE);
    // Reset internal values
    // Reset structure values
    RESET = VL_RAND_RESET_I(1);
    CLK = VL_RAND_RESET_I(1);
    data_address_2DM = VL_RAND_RESET_I(32);
    MemRead_2DM = VL_RAND_RESET_I(1);
    MemWrite_2DM = VL_RAND_RESET_I(1);
    data_read_fDM = VL_RAND_RESET_I(32);
    data_write_2DM = VL_RAND_RESET_I(32);
    data_write_size_2DM = VL_RAND_RESET_I(2);
    VL_RAND_RESET_W(256,block_read_fDM);
    VL_RAND_RESET_W(256,block_write_2DM);
    __PVT__dBlkRead = VL_RAND_RESET_I(1);
    __PVT__dBlkWrite = VL_RAND_RESET_I(1);
    block_read_fDM_valid = VL_RAND_RESET_I(1);
    block_write_fDM_valid = VL_RAND_RESET_I(1);
    Instr_address_2IM = VL_RAND_RESET_I(32);
    Instr1_fIM = VL_RAND_RESET_I(32);
    Instr2_fIM = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,block_read_fIM);
    block_read_fIM_valid = VL_RAND_RESET_I(1);
    __PVT__iBlkRead = VL_RAND_RESET_I(1);
    SYS = VL_RAND_RESET_I(1);
    __PVT__Instr1_IFID = VL_RAND_RESET_I(32);
    __PVT__Instr_PC_IFID = VL_RAND_RESET_I(32);
    __PVT__Instr_PC_Plus4_IFID = VL_RAND_RESET_I(32);
    Instr_address_2IC = VL_RAND_RESET_I(32);
    __PVT__WriteRegister1_MEMWB = VL_RAND_RESET_I(5);
    __PVT__WriteData1_MEMWB = VL_RAND_RESET_I(32);
    __PVT__RegWrite1_MEMWB = VL_RAND_RESET_I(1);
    data_write_2DC = VL_RAND_RESET_I(32);
    data_address_2DC = VL_RAND_RESET_I(32);
    data_write_size_2DC = VL_RAND_RESET_I(2);
    data_read_fDC = VL_RAND_RESET_I(32);
    read_2DC = VL_RAND_RESET_I(1);
    write_2DC = VL_RAND_RESET_I(1);
    flush_2DC = VL_RAND_RESET_I(1);
    data_valid_fDC = VL_RAND_RESET_I(1);
    __PVT__MEM__DOT__data_read_aligned = VL_RAND_RESET_I(32);
    __PVT__MEM__DOT__MemWriteAddress = VL_RAND_RESET_I(32);
    __PVT__MEM__DOT__WriteData1 = VL_RAND_RESET_I(32);
    __Vdly__Instr1_IFID = VL_RAND_RESET_I(32);
    __Vdly__Instr_PC_IFID = VL_RAND_RESET_I(32);
    __Vdly__Instr_PC_Plus4_IFID = VL_RAND_RESET_I(32);
}

void VMIPS_MIPS::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS_MIPS::~VMIPS_MIPS() {
}

//--------------------
// Internal Methods

void VMIPS_MIPS::_initial__TOP__v__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_initial__TOP__v__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // INITIAL at verilog/MIPS.v:216
    vlSymsp->TOP__v.data_valid_fDC = 1U;
}

VL_INLINE_OPT void VMIPS_MIPS::_sequent__TOP__v__2(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__2\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID = vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID;
    vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = vlSymsp->TOP__v.__PVT__Instr_PC_IFID;
    vlSymsp->TOP__v.__Vdly__Instr1_IFID = vlSymsp->TOP__v.__PVT__Instr1_IFID;
    // ALWAYS at verilog//IF.v:41
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (vlTOPp->CLK) {
	    if (VL_LIKELY((((IData)(vlSymsp->TOP__v__ID.__PVT__FORCE_FREEZE) 
			    | (IData)(vlSymsp->TOP__v__ID.__PVT__syscal1)) 
			   & (~ (IData)(vlSymsp->TOP__v__ID.__PVT__INHIBIT_FREEZE))))) {
		VL_WRITEF("FETCH: Stalling; next request will be %x\n",
			  32,vlSymsp->TOP__v.Instr_address_2IC);
		fflush (stdout);
	    } else {
		vlSymsp->TOP__v.__Vdly__Instr1_IFID 
		    = vlTOPp->Instr1_fIM;
		vlSymsp->TOP__v.__Vdly__Instr_PC_IFID 
		    = vlSymsp->TOP__v.Instr_address_2IC;
		vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID 
		    = ((IData)(4U) + vlSymsp->TOP__v.Instr_address_2IC);
		VL_WRITEF("FETCH:Instr@%x=%x;Next@%x\n",
			  32,vlSymsp->TOP__v.Instr_address_2IC,
			  32,vlTOPp->Instr1_fIM,32,
			  ((IData)(4U) + vlSymsp->TOP__v.Instr_address_2IC));
		VL_WRITEF("FETCH:ReqAlt[%1u]=%x\n",
			  1,vlSymsp->TOP__v__ID.__PVT__Request_Alt_PC,
			  32,vlSymsp->TOP__v__ID.__PVT__Alt_PC);
		fflush (stdout);
	    }
	}
    } else {
	VL_WRITEF("FETCH [RESET] Fetching @%x\n",32,
		  vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID);
	fflush (stdout);
	vlSymsp->TOP__v.__Vdly__Instr1_IFID = 0U;
	vlSymsp->TOP__v.__Vdly__Instr_PC_IFID = 0U;
	vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID = 0xbfc00000U;
    }
    vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID = vlSymsp->TOP__v.__Vdly__Instr_PC_Plus4_IFID;
    vlSymsp->TOP__v.Instr_address_2IC = vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID;
}

VL_INLINE_OPT void VMIPS_MIPS::_sequent__TOP__v__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//MEM.v:326
    if (VL_LIKELY(vlTOPp->RESET)) {
	if (VL_UNLIKELY(vlTOPp->CLK)) {
	    VL_WRITEF("MEM:Instr1_OUT=%x,Instr1_PC_OUT=%x,WriteData1=%x; Write?%1u to %2u\n",
		      32,vlSymsp->TOP__v__EXE.__PVT__Instr1_OUT,
		      32,vlSymsp->TOP__v__EXE.__PVT__Instr1_PC_OUT,
		      32,vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1,
		      1,(IData)(vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT),
		      5,vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT);
	    fflush (stdout);
	    vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB 
		= vlSymsp->TOP__v__EXE.__PVT__WriteRegister1_OUT;
	    vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB 
		= vlSymsp->TOP__v__EXE.__PVT__RegWrite1_OUT;
	    vlSymsp->TOP__v.__PVT__WriteData1_MEMWB 
		= vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1;
	    VL_WRITEF("MEM:data_address_2DM=%x; data_write_2DM(%1u)=%x(%1u); data_read_fDM(%1u)=%x\n",
		      32,vlSymsp->TOP__v.data_address_2DC,
		      1,(IData)(vlSymsp->TOP__v.write_2DC),
		      32,vlSymsp->TOP__v.data_write_2DC,
		      2,(IData)(vlSymsp->TOP__v.data_write_size_2DC),
		      1,vlSymsp->TOP__v.read_2DC,32,
		      vlSymsp->TOP__v.data_read_fDC);
	    fflush (stdout);
	}
    } else {
	VL_WRITEF("MEM:RESET\n");
	fflush (stdout);
	vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB = 0U;
	vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB = 0U;
	vlSymsp->TOP__v.__PVT__WriteData1_MEMWB = 0U;
    }
}

void VMIPS_MIPS::_settle__TOP__v__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.Instr_address_2IC = vlSymsp->TOP__v.__PVT__Instr_PC_Plus4_IFID;
    vlSymsp->TOP__v.data_read_fDC = vlTOPp->data_read_fDM;
}

VL_INLINE_OPT void VMIPS_MIPS::_combo__TOP__v__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.data_read_fDC = vlTOPp->data_read_fDM;
}

VL_INLINE_OPT void VMIPS_MIPS::_sequent__TOP__v__6(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_sequent__TOP__v__6\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.write_2DC = vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT;
    vlSymsp->TOP__v.read_2DC = vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT;
    vlSymsp->TOP__v.__PVT__Instr_PC_IFID = vlSymsp->TOP__v.__Vdly__Instr_PC_IFID;
    vlSymsp->TOP__v.__PVT__Instr1_IFID = vlSymsp->TOP__v.__Vdly__Instr1_IFID;
}

void VMIPS_MIPS::_settle__TOP__v__7(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__7\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.write_2DC = vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT;
    vlSymsp->TOP__v.read_2DC = vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT;
    // ALWAYS at verilog//MEM.v:111
    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
	= vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
	= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_size_2DC = 1U;
				vlSymsp->TOP__v.data_write_2DC 
				    = ((0xff000000U 
					& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					   << 0x18U)) 
				       | (0xffffffU 
					  & vlSymsp->TOP__v.data_read_fDC));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_size_2DC = 2U;
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					       << 0x10U)) 
					   | (0xffffU 
					      & vlSymsp->TOP__v.data_read_fDC));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_size_2DC = 3U;
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffffff00U 
						& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
						   << 8U)) 
					       | (0xffU 
						  & vlSymsp->TOP__v.data_read_fDC));
				    } else {
					vlSymsp->TOP__v.data_write_size_2DC = 0U;
					vlSymsp->TOP__v.data_write_2DC 
					    = vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
				    }
				}
			    }
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_size_2DC = 0U;
				vlSymsp->TOP__v.data_write_2DC 
				    = vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_size_2DC = 3U;
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xff000000U 
					    & vlSymsp->TOP__v.data_read_fDC) 
					   | (0xffffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_size_2DC = 2U;
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffff0000U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | (0xffffU 
						  & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				    } else {
					vlSymsp->TOP__v.data_write_size_2DC = 1U;
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffffff00U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | (0xffU 
						  & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				    }
				}
			    }
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 2U;
			    if ((0U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))) {
				vlSymsp->TOP__v.data_write_2DC 
				    = ((0xffff0000U 
					& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					   << 0x10U)) 
				       | (0xffffU & vlSymsp->TOP__v.data_read_fDC));
			    } else {
				if ((2U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.data_read_fDC) 
					   | (0xffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))
				    ? ((0xff000000U 
					& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					   << 0x18U)) 
				       | (0xffffffU 
					  & vlSymsp->TOP__v.data_read_fDC))
				    : ((1U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))
				        ? ((0xff000000U 
					    & vlSymsp->TOP__v.data_read_fDC) 
					   | ((0xff0000U 
					       & (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
						  << 0x10U)) 
					      | (0xffffU 
						 & vlSymsp->TOP__v.data_read_fDC)))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))
					    ? ((0xffff0000U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | ((0xff00U 
						   & (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
						      << 8U)) 
						  | (0xffU 
						     & vlSymsp->TOP__v.data_read_fDC)))
					    : ((0xffffff00U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | (0xffU 
						  & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)))));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffffff00U 
					& vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)))
				    : ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? ((0xffff0000U 
					    & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
					   | (0xffffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
					    ? ((0xff000000U 
						& vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
					       | (0xffffffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)))
					    : vlSymsp->TOP__v.data_read_fDC)));
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = vlSymsp->TOP__v.data_read_fDC;
			    }
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffffff00U 
					& (vlSymsp->TOP__v.data_read_fDC 
					   << 8U)) 
				       | (0xffU & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT))
				    : ((2U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? ((0xffff0000U 
					    & (vlSymsp->TOP__v.data_read_fDC 
					       << 0x10U)) 
					   | (0xffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT))
				        : ((0xff000000U 
					    & (vlSymsp->TOP__v.data_read_fDC 
					       << 0x18U)) 
					   | (0xffffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT))));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? (0xffffU & (vlSymsp->TOP__v.data_read_fDC 
						  >> 0x10U))
				    : (0xffffU & vlSymsp->TOP__v.data_read_fDC));
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  (vlSymsp->TOP__v.data_read_fDC 
					   >> 0x10U)))
				    : ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0xfU)))) 
					   << 0x10U)) 
				       | (0xffffU & vlSymsp->TOP__v.data_read_fDC)));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						>> 0x18U))
				    : ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? (0xffU & 
					   (vlSymsp->TOP__v.data_read_fDC 
					    >> 0x10U))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
					    ? (0xffU 
					       & (vlSymsp->TOP__v.data_read_fDC 
						  >> 8U))
					    : (0xffU 
					       & vlSymsp->TOP__v.data_read_fDC))));
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 8U)) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)))
				    : ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v.data_read_fDC 
								       >> 0x17U)))) 
					       << 8U)) 
					   | (0xffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
					    ? ((0xffffff00U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v.data_read_fDC 
									   >> 0xfU)))) 
						   << 8U)) 
					       | (0xffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)))
					    : ((0xffffff00U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v.data_read_fDC 
									   >> 7U)))) 
						   << 8U)) 
					       | (0xffU 
						  & vlSymsp->TOP__v.data_read_fDC)))));
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		= vlSymsp->TOP__v.data_read_fDC;
	    vlSymsp->TOP__v.data_write_size_2DC = 0U;
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1 = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT)
						    ? vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned
						    : vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
    vlSymsp->TOP__v.data_write_2DC = vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned;
}

VL_INLINE_OPT void VMIPS_MIPS::_combo__TOP__v__8(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_combo__TOP__v__8\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at verilog//MEM.v:111
    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
	= vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
    vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress 
	= vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT;
    if ((0x20U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_size_2DC = 1U;
				vlSymsp->TOP__v.data_write_2DC 
				    = ((0xff000000U 
					& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					   << 0x18U)) 
				       | (0xffffffU 
					  & vlSymsp->TOP__v.data_read_fDC));
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_size_2DC = 2U;
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					       << 0x10U)) 
					   | (0xffffU 
					      & vlSymsp->TOP__v.data_read_fDC));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_size_2DC = 3U;
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffffff00U 
						& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
						   << 8U)) 
					       | (0xffU 
						  & vlSymsp->TOP__v.data_read_fDC));
				    } else {
					vlSymsp->TOP__v.data_write_size_2DC = 0U;
					vlSymsp->TOP__v.data_write_2DC 
					    = vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
				    }
				}
			    }
			} else {
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.data_write_size_2DC = 0U;
				vlSymsp->TOP__v.data_write_2DC 
				    = vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
			    } else {
				if ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				    vlSymsp->TOP__v.data_write_size_2DC = 3U;
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xff000000U 
					    & vlSymsp->TOP__v.data_read_fDC) 
					   | (0xffffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				} else {
				    if ((2U == (3U 
						& vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
					vlSymsp->TOP__v.data_write_size_2DC = 2U;
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffff0000U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | (0xffffU 
						  & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				    } else {
					vlSymsp->TOP__v.data_write_size_2DC = 1U;
					vlSymsp->TOP__v.data_write_2DC 
					    = ((0xffffff00U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | (0xffU 
						  & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				    }
				}
			    }
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.data_write_2DC 
				= vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT;
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 2U;
			    if ((0U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))) {
				vlSymsp->TOP__v.data_write_2DC 
				    = ((0xffff0000U 
					& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					   << 0x10U)) 
				       | (0xffffU & vlSymsp->TOP__v.data_read_fDC));
			    } else {
				if ((2U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))) {
				    vlSymsp->TOP__v.data_write_2DC 
					= ((0xffff0000U 
					    & vlSymsp->TOP__v.data_read_fDC) 
					   | (0xffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT));
				}
			    }
			}
		    }
		}
	    }
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 1U;
			    vlSymsp->TOP__v.data_write_2DC 
				= ((0U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))
				    ? ((0xff000000U 
					& (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
					   << 0x18U)) 
				       | (0xffffffU 
					  & vlSymsp->TOP__v.data_read_fDC))
				    : ((1U == (3U & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))
				        ? ((0xff000000U 
					    & vlSymsp->TOP__v.data_read_fDC) 
					   | ((0xff0000U 
					       & (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
						  << 0x10U)) 
					      | (0xffffU 
						 & vlSymsp->TOP__v.data_read_fDC)))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress))
					    ? ((0xffff0000U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | ((0xff00U 
						   & (vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT 
						      << 8U)) 
						  | (0xffU 
						     & vlSymsp->TOP__v.data_read_fDC)))
					    : ((0xffffff00U 
						& vlSymsp->TOP__v.data_read_fDC) 
					       | (0xffU 
						  & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT)))));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffffff00U 
					& vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)))
				    : ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? ((0xffff0000U 
					    & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
					   | (0xffffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
					    ? ((0xff000000U 
						& vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT) 
					       | (0xffffffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)))
					    : vlSymsp->TOP__v.data_read_fDC)));
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    if ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))) {
				vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				    = vlSymsp->TOP__v.data_read_fDC;
			    }
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffffff00U 
					& (vlSymsp->TOP__v.data_read_fDC 
					   << 8U)) 
				       | (0xffU & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT))
				    : ((2U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? ((0xffff0000U 
					    & (vlSymsp->TOP__v.data_read_fDC 
					       << 0x10U)) 
					   | (0xffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT))
				        : ((0xff000000U 
					    & (vlSymsp->TOP__v.data_read_fDC 
					       << 0x18U)) 
					   | (0xffffffU 
					      & vlSymsp->TOP__v__EXE.__PVT__MemWriteData1_OUT))));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? (0xffffU & (vlSymsp->TOP__v.data_read_fDC 
						  >> 0x10U))
				    : (0xffffU & vlSymsp->TOP__v.data_read_fDC));
			}
		    }
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 0x10U)) 
				       | (0xffffU & 
					  (vlSymsp->TOP__v.data_read_fDC 
					   >> 0x10U)))
				    : ((0xffff0000U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0xfU)))) 
					   << 0x10U)) 
				       | (0xffffU & vlSymsp->TOP__v.data_read_fDC)));
			} else {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						>> 0x18U))
				    : ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? (0xffU & 
					   (vlSymsp->TOP__v.data_read_fDC 
					    >> 0x10U))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
					    ? (0xffU 
					       & (vlSymsp->TOP__v.data_read_fDC 
						  >> 8U))
					    : (0xffU 
					       & vlSymsp->TOP__v.data_read_fDC))));
			}
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= ((0U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				    ? ((0xffffff00U 
					& (VL_NEGATE_I((IData)(
							       (1U 
								& (vlSymsp->TOP__v.data_read_fDC 
								   >> 0x1fU)))) 
					   << 8U)) 
				       | (0xffU & (vlSymsp->TOP__v.data_read_fDC 
						   >> 0x18U)))
				    : ((1U == (3U & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
				        ? ((0xffffff00U 
					    & (VL_NEGATE_I((IData)(
								   (1U 
								    & (vlSymsp->TOP__v.data_read_fDC 
								       >> 0x17U)))) 
					       << 8U)) 
					   | (0xffU 
					      & (vlSymsp->TOP__v.data_read_fDC 
						 >> 0x10U)))
				        : ((2U == (3U 
						   & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT))
					    ? ((0xffffff00U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v.data_read_fDC 
									   >> 0xfU)))) 
						   << 8U)) 
					       | (0xffU 
						  & (vlSymsp->TOP__v.data_read_fDC 
						     >> 8U)))
					    : ((0xffffff00U 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (vlSymsp->TOP__v.data_read_fDC 
									   >> 7U)))) 
						   << 8U)) 
					       | (0xffU 
						  & vlSymsp->TOP__v.data_read_fDC)))));
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    } else {
	if ((0x10U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
	    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		= vlSymsp->TOP__v.data_read_fDC;
	    vlSymsp->TOP__v.data_write_size_2DC = 0U;
	} else {
	    if ((8U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
		    = vlSymsp->TOP__v.data_read_fDC;
		vlSymsp->TOP__v.data_write_size_2DC = 0U;
	    } else {
		if ((4U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
		    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			= vlSymsp->TOP__v.data_read_fDC;
		    vlSymsp->TOP__v.data_write_size_2DC = 0U;
		} else {
		    if ((2U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
			    = vlSymsp->TOP__v.data_read_fDC;
			vlSymsp->TOP__v.data_write_size_2DC = 0U;
		    } else {
			if ((1U & (IData)(vlSymsp->TOP__v__EXE.__PVT__ALU_Control1_OUT))) {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			} else {
			    vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned 
				= vlSymsp->TOP__v.data_read_fDC;
			    vlSymsp->TOP__v.data_write_size_2DC = 0U;
			}
		    }
		}
	    }
	}
    }
    vlSymsp->TOP__v.__PVT__MEM__DOT__WriteData1 = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemRead1_OUT)
						    ? vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned
						    : vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT);
    vlSymsp->TOP__v.data_write_2DC = vlSymsp->TOP__v.__PVT__MEM__DOT__data_read_aligned;
    vlSymsp->TOP__v.data_address_2DC = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT)
					 ? vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress
					 : (0xfffffffcU 
					    & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT));
}

void VMIPS_MIPS::_settle__TOP__v__9(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("      VMIPS_MIPS::_settle__TOP__v__9\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v.data_address_2DC = ((IData)(vlSymsp->TOP__v__EXE.__PVT__MemWrite1_OUT)
					 ? vlSymsp->TOP__v.__PVT__MEM__DOT__MemWriteAddress
					 : (0xfffffffcU 
					    & vlSymsp->TOP__v__EXE.__PVT__ALU_result1_OUT));
}
