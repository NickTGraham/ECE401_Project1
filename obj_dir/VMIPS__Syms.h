// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header

#ifndef _VMIPS__Syms_H_
#define _VMIPS__Syms_H_

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VMIPS.h"
#include "VMIPS_MIPS.h"
#include "VMIPS_ID.h"
#include "VMIPS_EXE.h"
#include "VMIPS_RegFile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS
class VMIPS__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool	__Vm_activity;		///< Used by trace routines to determine change occurred
    bool	__Vm_didInit;
    //char	__VpadToAlign10[6];
    
    // SUBCELL STATE
    VMIPS*                         TOPp;
    VMIPS_MIPS                     TOP__v;
    VMIPS_EXE                      TOP__v__EXE;
    VMIPS_ID                       TOP__v__ID;
    VMIPS_RegFile                  TOP__v__ID__RegFile;
    
    // COVERAGE
    
    // SCOPE NAMES
    VerilatedScope __Vscope_v;
    VerilatedScope __Vscope_v__EXE;
    VerilatedScope __Vscope_v__ID__RegFile;
    
    // CREATORS
    VMIPS__Syms(VMIPS* topp, const char* namep);
    ~VMIPS__Syms() {};
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    inline bool getClearActivity() { bool r=__Vm_activity; __Vm_activity=false; return r;}
    
} VL_ATTR_ALIGNED(64);

#endif  /*guard*/
