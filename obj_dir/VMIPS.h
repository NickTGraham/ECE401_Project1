// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMIPS_H_
#define _VMIPS_H_

#include "verilated.h"
#include "VMIPS__Dpi.h"

class VMIPS__Syms;
class VMIPS_MIPS;

//----------

VL_MODULE(VMIPS) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    VMIPS_MIPS*        	v;
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(RESET,0,0);
    VL_IN8(CLK,0,0);
    VL_OUT8(MemRead_2DM,0,0);
    VL_OUT8(MemWrite_2DM,0,0);
    VL_OUT8(data_write_size_2DM,1,0);
    VL_OUT8(dBlkRead,0,0);
    VL_OUT8(dBlkWrite,0,0);
    VL_IN8(block_read_fDM_valid,0,0);
    VL_IN8(block_write_fDM_valid,0,0);
    VL_IN8(block_read_fIM_valid,0,0);
    VL_OUT8(iBlkRead,0,0);
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
    // Internals; generally not touched by application code
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__CLK,0,0);
    VL_SIG8(__Vclklast__TOP__RESET,0,0);
    //char	__VpadToAlign146[2];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMIPS__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VMIPS& operator= (const VMIPS&);	///< Copying not allowed
    VMIPS(const VMIPS&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VMIPS(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMIPS();
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VMIPS__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMIPS__Syms* symsp, bool first);
  private:
    static QData	_change_request(VMIPS__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(VMIPS__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(VMIPS__Syms* __restrict vlSymsp);
    static void	_combo__TOP__9(VMIPS__Syms* __restrict vlSymsp);
    static void	_eval(VMIPS__Syms* __restrict vlSymsp);
    static void	_eval_initial(VMIPS__Syms* __restrict vlSymsp);
    static void	_eval_settle(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__10(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__3(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__6(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__1(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VMIPS__Syms* __restrict vlSymsp);
    static void	_settle__TOP__8(VMIPS__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
