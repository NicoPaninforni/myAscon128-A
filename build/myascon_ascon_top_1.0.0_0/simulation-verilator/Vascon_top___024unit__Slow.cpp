// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024unit.h"
#include "Vascon_top__Syms.h"

//==========


void Vascon_top___024unit___ctor_var_reset(Vascon_top___024unit* vlSelf);

Vascon_top___024unit::Vascon_top___024unit(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset structure values
    Vascon_top___024unit___ctor_var_reset(this);
}

void Vascon_top___024unit::__Vconfigure(Vascon_top__Syms* _vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->vlSymsp = _vlSymsp;
}

Vascon_top___024unit::~Vascon_top___024unit() {
}

void Vascon_top___024unit___ctor_var_reset(Vascon_top___024unit* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vascon_top___024unit___ctor_var_reset\n"); );
}
