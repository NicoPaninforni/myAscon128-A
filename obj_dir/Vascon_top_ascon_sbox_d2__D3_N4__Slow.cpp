// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top_ascon_sbox_d2__D3_N4.h"

void Vascon_top_ascon_sbox_d2__D3_N4___ctor_var_reset(Vascon_top_ascon_sbox_d2__D3_N4* vlSelf);

Vascon_top_ascon_sbox_d2__D3_N4::Vascon_top_ascon_sbox_d2__D3_N4(Vascon_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vascon_top_ascon_sbox_d2__D3_N4___ctor_var_reset(this);
}

void Vascon_top_ascon_sbox_d2__D3_N4::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vascon_top_ascon_sbox_d2__D3_N4::~Vascon_top_ascon_sbox_d2__D3_N4() {
}
