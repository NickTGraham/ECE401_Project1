// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS.h for the primary calling header

#ifndef _VMIPS_MIPS_H_
#define _VMIPS_MIPS_H_

#include "verilated.h"
#include "VMIPS__Dpi.h"

class VMIPS__Syms;
class VMIPS_ID;
class VMIPS_EXE;

//----------

VL_MODULE(VMIPS_MIPS) {
  public:
    // CELLS
    VMIPS_ID*          	ID;
    VMIPS_EXE*         	EXE;
    
    // PORTS
    VL_IN8(RESET,0,0);
    VL_IN8(CLK,0,0);
    VL_OUT8(MemRead_2DM,0,0);
    VL_OUT8(MemWrite_2DM,0,0);
    VL_OUT8(data_write_size_2DM,1,0);
    VL_OUT8(__PVT__dBlkRead,0,0);
    VL_OUT8(__PVT__dBlkWrite,0,0);
    VL_IN8(block_read_fDM_valid,0,0);
    VL_IN8(block_write_fDM_valid,0,0);
    VL_IN8(block_read_fIM_valid,0,0);
    VL_OUT8(__PVT__iBlkRead,0,0);
    VL_OUT8(SYS,0,0);
    VL_OUT(data_address_2DM,31,0);
    VL_IN(data_read_fDM,31,0);
    VL_OUT(data_write_2DM,31,0);
    VL_INW(block_read_fDM,255,0,8);
    VL_OUTW(block_write_2DM,255,0,8);
    VL_OUT(Instr_address_2IM,31,0);
    VL_IN(Instr1_fIM,31,0);
    VL_IN(Instr2_fIM,31,0);
    //char	__VpadToAlign100[4];
    VL_INW(block_read_fIM,255,0,8);
    
    // LOCAL SIGNALS
    VL_SIG8(__PVT__WriteRegister1_MEMWB,4,0);
    VL_SIG8(__PVT__RegWrite1_MEMWB,0,0);
    VL_SIG8(data_write_size_2DC,1,0);
    VL_SIG8(read_2DC,0,0);
    VL_SIG8(write_2DC,0,0);
    VL_SIG8(flush_2DC,0,0);
    VL_SIG8(data_valid_fDC,0,0);
    //char	__VpadToAlign147[1];
    VL_SIG(__PVT__Instr1_IFID,31,0);
    VL_SIG(__PVT__Instr_PC_IFID,31,0);
    VL_SIG(__PVT__Instr_PC_Plus4_IFID,31,0);
    VL_SIG(Instr_address_2IC,31,0);
    VL_SIG(__PVT__WriteData1_MEMWB,31,0);
    VL_SIG(data_write_2DC,31,0);
    VL_SIG(data_address_2DC,31,0);
    VL_SIG(data_read_fDC,31,0);
    VL_SIG(__PVT__MEM__DOT__data_read_aligned,31,0);
    VL_SIG(__PVT__MEM__DOT__WriteData1,31,0);
    
    // LOCAL VARIABLES
    VL_SIG(__Vdly__Instr1_IFID,31,0);
    VL_SIG(__Vdly__Instr_PC_IFID,31,0);
    VL_SIG(__Vdly__Instr_PC_Plus4_IFID,31,0);
    
    // INTERNAL VARIABLES
  private:
    VMIPS__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMIPS_MIPS& operator= (const VMIPS_MIPS&);	///< Copying not allowed
    VMIPS_MIPS(const VMIPS_MIPS&);	///< Copying not allowed
  public:
    VMIPS_MIPS(const char* name="TOP");
    ~VMIPS_MIPS();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS__Syms* symsp, bool first);
    static void	_combo__TOP__v__4(VMIPS__Syms* __restrict vlSymsp);
    static void	_combo__TOP__v__8(VMIPS__Syms* __restrict vlSymsp);
    static void	_initial__TOP__v__1(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__2(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__3(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__6(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__v__7(VMIPS__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
