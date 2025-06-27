// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vascon_top.h for the primary calling header

#ifndef VERILATED_VASCON_TOP___024UNIT_H_
#define VERILATED_VASCON_TOP___024UNIT_H_  // guard

#include "verilated_heavy.h"

//==========

class Vascon_top__Syms;
class Vascon_top_VerilatedVcd;


//----------

VL_MODULE(Vascon_top___024unit) {
  public:

    // INTERNAL VARIABLES
    Vascon_top__Syms* vlSymsp;  // Symbol table

    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vascon_top___024unit);  ///< Copying not allowed
  public:
    Vascon_top___024unit(const char* name);
    ~Vascon_top___024unit();

    // INTERNAL METHODS
    void __Vconfigure(Vascon_top__Syms* symsp, bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
