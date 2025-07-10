// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__16(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__16\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__in;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__in;
    IData/*29:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound1;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i;
    // Body
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x
        [1U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
           [4U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [2U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
           [0U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [3U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
           [1U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [4U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
           [2U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [0U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
           [3U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x
        [1U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
           [4U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [2U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
           [0U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [3U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
           [1U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [4U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
           [2U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [0U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
           [3U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x
        [1U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
           [4U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [2U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
           [0U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [3U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
           [1U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [4U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
           [2U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [0U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
           [3U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x
        [1U];
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1;
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = ((0xeU & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1)) 
               | (1U & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1))));
    } else {
        vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
            = (0xfU & (~ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    }
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] = 0U;
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
           [4U]);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1aU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffefU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 4U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfffbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1bU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfeffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 8U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfff7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 3U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                    >> 0x1cU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xefffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xcU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffdfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 5U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 5U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffbfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 6U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1dU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfdffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 9U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xff7fU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 7U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1eU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xdfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xdU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xfbffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xaU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xaU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 3U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xf7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 0xbU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 3U) & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1fU)));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xbfffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 0xeU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x7fffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 0xfU));
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 0xfU));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 3U));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[0U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[0U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[3U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[2U]))));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[1U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[2U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[0U]))));
    vlSelf->tag1 = ((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[6U]))) 
                    ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q);
    vlSelf->tag2 = ((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[8U]))) 
                    ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q);
    vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__mux_1st_x2))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 4U)) : (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x2))) 
                                                 << 0x3aU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                                   >> 6U)))
                : ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((0xffffU & vlSelf->ascon_top__DOT__mux_1st_x2))) 
                        << 0x30U) | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 0x10U)) : (
                                                   ((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                                    << 0x28U) 
                                                   | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                                      >> 0x18U))));
    }
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4 
                           << 0x18U)) | ((0xfc0000U 
                                          & (vlSelf->ascon_top__DOT__mux_1st_x3 
                                             << 0x12U)) 
                                         | ((0x3f000U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x2 
                                                << 0xcU)) 
                                            | ((0xfc0U 
                                                & (vlSelf->ascon_top__DOT__mux_1st_x1 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & vlSelf->ascon_top__DOT__mux_1st_x0)))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & vlSelf->ascon_top__DOT__lfsr_out[0U]);
    vlSelf->ascon_top__DOT__shares_out[0U] = ((0x3fffffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[0U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x1eU));
    vlSelf->ascon_top__DOT__shares_out[1U] = ((0xf0000000U 
                                               & vlSelf->ascon_top__DOT__shares_out[1U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 2U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ vlSelf->ascon_top__DOT__lfsr_out[0U]));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[1U] 
                           << 2U) | (vlSelf->ascon_top__DOT__lfsr_out[0U] 
                                     >> 0x1eU)));
    vlSelf->ascon_top__DOT__shares_out[1U] = ((0xfffffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[1U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x1cU));
    vlSelf->ascon_top__DOT__shares_out[2U] = ((0xfc000000U 
                                               & vlSelf->ascon_top__DOT__shares_out[2U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 4U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[1U] 
                              << 2U) | (vlSelf->ascon_top__DOT__lfsr_out[0U] 
                                        >> 0x1eU))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[2U] 
                           << 4U) | (vlSelf->ascon_top__DOT__lfsr_out[1U] 
                                     >> 0x1cU)));
    vlSelf->ascon_top__DOT__shares_out[2U] = ((0x3ffffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[2U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x1aU));
    vlSelf->ascon_top__DOT__shares_out[3U] = (0xffffffU 
                                              & (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 6U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[2U] 
                              << 4U) | (vlSelf->ascon_top__DOT__lfsr_out[1U] 
                                        >> 0x1cU))));
    vlSelf->ascon_top__DOT__shares_out[0U] = ((0xc0000000U 
                                               & vlSelf->ascon_top__DOT__shares_out[0U]) 
                                              | vlSelf->ascon_top__DOT__share_creator__DOT__temp);
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0U] 
        = ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0x10U) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                               [3U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                 [2U] 
                                                 << 8U) 
                                                | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                    [1U] 
                                                    << 4U) 
                                                   | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                   [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[1U] 
        = ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0x10U) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                               [3U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                 [2U] 
                                                 << 8U) 
                                                | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                    [1U] 
                                                    << 4U) 
                                                   | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                   [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[2U] 
        = ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0x10U) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                               [3U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                 [2U] 
                                                 << 8U) 
                                                | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                    [1U] 
                                                    << 4U) 
                                                   | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                   [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[3U] 
        = ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0x10U) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                               [3U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                 [2U] 
                                                 << 8U) 
                                                | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                    [1U] 
                                                    << 4U) 
                                                   | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                   [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[4U] 
        = ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0x10U) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                               [3U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                 [2U] 
                                                 << 8U) 
                                                | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                    [1U] 
                                                    << 4U) 
                                                   | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                   [0U]))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[5U] 
        = ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0x10U) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                               [3U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                 [2U] 
                                                 << 8U) 
                                                | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                    [1U] 
                                                    << 4U) 
                                                   | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                   [0U]))));
    vlSelf->ciphertext[0U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [0U]);
    vlSelf->ciphertext[1U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [0U] >> 0x20U));
    vlSelf->ciphertext[2U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [1U]);
    vlSelf->ciphertext[3U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [1U] >> 0x20U));
    if (vlSelf->ascon_top__DOT__sel_absorb_data) {
        vlSelf->ascon_top__DOT__state_reg_in[0U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                        [0U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                        [0U]));
        vlSelf->ascon_top__DOT__state_reg_in[1U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                         [0U] >> 0x20U)) : (IData)(
                                                   (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                    [0U] 
                                                    >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[2U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                        [1U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                        [1U]));
        vlSelf->ascon_top__DOT__state_reg_in[3U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                         [1U] >> 0x20U)) : (IData)(
                                                   (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                    [1U] 
                                                    >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[4U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                         [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q))
              : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                        [2U]));
        vlSelf->ascon_top__DOT__state_reg_in[5U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q) 
                         >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                               [2U] 
                                               >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[6U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                         [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q))
              : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                        [3U]));
        vlSelf->ascon_top__DOT__state_reg_in[7U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q) 
                         >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                               [3U] 
                                               >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[8U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                        [4U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                        [4U]));
        vlSelf->ascon_top__DOT__state_reg_in[9U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                         [4U] >> 0x20U)) : (IData)(
                                                   (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                    [4U] 
                                                    >> 0x20U)));
    } else {
        vlSelf->ascon_top__DOT__state_reg_in[0U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->initialVector) : (IData)(
                                                         (((QData)((IData)(
                                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            vlSelf->ascon_top__DOT__linear_diffusion_out[0U])))));
        vlSelf->ascon_top__DOT__state_reg_in[1U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->initialVector >> 0x20U))
              : (IData)(((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                           << 0x20U) | (QData)((IData)(
                                                       vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                         >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[2U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->key1) : (IData)((((QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__linear_diffusion_out[2U])))));
        vlSelf->ascon_top__DOT__state_reg_in[3U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->key1 >> 0x20U)) : (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                                            >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[4U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->key2) : (IData)((((QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(
                                                                   vlSelf->ascon_top__DOT__linear_diffusion_out[4U])))));
        vlSelf->ascon_top__DOT__state_reg_in[5U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->key2 >> 0x20U)) : (IData)(
                                                           ((((QData)((IData)(
                                                                              vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                              << 0x20U) 
                                                             | (QData)((IData)(
                                                                               vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                                            >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[6U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->nonce1) : (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                                    ? 
                                                   (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                    [3U] 
                                                    ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                                    : 
                                                   vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                   [3U])));
        vlSelf->ascon_top__DOT__state_reg_in[7U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->nonce1 >> 0x20U)) : (IData)(
                                                             (((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                                                ? 
                                                               (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                                [3U] 
                                                                ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                                                : 
                                                               vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                               [3U]) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in[8U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)(vlSelf->nonce2) : (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                                    ? 
                                                   (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                    [4U] 
                                                    ^ 
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                      ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                      : 0x8000000000000000ULL))
                                                    : 
                                                   vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                   [4U])));
        vlSelf->ascon_top__DOT__state_reg_in[9U] = 
            ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
              ? (IData)((vlSelf->nonce2 >> 0x20U)) : (IData)(
                                                             (((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                                                ? 
                                                               (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                                [4U] 
                                                                ^ 
                                                                ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                                                  ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                                                  : 0x8000000000000000ULL))
                                                                : 
                                                               vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                               [4U]) 
                                                              >> 0x20U)));
    }
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x3fffffffU & vlSelf->ascon_top__DOT__shares_out[0U]);
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[1U] 
                               << 2U) | (vlSelf->ascon_top__DOT__shares_out[0U] 
                                         >> 0x1eU)));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[2U] 
                               << 4U) | (vlSelf->ascon_top__DOT__shares_out[1U] 
                                         >> 0x1cU)));
        vlSelf->ascon_top__DOT__affine_layer_in[3U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[3U] 
                               << 6U) | (vlSelf->ascon_top__DOT__shares_out[2U] 
                                         >> 0x1aU)));
        vlSelf->ascon_top__DOT__mux_sbox_out[5U] = 
            vlSelf->ascon_top__DOT__sbox_output[5U];
        vlSelf->ascon_top__DOT__mux_sbox_out[4U] = 
            vlSelf->ascon_top__DOT__sbox_output[4U];
        vlSelf->ascon_top__DOT__mux_sbox_out[3U] = 
            vlSelf->ascon_top__DOT__sbox_output[3U];
        vlSelf->ascon_top__DOT__mux_sbox_out[2U] = 
            vlSelf->ascon_top__DOT__sbox_output[2U];
        vlSelf->ascon_top__DOT__mux_sbox_out[1U] = 
            vlSelf->ascon_top__DOT__sbox_output[1U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0U] = 
            vlSelf->ascon_top__DOT__sbox_output[0U];
    } else {
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4 
                                              << 0x18U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3 
                                               << 0x12U)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2 
                                                 << 0xcU)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1 
                                                  << 6U)) 
                                       | (0x3fU & vlSelf->ascon_top__DOT__mux_1st_x0))))));
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4 
                                              << 0x12U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3 
                                               << 0xcU)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2 
                                                 << 6U)) 
                                    | ((0xfc0U & vlSelf->ascon_top__DOT__mux_1st_x1) 
                                       | (0x3fU & (vlSelf->ascon_top__DOT__mux_1st_x0 
                                                   >> 6U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4 
                                              << 0xcU)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3 
                                               << 6U)) 
                                 | ((0x3f000U & vlSelf->ascon_top__DOT__mux_1st_x2) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1 
                                                  >> 6U)) 
                                       | (0x3fU & (vlSelf->ascon_top__DOT__mux_1st_x0 
                                                   >> 0xcU)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[3U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4 
                                              << 6U)) 
                              | ((0xfc0000U & vlSelf->ascon_top__DOT__mux_1st_x3) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2 
                                                 >> 6U)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1 
                                                  >> 0xcU)) 
                                       | (0x3fU & (vlSelf->ascon_top__DOT__mux_1st_x0 
                                                   >> 0x12U)))))));
        vlSelf->ascon_top__DOT__mux_sbox_out[5U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [5U];
        vlSelf->ascon_top__DOT__mux_sbox_out[4U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [4U];
        vlSelf->ascon_top__DOT__mux_sbox_out[3U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [3U];
        vlSelf->ascon_top__DOT__mux_sbox_out[2U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [2U];
        vlSelf->ascon_top__DOT__mux_sbox_out[1U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [1U];
        vlSelf->ascon_top__DOT__mux_sbox_out[0U] = 
            vlSelf->ascon_top__DOT__sbox_output_unmasked
            [0U];
    }
    vlSelf->ascon_top__DOT__affine_layer_out[0U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [0U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [0U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [0U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [0U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [0U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [0U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [0U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [0U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[1U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [1U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [1U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [1U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [1U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [1U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [1U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [1U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [1U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[2U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [2U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [2U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [2U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [2U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [2U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [2U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [2U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [2U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[3U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [3U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [3U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [3U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [3U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [3U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [3U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [3U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [3U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (1U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [0U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [0U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [0U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [1U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [1U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [1U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [1U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [1U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [2U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [2U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [2U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [2U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [3U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [3U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [3U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [4U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [4U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [4U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [4U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [5U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [5U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [5U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [5U] << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [0U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [0U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (2U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [1U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [1U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [1U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [1U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [1U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [2U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [2U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [2U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [2U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [3U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [3U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [3U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [4U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [4U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [4U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [4U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [5U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [5U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [5U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [5U] << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x40U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [0U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [0U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [0U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [1U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x80U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [1U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [1U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [1U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [1U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (4U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [2U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [2U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [2U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [2U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [3U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [3U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [3U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [4U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [4U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [4U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [4U] << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [5U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [5U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [5U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [5U] << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x40U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x1000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [0U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x40000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [0U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x1000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [1U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x80U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [1U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x2000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [1U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x80000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [1U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x2000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [1U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [2U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x100U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [2U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x4000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [2U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x100000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [2U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x4000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [2U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (8U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [3U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x200U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [3U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x8000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                [3U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x200000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [3U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x8000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                   [3U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [4U] << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x400U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [4U] << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x10000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [4U] << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x400000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [4U] << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x10000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [4U] << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x20U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [5U] << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x800U & (vlSelf->ascon_top__DOT__mux_sbox_out
                               [5U] << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x20000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                 [5U] << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x800000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                  [5U] << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x20000000U & (vlSelf->ascon_top__DOT__mux_sbox_out
                                    [5U] << 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (1U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [0U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfffefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffeffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfefffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xeffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x10000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfffdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffdffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfdfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xdffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x20000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfffbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x40U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [2U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffbffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfbfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xbffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x40000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xffff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xfff7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xff7ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0xf7fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x8000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x80000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfffefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffeffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfefffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xeffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x10000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (2U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [1U]));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfffdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffdffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfdfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xdffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x20000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfffbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffbffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfbfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xbffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x40000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xffff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xfff7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x80U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [3U]));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xff7ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0xf7fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x8000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (0x80000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfffefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffeffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfefffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xeffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x10000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfffdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffdffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfdfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xdffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x20000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (4U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [2U]));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfffbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffbffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfbfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xbffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x40000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xffff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xfff7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xff7ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0xf7fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x8000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (0x80000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfffefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffeffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfefffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xeffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x10000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfffdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffdffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfdfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xdffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x20000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfffbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffbffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfbfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xbffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x40000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xffff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (8U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [3U]));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xfff7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xff7ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0xf7fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x8000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (0x80000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfffefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffeffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfefffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xeffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x10000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfffdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffdffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfdfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xdffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x20000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfffbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffbffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfbfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xbffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x40000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xffff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xfff7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xff7ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0xf7fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x8000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (0x80000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (1U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfffefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffeffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfefffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xeffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x10000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         >> 0xdU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfffdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffdffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfdfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xdffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x20000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         >> 0xcU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfffbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffbffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfbfffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xbffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x40000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         >> 0xbU)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xffff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xfff7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xff7ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0xf7fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x8000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (0x80000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [3U] 
                                                         >> 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [0U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [0U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [0U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [0U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [0U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [0U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [1U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [1U] 
                                                << 6U)))) 
                     | ((0x3f000U & (((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                       ? (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                          [1U] >> 0xcU)
                                       : (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                             [1U] >> 0xcU))) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [1U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [1U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [1U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [2U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [2U] 
                                                << 6U)))) 
                     | ((0x3f000U & (((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                       ? (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                          [2U] >> 0xcU)
                                       : (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                             [2U] >> 0xcU))) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [2U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [2U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [2U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[3U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [3U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [3U] 
                                                << 6U)))) 
                     | ((0x3f000U & (((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                       ? (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                          [3U] >> 0xcU)
                                       : (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                             [3U] >> 0xcU))) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [3U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [3U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [3U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U]) 
           | ((0xfc0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [1U] << 6U)) | (0x3fU & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U])));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U] 
        = ((0xff000fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U]) 
           | (0xfffff000U & ((0xfc0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [3U] << 0x12U)) 
                             | (0x3f000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                            [2U] << 0xcU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U] 
        = ((0xffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[0U]) 
           | (0xff000000U & ((0xc0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [1U] << 0x18U)) 
                             | (0x3f000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                               [0U] 
                                               << 0x12U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xfffffff0U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xfU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                      [1U] >> 8U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xffff000fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xfffffff0U & ((0xfc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [3U] << 4U)) 
                             | (0x3f0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 2U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xf000ffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xffff0000U & ((0xfc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                            [1U] << 0xaU)) 
                             | (0x3f0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] << 4U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xfffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xf0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                             [2U] << 0x10U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0xffffff00U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0xfffffffU & ((0xfcU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                      [3U] >> 0xaU)) 
                            | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                     [2U] >> 0x10U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0xfff000ffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0xffffff00U & ((0xfc000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 4U)) 
                             | (0x3f00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 0xaU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0xfffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0xfff00000U & ((0xfc000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [3U] << 8U)) 
                             | (0x3f00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              << 2U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U] 
        = ((0xfff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]) 
           | (0xffffffU & ((0xfc0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                      [1U] >> 0x12U)) 
                           | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                       [0U] >> 0x18U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U] 
        = ((0xfffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]) 
           | (0xfff000U & ((0xfc0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [3U] >> 6U)) 
                           | (0x3f000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xcU)))));
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] << 1U)) | (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                     [0U])));
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] << 3U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] << 2U))));
    __Vfunc_ascon_top__DOT__xor_tree__0__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__0__in = vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__0__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__0__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__0__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__0__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__0__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__0__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__0__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__0__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__0__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffffeU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | (IData)(__Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((2U & vlSelf->ascon_top__DOT__affine_layer2nd_out
               [1U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [0U] >> 1U))));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] << 2U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] << 1U))));
    __Vfunc_ascon_top__DOT__xor_tree__1__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__1__in = vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__1__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__1__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__1__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__1__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__1__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__1__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__1__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__1__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffffdU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout) 
                                                   << 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 1U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 2U))));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] << 1U)) | (4U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                     [2U])));
    __Vfunc_ascon_top__DOT__xor_tree__2__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__2__in = vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__2__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__2__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__2__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__2__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__2__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__2__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__2__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__2__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffffbU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout) 
                                                   << 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 2U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 3U))));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((8U & vlSelf->ascon_top__DOT__affine_layer2nd_out
               [3U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [2U] >> 1U))));
    __Vfunc_ascon_top__DOT__xor_tree__3__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__3__in = vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__3__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__3__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__3__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                        [
                                                        (3U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                        [
                                                        (3U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                       [
                                                       (3U 
                                                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout = 
        ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
             [(3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffff7U 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout) 
                                                   << 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 3U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 4U))));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 1U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 2U))));
    __Vfunc_ascon_top__DOT__xor_tree__4__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__4__in = vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__4__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__4__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__4__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__4__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__4__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__4__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__4__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__4__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffffefU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout) 
                                                   << 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 4U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 5U))));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 2U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 3U))));
    __Vfunc_ascon_top__DOT__xor_tree__5__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__5__in = vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__5__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__5__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__5__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__5__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__5__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__5__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__5__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__5__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffffdfU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout) 
                                                   << 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 5U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 6U))));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 3U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 4U))));
    __Vfunc_ascon_top__DOT__xor_tree__6__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__6__in = vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__6__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__6__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__6__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__6__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__6__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__6__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__6__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__6__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffffbfU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout) 
                                                   << 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 6U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 7U))));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 4U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 5U))));
    __Vfunc_ascon_top__DOT__xor_tree__7__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__7__in = vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__7__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__7__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__7__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__7__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__7__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__7__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__7__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__7__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffff7fU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout) 
                                                   << 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 7U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 8U))));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 5U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 6U))));
    __Vfunc_ascon_top__DOT__xor_tree__8__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__8__in = vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__8__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__8__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__8__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__8__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__8__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__8__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__8__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__8__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffeffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout) 
                                                   << 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 8U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 9U))));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 6U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 7U))));
    __Vfunc_ascon_top__DOT__xor_tree__9__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__9__in = vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__9__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__9__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__9__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__9__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__9__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__9__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__9__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__9__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffdffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout) 
                                                   << 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 9U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [0U] >> 0xaU))));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 7U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 8U))));
    __Vfunc_ascon_top__DOT__xor_tree__10__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__10__in = vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__10__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__10__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__10__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__10__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__10__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__10__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffbffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout) 
                                                   << 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0xaU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0xbU))));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 8U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 9U))));
    __Vfunc_ascon_top__DOT__xor_tree__11__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__11__in = vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__11__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__11__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__11__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__11__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__11__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__11__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffff7ffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout) 
                                                   << 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0xbU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0xcU))));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 9U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [2U] >> 0xaU))));
    __Vfunc_ascon_top__DOT__xor_tree__12__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__12__in = vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__12__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__12__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__12__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__12__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__12__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__12__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffefffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout) 
                                                   << 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0xcU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0xdU))));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0xaU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [2U] >> 0xbU))));
    __Vfunc_ascon_top__DOT__xor_tree__13__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__13__in = vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__13__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__13__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__13__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__13__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__13__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__13__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffdfffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout) 
                                                   << 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0xdU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0xeU))));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0xbU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [2U] >> 0xcU))));
    __Vfunc_ascon_top__DOT__xor_tree__14__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__14__in = vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__14__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__14__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__14__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__14__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__14__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__14__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffbfffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout) 
                                                   << 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0xeU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0xfU))));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0xcU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [2U] >> 0xdU))));
    __Vfunc_ascon_top__DOT__xor_tree__15__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__15__in = vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__15__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__15__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__15__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__15__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__15__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__15__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fff7fffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout) 
                                                   << 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0xfU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0x10U))));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0xdU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [2U] >> 0xeU))));
    __Vfunc_ascon_top__DOT__xor_tree__16__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__16__in = vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__16__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__16__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__16__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__16__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__16__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__16__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffeffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout) 
                                                   << 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x10U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x11U))));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0xeU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [2U] >> 0xfU))));
    __Vfunc_ascon_top__DOT__xor_tree__17__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__17__in = vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__17__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__17__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__17__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__17__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__17__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__17__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffdffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout) 
                                                   << 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x11U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x12U))));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0xfU)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [2U] >> 0x10U))));
    __Vfunc_ascon_top__DOT__xor_tree__18__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__18__in = vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__18__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__18__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__18__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__18__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__18__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__18__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__18__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__18__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffbffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout) 
                                                   << 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x12U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x13U))));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x10U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x11U))));
    __Vfunc_ascon_top__DOT__xor_tree__19__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__19__in = vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__19__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__19__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__19__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__19__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__19__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__19__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__19__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__19__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ff7ffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout) 
                                                   << 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x13U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x14U))));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x11U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x12U))));
    __Vfunc_ascon_top__DOT__xor_tree__20__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__20__in = vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__20__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__20__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__20__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__20__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__20__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__20__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__20__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__20__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fefffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout) 
                                                   << 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x14U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x15U))));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x12U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x13U))));
    __Vfunc_ascon_top__DOT__xor_tree__21__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__21__in = vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__21__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__21__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__21__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__21__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__21__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__21__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__21__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__21__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fdfffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout) 
                                                   << 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x15U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x16U))));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x13U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x14U))));
    __Vfunc_ascon_top__DOT__xor_tree__22__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__22__in = vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__22__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__22__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__22__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__22__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__22__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__22__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__22__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__22__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fbfffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout) 
                                                   << 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x16U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x17U))));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x14U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x15U))));
    __Vfunc_ascon_top__DOT__xor_tree__23__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__23__in = vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__23__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__23__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__23__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__23__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__23__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__23__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__23__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__23__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3f7fffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout) 
                                                   << 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x17U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x18U))));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x15U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x16U))));
    __Vfunc_ascon_top__DOT__xor_tree__24__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__24__in = vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__24__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__24__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__24__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__24__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__24__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__24__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__24__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__24__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3effffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout) 
                                                   << 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x18U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x19U))));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x16U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x17U))));
    __Vfunc_ascon_top__DOT__xor_tree__25__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__25__in = vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__25__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__25__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__25__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__25__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__25__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__25__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__25__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__25__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3dffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout) 
                                                   << 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x19U)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x1aU))));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x17U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x18U))));
    __Vfunc_ascon_top__DOT__xor_tree__26__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__26__in = vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__26__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__26__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__26__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__26__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                                                        [
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                                                       [
                                                       (3U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__26__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__26__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__26__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__26__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3bffffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout) 
                                                   << 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits 
        = ((0xcU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits)) 
           | ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [1U] >> 0x1aU)) | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [0U] 
                                              >> 0x1bU))));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits)) 
           | ((8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [3U] >> 0x18U)) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [2U] 
                                              >> 0x19U))));
    __Vfunc_ascon_top__DOT__xor_tree__27__N = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__27__in = vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__27__num = 4U;
    __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__27__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i))));
        __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__27__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound2 = (1U 
                                                   & ((((2U 
                                                         >= 
                                                         (3U 
                                                          & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                        [
                                                        (3U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))) 
                                                      ^ 
                                                      (((2U 
                                                         >= 
                                                         (3U 
                                                          & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                        [
                                                        (3U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                         : 0U) 
                                                       >> 
                                                       (3U 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (1U 
                                                   & (((2U 
                                                        >= 
                                                        (3U 
                                                         & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                       [
                                                       (3U 
                                                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                        : 0U) 
                                                      >> 
                                                      (3U 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__level);
    }
}
