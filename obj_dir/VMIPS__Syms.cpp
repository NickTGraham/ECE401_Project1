// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VMIPS__Syms.h"
#include "VMIPS.h"
#include "VMIPS_MIPS.h"
#include "VMIPS_ID.h"
#include "VMIPS_EXE.h"
#include "VMIPS_RegFile.h"

// FUNCTIONS
VMIPS__Syms::VMIPS__Syms(VMIPS* topp, const char* namep)
	// Setup locals
	: __Vm_namep(namep)
	, __Vm_activity(false)
	, __Vm_didInit(false)
	// Setup submodule names
	, TOP__v                         (Verilated::catName(topp->name(),"v"))
	, TOP__v__EXE                    (Verilated::catName(topp->name(),"v.EXE"))
	, TOP__v__ID                     (Verilated::catName(topp->name(),"v.ID"))
	, TOP__v__ID__RegFile            (Verilated::catName(topp->name(),"v.ID.RegFile"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->v                         = &TOP__v;
    TOPp->v->EXE                    = &TOP__v__EXE;
    TOPp->v->ID                     = &TOP__v__ID;
    TOPp->v->ID->RegFile            = &TOP__v__ID__RegFile;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__v.__Vconfigure(this, true);
    TOP__v__EXE.__Vconfigure(this, true);
    TOP__v__ID.__Vconfigure(this, true);
    TOP__v__ID__RegFile.__Vconfigure(this, true);
    // Setup scope names
    __Vscope_v.configure(this,name(),"v");
    __Vscope_v__EXE.configure(this,name(),"v.EXE");
    __Vscope_v__ID__RegFile.configure(this,name(),"v.ID.RegFile");
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
	__Vscope_v.varInsert(__Vfinal,"Instr_address_2IC", &(TOP__v.Instr_address_2IC), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v.varInsert(__Vfinal,"data_address_2DC", &(TOP__v.data_address_2DC), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v.varInsert(__Vfinal,"data_read_fDC", &(TOP__v.data_read_fDC), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v.varInsert(__Vfinal,"data_valid_fDC", &(TOP__v.data_valid_fDC), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"data_write_2DC", &(TOP__v.data_write_2DC), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v.varInsert(__Vfinal,"data_write_size_2DC", &(TOP__v.data_write_size_2DC), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,1 ,1,0);
	__Vscope_v.varInsert(__Vfinal,"flush_2DC", &(TOP__v.flush_2DC), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"read_2DC", &(TOP__v.read_2DC), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_v.varInsert(__Vfinal,"write_2DC", &(TOP__v.write_2DC), VLVT_UINT8,VLVD_NODIR|VLVF_PUB_RW,0);
	__Vscope_v__EXE.varInsert(__Vfinal,"HI", &(TOP__v__EXE.HI), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__EXE.varInsert(__Vfinal,"LO", &(TOP__v__EXE.LO), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,1 ,31,0);
	__Vscope_v__ID__RegFile.varInsert(__Vfinal,"Reg", &(TOP__v__ID__RegFile.Reg), VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,31,0);
    }
}
