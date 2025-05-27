// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vascon_top.h for the primary calling header

#ifndef VERILATED_VASCON_TOP_ASCON_SBOX_D2__D3_N4_H_
#define VERILATED_VASCON_TOP_ASCON_SBOX_D2__D3_N4_H_  // guard

#include "verilated.h"


class Vascon_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vascon_top_ascon_sbox_d2__D3_N4 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(fresh_r,5,0);
    VL_IN8(sel_masked_round,0,0);
    CData/*3:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi;
    CData/*3:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
    CData/*3:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2;
    CData/*3:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r;
    CData/*3:0*/ __PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    CData/*0:0*/ __Vlvbound_h70e7ebe7__0;
    CData/*0:0*/ __Vlvbound_hece044c0__0;
    VL_IN(x_in,19,0);
    VL_OUT(x_out,19,0);
    VL_OUT(x_out_noMask,19,0);
    IData/*31:0*/ __PVT__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__0__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__1__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__2__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__3__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__4__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__5__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__6__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__7__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__8__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__9__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__10__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__11__unnamedblk9__DOT__i;
    IData/*31:0*/ __Vfunc_xor_tree__12__unnamedblk9__DOT__i;
    VlUnpacked<CData/*3:0*/, 5> __PVT__x;
    VlUnpacked<SData/*15:0*/, 5> __PVT__and_result_bank;
    VlUnpacked<SData/*15:0*/, 5> __PVT__and_result_reg;
    VlUnpacked<CData/*3:0*/, 5> __PVT__y;
    VlUnpacked<CData/*3:0*/, 5> __PVT__y_noMask;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__0__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__1__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__2__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__3__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__4__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__5__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__6__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__7__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__8__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__9__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__10__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__11__stage;
    VlUnpacked<CData/*3:0*/, 3> __Vfunc_xor_tree__12__stage;

    // INTERNAL VARIABLES
    Vascon_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vascon_top_ascon_sbox_d2__D3_N4(Vascon_top__Syms* symsp, const char* v__name);
    ~Vascon_top_ascon_sbox_d2__D3_N4();
    VL_UNCOPYABLE(Vascon_top_ascon_sbox_d2__D3_N4);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
