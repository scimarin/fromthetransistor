// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vmux__Syms.h"


void Vmux::traceChgTop0(void* userp, VerilatedVcd* tracep) {
    Vmux__Syms* __restrict vlSymsp = static_cast<Vmux__Syms*>(userp);
    Vmux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        vlTOPp->traceChgSub0(userp, tracep);
    }
}

void Vmux::traceChgSub0(void* userp, VerilatedVcd* tracep) {
    Vmux__Syms* __restrict vlSymsp = static_cast<Vmux__Syms*>(userp);
    Vmux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        tracep->chgCData(oldp+0,(vlTOPp->in),4);
        tracep->chgCData(oldp+1,(vlTOPp->sel),2);
        tracep->chgBit(oldp+2,(vlTOPp->out));
    }
}

void Vmux::traceCleanup(void* userp, VerilatedVcd* /*unused*/) {
    Vmux__Syms* __restrict vlSymsp = static_cast<Vmux__Syms*>(userp);
    Vmux* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
    }
}
