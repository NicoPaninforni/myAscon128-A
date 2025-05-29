// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vascon_top__pch.h"
#include "Vascon_top.h"
#include "Vascon_top___024root.h"

// FUNCTIONS
Vascon_top__Syms::~Vascon_top__Syms()
{
}

Vascon_top__Syms::Vascon_top__Syms(VerilatedContext* contextp, const char* namep, Vascon_top* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
        // Check resources
        Verilated::stackCheck(6581);
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
}
