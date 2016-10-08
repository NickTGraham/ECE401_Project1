// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMIPS.h for the primary calling header

#ifndef _VMIPS_RegFile_H_
#define _VMIPS_RegFile_H_

#include "verilated.h"
#include "VMIPS__Dpi.h"

class VMIPS__Syms;

//----------

VL_MODULE(VMIPS_RegFile) {
  public:
    // CELLS
    
    // PORTS
    VL_IN8(__PVT__CLK,0,0);
    VL_IN8(__PVT__RESET,0,0);
    VL_IN8(__PVT__RegA1,4,0);
    VL_IN8(__PVT__RegB1,4,0);
    VL_IN8(__PVT__RegC1,4,0);
    VL_IN8(__PVT__WriteReg1,4,0);
    VL_IN8(__PVT__Write1,0,0);
    //char	__VpadToAlign7[1];
    VL_OUT(__PVT__DataA1,31,0);
    VL_OUT(__PVT__DataB1,31,0);
    VL_OUT(__PVT__DataC1,31,0);
    VL_IN(__PVT__WriteData1,31,0);
    
    // LOCAL SIGNALS
    //char	__VpadToAlign28[4];
    VL_SIG(Reg[32],31,0);
    
    // LOCAL VARIABLES
    VL_SIG8(__Vdlyvset__Reg__v0,0,0);
    //char	__VpadToAlign165[3];
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign172[4];
    VMIPS__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMIPS_RegFile& operator= (const VMIPS_RegFile&);	///< Copying not allowed
    VMIPS_RegFile(const VMIPS_RegFile&);	///< Copying not allowed
  public:
    VMIPS_RegFile(const char* name="TOP");
    ~VMIPS_RegFile();
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMIPS__Syms* symsp, bool first);
    static void	_sequent__TOP__v__ID__RegFile__1(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__ID__RegFile__2(VMIPS__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__v__ID__RegFile__4(VMIPS__Syms* __restrict vlSymsp);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
