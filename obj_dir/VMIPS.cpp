// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMIPS.h for the primary calling header

#include "VMIPS.h"             // For This
#include "VMIPS__Syms.h"

#include "verilated_dpi.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMIPS) {
    VMIPS__Syms* __restrict vlSymsp = __VlSymsp = new VMIPS__Syms(this, name());
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    VL_CELL (v, VMIPS_MIPS);
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
    dBlkRead = VL_RAND_RESET_I(1);
    dBlkWrite = VL_RAND_RESET_I(1);
    block_read_fDM_valid = VL_RAND_RESET_I(1);
    block_write_fDM_valid = VL_RAND_RESET_I(1);
    Instr_address_2IM = VL_RAND_RESET_I(32);
    Instr1_fIM = VL_RAND_RESET_I(32);
    Instr2_fIM = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(256,block_read_fIM);
    block_read_fIM_valid = VL_RAND_RESET_I(1);
    iBlkRead = VL_RAND_RESET_I(1);
    SYS = VL_RAND_RESET_I(1);
    __Vclklast__TOP__CLK = VL_RAND_RESET_I(1);
    __Vclklast__TOP__RESET = VL_RAND_RESET_I(1);
}

void VMIPS::__Vconfigure(VMIPS__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMIPS::~VMIPS() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMIPS::eval() {
    VMIPS__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VMIPS::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VMIPS::_eval_initial_loop(VMIPS__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

void VMIPS::_settle__TOP__1(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_settle__TOP__1\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->dBlkRead = 0U;
    vlTOPp->dBlkWrite = 0U;
    vlTOPp->iBlkRead = 0U;
    vlTOPp->block_write_2DM[0U] = vlTOPp->block_read_fDM[0U];
    vlTOPp->block_write_2DM[1U] = vlTOPp->block_read_fDM[1U];
    vlTOPp->block_write_2DM[2U] = vlTOPp->block_read_fDM[2U];
    vlTOPp->block_write_2DM[3U] = vlTOPp->block_read_fDM[3U];
    vlTOPp->block_write_2DM[4U] = vlTOPp->block_read_fDM[4U];
    vlTOPp->block_write_2DM[5U] = vlTOPp->block_read_fDM[5U];
    vlTOPp->block_write_2DM[6U] = vlTOPp->block_read_fDM[6U];
    vlTOPp->block_write_2DM[7U] = vlTOPp->block_read_fDM[7U];
}

VL_INLINE_OPT void VMIPS::_combo__TOP__2(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_combo__TOP__2\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->block_write_2DM[0U] = vlTOPp->block_read_fDM[0U];
    vlTOPp->block_write_2DM[1U] = vlTOPp->block_read_fDM[1U];
    vlTOPp->block_write_2DM[2U] = vlTOPp->block_read_fDM[2U];
    vlTOPp->block_write_2DM[3U] = vlTOPp->block_read_fDM[3U];
    vlTOPp->block_write_2DM[4U] = vlTOPp->block_read_fDM[4U];
    vlTOPp->block_write_2DM[5U] = vlTOPp->block_read_fDM[5U];
    vlTOPp->block_write_2DM[6U] = vlTOPp->block_read_fDM[6U];
    vlTOPp->block_write_2DM[7U] = vlTOPp->block_read_fDM[7U];
}

VL_INLINE_OPT void VMIPS::_sequent__TOP__3(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_sequent__TOP__3\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SYS = vlSymsp->TOP__v__ID.__PVT__SYS;
}

VL_INLINE_OPT void VMIPS::_settle__TOP__5(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_settle__TOP__5\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Instr_address_2IM = vlSymsp->TOP__v.Instr_address_2IC;
    vlTOPp->MemWrite_2DM = vlSymsp->TOP__v.write_2DC;
    vlTOPp->MemRead_2DM = vlSymsp->TOP__v.read_2DC;
}

VL_INLINE_OPT void VMIPS::_settle__TOP__7(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_settle__TOP__7\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_write_size_2DM = vlSymsp->TOP__v.data_write_size_2DC;
    vlTOPp->data_write_2DM = vlSymsp->TOP__v.data_write_2DC;
}

VL_INLINE_OPT void VMIPS::_combo__TOP__9(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_combo__TOP__9\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->data_address_2DM = vlSymsp->TOP__v.data_address_2DC;
}

void VMIPS::_eval(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_eval\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET)) & (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v._sequent__TOP__v__2(vlSymsp);
	vlSymsp->TOP__v__ID__RegFile._sequent__TOP__v__ID__RegFile__1(vlSymsp);
	vlSymsp->TOP__v__ID._sequent__TOP__v__ID__1(vlSymsp);
	vlSymsp->TOP__v__EXE._sequent__TOP__v__EXE__1(vlSymsp);
    }
    if (((~ (IData)(vlTOPp->CLK)) & (IData)(vlTOPp->__Vclklast__TOP__CLK))) {
	vlSymsp->TOP__v__EXE._sequent__TOP__v__EXE__2(vlSymsp);
    }
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET)) & (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlSymsp->TOP__v__EXE._sequent__TOP__v__EXE__3(vlSymsp);
	vlSymsp->TOP__v__ID._sequent__TOP__v__ID__3(vlSymsp);
	vlSymsp->TOP__v__EXE._sequent__TOP__v__EXE__4(vlSymsp);
	vlSymsp->TOP__v._sequent__TOP__v__3(vlSymsp);
	vlTOPp->_sequent__TOP__3(vlSymsp);
	vlSymsp->TOP__v__ID._sequent__TOP__v__ID__4(vlSymsp);
	vlSymsp->TOP__v__ID__RegFile._sequent__TOP__v__ID__RegFile__2(vlSymsp);
	vlSymsp->TOP__v__EXE._sequent__TOP__v__EXE__5(vlSymsp);
    }
    vlSymsp->TOP__v._combo__TOP__v__5(vlSymsp);
    if ((((IData)(vlTOPp->CLK) & (~ (IData)(vlTOPp->__Vclklast__TOP__CLK))) 
	 | ((~ (IData)(vlTOPp->RESET)) & (IData)(vlTOPp->__Vclklast__TOP__RESET)))) {
	vlTOPp->_settle__TOP__5(vlSymsp);
	vlSymsp->TOP__v__ID._sequent__TOP__v__ID__7(vlSymsp);
	vlSymsp->TOP__v__EXE._sequent__TOP__v__EXE__7(vlSymsp);
	vlSymsp->TOP__v__ID__RegFile._sequent__TOP__v__ID__RegFile__4(vlSymsp);
    }
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlSymsp->TOP__v._combo__TOP__v__7(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__CLK = vlTOPp->CLK;
    vlTOPp->__Vclklast__TOP__RESET = vlTOPp->RESET;
}

void VMIPS::_eval_initial(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_eval_initial\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__v._initial__TOP__v__1(vlSymsp);
}

void VMIPS::final() {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::final\n"); );
    // Variables
    VMIPS__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMIPS::_eval_settle(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_eval_settle\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__1(vlSymsp);
    vlTOPp->_sequent__TOP__3(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__4(vlSymsp);
    vlSymsp->TOP__v__ID._settle__TOP__v__ID__5(vlSymsp);
    vlSymsp->TOP__v__ID__RegFile._sequent__TOP__v__ID__RegFile__2(vlSymsp);
    vlSymsp->TOP__v__EXE._settle__TOP__v__EXE__6(vlSymsp);
    vlTOPp->_settle__TOP__5(vlSymsp);
    vlSymsp->TOP__v__ID._settle__TOP__v__ID__6(vlSymsp);
    vlSymsp->TOP__v._settle__TOP__v__6(vlSymsp);
    vlSymsp->TOP__v__ID__RegFile._sequent__TOP__v__ID__RegFile__4(vlSymsp);
    vlSymsp->TOP__v__ID._settle__TOP__v__ID__8(vlSymsp);
    vlTOPp->_settle__TOP__7(vlSymsp);
    vlTOPp->_combo__TOP__9(vlSymsp);
}

VL_INLINE_OPT QData VMIPS::_change_request(VMIPS__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMIPS::_change_request\n"); );
    VMIPS* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}
