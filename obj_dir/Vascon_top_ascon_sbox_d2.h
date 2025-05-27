// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vascon_top.h for the primary calling header

#ifndef VERILATED_VASCON_TOP_ASCON_SBOX_D2_H_
#define VERILATED_VASCON_TOP_ASCON_SBOX_D2_H_  // guard

#include "verilated.h"


class Vascon_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vascon_top_ascon_sbox_d2 final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(fresh_r,2,0);
        VL_IN8(sel_masked_round,0,0);
        CData/*2:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi;
        CData/*2:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        CData/*2:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2;
        CData/*2:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1;
        CData/*0:0*/ __PVT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__unnamedblk6__DOT__r;
        CData/*2:0*/ __PVT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__temp;
        CData/*0:0*/ __Vlvbound_heb392477__0;
        CData/*0:0*/ __Vlvbound_hf00c1e9a__0;
        CData/*0:0*/ __Vlvbound_h56f822d7__0;
        VL_IN16(x_in,14,0);
        VL_OUT16(x_out,14,0);
        VL_OUT16(x_out_noMask,14,0);
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
        IData/*31:0*/ __Vfunc_xor_tree__13__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__14__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__15__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__16__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__17__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__18__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__19__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__20__unnamedblk9__DOT__i;
        IData/*31:0*/ __Vfunc_xor_tree__21__unnamedblk9__DOT__i;
        VlUnpacked<CData/*2:0*/, 5> __PVT__x;
        VlUnpacked<SData/*8:0*/, 5> __PVT__and_result_bank;
        VlUnpacked<SData/*8:0*/, 5> __PVT__and_result_reg;
        VlUnpacked<CData/*2:0*/, 5> __PVT__y;
        VlUnpacked<CData/*2:0*/, 5> __PVT__y_noMask;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__0__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__1__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__2__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__3__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__4__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__5__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__6__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__7__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__8__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__9__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__10__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__11__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__12__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__13__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__14__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__15__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__16__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__17__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__18__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__19__stage;
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__20__stage;
    };
    struct {
        VlUnpacked<CData/*2:0*/, 3> __Vfunc_xor_tree__21__stage;
    };

    // INTERNAL VARIABLES
    Vascon_top__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vascon_top_ascon_sbox_d2(Vascon_top__Syms* symsp, const char* v__name);
    ~Vascon_top_ascon_sbox_d2();
    VL_UNCOPYABLE(Vascon_top_ascon_sbox_d2);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
