// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vascon_top.h for the primary calling header

#ifndef VERILATED_VASCON_TOP_ASCON_SBOX_D2__D4_N5_H_
#define VERILATED_VASCON_TOP_ASCON_SBOX_D2__D4_N5_H_  // guard

#include "verilated.h"


class Vascon_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vascon_top_ascon_sbox_d2__D4_N5 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    CData/*4:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi;
    CData/*4:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
    CData/*4:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2;
    CData/*4:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1;
    CData/*0:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r;
    CData/*4:0*/ __PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
    IData/*24:0*/ __Vlvbound_hf570816d__0;
    CData/*0:0*/ __Vlvbound_h2543d2aa__0;
    CData/*0:0*/ __Vlvbound_h914e6002__0;
    CData/*0:0*/ __Vlvbound_h2543d2aa__1;
    CData/*0:0*/ __Vlvbound_hb49a3744__0;
    CData/*0:0*/ __Vlvbound_h2db25a5e__0;
    CData/*0:0*/ __Vlvbound_h593c59e9__0;
    CData/*0:0*/ __Vlvbound_h4fe11655__0;
    VL_IN16(fresh_r,9,0);
    VL_IN(x_in,24,0);
    VL_OUT(x_out,24,0);
    VL_OUT(x_out_noMask,24,0);
    IData/*31:0*/ __PVT__unnamedblk1__DOT__fresh_idx;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__i;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j;
    IData/*31:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k;
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
    VlUnpacked<CData/*4:0*/, 5> __PVT__x;
    VlUnpacked<IData/*24:0*/, 5> __PVT__and_result_bank;
    VlUnpacked<IData/*24:0*/, 5> __PVT__and_result_reg;
    VlUnpacked<CData/*4:0*/, 5> __PVT__y;
    VlUnpacked<CData/*4:0*/, 5> __PVT__y_noMask;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__0__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__1__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__2__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__3__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__4__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__5__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__6__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__7__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__8__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__9__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__10__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__11__stage;
    VlUnpacked<CData/*4:0*/, 4> __Vfunc_xor_tree__12__stage;

    // INTERNAL VARIABLES
    Vascon_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vascon_top_ascon_sbox_d2__D4_N5(Vascon_top__Syms* symsp, const char* v__name);
    ~Vascon_top_ascon_sbox_d2__D4_N5();
    VL_UNCOPYABLE(Vascon_top_ascon_sbox_d2__D4_N5);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
