// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top__Syms.h"
#include "Vascon_top___024root.h"

// Parameter definitions for Vascon_top___024root
constexpr VlUnpacked<IData/*31:0*/, 5> Vascon_top___024root::ascon_top__DOT__rotations_a;
constexpr VlUnpacked<IData/*31:0*/, 5> Vascon_top___024root::ascon_top__DOT__rotations_b;


void Vascon_top___024root___ctor_var_reset(Vascon_top___024root* vlSelf);

Vascon_top___024root::Vascon_top___024root(Vascon_top__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vascon_top___024root___ctor_var_reset(this);
}

void Vascon_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vascon_top___024root::~Vascon_top___024root() {
}
