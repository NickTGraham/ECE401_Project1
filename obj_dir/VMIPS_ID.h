// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS.h for the primary calling header

#ifndef _VMIPS_ID_H_
#define _VMIPS_ID_H_

#include "verilated.h"
#include "VMIPS__Dpi.h"

class VMIPS__Syms;
class VMIPS_RegFile;

//----------

VL_MODULE(VMIPS_ID) {
  public:
    // CELLS
    VMIPS_RegFile*     	RegFile;
    
    // PORTS
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__RESET,0,0);
    VL_IN8(__PVT__WriteRegister1_IN,4,0);
    VL_IN8(__PVT__RegWrite1_IN,0,0);
    VL_OUT8(__PVT__Request_Alt_PC,0,0);
    VL_OUT8(__PVT__ReadRegisterA1_OUT,4,0);
    VL_OUT8(__PVT__ReadRegisterB1_OUT,4,0);
    VL_OUT8(__PVT__WriteRegister1_OUT,4,0);
    VL_OUT8(__PVT__RegWrite1_OUT,0,0);
    VL_OUT8(__PVT__ALU_Control1_OUT,5,0);
    VL_OUT8(__PVT__MemRead1_OUT,0,0);
    VL_OUT8(__PVT__MemWrite1_OUT,0,0);
    VL_OUT8(__PVT__ShiftAmount1_OUT,4,0);
    VL_IN8(__PVT__Branch_JR_select_A_FU,1,0);
    VL_IN8(__PVT__Branch_JR_select_B_FU,1,0);
    VL_OUT8(__PVT__reg_write,0,0);
    VL_OUT8(__PVT__link_out,0,0);
    VL_OUT8(__PVT__branch_out,0,0);
    VL_OUT8(__PVT__jump_out,0,0);
    VL_OUT8(__PVT__jump_reg_out,0,0);
    VL_OUT8(__PVT__use_rd,0,0);
    VL_OUT8(__PVT__store_fu,0,0);
    VL_OUT8(__PVT__SYS,0,0);
    VL_OUT8(__PVT__WANT_FREEZE,0,0);
    VL_IN(__PVT__Instr1_IN,31,0);
    VL_IN(__PVT__Instr_PC_IN,31,0);
    VL_IN(__PVT__Instr_PC_Plus4_IN,31,0);
    VL_IN(__PVT__WriteData1_IN,31,0);
    VL_OUT(__PVT__Alt_PC,31,0);
    VL_OUT(__PVT__Instr1_OUT,31,0);
    VL_OUT(__PVT__Instr1_PC_OUT,31,0);
    VL_OUT(__PVT__OperandA1_OUT,31,0);
    VL_OUT(__PVT__OperandB1_OUT,31,0);
    VL_OUT(__PVT__MemWriteData1_OUT,31,0);
    VL_IN(__PVT__Fwd_ALU_Result,31,0);
    VL_IN(__PVT__Fwd_Mem_result,31,0);
    VL_OUT(__PVT__Fwd_Wb_result,31,0);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__ALU_control1,5,0);
    VL_SIG8(__PVT__link1,0,0);
    VL_SIG8(__PVT__RegDst1,0,0);
    VL_SIG8(__PVT__jump1,0,0);
    VL_SIG8(__PVT__branch1,0,0);
    VL_SIG8(__PVT__MemRead1,0,0);
    VL_SIG8(__PVT__MemWrite1,0,0);
    VL_SIG8(__PVT__ALUSrc1,0,0);
    VL_SIG8(__PVT__RegWrite1,0,0);
    VL_SIG8(__PVT__jumpRegister_Flag1,0,0);
    VL_SIG8(__PVT__sign_or_zero_Flag1,0,0);
    VL_SIG8(__PVT__syscal1,0,0);
    VL_SIG8(__PVT__Request_Alt_PC1,0,0);
    VL_SIG8(__PVT__RegA1,4,0);
    VL_SIG8(__PVT__RegB1,4,0);
    VL_SIG8(__PVT__WriteRegister1,4,0);
    VL_SIG8(__PVT__syscall_bubble_counter,2,0);
    //char	__VpadToAlign97[3];
    VL_SIG(__PVT__Alt_PC1,31,0);
    VL_SIG(__PVT__OpA1,31,0);
    VL_SIG(__PVT__OpB1,31,0);
    VL_SIG(__PVT__rtval1,31,0);
    VL_SIG(__PVT__rsval_jump1,31,0);
    VL_SIG(__PVT__NIA1__DOT__jumpDestination_immediate,31,0);
    VL_SIG(__PVT__NIA1__DOT__branchDestination_immediate,31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdly__Request_Alt_PC,0,0);
    VL_SIG8(__Vdly__syscall_bubble_counter,2,0);
    //char	__VpadToAlign134[2];
    VL_SIG(__Vdly__Alt_PC,31,0);
    
    // INTERNAL VARIABLES
  private:
    VMIPS__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMIPS_ID& operator= (const VMIPS_ID&);	///< Copying not allowed
    VMIPS_ID(const VMIPS_ID&);	///< Copying not allowed
  public:
    VMIPS_ID(const char* name="TOP");
    ~VMIPS_ID();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS__Syms* symsp, bool first);
    static void	_combo__TOP__v__ID__10(VMIPS__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__ID__12(VMIPS__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__ID__7(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__ID__1(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__ID__3(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__ID__4(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__ID__8(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__ID__11(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__ID__5(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__ID__6(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__ID__9(VMIPS__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
