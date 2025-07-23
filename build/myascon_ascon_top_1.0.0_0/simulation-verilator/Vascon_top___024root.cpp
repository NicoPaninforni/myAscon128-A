// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

//==========

VL_INLINE_OPT void Vascon_top___024root___sequent__TOP__18(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___sequent__TOP__18\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT____Vlvbound5;
    CData/*0:0*/ ascon_top__DOT____Vlvbound6;
    CData/*0:0*/ ascon_top__DOT____Vlvbound7;
    CData/*0:0*/ ascon_top__DOT____Vlvbound8;
    CData/*0:0*/ ascon_top__DOT____Vlvbound9;
    CData/*0:0*/ ascon_top__DOT____Vlvbound10;
    CData/*0:0*/ ascon_top__DOT____Vlvbound11;
    CData/*0:0*/ ascon_top__DOT____Vlvbound12;
    CData/*0:0*/ ascon_top__DOT____Vlvbound13;
    CData/*0:0*/ ascon_top__DOT____Vlvbound14;
    CData/*0:0*/ ascon_top__DOT____Vlvbound15;
    CData/*0:0*/ ascon_top__DOT____Vlvbound16;
    CData/*0:0*/ ascon_top__DOT____Vlvbound17;
    CData/*0:0*/ ascon_top__DOT____Vlvbound18;
    CData/*0:0*/ ascon_top__DOT____Vlvbound19;
    CData/*0:0*/ ascon_top__DOT____Vlvbound20;
    CData/*0:0*/ ascon_top__DOT____Vlvbound21;
    CData/*0:0*/ ascon_top__DOT____Vlvbound22;
    CData/*0:0*/ ascon_top__DOT____Vlvbound23;
    CData/*0:0*/ ascon_top__DOT____Vlvbound24;
    CData/*0:0*/ ascon_top__DOT____Vlvbound25;
    CData/*0:0*/ ascon_top__DOT____Vlvbound26;
    CData/*0:0*/ ascon_top__DOT____Vlvbound27;
    CData/*0:0*/ ascon_top__DOT____Vlvbound28;
    CData/*0:0*/ ascon_top__DOT____Vlvbound29;
    CData/*0:0*/ ascon_top__DOT____Vlvbound30;
    CData/*0:0*/ ascon_top__DOT____Vlvbound31;
    CData/*0:0*/ ascon_top__DOT____Vlvbound32;
    CData/*0:0*/ ascon_top__DOT____Vlvbound33;
    CData/*0:0*/ ascon_top__DOT____Vlvbound34;
    CData/*0:0*/ ascon_top__DOT____Vlvbound35;
    CData/*0:0*/ ascon_top__DOT____Vlvbound36;
    CData/*0:0*/ ascon_top__DOT____Vlvbound37;
    CData/*0:0*/ ascon_top__DOT____Vlvbound38;
    CData/*0:0*/ ascon_top__DOT____Vlvbound39;
    CData/*0:0*/ ascon_top__DOT____Vlvbound40;
    CData/*0:0*/ ascon_top__DOT____Vlvbound41;
    CData/*0:0*/ ascon_top__DOT____Vlvbound42;
    CData/*0:0*/ ascon_top__DOT____Vlvbound43;
    CData/*0:0*/ ascon_top__DOT____Vlvbound44;
    CData/*0:0*/ ascon_top__DOT____Vlvbound45;
    CData/*0:0*/ ascon_top__DOT____Vlvbound46;
    CData/*0:0*/ ascon_top__DOT____Vlvbound47;
    CData/*0:0*/ ascon_top__DOT____Vlvbound48;
    CData/*0:0*/ ascon_top__DOT____Vlvbound49;
    CData/*0:0*/ ascon_top__DOT____Vlvbound50;
    CData/*0:0*/ ascon_top__DOT____Vlvbound51;
    CData/*0:0*/ ascon_top__DOT____Vlvbound52;
    CData/*2:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9;
    CData/*2:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9;
    CData/*2:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__in;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__in;
    CData/*3:0*/ __Vdly__ascon_top__DOT__round_counter;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v5;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v5;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4;
    CData/*0:0*/ __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v5;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3;
    QData/*63:0*/ __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4;
    // Body
    __Vdly__ascon_top__DOT__round_counter = vlSelf->ascon_top__DOT__round_counter;
    if (vlSelf->reset_n) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i = 5U;
    }
    if ((1U & (~ (IData)(vlSelf->reset_n)))) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i = 5U;
    }
    if (vlSelf->reset_n) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i = 5U;
    }
    if ((1U & (~ (IData)(vlSelf->reset_n)))) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i = 5U;
    }
    if (vlSelf->reset_n) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i = 5U;
    }
    if ((1U & (~ (IData)(vlSelf->reset_n)))) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i = 5U;
    }
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v5 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v5 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4 = 0U;
    __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v5 = 0U;
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
            vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state;
        }
    } else {
        vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
            vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state;
        }
    } else {
        vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
            vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state;
        }
    } else {
        vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
            vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state;
        }
    } else {
        vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
            vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state;
        }
    } else {
        vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__reg_key2_load) {
            vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q 
                = vlSelf->key2;
        }
    } else {
        vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__reg_key1_load) {
            vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q 
                = vlSelf->key1;
        }
    } else {
        vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q = 0ULL;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff 
                = vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process;
        }
    } else {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff = 0U;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load) {
            vlSelf->ascon_top__DOT__extra_padding_ff 
                = vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding;
        }
    } else {
        vlSelf->ascon_top__DOT__extra_padding_ff = 0U;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round) {
            __Vdly__ascon_top__DOT__round_counter = 0U;
        } else if (vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable) {
            __Vdly__ascon_top__DOT__round_counter = 
                (0xfU & (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                          == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                              - (IData)(1U))) ? ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4)
                                                  ? 4U
                                                  : 0U)
                          : ((IData)(1U) + (IData)(vlSelf->ascon_top__DOT__round_counter))));
        }
    } else {
        __Vdly__ascon_top__DOT__round_counter = 0U;
    }
    if (vlSelf->reset_n) {
        if (vlSelf->ascon_top__DOT__shift_en) {
            vlSelf->ascon_top__DOT__bit_counter = (
                                                   ((IData)(vlSelf->ascon_top__DOT__bit_counter) 
                                                    == (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits))
                                                    ? 0U
                                                    : 
                                                   (0x7fU 
                                                    & ((IData)(1U) 
                                                       + (IData)(vlSelf->ascon_top__DOT__bit_counter))));
        }
    } else {
        vlSelf->ascon_top__DOT__bit_counter = 0U;
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state 
        = ((IData)(vlSelf->reset_n) ? (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state)
            : 0U);
    if (vlSelf->reset_n) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state
            [0U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state
            [1U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state
            [2U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state
            [3U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state
            [4U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4 = 1U;
    } else {
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v5 = 1U;
    }
    if (vlSelf->reset_n) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state
            [0U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state
            [1U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state
            [2U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state
            [3U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state
            [4U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4 = 1U;
    } else {
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v5 = 1U;
    }
    if (vlSelf->reset_n) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state
            [0U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state
            [1U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state
            [2U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state
            [3U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3 = 1U;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state
            [4U];
        __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound7;
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4 = 1U;
    } else {
        __Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v5 = 1U;
    }
    vlSelf->ascon_top__DOT__round_counter = __Vdly__ascon_top__DOT__round_counter;
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[0U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v0;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[1U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v1;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[2U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v2;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[3U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v3;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[4U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v4;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state__v5) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[0U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[1U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[2U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[3U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[4U] = 0ULL;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[0U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v0;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[1U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v1;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[2U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v2;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[3U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v3;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[4U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v4;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state__v5) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[0U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[1U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[2U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[3U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[4U] = 0ULL;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[0U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v0;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[1U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v1;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[2U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v2;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[3U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v3;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[4U] 
            = __Vdlyvval__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v4;
    }
    if (__Vdlyvset__ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state__v5) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[0U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[1U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[2U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[3U] = 0ULL;
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[4U] = 0ULL;
    }
    vlSelf->debug_round_state_4 = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelf->debug_round_state_3 = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelf->debug_round_state_2 = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelf->debug_round_state_1 = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelf->debug_round_state_0 = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelf->debug_extra_padding_ff = vlSelf->ascon_top__DOT__extra_padding_ff;
    vlSelf->debug_roundcounter = vlSelf->ascon_top__DOT__round_counter;
    vlSelf->debug_bitcounter = vlSelf->ascon_top__DOT__bit_counter;
    vlSelf->debug_state = vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state;
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0x41U;
                    }
                } else {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0x41U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0x16U;
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0x16U;
        } else if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0x16U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits 
            = ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                ? 0x16U : 0x41U);
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0x41U;
    }
    vlSelf->read_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->read_data = 1U;
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    vlSelf->read_data = 1U;
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__reg_key2_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__reg_key2_load = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__reg_key1_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__reg_key1_load = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable = 1U;
        }
    }
    vlSelf->done = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->done = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 1U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4 = 1U;
                }
            }
        }
    }
    vlSelf->ready_tag = 0U;
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round = 0xcU;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if (((IData)(vlSelf->ascon_top__DOT__round_counter) 
                             == ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round) 
                                 - (IData)(1U)))) {
                            vlSelf->ready_tag = 1U;
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__shift_enable_sipo = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__shift_enable_sipo = 1U;
    }
    vlSelf->ascon_top__DOT__last_cycle_sipo = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        if ((0x3fU == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                            vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                        }
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((0x15U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                        vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((0x15U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                    vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
            if ((0x3fU == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_xor_signal = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_xor_signal = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                    }
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 3U)))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__shift_en = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelf->ascon_top__DOT__shift_en = 1U;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                vlSelf->ascon_top__DOT__shift_en = 1U;
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__shift_en = 1U;
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__shift_en = 1U;
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__shift_en = 1U;
    }
    vlSelf->ascon_top__DOT__last_cycle = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__last_cycle = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__last_cycle = 1U;
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 1U)))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                vlSelf->ascon_top__DOT__last_cycle = 1U;
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 2U)))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__last_cycle = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__shift_type = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    vlSelf->ascon_top__DOT__shift_type = 1U;
                }
            }
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 3U)))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__shift_type = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_masked_round = 1U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__sel_masked_round = 0U;
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__sel_masked_round = 0U;
            }
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [0U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7ff8U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [1U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7fc7U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [2U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7e3fU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [3U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x71ffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                        [4U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0xfffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 0xcU));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [0U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7ff8U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [1U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7fc7U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [2U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7e3fU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [3U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x71ffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                        [4U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0xfffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 0xcU));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [0U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7ff8U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [1U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7fc7U & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [2U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x7e3fU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [3U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0x71ffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9 
        = (7U & (IData)(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                        [4U]));
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1 
        = ((0xfffU & (IData)(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1)) 
           | ((IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound9) 
              << 0xcU));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[0U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[1U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[2U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[3U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[4U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[5U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[6U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[7U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[8U] 
        = (IData)(ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10);
    vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[9U] 
        = (IData)((ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound10 
                   >> 0x20U));
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__rc_block[0U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ascon_top__DOT__bit_counter)))));
        vlSelf->ascon_top__DOT__rc_block[1U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ascon_top__DOT__bit_counter)))));
        vlSelf->ascon_top__DOT__rc_block[2U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & (IData)(vlSelf->ascon_top__DOT__bit_counter)))));
    } else {
        vlSelf->ascon_top__DOT__rc_block[0U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(3U) 
                                                               * (IData)(vlSelf->ascon_top__DOT__bit_counter))))));
        vlSelf->ascon_top__DOT__rc_block[1U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(1U) 
                                                               + 
                                                               ((IData)(3U) 
                                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))));
        vlSelf->ascon_top__DOT__rc_block[2U] = (1U 
                                                & (IData)(
                                                          ((0xf0ULL 
                                                            - 
                                                            (0xfULL 
                                                             * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))) 
                                                           >> 
                                                           (0x3fU 
                                                            & ((IData)(2U) 
                                                               + 
                                                               ((IData)(3U) 
                                                                * (IData)(vlSelf->ascon_top__DOT__bit_counter)))))));
    }
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1;
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[2U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1;
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[1U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out[9U];
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1;
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][0U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[0U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][1U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[1U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][2U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[2U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][3U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[3U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][4U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[4U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][5U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[5U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][6U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[6U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][7U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[7U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][8U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[8U];
    vlSelf->ascon_top__DOT__state_reg_out_shares[0U][9U] 
        = vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out[9U];
    vlSelf->ascon_top__DOT__mux_1st_x0 = ((6U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)) 
                                          | (1U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                             [0U]));
    vlSelf->ascon_top__DOT__mux_1st_x1 = ((6U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)) 
                                          | (1U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 3U)));
    vlSelf->ascon_top__DOT__mux_1st_x3 = ((6U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3)) 
                                          | (1U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 9U)));
    vlSelf->ascon_top__DOT__mux_1st_x4 = ((6U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4)) 
                                          | (1U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 0xcU)));
    vlSelf->ascon_top__DOT__mux_1st_x0 = ((5U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)) 
                                          | (2U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                             [0U]));
    vlSelf->ascon_top__DOT__mux_1st_x1 = ((5U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)) 
                                          | (2U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 3U)));
    vlSelf->ascon_top__DOT__mux_1st_x3 = ((5U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3)) 
                                          | (2U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 9U)));
    vlSelf->ascon_top__DOT__mux_1st_x4 = ((5U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4)) 
                                          | (2U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 0xcU)));
    vlSelf->ascon_top__DOT__mux_1st_x0 = ((3U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)) 
                                          | (4U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                             [0U]));
    vlSelf->ascon_top__DOT__mux_1st_x1 = ((3U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)) 
                                          | (4U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 3U)));
    vlSelf->ascon_top__DOT__mux_1st_x3 = ((3U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3)) 
                                          | (4U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 9U)));
    vlSelf->ascon_top__DOT__mux_1st_x4 = ((3U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4)) 
                                          | (4U & (
                                                   vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                   [0U] 
                                                   >> 0xcU)));
    vlSelf->ascon_top__DOT__mux_1st_x2 = ((6U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                          | (1U & (
                                                   (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                    [0U] 
                                                    >> 6U) 
                                                   ^ 
                                                   vlSelf->ascon_top__DOT__rc_block
                                                   [0U])));
    vlSelf->ascon_top__DOT__mux_1st_x2 = ((5U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                          | (2U & (
                                                   (0x3fffffeU 
                                                    & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U] 
                                                       >> 6U)) 
                                                   ^ 
                                                   (vlSelf->ascon_top__DOT__rc_block
                                                    [1U] 
                                                    << 1U))));
    vlSelf->ascon_top__DOT__mux_1st_x2 = ((3U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                          | (4U & (
                                                   (0x3fffffcU 
                                                    & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                                       [0U] 
                                                       >> 6U)) 
                                                   ^ 
                                                   (vlSelf->ascon_top__DOT__rc_block
                                                    [2U] 
                                                    << 2U))));
    ascon_top__DOT____Vlvbound2 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                   [0U][0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound2));
    ascon_top__DOT____Vlvbound2 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                   [1U][0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound2) 
              << 1U));
    ascon_top__DOT____Vlvbound2 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                   [2U][0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound2) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__0__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__0__in = vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__0__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__0__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__0__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__0__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__0__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__0__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__0__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout));
    ascon_top__DOT____Vlvbound3 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound3));
    ascon_top__DOT____Vlvbound3 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound3) 
              << 1U));
    ascon_top__DOT____Vlvbound3 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound3) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__1__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__1__in = vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__1__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__1__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__1__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__1__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__1__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__1__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound4 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound4));
    ascon_top__DOT____Vlvbound4 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound4) 
              << 1U));
    ascon_top__DOT____Vlvbound4 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound4) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__2__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__2__in = vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__2__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__2__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__2__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__2__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__2__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__2__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound5 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound5));
    ascon_top__DOT____Vlvbound5 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 1U));
    ascon_top__DOT____Vlvbound5 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__3__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__3__in = vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__3__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__3__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__3__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__3__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__3__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__3__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__3__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout = 
        ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
             [(3U & __Vfunc_ascon_top__DOT__xor_tree__3__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound6));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 1U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__4__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__4__in = vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__4__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__4__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__4__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__4__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__4__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__4__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound7));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 1U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__5__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__5__in = vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__5__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__5__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__5__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__5__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__5__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__5__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound8));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 1U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__6__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__6__in = vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__6__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__6__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__6__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__6__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__6__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__6__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [0U][0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound9));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [1U][0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 1U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                         [2U][0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__7__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__7__in = vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__7__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__7__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__7__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__7__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__7__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__7__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound10));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__8__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__8__in = vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__8__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__8__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__8__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__8__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__8__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__8__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound11));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 1U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__9__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__9__in = vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__9__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__9__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__9__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__9__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__9__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__9__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(3U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound12));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 1U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__10__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__10__in = vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__10__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__10__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__10__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__10__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__10__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__10__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound13));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 1U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__11__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__11__in = vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__11__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__11__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__11__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__11__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__11__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__11__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound14));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 1U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__12__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__12__in = vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__12__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__12__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__12__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__12__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__12__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__12__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound15));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 1U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__13__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__13__in = vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__13__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__13__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__13__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__13__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__13__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__13__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound16));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 1U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__14__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__14__in = vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__14__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__14__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__14__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__14__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__14__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__14__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound17));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 1U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__15__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__15__in = vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__15__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__15__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__15__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__15__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__15__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__15__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound18));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 1U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__16__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__16__in = vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__16__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__16__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__16__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__16__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__16__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__16__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound19));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 1U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__17__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__17__in = vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__17__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__17__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__17__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__17__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__17__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__17__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout) 
              << 0x11U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound20));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 1U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__18__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__18__in = vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__18__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__18__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__18__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__18__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__18__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__18__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__18__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__18__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__18__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__18__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__18__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__18__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__18__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfffbffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__18__Vfuncout) 
              << 0x12U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound21));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 1U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__19__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__19__in = vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__19__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__19__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__19__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__19__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__19__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__19__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__19__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__19__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__19__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__19__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__19__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__19__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__19__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfff7ffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__19__Vfuncout) 
              << 0x13U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound22));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 1U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__20__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__20__in = vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__20__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__20__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__20__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__20__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__20__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__20__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__20__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__20__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__20__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__20__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__20__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__20__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__20__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffefffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__20__Vfuncout) 
              << 0x14U));
    ascon_top__DOT____Vlvbound23 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound23));
    ascon_top__DOT____Vlvbound23 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound23) 
              << 1U));
    ascon_top__DOT____Vlvbound23 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound23) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__21__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__21__in = vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__21__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__21__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__21__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__21__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__21__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__21__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__21__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__21__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__21__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__21__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__21__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__21__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__21__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffdfffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__21__Vfuncout) 
              << 0x15U));
    ascon_top__DOT____Vlvbound24 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound24));
    ascon_top__DOT____Vlvbound24 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound24) 
              << 1U));
    ascon_top__DOT____Vlvbound24 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound24) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__22__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__22__in = vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__22__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__22__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__22__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__22__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__22__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__22__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__22__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__22__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__22__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__22__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__22__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__22__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__22__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xffbfffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__22__Vfuncout) 
              << 0x16U));
    ascon_top__DOT____Vlvbound25 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound25));
    ascon_top__DOT____Vlvbound25 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound25) 
              << 1U));
    ascon_top__DOT____Vlvbound25 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound25) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__23__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__23__in = vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__23__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__23__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__23__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__23__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__23__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__23__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__23__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__23__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__23__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__23__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__23__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__23__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__23__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xff7fffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__23__Vfuncout) 
              << 0x17U));
    ascon_top__DOT____Vlvbound26 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound26));
    ascon_top__DOT____Vlvbound26 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound26) 
              << 1U));
    ascon_top__DOT____Vlvbound26 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound26) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__24__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__24__in = vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__24__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__24__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__24__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__24__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__24__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__24__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__24__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__24__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__24__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__24__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__24__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__24__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__24__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfeffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__24__Vfuncout) 
              << 0x18U));
    ascon_top__DOT____Vlvbound27 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound27));
    ascon_top__DOT____Vlvbound27 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound27) 
              << 1U));
    ascon_top__DOT____Vlvbound27 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound27) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__25__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__25__in = vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__25__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__25__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__25__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__25__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__25__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__25__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__25__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__25__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__25__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__25__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__25__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__25__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__25__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfdffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__25__Vfuncout) 
              << 0x19U));
    ascon_top__DOT____Vlvbound28 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound28));
    ascon_top__DOT____Vlvbound28 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound28) 
              << 1U));
    ascon_top__DOT____Vlvbound28 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound28) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__26__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__26__in = vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__26__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__26__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__26__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__26__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__26__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__26__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__26__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__26__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
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
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__26__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__26__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__26__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__26__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__26__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
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
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xfbffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__26__Vfuncout) 
              << 0x1aU));
    ascon_top__DOT____Vlvbound29 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound29));
    ascon_top__DOT____Vlvbound29 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound29) 
              << 1U));
    ascon_top__DOT____Vlvbound29 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound29) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__27__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__27__in = vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__27__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__27__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__27__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__27__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__27__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__27__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__27__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__27__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__27__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__27__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__27__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__27__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__27__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__27__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__27__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__27__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__27__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xf7ffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__27__Vfuncout) 
              << 0x1bU));
    ascon_top__DOT____Vlvbound30 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound30));
    ascon_top__DOT____Vlvbound30 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound30) 
              << 1U));
    ascon_top__DOT____Vlvbound30 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound30) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__28__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__28__in = vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__28__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__28__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__28__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__28__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__28__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__28__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__28__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__28__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__28__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__28__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__28__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__28__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__28__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__28__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__28__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__28__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__28__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xefffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__28__Vfuncout) 
              << 0x1cU));
    ascon_top__DOT____Vlvbound31 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound31));
    ascon_top__DOT____Vlvbound31 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound31) 
              << 1U));
    ascon_top__DOT____Vlvbound31 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound31) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__29__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__29__in = vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__29__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__29__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__29__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__29__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__29__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__29__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__29__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__29__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__29__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__29__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__29__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__29__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__29__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__29__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__29__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__29__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__29__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__29__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xdfffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__29__Vfuncout) 
              << 0x1dU));
    ascon_top__DOT____Vlvbound32 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][0U] 
                                          >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound32));
    ascon_top__DOT____Vlvbound32 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][0U] 
                                          >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound32) 
              << 1U));
    ascon_top__DOT____Vlvbound32 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][0U] 
                                          >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound32) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__30__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__30__in = vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__30__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__30__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__30__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__30__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__30__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__30__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__30__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__30__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__30__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__30__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__30__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__30__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__30__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__30__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__30__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__30__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__30__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__30__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__30__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__30__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__30__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0xbfffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__30__Vfuncout) 
              << 0x1eU));
    ascon_top__DOT____Vlvbound33 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [0U][0U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound33));
    ascon_top__DOT____Vlvbound33 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [1U][0U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 1U));
    ascon_top__DOT____Vlvbound33 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [2U][0U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound33) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__31__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__31__in = vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__31__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__31__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__31__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__31__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__31__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__31__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__31__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__31__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__31__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__31__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__31__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__31__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__31__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__31__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__31__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__31__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__31__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__31__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__31__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__31__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__31__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[0U] 
        = ((0x7fffffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[0U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__31__Vfuncout) 
              << 0x1fU));
    ascon_top__DOT____Vlvbound34 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [0U][1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound34));
    ascon_top__DOT____Vlvbound34 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [1U][1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 1U));
    ascon_top__DOT____Vlvbound34 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                    [2U][1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound34) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__32__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__32__in = vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__32__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__32__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__32__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__32__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__32__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__32__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__32__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__32__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__32__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__32__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__32__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__32__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__32__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__32__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__32__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__32__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__32__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__32__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__32__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__32__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__32__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffffeU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__32__Vfuncout));
    ascon_top__DOT____Vlvbound35 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound35));
    ascon_top__DOT____Vlvbound35 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound35) 
              << 1U));
    ascon_top__DOT____Vlvbound35 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound35) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__33__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__33__in = vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__33__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__33__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__33__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__33__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__33__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__33__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__33__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__33__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__33__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__33__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__33__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__33__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__33__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__33__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__33__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__33__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__33__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__33__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__33__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__33__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__33__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffffdU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__33__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound36 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound36));
    ascon_top__DOT____Vlvbound36 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound36) 
              << 1U));
    ascon_top__DOT____Vlvbound36 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound36) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__34__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__34__in = vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__34__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__34__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__34__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__34__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__34__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__34__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__34__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__34__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__34__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__34__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__34__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__34__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__34__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__34__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__34__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__34__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__34__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__34__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__34__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__34__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__34__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffffbU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__34__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound37 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound37));
    ascon_top__DOT____Vlvbound37 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound37) 
              << 1U));
    ascon_top__DOT____Vlvbound37 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound37) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__35__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__35__in = vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__35__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__35__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__35__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__35__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__35__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__35__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__35__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__35__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__35__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__35__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__35__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__35__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__35__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__35__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__35__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__35__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__35__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__35__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__35__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__35__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__35__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffff7U & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__35__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound38 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound38));
    ascon_top__DOT____Vlvbound38 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound38) 
              << 1U));
    ascon_top__DOT____Vlvbound38 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound38) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__36__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__36__in = vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__36__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__36__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__36__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__36__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__36__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__36__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__36__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__36__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__36__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__36__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__36__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__36__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__36__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__36__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__36__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__36__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__36__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__36__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__36__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__36__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__36__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffffefU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__36__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound39 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound39));
    ascon_top__DOT____Vlvbound39 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound39) 
              << 1U));
    ascon_top__DOT____Vlvbound39 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound39) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__37__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__37__in = vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__37__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__37__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__37__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__37__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__37__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__37__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__37__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__37__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__37__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__37__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__37__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__37__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__37__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__37__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__37__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__37__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__37__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__37__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__37__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__37__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__37__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffffdfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__37__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound40 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound40));
    ascon_top__DOT____Vlvbound40 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound40) 
              << 1U));
    ascon_top__DOT____Vlvbound40 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound40) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__38__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__38__in = vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__38__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__38__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__38__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__38__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__38__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__38__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__38__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__38__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__38__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__38__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__38__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__38__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__38__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__38__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__38__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__38__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__38__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__38__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__38__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__38__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__38__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffffbfU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__38__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound41 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound41));
    ascon_top__DOT____Vlvbound41 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound41) 
              << 1U));
    ascon_top__DOT____Vlvbound41 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound41) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__39__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__39__in = vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__39__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__39__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__39__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__39__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__39__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__39__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__39__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__39__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__39__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__39__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__39__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__39__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__39__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__39__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__39__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__39__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__39__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__39__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__39__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__39__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__39__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffff7fU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__39__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound42 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound42));
    ascon_top__DOT____Vlvbound42 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound42) 
              << 1U));
    ascon_top__DOT____Vlvbound42 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound42) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__40__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__40__in = vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__40__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__40__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__40__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__40__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__40__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__40__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__40__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__40__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__40__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__40__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__40__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__40__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__40__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__40__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__40__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__40__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__40__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__40__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__40__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__40__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__40__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffeffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__40__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound43 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound43));
    ascon_top__DOT____Vlvbound43 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound43) 
              << 1U));
    ascon_top__DOT____Vlvbound43 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound43) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__41__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__41__in = vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__41__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__41__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__41__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__41__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__41__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__41__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__41__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__41__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__41__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__41__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__41__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__41__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__41__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__41__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__41__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__41__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__41__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__41__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__41__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__41__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__41__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__41__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffdffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound44 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound44));
    ascon_top__DOT____Vlvbound44 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound44) 
              << 1U));
    ascon_top__DOT____Vlvbound44 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound44) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__42__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__in = vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__42__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__42__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__42__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__42__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__42__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__42__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__42__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__42__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__42__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__42__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__42__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__42__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffffbffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound45 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound45));
    ascon_top__DOT____Vlvbound45 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound45) 
              << 1U));
    ascon_top__DOT____Vlvbound45 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound45) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__43__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__43__in = vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__43__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__43__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__43__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__43__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__43__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__43__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__43__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__43__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__43__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__43__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__43__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__43__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__43__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__43__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffff7ffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound46 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound46));
    ascon_top__DOT____Vlvbound46 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound46) 
              << 1U));
    ascon_top__DOT____Vlvbound46 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound46) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__44__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__44__in = vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__44__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__44__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__44__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__44__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__44__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__44__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__44__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__44__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__44__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__44__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__44__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__44__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__44__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__44__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffefffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound47 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound47));
    ascon_top__DOT____Vlvbound47 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound47) 
              << 1U));
    ascon_top__DOT____Vlvbound47 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound47) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__45__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__45__in = vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__45__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__45__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__45__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__45__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__45__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__45__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__45__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__45__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__45__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__45__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__45__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__45__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__45__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__45__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffdfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound48 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound48));
    ascon_top__DOT____Vlvbound48 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound48) 
              << 1U));
    ascon_top__DOT____Vlvbound48 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound48) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__46__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__46__in = vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__46__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__46__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__46__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__46__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__46__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__46__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__46__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__46__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__46__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__46__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__46__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__46__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__46__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__46__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffffbfffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound49 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound49));
    ascon_top__DOT____Vlvbound49 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound49) 
              << 1U));
    ascon_top__DOT____Vlvbound49 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound49) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__47__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__47__in = vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__47__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__47__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__47__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__47__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__47__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__47__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__47__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__47__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__47__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__47__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__47__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__47__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__47__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__47__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xffff7fffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound50 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound50));
    ascon_top__DOT____Vlvbound50 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound50) 
              << 1U));
    ascon_top__DOT____Vlvbound50 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound50) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__48__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__48__in = vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__48__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__48__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__48__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__48__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__48__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__48__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__48__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__48__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__48__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__48__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__48__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__48__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__48__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__48__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffeffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound51 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound51));
    ascon_top__DOT____Vlvbound51 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound51) 
              << 1U));
    ascon_top__DOT____Vlvbound51 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound51) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__49__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__49__in = vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox;
    __Vfunc_ascon_top__DOT__xor_tree__49__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__49__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__49__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__49__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__49__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__49__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__49__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__49__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__49__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__49__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__49__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__49__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__49__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__49__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__49__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__49__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__49__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares_sbox[1U] 
        = ((0xfffdffffU & vlSelf->ascon_top__DOT__recombine_shares_sbox[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__49__Vfuncout) 
              << 0x11U));
    ascon_top__DOT____Vlvbound52 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [0U][1U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox)) 
           | (IData)(ascon_top__DOT____Vlvbound52));
    ascon_top__DOT____Vlvbound52 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [1U][1U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound52) 
              << 1U));
    ascon_top__DOT____Vlvbound52 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                          [2U][1U] 
                                          >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox)) 
           | ((IData)(ascon_top__DOT____Vlvbound52) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__50__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__50__in = vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__50__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__50__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__50__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__50__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage
                      [(3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage
                        [(3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__50__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage
                                                    [
                                                    (3U 
                                                     & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__50__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage[(3U 
                                                                     & ((IData)(1U) 
                                                                        + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__50__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__50__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__level);
    }
}
