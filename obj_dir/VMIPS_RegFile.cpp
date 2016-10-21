// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS_RegFile.h"     // For This
#include "VMIPS__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS_RegFile) {
    // Reset internal values
    // Reset structure values
    __PVT__CLK = VL_RAND_RESET_I(1);
    __PVT__RESET = VL_RAND_RESET_I(1);
    __PVT__RegA1 = VL_RAND_RESET_I(5);
    __PVT__RegB1 = VL_RAND_RESET_I(5);
    __PVT__RegC1 = VL_RAND_RESET_I(5);
    __PVT__DataA1 = VL_RAND_RESET_I(32);
    __PVT__DataB1 = VL_RAND_RESET_I(32);
    __PVT__DataC1 = VL_RAND_RESET_I(32);
    __PVT__WriteReg1 = VL_RAND_RESET_I(5);
    __PVT__WriteData1 = VL_RAND_RESET_I(32);
    __PVT__Write1 = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<32; ++__Vi0) {
	    Reg[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __Vdlyvdim0__Reg__v0 = VL_RAND_RESET_I(5);
    __Vdlyvval__Reg__v0 = VL_RAND_RESET_I(32);
    __Vdlyvset__Reg__v0 = VL_RAND_RESET_I(1);
    __Vdlyvset__Reg__v1 = VL_RAND_RESET_I(1);
}

void VMIPS_RegFile::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS_RegFile::~VMIPS_RegFile() {
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VMIPS_RegFile::_sequent__TOP__v__ID__RegFile__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VMIPS_RegFile::_sequent__TOP__v__ID__RegFile__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID__RegFile.__Vdlyvset__Reg__v0 = 0U;
    vlSymsp->TOP__v__ID__RegFile.__Vdlyvset__Reg__v1 = 0U;
    // ALWAYS at verilog//RegFile.v:50
    if (VL_UNLIKELY(vlTOPp->RESET)) {
	if (vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB) {
	    if (VL_UNLIKELY((0U == (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB)))) {
		VL_WRITEF("Writing to zero not allowed\n");
		fflush (stdout);
	    }
	    if ((0U != (IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB))) {
		vlSymsp->TOP__v__ID__RegFile.__Vdlyvval__Reg__v0 
		    = vlSymsp->TOP__v.__PVT__WriteData1_MEMWB;
		vlSymsp->TOP__v__ID__RegFile.__Vdlyvset__Reg__v0 = 1U;
		vlSymsp->TOP__v__ID__RegFile.__Vdlyvdim0__Reg__v0 
		    = vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB;
	    }
	}
	VL_WRITEF("IDWB:%1u?Reg[%2u]=%x\n",1,vlSymsp->TOP__v.__PVT__RegWrite1_MEMWB,
		  5,(IData)(vlSymsp->TOP__v.__PVT__WriteRegister1_MEMWB),
		  32,vlSymsp->TOP__v.__PVT__WriteData1_MEMWB);
	fflush (stdout);
    } else {
	vlSymsp->TOP__v__ID__RegFile.__Vdlyvset__Reg__v1 = 1U;
    }
    // ALWAYSPOST at verilog//RegFile.v:91
    if (vlSymsp->TOP__v__ID__RegFile.__Vdlyvset__Reg__v0) {
	vlSymsp->TOP__v__ID__RegFile.Reg[vlSymsp->TOP__v__ID__RegFile.__Vdlyvdim0__Reg__v0] 
	    = vlSymsp->TOP__v__ID__RegFile.__Vdlyvval__Reg__v0;
    }
    if (vlSymsp->TOP__v__ID__RegFile.__Vdlyvset__Reg__v1) {
	vlSymsp->TOP__v__ID__RegFile.Reg[0U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[1U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[2U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[3U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[4U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[5U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[6U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[7U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[8U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[9U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0xaU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0xbU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0xcU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0xdU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0xeU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0xfU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x10U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x11U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x12U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x13U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x14U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x15U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x16U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x17U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x18U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x19U] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x1aU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x1bU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x1cU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x1dU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x1eU] = 0U;
	vlSymsp->TOP__v__ID__RegFile.Reg[0x1fU] = 0U;
    }
}

VL_INLINE_OPT void VMIPS_RegFile::_sequent__TOP__v__ID__RegFile__2(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VMIPS_RegFile::_sequent__TOP__v__ID__RegFile__2\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID__RegFile.__PVT__DataB1 = vlSymsp->TOP__v__ID__RegFile.Reg
	[(0x1fU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
		   >> 0x10U))];
    vlSymsp->TOP__v__ID__RegFile.__PVT__DataA1 = vlSymsp->TOP__v__ID__RegFile.Reg
	[(0x1fU & (vlSymsp->TOP__v.__PVT__Instr1_IFID 
		   >> 0x15U))];
}

VL_INLINE_OPT void VMIPS_RegFile::_sequent__TOP__v__ID__RegFile__4(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("          VMIPS_RegFile::_sequent__TOP__v__ID__RegFile__4\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v__ID__RegFile.__PVT__DataC1 = vlSymsp->TOP__v__ID__RegFile.Reg
	[vlSymsp->TOP__v__ID.__PVT__WriteRegister1];
}
