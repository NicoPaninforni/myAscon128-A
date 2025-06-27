// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__35(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__35\n"); );
    // Variables
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
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__0__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__1__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__2__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__4__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__5__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__6__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__7__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__8__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__9__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__10__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__11__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__12__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__13__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__14__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__15__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__16__in;
    SData/*10:0*/ __Vfunc_ascon_top__DOT__xor_tree__17__in;
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
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__3__level;
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
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__30__x;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout;
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__31__x;
    // Body
    __Vfunc_ascon_top__DOT__reverse_bytes__31__x[0U] 
        = vlSelf->data_in[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__31__x[1U] 
        = vlSelf->data_in[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__31__x[2U] 
        = vlSelf->data_in[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__31__x[3U] 
        = vlSelf->data_in[3U];
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[1U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[3U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[1U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[3U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[1U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[3U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[1U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[3U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[0U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[2U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[0U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[2U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[0U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[2U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[0U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__31__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__31__y[3U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__x[0U] 
        = vlSelf->ascon_top__DOT__data_in_padded[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__x[1U] 
        = vlSelf->ascon_top__DOT__data_in_padded[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__x[2U] 
        = vlSelf->ascon_top__DOT__data_in_padded[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__x[3U] 
        = vlSelf->ascon_top__DOT__data_in_padded[3U];
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[1U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[3U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[1U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[3U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[1U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[3U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[1U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[3U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[0U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U] 
        = ((0xffffff00U & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[2U] 
              >> 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[0U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U] 
        = ((0xffff00ffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[2U] 
                         >> 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[0U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U] 
        = ((0xff00ffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[2U] 
                           << 8U)));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[0U] 
              << 0x18U));
    vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U] 
        = ((0xffffffU & vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__30__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[3U] 
        = vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__30__y[3U];
    if (vlSelf->ascon_top__DOT__sel_padding) {
        vlSelf->ascon_top__DOT__reverse_reg_data_out[0U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[0U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[1U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[1U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[2U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[2U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[3U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__30__Vfuncout[3U];
    } else {
        vlSelf->ascon_top__DOT__reverse_reg_data_out[0U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[0U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[1U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[1U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[2U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[2U];
        vlSelf->ascon_top__DOT__reverse_reg_data_out[3U] 
            = __Vfunc_ascon_top__DOT__reverse_bytes__31__Vfuncout[3U];
    }
    vlSelf->debug_linear_diffusion_state3 = vlSelf->ascon_top__DOT__linear_diffusion_debug
        [3U];
    vlSelf->debug_linear_diffusion_state4 = vlSelf->ascon_top__DOT__linear_diffusion_debug
        [4U];
    vlSelf->ascon_top__DOT__linear_diffusion_out[0U] 
        = (IData)(vlSelf->ascon_top__DOT__linear_diffusion_debug
                  [0U]);
    vlSelf->ascon_top__DOT__linear_diffusion_out[1U] 
        = (IData)((vlSelf->ascon_top__DOT__linear_diffusion_debug
                   [0U] >> 0x20U));
    vlSelf->ascon_top__DOT__linear_diffusion_out[2U] 
        = (IData)(vlSelf->ascon_top__DOT__linear_diffusion_debug
                  [1U]);
    vlSelf->ascon_top__DOT__linear_diffusion_out[3U] 
        = (IData)((vlSelf->ascon_top__DOT__linear_diffusion_debug
                   [1U] >> 0x20U));
    vlSelf->ascon_top__DOT__linear_diffusion_out[4U] 
        = (IData)(vlSelf->ascon_top__DOT__linear_diffusion_debug
                  [2U]);
    vlSelf->ascon_top__DOT__linear_diffusion_out[5U] 
        = (IData)((vlSelf->ascon_top__DOT__linear_diffusion_debug
                   [2U] >> 0x20U));
    vlSelf->ascon_top__DOT__linear_diffusion_out[6U] 
        = (IData)(vlSelf->ascon_top__DOT__linear_diffusion_debug
                  [3U]);
    vlSelf->ascon_top__DOT__linear_diffusion_out[7U] 
        = (IData)((vlSelf->ascon_top__DOT__linear_diffusion_debug
                   [3U] >> 0x20U));
    vlSelf->ascon_top__DOT__linear_diffusion_out[8U] 
        = (IData)(vlSelf->ascon_top__DOT__linear_diffusion_debug
                  [4U]);
    vlSelf->ascon_top__DOT__linear_diffusion_out[9U] 
        = (IData)((vlSelf->ascon_top__DOT__linear_diffusion_debug
                   [4U] >> 0x20U));
    vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__mux_1st_x0[0U]))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 4U)) : (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x0[0U]))) 
                                                 << 0x3aU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                                   >> 6U)))
                : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x0[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x0[0U]))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 4U)) : (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x1[0U]))) 
                                                 << 0x3aU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                                   >> 6U)))
                : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x1[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x1[0U]))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__mux_1st_x3[0U]))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 4U)) : (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x3[0U]))) 
                                                 << 0x3aU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                                   >> 6U)))
                : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x3[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x3[0U]))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__mux_1st_x4[0U]))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 4U)) : (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x4[0U]))) 
                                                 << 0x3aU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                                   >> 6U)))
                : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x4[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x4[0U]))));
    }
    vlSelf->ascon_top__DOT__mux_1st_x2[0U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[0U]) 
                                              | ((0xfc0U 
                                                  & ((0xffffffc0U 
                                                      & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U]) 
                                                     ^ 
                                                     (vlSelf->ascon_top__DOT__rc_block
                                                      [1U] 
                                                      << 6U))) 
                                                 | (0x3fU 
                                                    & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
                                                       ^ 
                                                       vlSelf->ascon_top__DOT__rc_block
                                                       [0U]))));
    vlSelf->ascon_top__DOT__mux_1st_x2[0U] = ((0xff000fffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[0U]) 
                                              | (0xfffff000U 
                                                 & ((0xfc0000U 
                                                     & ((0xfffc0000U 
                                                         & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U]) 
                                                        ^ 
                                                        (vlSelf->ascon_top__DOT__rc_block
                                                         [3U] 
                                                         << 0x12U))) 
                                                    | (0x3f000U 
                                                       & ((0xfffff000U 
                                                           & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U]) 
                                                          ^ 
                                                          (vlSelf->ascon_top__DOT__rc_block
                                                           [2U] 
                                                           << 0xcU))))));
    vlSelf->ascon_top__DOT__mux_1st_x2[0U] = ((0xffffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[0U]) 
                                              | (0xff000000U 
                                                 & ((0xc0000000U 
                                                     & ((0xc0000000U 
                                                         & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U]) 
                                                        ^ 
                                                        (vlSelf->ascon_top__DOT__rc_block
                                                         [5U] 
                                                         << 0x1eU))) 
                                                    | (0x3f000000U 
                                                       & ((0xff000000U 
                                                           & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U]) 
                                                          ^ 
                                                          (vlSelf->ascon_top__DOT__rc_block
                                                           [4U] 
                                                           << 0x18U))))));
    vlSelf->ascon_top__DOT__mux_1st_x2[1U] = ((0xfffffff0U 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
                                              | (0xfU 
                                                 & ((0xffffffU 
                                                     & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U]) 
                                                    ^ 
                                                    (0xffffffU 
                                                     & (vlSelf->ascon_top__DOT__rc_block
                                                        [5U] 
                                                        >> 2U)))));
    vlSelf->ascon_top__DOT__mux_1st_x2[1U] = ((0xffff000fU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
                                              | (0xfffffff0U 
                                                 & ((0xfc00U 
                                                     & ((0xfffffc00U 
                                                         & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U]) 
                                                        ^ 
                                                        (vlSelf->ascon_top__DOT__rc_block
                                                         [7U] 
                                                         << 0xaU))) 
                                                    | (0x3f0U 
                                                       & ((0xfffffff0U 
                                                           & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U]) 
                                                          ^ 
                                                          (vlSelf->ascon_top__DOT__rc_block
                                                           [6U] 
                                                           << 4U))))));
    vlSelf->ascon_top__DOT__mux_1st_x2[1U] = ((0xf000ffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
                                              | (0xffff0000U 
                                                 & ((0xfc00000U 
                                                     & ((0xffc00000U 
                                                         & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U]) 
                                                        ^ 
                                                        (vlSelf->ascon_top__DOT__rc_block
                                                         [9U] 
                                                         << 0x16U))) 
                                                    | (0x3f0000U 
                                                       & ((0xffff0000U 
                                                           & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U]) 
                                                          ^ 
                                                          (vlSelf->ascon_top__DOT__rc_block
                                                           [8U] 
                                                           << 0x10U))))));
    vlSelf->ascon_top__DOT__mux_1st_x2[1U] = ((0xfffffffU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x2[1U]) 
                                              | (0xf0000000U 
                                                 & ((0xf0000000U 
                                                     & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U]) 
                                                    ^ 
                                                    (vlSelf->ascon_top__DOT__rc_block
                                                     [0xaU] 
                                                     << 0x1cU))));
    vlSelf->ascon_top__DOT__mux_1st_x2[2U] = (3U & 
                                              (vlSelf->ascon_top__DOT__rc_block
                                               [0xaU] 
                                               >> 4U));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                            [4U])) << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [3U])) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                                    [2U])) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                                       [1U] 
                                                                       << 0xbU) 
                                                                      | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                                      [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[1U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                            [4U])) << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [3U])) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                                    [2U])) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                                       [1U] 
                                                                       << 0xbU) 
                                                                      | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                                      [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[2U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                            [4U])) << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [3U])) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                                    [2U])) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                                       [1U] 
                                                                       << 0xbU) 
                                                                      | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                                      [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[3U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                            [4U])) << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [3U])) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                                    [2U])) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                                       [1U] 
                                                                       << 0xbU) 
                                                                      | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                                      [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[4U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                            [4U])) << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [3U])) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                                    [2U])) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                                       [1U] 
                                                                       << 0xbU) 
                                                                      | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                                      [0U]))))));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[5U] 
        = (((QData)((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                            [4U])) << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                                 [3U])) 
                                                 << 0x21U) 
                                                | (((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                                    [2U])) 
                                                    << 0x16U) 
                                                   | (QData)((IData)(
                                                                     ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                                       [1U] 
                                                                       << 0xbU) 
                                                                      | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                                      [0U]))))));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[0U] 
        = ((((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[0U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[3U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[2U]))));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[1U] 
        = ((((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_out[2U]))) 
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
                    ? (((QData)((IData)((0xfU & vlSelf->ascon_top__DOT__mux_1st_x2[0U]))) 
                        << 0x3cU) | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 4U)) : (((QData)((IData)(
                                                                 (0x3fU 
                                                                  & vlSelf->ascon_top__DOT__mux_1st_x2[0U]))) 
                                                 << 0x3aU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                                   >> 6U)))
                : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x2[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x2[0U]))));
    }
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                           << 0x18U)) | ((0xfc0000U 
                                          & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                             << 0x12U)) 
                                         | ((0x3f000U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                << 0xcU)) 
                                            | ((0xfc0U 
                                                & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))));
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
    vlSelf->ascon_top__DOT__shares_out[3U] = ((0xff000000U 
                                               & vlSelf->ascon_top__DOT__shares_out[3U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 6U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[2U] 
                              << 4U) | (vlSelf->ascon_top__DOT__lfsr_out[1U] 
                                        >> 0x1cU))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[3U] 
                           << 6U) | (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                     >> 0x1aU)));
    vlSelf->ascon_top__DOT__shares_out[3U] = ((0xffffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[3U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x18U));
    vlSelf->ascon_top__DOT__shares_out[4U] = ((0xffc00000U 
                                               & vlSelf->ascon_top__DOT__shares_out[4U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 8U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[3U] 
                              << 6U) | (vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1aU))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[4U] 
                           << 8U) | (vlSelf->ascon_top__DOT__lfsr_out[3U] 
                                     >> 0x18U)));
    vlSelf->ascon_top__DOT__shares_out[4U] = ((0x3fffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[4U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x16U));
    vlSelf->ascon_top__DOT__shares_out[5U] = ((0xfff00000U 
                                               & vlSelf->ascon_top__DOT__shares_out[5U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 0xaU));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[4U] 
                              << 8U) | (vlSelf->ascon_top__DOT__lfsr_out[3U] 
                                        >> 0x18U))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[5U] 
                           << 0xaU) | (vlSelf->ascon_top__DOT__lfsr_out[4U] 
                                       >> 0x16U)));
    vlSelf->ascon_top__DOT__shares_out[5U] = ((0xfffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[5U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x14U));
    vlSelf->ascon_top__DOT__shares_out[6U] = ((0xfffc0000U 
                                               & vlSelf->ascon_top__DOT__shares_out[6U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 0xcU));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[5U] 
                              << 0xaU) | (vlSelf->ascon_top__DOT__lfsr_out[4U] 
                                          >> 0x16U))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[6U] 
                           << 0xcU) | (vlSelf->ascon_top__DOT__lfsr_out[5U] 
                                       >> 0x14U)));
    vlSelf->ascon_top__DOT__shares_out[6U] = ((0x3ffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[6U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x12U));
    vlSelf->ascon_top__DOT__shares_out[7U] = ((0xffff0000U 
                                               & vlSelf->ascon_top__DOT__shares_out[7U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 0xeU));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[6U] 
                              << 0xcU) | (vlSelf->ascon_top__DOT__lfsr_out[5U] 
                                          >> 0x14U))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[7U] 
                           << 0xeU) | (vlSelf->ascon_top__DOT__lfsr_out[6U] 
                                       >> 0x12U)));
    vlSelf->ascon_top__DOT__shares_out[7U] = ((0xffffU 
                                               & vlSelf->ascon_top__DOT__shares_out[7U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0x10U));
    vlSelf->ascon_top__DOT__shares_out[8U] = ((0xffffc000U 
                                               & vlSelf->ascon_top__DOT__shares_out[8U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 0x10U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[7U] 
                              << 0xeU) | (vlSelf->ascon_top__DOT__lfsr_out[6U] 
                                          >> 0x12U))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[8U] 
                           << 0x10U) | (vlSelf->ascon_top__DOT__lfsr_out[7U] 
                                        >> 0x10U)));
    vlSelf->ascon_top__DOT__shares_out[8U] = ((0x3fffU 
                                               & vlSelf->ascon_top__DOT__shares_out[8U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0xeU));
    vlSelf->ascon_top__DOT__shares_out[9U] = ((0xfffff000U 
                                               & vlSelf->ascon_top__DOT__shares_out[9U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 >> 0x12U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[8U] 
                              << 0x10U) | (vlSelf->ascon_top__DOT__lfsr_out[7U] 
                                           >> 0x10U))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x3fffffffU & ((vlSelf->ascon_top__DOT__lfsr_out[9U] 
                           << 0x12U) | (vlSelf->ascon_top__DOT__lfsr_out[8U] 
                                        >> 0xeU)));
    vlSelf->ascon_top__DOT__shares_out[9U] = ((0xfffU 
                                               & vlSelf->ascon_top__DOT__shares_out[9U]) 
                                              | (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                 << 0xcU));
    vlSelf->ascon_top__DOT__shares_out[0xaU] = (0x3ffU 
                                                & (ascon_top__DOT__share_creator__DOT____Vlvbound1 
                                                   >> 0x14U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x3fffffffU & (vlSelf->ascon_top__DOT__share_creator__DOT__temp 
                          ^ ((vlSelf->ascon_top__DOT__lfsr_out[9U] 
                              << 0x12U) | (vlSelf->ascon_top__DOT__lfsr_out[8U] 
                                           >> 0xeU))));
    vlSelf->ascon_top__DOT__shares_out[0U] = ((0xc0000000U 
                                               & vlSelf->ascon_top__DOT__shares_out[0U]) 
                                              | vlSelf->ascon_top__DOT__share_creator__DOT__temp);
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
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
        vlSelf->ascon_top__DOT__affine_layer_in[4U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[4U] 
                               << 8U) | (vlSelf->ascon_top__DOT__shares_out[3U] 
                                         >> 0x18U)));
        vlSelf->ascon_top__DOT__affine_layer_in[5U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[5U] 
                               << 0xaU) | (vlSelf->ascon_top__DOT__shares_out[4U] 
                                           >> 0x16U)));
        vlSelf->ascon_top__DOT__affine_layer_in[6U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[6U] 
                               << 0xcU) | (vlSelf->ascon_top__DOT__shares_out[5U] 
                                           >> 0x14U)));
        vlSelf->ascon_top__DOT__affine_layer_in[7U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[7U] 
                               << 0xeU) | (vlSelf->ascon_top__DOT__shares_out[6U] 
                                           >> 0x12U)));
        vlSelf->ascon_top__DOT__affine_layer_in[8U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[8U] 
                               << 0x10U) | (vlSelf->ascon_top__DOT__shares_out[7U] 
                                            >> 0x10U)));
        vlSelf->ascon_top__DOT__affine_layer_in[9U] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[9U] 
                               << 0x12U) | (vlSelf->ascon_top__DOT__shares_out[8U] 
                                            >> 0xeU)));
        vlSelf->ascon_top__DOT__affine_layer_in[0xaU] 
            = (0x3fffffffU & ((vlSelf->ascon_top__DOT__shares_out[0xaU] 
                               << 0x14U) | (vlSelf->ascon_top__DOT__shares_out[9U] 
                                            >> 0xcU)));
    } else {
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                              << 0x18U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                               << 0x12U)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                 << 0xcU)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                  << 6U)) 
                                       | (0x3fU & vlSelf->ascon_top__DOT__mux_1st_x0[0U]))))));
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                              << 0x12U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                               << 0xcU)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                 << 6U)) 
                                    | ((0xfc0U & vlSelf->ascon_top__DOT__mux_1st_x1[0U]) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                   >> 6U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                              << 0xcU)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                               << 6U)) 
                                 | ((0x3f000U & vlSelf->ascon_top__DOT__mux_1st_x2[0U]) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                  >> 6U)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                   >> 0xcU)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[3U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                              << 6U)) 
                              | ((0xfc0000U & vlSelf->ascon_top__DOT__mux_1st_x3[0U]) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                 >> 6U)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                  >> 0xcU)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                   >> 0x12U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[4U] 
            = (0x3fffffffU & ((0x3f000000U & vlSelf->ascon_top__DOT__mux_1st_x4[0U]) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                               >> 6U)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                 >> 0xcU)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                  >> 0x12U)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                   >> 0x18U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[5U] 
            = (0x3fffffffU & ((0x3f000000U & ((vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                               << 0x1aU) 
                                              | (0x3000000U 
                                                 & (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                                    >> 6U)))) 
                              | ((0xfc0000U & ((vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                                << 0x14U) 
                                               | (0xc0000U 
                                                  & (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                                     >> 0xcU)))) 
                                 | ((0x3f000U & ((vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                  << 0xeU) 
                                                 | (0x3000U 
                                                    & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                                       >> 0x12U)))) 
                                    | ((0xfc0U & ((
                                                   vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                   << 8U) 
                                                  | (0xc0U 
                                                     & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                        >> 0x18U)))) 
                                       | (0x3fU & (
                                                   (vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                    << 2U) 
                                                   | (vlSelf->ascon_top__DOT__mux_1st_x0[0U] 
                                                      >> 0x1eU))))))));
        vlSelf->ascon_top__DOT__affine_layer_in[6U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                              << 0x14U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                               << 0xeU)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                 << 8U)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                  << 2U)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                   >> 4U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[7U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                              << 0xeU)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                               << 8U)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                 << 2U)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                  >> 4U)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                   >> 0xaU)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[8U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                              << 8U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                               << 2U)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                 >> 4U)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                  >> 0xaU)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                   >> 0x10U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[9U] 
            = (0x3fffffffU & ((0x3f000000U & (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                              << 2U)) 
                              | ((0xfc0000U & (vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                               >> 4U)) 
                                 | ((0x3f000U & (vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                 >> 0xaU)) 
                                    | ((0xfc0U & (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                  >> 0x10U)) 
                                       | (0x3fU & (
                                                   vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                   >> 0x16U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[0xaU] 
            = (0x3fffffffU & ((0x3f000000U & ((vlSelf->ascon_top__DOT__mux_1st_x4[2U] 
                                               << 0x1cU) 
                                              | (0xf000000U 
                                                 & (vlSelf->ascon_top__DOT__mux_1st_x4[1U] 
                                                    >> 4U)))) 
                              | ((0xfc0000U & ((vlSelf->ascon_top__DOT__mux_1st_x3[2U] 
                                                << 0x16U) 
                                               | (0x3c0000U 
                                                  & (vlSelf->ascon_top__DOT__mux_1st_x3[1U] 
                                                     >> 0xaU)))) 
                                 | ((0x3f000U & ((vlSelf->ascon_top__DOT__mux_1st_x2[2U] 
                                                  << 0x10U) 
                                                 | (0xf000U 
                                                    & (vlSelf->ascon_top__DOT__mux_1st_x2[1U] 
                                                       >> 0x10U)))) 
                                    | ((0xfc0U & ((
                                                   vlSelf->ascon_top__DOT__mux_1st_x1[2U] 
                                                   << 0xaU) 
                                                  | (0x3c0U 
                                                     & (vlSelf->ascon_top__DOT__mux_1st_x1[1U] 
                                                        >> 0x16U)))) 
                                       | (0x3fU & (
                                                   (vlSelf->ascon_top__DOT__mux_1st_x0[2U] 
                                                    << 4U) 
                                                   | (vlSelf->ascon_top__DOT__mux_1st_x0[1U] 
                                                      >> 0x1cU))))))));
    }
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (1U & (IData)(vlSelf->ascon_top__DOT__mux_sbox_out
                                  [0U])));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0xbU)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x16U)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x21U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x2cU)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (2U & ((IData)(vlSelf->ascon_top__DOT__mux_sbox_out
                                   [1U]) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0xbU)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x16U)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x21U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x2cU)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (4U & ((IData)(vlSelf->ascon_top__DOT__mux_sbox_out
                                   [2U]) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0xbU)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x16U)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x21U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x2cU)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (8U & ((IData)(vlSelf->ascon_top__DOT__mux_sbox_out
                                   [3U]) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0xbU)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x16U)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x21U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x2cU)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_sbox_out
                                      [4U]) << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0xbU)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x16U)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x21U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x2cU)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x20U & ((IData)(vlSelf->ascon_top__DOT__mux_sbox_out
                                      [5U]) << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0xbU)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x16U)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x21U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x2cU)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 1U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0xcU)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x17U)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x22U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x2dU)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 1U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0xcU)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x17U)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x22U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x2dU)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 1U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0xcU)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x17U)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x22U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x2dU)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 1U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0xcU)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x17U)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x22U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x2dU)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 1U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0xcU)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x17U)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x22U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x2dU)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 1U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0xcU)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x17U)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x22U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x2dU)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 2U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0xdU)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x18U)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x23U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x2eU)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 2U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0xdU)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x18U)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x23U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x2eU)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 2U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0xdU)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x18U)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x23U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x2eU)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 2U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0xdU)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x18U)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x23U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x2eU)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 2U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0xdU)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x18U)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x23U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x2eU)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 2U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0xdU)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x18U)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x23U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x2eU)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 3U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0xeU)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x19U)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x24U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x2fU)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 3U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0xeU)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x19U)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x24U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x2fU)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 3U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0xeU)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x19U)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x24U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x2fU)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 3U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0xeU)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x19U)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x24U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x2fU)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 3U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0xeU)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x19U)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x24U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x2fU)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 3U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0xeU)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x19U)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x24U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[3U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [3U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x2fU)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 4U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0xfU)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x1aU)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x25U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x30U)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 4U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0xfU)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x1aU)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x25U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x30U)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 4U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0xfU)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x1aU)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x25U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x30U)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 4U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0xfU)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x1aU)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x25U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x30U)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 4U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0xfU)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x1aU)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x25U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x30U)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 4U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0xfU)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x1aU)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x25U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[4U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x30U)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 5U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0x10U)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x1bU)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x26U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x31U)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 5U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0x10U)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x1bU)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x26U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x31U)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 5U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0x10U)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x1bU)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x26U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x31U)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 5U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0x10U)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x1bU)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x26U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x31U)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 5U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0x10U)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x1bU)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x26U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x31U)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 5U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0x10U)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x1bU)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x26U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[5U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x31U)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 6U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0x11U)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x1cU)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x27U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x32U)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 6U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0x11U)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x1cU)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x27U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x32U)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 6U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0x11U)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x1cU)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x27U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x32U)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 6U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0x11U)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x1cU)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x27U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x32U)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 6U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0x11U)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x1cU)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x27U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x32U)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 6U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0x11U)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x1cU)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x27U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[6U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x32U)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 7U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0x12U)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x1dU)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x28U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x33U)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 7U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0x12U)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x1dU)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x28U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x33U)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 7U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0x12U)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x1dU)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x28U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x33U)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 7U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0x12U)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x1dU)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x28U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x33U)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 7U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0x12U)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x1dU)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x28U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x33U)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 7U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0x12U)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x1dU)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x28U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[7U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x33U)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 8U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0x13U)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x1eU)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x29U)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x34U)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 8U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0x13U)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x1eU)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x29U)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x34U)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 8U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0x13U)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x1eU)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x29U)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x34U)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 8U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0x13U)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x1eU)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x29U)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x34U)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 8U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0x13U)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x1eU)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x29U)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x34U)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 8U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0x13U)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x1eU)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x29U)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[8U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x34U)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                   [0U] >> 9U))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [0U] >> 0x14U)) 
                              << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x1fU)) 
                                << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [0U] >> 0x2aU)) 
                                 << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x35U)) 
                                   << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [1U] >> 9U)) << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [1U] >> 0x14U)) 
                              << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x1fU)) 
                                << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [1U] >> 0x2aU)) 
                                 << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x35U)) 
                                   << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [2U] >> 9U)) << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [2U] >> 0x14U)) 
                               << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [2U] >> 0x1fU)) 
                                << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x2aU)) 
                                  << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [2U] >> 0x35U)) 
                                   << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                    [3U] >> 9U)) << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [3U] >> 0x14U)) 
                               << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [3U] >> 0x1fU)) 
                                << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x2aU)) 
                                  << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [3U] >> 0x35U)) 
                                   << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [4U] >> 9U)) 
                              << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [4U] >> 0x14U)) 
                               << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x1fU)) 
                                 << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [4U] >> 0x2aU)) 
                                  << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x35U)) 
                                    << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                       [5U] >> 9U)) 
                              << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                        [5U] >> 0x14U)) 
                               << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x1fU)) 
                                 << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [5U] >> 0x2aU)) 
                                  << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[9U] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x35U)) 
                                    << 0x1dU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffffeU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (1U & (IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                     [0U] >> 0xaU))));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffffbfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x40U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [0U] >> 0x15U)) 
                                << 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffefffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x1000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [0U] >> 0x20U)) 
                                  << 0xcU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffbffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x40000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [0U] >> 0x2bU)) 
                                   << 0x12U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3effffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x1000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                              [0U] 
                                              >> 0x36U)) 
                                     << 0x18U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffffdU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (2U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                      [1U] >> 0xaU)) 
                             << 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffff7fU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x80U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [1U] >> 0x15U)) 
                                << 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffdfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x2000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [1U] >> 0x20U)) 
                                  << 0xdU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ff7ffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x80000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [1U] >> 0x2bU)) 
                                   << 0x13U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3dffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x2000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                              [1U] 
                                              >> 0x36U)) 
                                     << 0x19U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffffbU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (4U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                      [2U] >> 0xaU)) 
                             << 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffeffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x100U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [2U] >> 0x15U)) 
                                 << 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffbfffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x4000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [2U] >> 0x20U)) 
                                  << 0xeU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fefffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x100000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [2U] >> 0x2bU)) 
                                    << 0x14U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3bffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x4000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                              [2U] 
                                              >> 0x36U)) 
                                     << 0x1aU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffff7U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (8U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                      [3U] >> 0xaU)) 
                             << 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffdffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x200U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [3U] >> 0x15U)) 
                                 << 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fff7fffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x8000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                           [3U] >> 0x20U)) 
                                  << 0xfU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fdfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x200000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [3U] >> 0x2bU)) 
                                    << 0x15U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x37ffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x8000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                              [3U] 
                                              >> 0x36U)) 
                                     << 0x1bU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffffefU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x10U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [4U] >> 0xaU)) 
                                << 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffffbffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x400U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [4U] >> 0x15U)) 
                                 << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffeffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x10000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [4U] >> 0x20U)) 
                                   << 0x10U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fbfffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x400000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [4U] >> 0x2bU)) 
                                    << 0x16U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x2fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x10000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                               [4U] 
                                               >> 0x36U)) 
                                      << 0x1cU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3fffffdfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x20U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                         [5U] >> 0xaU)) 
                                << 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffff7ffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x800U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                          [5U] >> 0x15U)) 
                                 << 0xbU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3ffdffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x20000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                            [5U] >> 0x20U)) 
                                   << 0x11U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x3f7fffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x800000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                             [5U] >> 0x2bU)) 
                                    << 0x17U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0xaU] 
        = ((0x1fffffffU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | (0x20000000U & ((IData)((vlSelf->ascon_top__DOT__mux_sbox_out
                                               [5U] 
                                               >> 0x36U)) 
                                      << 0x1dU)));
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
    vlSelf->ascon_top__DOT__affine_layer_out[4U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [4U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [4U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [4U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [4U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [4U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [4U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [4U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [4U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[5U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [5U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [5U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [5U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [5U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [5U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [5U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [5U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [5U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[6U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [6U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [6U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [6U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [6U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [6U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [6U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [6U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [6U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[7U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [7U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [7U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [7U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [7U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [7U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [7U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [7U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [7U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[8U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [8U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [8U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [8U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [8U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [8U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [8U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [8U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [8U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[9U] = 
        ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                          [9U]) ^ (0xff000000U & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [9U] 
                                                  << 6U)))) 
         | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
             [9U]) | ((0x3f000U & ((0xfffff000U & vlSelf->ascon_top__DOT__affine_layer_in
                                    [9U]) ^ (0xfffff000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer_in
                                                [9U] 
                                                << 6U)))) 
                      | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                          [9U]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [9U] ^ 
                                            (vlSelf->ascon_top__DOT__affine_layer_in
                                             [9U] >> 0x18U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[0xaU] 
        = ((0x3f000000U & ((0xff000000U & vlSelf->ascon_top__DOT__affine_layer_in
                            [0xaU]) ^ (0xff000000U 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [0xaU] << 6U)))) 
           | ((0xfc0000U & vlSelf->ascon_top__DOT__affine_layer_in
               [0xaU]) | ((0x3f000U & ((0xfffff000U 
                                        & vlSelf->ascon_top__DOT__affine_layer_in
                                        [0xaU]) ^ (0xfffff000U 
                                                   & (vlSelf->ascon_top__DOT__affine_layer_in
                                                      [0xaU] 
                                                      << 6U)))) 
                          | ((0xfc0U & vlSelf->ascon_top__DOT__affine_layer_in
                              [0xaU]) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer_in
                                                  [0xaU] 
                                                  ^ 
                                                  (vlSelf->ascon_top__DOT__affine_layer_in
                                                   [0xaU] 
                                                   >> 0x18U)))))));
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
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [1U] >> 0xcU)) 
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
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [2U] >> 0xcU)) 
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
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [3U] >> 0xcU)) 
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
    vlSelf->ascon_top__DOT__affine_layer2nd_out[4U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [4U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [4U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [4U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [4U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [4U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [4U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [4U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[5U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [5U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [5U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [5U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [5U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [5U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [5U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [5U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[6U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [6U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [6U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [6U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [6U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [6U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [6U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [6U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[7U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [7U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [7U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [7U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [7U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [7U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [7U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [7U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[8U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [8U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [8U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [8U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [8U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [8U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [8U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [8U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[9U] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [9U]) | ((0xfc0000U & ((0xfffc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                                    [9U]) ^ (0xfffc0000U 
                                             & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [9U] 
                                                << 6U)))) 
                     | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                         [9U] >> 0xcU)) 
                                     << 0xcU)) | (0xfffU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [9U] 
                                                     ^ 
                                                     ((0xfc0U 
                                                       & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                          [9U] 
                                                          << 6U)) 
                                                      | (0x3fU 
                                                         & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                            [9U] 
                                                            >> 0x18U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0xaU] 
        = ((0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0xaU]) | ((0xfc0000U & ((0xfffc0000U & 
                                      vlSelf->ascon_top__DOT__affine_layer2nd_in
                                      [0xaU]) ^ (0xfffc0000U 
                                                 & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                    [0xaU] 
                                                    << 6U)))) 
                       | ((0x3f000U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                           [0xaU] >> 0xcU)) 
                                       << 0xcU)) | 
                          (0xfffU & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                     [0xaU] ^ ((0xfc0U 
                                                & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [0xaU] 
                                                   << 6U)) 
                                               | (0x3fU 
                                                  & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                     [0xaU] 
                                                     >> 0x18U))))))));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffffeULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                                      [0U]))));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffff7ffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 6U)))) 
                                                      << 0xbU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffbfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0xcU)))) 
                                                      << 0x16U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffdffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x12U)))) 
                                                      << 0x21U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fefffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x18U)))) 
                                                      << 0x2cU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffffdULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [1U]))) 
                                                      << 1U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffefffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 6U)))) 
                                                      << 0xcU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffff7fffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0xcU)))) 
                                                      << 0x17U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffbffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x12U)))) 
                                                      << 0x22U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fdfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x18U)))) 
                                                      << 0x2dU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffffbULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [2U]))) 
                                                      << 2U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffdfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 6U)))) 
                                                      << 0xdU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffeffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0xcU)))) 
                                                      << 0x18U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffff7ffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x12U)))) 
                                                      << 0x23U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fbfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x18U)))) 
                                                      << 0x2eU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffff7ULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [3U]))) 
                                                      << 3U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffbfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 6U)))) 
                                                      << 0xeU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffdffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0xcU)))) 
                                                      << 0x19U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffefffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x12U)))) 
                                                      << 0x24U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7f7fffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x18U)))) 
                                                      << 0x2fU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffffefULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [4U]))) 
                                                      << 4U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffff7fffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 6U)))) 
                                                      << 0xfU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffbffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0xcU)))) 
                                                      << 0x1aU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffdfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x12U)))) 
                                                      << 0x25U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7effffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x18U)))) 
                                                      << 0x30U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffffdfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [5U]))) 
                                                      << 5U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffeffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 6U)))) 
                                                      << 0x10U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffff7ffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0xcU)))) 
                                                      << 0x1bU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffbfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x12U)))) 
                                                      << 0x26U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7dffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x18U)))) 
                                                      << 0x31U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffffbfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [6U]))) 
                                                      << 6U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffdffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 6U)))) 
                                                      << 0x11U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffefffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0xcU)))) 
                                                      << 0x1cU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fff7fffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x12U)))) 
                                                      << 0x27U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7bffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x18U)))) 
                                                      << 0x32U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffffff7fULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [7U]))) 
                                                      << 7U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffbffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 6U)))) 
                                                      << 0x12U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffdfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0xcU)))) 
                                                      << 0x1dU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffeffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x12U)))) 
                                                      << 0x28U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x77ffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x18U)))) 
                                                      << 0x33U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffeffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [8U]))) 
                                                      << 8U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffff7ffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 6U)))) 
                                                      << 0x13U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffbfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0xcU)))) 
                                                      << 0x1eU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffdffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x12U)))) 
                                                      << 0x29U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x6fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x18U)))) 
                                                      << 0x34U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffdffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [9U]))) 
                                                      << 9U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffefffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 6U)))) 
                                                      << 0x14U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffff7fffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0xcU)))) 
                                                      << 0x1fU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffbffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x12U)))) 
                                                      << 0x2aU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x5fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x18U)))) 
                                                      << 0x35U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffffffffbffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & vlSelf->ascon_top__DOT__affine_layer_out
                                                                       [0xaU]))) 
                                                      << 0xaU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fffffffdfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 6U)))) 
                                                      << 0x15U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffffeffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0xcU)))) 
                                                      << 0x20U));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ff7ffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x12U)))) 
                                                      << 0x2bU));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x3fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x18U)))) 
                                                      << 0x36U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffffeULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                         [0U] 
                                                                         >> 1U)))));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffff7ffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 7U)))) 
                                                      << 0xbU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffbfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0xdU)))) 
                                                      << 0x16U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffdffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x13U)))) 
                                                      << 0x21U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fefffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x19U)))) 
                                                      << 0x2cU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffffdULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 1U)))) 
                                                      << 1U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffefffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 7U)))) 
                                                      << 0xcU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffff7fffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0xdU)))) 
                                                      << 0x17U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffbffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x13U)))) 
                                                      << 0x22U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fdfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x19U)))) 
                                                      << 0x2dU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffffbULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 1U)))) 
                                                      << 2U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffdfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 7U)))) 
                                                      << 0xdU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffeffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0xdU)))) 
                                                      << 0x18U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffff7ffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x13U)))) 
                                                      << 0x23U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fbfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x19U)))) 
                                                      << 0x2eU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffff7ULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 1U)))) 
                                                      << 3U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffbfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 7U)))) 
                                                      << 0xeU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffdffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0xdU)))) 
                                                      << 0x19U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffefffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x13U)))) 
                                                      << 0x24U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7f7fffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x19U)))) 
                                                      << 0x2fU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffffefULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 1U)))) 
                                                      << 4U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffff7fffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 7U)))) 
                                                      << 0xfU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffbffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1aU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffdfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x13U)))) 
                                                      << 0x25U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7effffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x19U)))) 
                                                      << 0x30U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffffdfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 1U)))) 
                                                      << 5U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffeffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 7U)))) 
                                                      << 0x10U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffff7ffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1bU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffbfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x13U)))) 
                                                      << 0x26U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7dffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x19U)))) 
                                                      << 0x31U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffffbfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 1U)))) 
                                                      << 6U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffdffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 7U)))) 
                                                      << 0x11U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffefffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1cU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fff7fffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x13U)))) 
                                                      << 0x27U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7bffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x19U)))) 
                                                      << 0x32U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffffff7fULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 1U)))) 
                                                      << 7U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffbffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 7U)))) 
                                                      << 0x12U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffdfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1dU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffeffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x13U)))) 
                                                      << 0x28U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x77ffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x19U)))) 
                                                      << 0x33U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffeffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 1U)))) 
                                                      << 8U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffff7ffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 7U)))) 
                                                      << 0x13U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffbfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1eU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffdffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x13U)))) 
                                                      << 0x29U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x6fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x19U)))) 
                                                      << 0x34U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffdffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 1U)))) 
                                                      << 9U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffefffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 7U)))) 
                                                      << 0x14U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffff7fffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0xdU)))) 
                                                      << 0x1fU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffbffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x13U)))) 
                                                      << 0x2aU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x5fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x19U)))) 
                                                      << 0x35U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffffffffbffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 1U)))) 
                                                      << 0xaU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7fffffffdfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 7U)))) 
                                                      << 0x15U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ffffeffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0xdU)))) 
                                                      << 0x20U));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x7ff7ffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x13U)))) 
                                                      << 0x2bU));
    vlSelf->ascon_top__DOT__next_sbox_input[1U] = (
                                                   (0x3fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [1U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x19U)))) 
                                                      << 0x36U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffffeULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                         [0U] 
                                                                         >> 2U)))));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffff7ffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 8U)))) 
                                                      << 0xbU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffbfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0xeU)))) 
                                                      << 0x16U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffdffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x14U)))) 
                                                      << 0x21U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fefffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x2cU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffffdULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 2U)))) 
                                                      << 1U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffefffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 8U)))) 
                                                      << 0xcU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffff7fffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0xeU)))) 
                                                      << 0x17U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffbffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x14U)))) 
                                                      << 0x22U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fdfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x2dU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffffbULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 2U)))) 
                                                      << 2U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffdfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 8U)))) 
                                                      << 0xdU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffeffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0xeU)))) 
                                                      << 0x18U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffff7ffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x14U)))) 
                                                      << 0x23U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fbfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x2eU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffff7ULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 2U)))) 
                                                      << 3U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffbfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 8U)))) 
                                                      << 0xeU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffdffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0xeU)))) 
                                                      << 0x19U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffefffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x14U)))) 
                                                      << 0x24U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7f7fffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x2fU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffffefULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 2U)))) 
                                                      << 4U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffff7fffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 8U)))) 
                                                      << 0xfU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffbffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0xeU)))) 
                                                      << 0x1aU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffdfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x14U)))) 
                                                      << 0x25U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7effffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x30U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffffdfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 2U)))) 
                                                      << 5U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffeffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 8U)))) 
                                                      << 0x10U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffff7ffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0xeU)))) 
                                                      << 0x1bU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffbfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x14U)))) 
                                                      << 0x26U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7dffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x31U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffffbfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 2U)))) 
                                                      << 6U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffdffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 8U)))) 
                                                      << 0x11U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffefffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0xeU)))) 
                                                      << 0x1cU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fff7fffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x14U)))) 
                                                      << 0x27U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7bffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x32U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffffff7fULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 2U)))) 
                                                      << 7U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffbffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 8U)))) 
                                                      << 0x12U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffdfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0xeU)))) 
                                                      << 0x1dU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffeffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x14U)))) 
                                                      << 0x28U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x77ffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x33U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffeffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 2U)))) 
                                                      << 8U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffff7ffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 8U)))) 
                                                      << 0x13U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffbfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0xeU)))) 
                                                      << 0x1eU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffdffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x14U)))) 
                                                      << 0x29U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x6fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x34U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffdffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 2U)))) 
                                                      << 9U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffefffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 8U)))) 
                                                      << 0x14U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffff7fffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0xeU)))) 
                                                      << 0x1fU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffbffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x14U)))) 
                                                      << 0x2aU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x5fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x1aU)))) 
                                                      << 0x35U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffffffffbffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 2U)))) 
                                                      << 0xaU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7fffffffdfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 8U)))) 
                                                      << 0x15U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ffffeffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0xeU)))) 
                                                      << 0x20U));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x7ff7ffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x14U)))) 
                                                      << 0x2bU));
    vlSelf->ascon_top__DOT__next_sbox_input[2U] = (
                                                   (0x3fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [2U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x1aU)))) 
                                                      << 0x36U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffffeULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                         [0U] 
                                                                         >> 3U)))));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffff7ffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 9U)))) 
                                                      << 0xbU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffbfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0xfU)))) 
                                                      << 0x16U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffdffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x15U)))) 
                                                      << 0x21U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fefffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x2cU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffffdULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 3U)))) 
                                                      << 1U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffefffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 9U)))) 
                                                      << 0xcU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffff7fffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0xfU)))) 
                                                      << 0x17U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffbffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x15U)))) 
                                                      << 0x22U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fdfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x2dU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffffbULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 3U)))) 
                                                      << 2U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffdfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 9U)))) 
                                                      << 0xdU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffeffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0xfU)))) 
                                                      << 0x18U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffff7ffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x15U)))) 
                                                      << 0x23U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fbfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x2eU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffff7ULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 3U)))) 
                                                      << 3U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffbfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 9U)))) 
                                                      << 0xeU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffdffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0xfU)))) 
                                                      << 0x19U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffefffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x15U)))) 
                                                      << 0x24U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7f7fffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x2fU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffffefULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 3U)))) 
                                                      << 4U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffff7fffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 9U)))) 
                                                      << 0xfU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffbffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0xfU)))) 
                                                      << 0x1aU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffdfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x15U)))) 
                                                      << 0x25U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7effffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x30U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffffdfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 3U)))) 
                                                      << 5U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffeffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 9U)))) 
                                                      << 0x10U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffff7ffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0xfU)))) 
                                                      << 0x1bU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffbfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x15U)))) 
                                                      << 0x26U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7dffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x31U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffffbfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 3U)))) 
                                                      << 6U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffdffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 9U)))) 
                                                      << 0x11U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffefffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0xfU)))) 
                                                      << 0x1cU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fff7fffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x15U)))) 
                                                      << 0x27U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7bffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x32U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffffff7fULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 3U)))) 
                                                      << 7U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffbffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 9U)))) 
                                                      << 0x12U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffdfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0xfU)))) 
                                                      << 0x1dU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffeffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x15U)))) 
                                                      << 0x28U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x77ffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x33U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffeffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 3U)))) 
                                                      << 8U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffff7ffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 9U)))) 
                                                      << 0x13U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffbfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0xfU)))) 
                                                      << 0x1eU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffdffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x15U)))) 
                                                      << 0x29U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x6fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x34U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffdffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 3U)))) 
                                                      << 9U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffefffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 9U)))) 
                                                      << 0x14U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffff7fffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0xfU)))) 
                                                      << 0x1fU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffbffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x15U)))) 
                                                      << 0x2aU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x5fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x1bU)))) 
                                                      << 0x35U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffffffffbffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 3U)))) 
                                                      << 0xaU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7fffffffdfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 9U)))) 
                                                      << 0x15U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ffffeffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0xfU)))) 
                                                      << 0x20U));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x7ff7ffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x15U)))) 
                                                      << 0x2bU));
    vlSelf->ascon_top__DOT__next_sbox_input[3U] = (
                                                   (0x3fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [3U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x1bU)))) 
                                                      << 0x36U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffffeULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                         [0U] 
                                                                         >> 4U)))));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffff7ffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0xaU)))) 
                                                      << 0xbU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffbfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x10U)))) 
                                                      << 0x16U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffdffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x16U)))) 
                                                      << 0x21U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fefffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x2cU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffffdULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 4U)))) 
                                                      << 1U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffefffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0xaU)))) 
                                                      << 0xcU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffff7fffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x10U)))) 
                                                      << 0x17U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffbffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x16U)))) 
                                                      << 0x22U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fdfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x2dU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffffbULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 4U)))) 
                                                      << 2U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffdfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0xaU)))) 
                                                      << 0xdU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffeffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x10U)))) 
                                                      << 0x18U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffff7ffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x16U)))) 
                                                      << 0x23U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fbfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x2eU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffff7ULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 4U)))) 
                                                      << 3U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffbfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0xaU)))) 
                                                      << 0xeU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffdffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x10U)))) 
                                                      << 0x19U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffefffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x16U)))) 
                                                      << 0x24U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7f7fffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x2fU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffffefULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 4U)))) 
                                                      << 4U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffff7fffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0xaU)))) 
                                                      << 0xfU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffbffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x10U)))) 
                                                      << 0x1aU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffdfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x16U)))) 
                                                      << 0x25U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7effffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x30U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffffdfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 4U)))) 
                                                      << 5U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffeffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0xaU)))) 
                                                      << 0x10U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffff7ffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x10U)))) 
                                                      << 0x1bU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffbfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x16U)))) 
                                                      << 0x26U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7dffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x31U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffffbfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 4U)))) 
                                                      << 6U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffdffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0xaU)))) 
                                                      << 0x11U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffefffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x10U)))) 
                                                      << 0x1cU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fff7fffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x16U)))) 
                                                      << 0x27U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7bffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x32U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffffff7fULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 4U)))) 
                                                      << 7U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffbffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0xaU)))) 
                                                      << 0x12U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffdfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x10U)))) 
                                                      << 0x1dU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffeffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x16U)))) 
                                                      << 0x28U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x77ffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x33U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffeffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 4U)))) 
                                                      << 8U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffff7ffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0xaU)))) 
                                                      << 0x13U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffbfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x10U)))) 
                                                      << 0x1eU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffdffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x16U)))) 
                                                      << 0x29U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x6fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x34U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffdffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 4U)))) 
                                                      << 9U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffefffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0xaU)))) 
                                                      << 0x14U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffff7fffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x10U)))) 
                                                      << 0x1fU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffbffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x16U)))) 
                                                      << 0x2aU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x5fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x1cU)))) 
                                                      << 0x35U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffffffffbffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 4U)))) 
                                                      << 0xaU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7fffffffdfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0xaU)))) 
                                                      << 0x15U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ffffeffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x10U)))) 
                                                      << 0x20U));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x7ff7ffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x16U)))) 
                                                      << 0x2bU));
    vlSelf->ascon_top__DOT__next_sbox_input[4U] = (
                                                   (0x3fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [4U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x1cU)))) 
                                                      << 0x36U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffffeULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | (IData)((IData)(
                                                                     (1U 
                                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                         [0U] 
                                                                         >> 5U)))));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffff7ffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0xbU)))) 
                                                      << 0xbU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffbfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x11U)))) 
                                                      << 0x16U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffdffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x17U)))) 
                                                      << 0x21U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fefffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x2cU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffffdULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 5U)))) 
                                                      << 1U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffefffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0xbU)))) 
                                                      << 0xcU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffff7fffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x11U)))) 
                                                      << 0x17U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffbffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x17U)))) 
                                                      << 0x22U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fdfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [1U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x2dU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffffbULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 5U)))) 
                                                      << 2U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffdfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0xbU)))) 
                                                      << 0xdU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffeffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x11U)))) 
                                                      << 0x18U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffff7ffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x17U)))) 
                                                      << 0x23U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fbfffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [2U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x2eU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffff7ULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 5U)))) 
                                                      << 3U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffbfffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0xbU)))) 
                                                      << 0xeU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffdffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x11U)))) 
                                                      << 0x19U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffefffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x17U)))) 
                                                      << 0x24U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7f7fffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [3U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x2fU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffffefULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 5U)))) 
                                                      << 4U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffff7fffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0xbU)))) 
                                                      << 0xfU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffbffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x11U)))) 
                                                      << 0x1aU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffdfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x17U)))) 
                                                      << 0x25U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7effffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [4U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x30U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffffdfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 5U)))) 
                                                      << 5U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffeffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0xbU)))) 
                                                      << 0x10U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffff7ffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x11U)))) 
                                                      << 0x1bU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffbfffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x17U)))) 
                                                      << 0x26U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7dffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [5U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x31U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffffbfULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 5U)))) 
                                                      << 6U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffdffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0xbU)))) 
                                                      << 0x11U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffefffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x11U)))) 
                                                      << 0x1cU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fff7fffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x17U)))) 
                                                      << 0x27U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7bffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [6U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x32U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffffff7fULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 5U)))) 
                                                      << 7U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffbffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0xbU)))) 
                                                      << 0x12U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffdfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x11U)))) 
                                                      << 0x1dU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffeffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x17U)))) 
                                                      << 0x28U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x77ffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [7U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x33U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffeffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 5U)))) 
                                                      << 8U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffff7ffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0xbU)))) 
                                                      << 0x13U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffbfffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x11U)))) 
                                                      << 0x1eU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffdffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x17U)))) 
                                                      << 0x29U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x6fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [8U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x34U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffdffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 5U)))) 
                                                      << 9U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffefffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0xbU)))) 
                                                      << 0x14U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffff7fffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x11U)))) 
                                                      << 0x1fU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffbffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x17U)))) 
                                                      << 0x2aU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x5fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [9U] 
                                                                          >> 0x1dU)))) 
                                                      << 0x35U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffffffffbffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 5U)))) 
                                                      << 0xaU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7fffffffdfffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0xbU)))) 
                                                      << 0x15U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ffffeffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x11U)))) 
                                                      << 0x20U));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x7ff7ffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x17U)))) 
                                                      << 0x2bU));
    vlSelf->ascon_top__DOT__next_sbox_input[5U] = (
                                                   (0x3fffffffffffffULL 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [5U]) 
                                                   | ((QData)((IData)(
                                                                      (1U 
                                                                       & (vlSelf->ascon_top__DOT__affine_layer_out
                                                                          [0xaU] 
                                                                          >> 0x1dU)))) 
                                                      << 0x36U));
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
           | (0xff000000U & ((vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [5U] << 0x1eU) | (0x3f000000U 
                                                & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                                   [4U] 
                                                   << 0x18U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xfffffff0U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xfU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                      [5U] >> 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xffff000fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xfffffff0U & ((0xfc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] << 0xaU)) 
                             | (0x3f0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] << 4U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xf000ffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (0xffff0000U & ((0xfc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                            [9U] << 0x16U)) 
                             | (0x3f0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [8U] << 0x10U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U] 
        = ((0xfffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[1U]) 
           | (vlSelf->ascon_top__DOT__affine_layer2nd_out
              [0xaU] << 0x1cU));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0xffffffc0U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                       [0U] >> 6U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0xfffc003fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0xffffffc0U & ((0x3f000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] << 6U)) 
                             | (0xfc0U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [1U]))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0xc003ffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0xfffc0000U & ((0x3f000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [4U] << 0x12U)) 
                             | (0xfc0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [3U] << 0xcU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U] 
        = ((0x3fffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[2U]) 
           | (0xc0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                             [5U] << 0x18U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U] 
        = ((0xfffffc00U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]) 
           | (0x3fffffffU & ((0x3f0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [6U] >> 2U)) 
                             | (0xfU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [5U] >> 8U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U] 
        = ((0xffc003ffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]) 
           | (0xfffffc00U & ((0x3f0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [8U] << 0xaU)) 
                             | (0xfc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [7U] << 4U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[3U]) 
           | (0xffc00000U & ((0xf0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0xaU] 
                                             << 0x16U)) 
                             | (0xfc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [9U] 
                                              << 0x10U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U]) 
           | ((0xfc0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [1U] >> 6U)) | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                                  [0U] 
                                                  >> 0xcU))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U] 
        = ((0xff000fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U]) 
           | (0xfffff000U & ((0xfc0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [3U] << 6U)) 
                             | (0x3f000U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [2U]))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U] 
        = ((0xffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[4U]) 
           | (0xff000000U & ((0xc0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [5U] << 0x12U)) 
                             | (0x3f000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                               [4U] 
                                               << 0xcU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U] 
        = ((0xfffffff0U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U]) 
           | (0xfU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                      [5U] >> 0xeU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U] 
        = ((0xffff000fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U]) 
           | (0xfffffff0U & ((0xfc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] >> 2U)) 
                             | (0x3f0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 8U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U] 
        = ((0xf000ffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U]) 
           | (0xffff0000U & ((0xfc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                            [9U] << 0xaU)) 
                             | (0x3f0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [8U] << 4U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U] 
        = ((0xfffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[5U]) 
           | (0xf0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                             [0xaU] << 0x10U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U] 
        = ((0xffffffc0U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U]) 
           | (0x3fU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                       [0U] >> 0x12U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U] 
        = ((0xfffc003fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U]) 
           | (0xffffffc0U & ((0x3f000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 6U)) 
                             | (0xfc0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xcU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U] 
        = ((0xc003ffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U]) 
           | (0xfffc0000U & ((0x3f000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [4U] << 6U)) 
                             | (0xfc0000U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [3U]))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U] 
        = ((0x3fffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[6U]) 
           | (0xc0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                             [5U] << 0xcU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U] 
        = ((0xfffffc00U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U]) 
           | (0x3fffffffU & ((0x3f0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [6U] >> 0xeU)) 
                             | (0xfU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                        [5U] >> 0x14U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U] 
        = ((0xffc003ffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U]) 
           | (0xfffffc00U & ((0x3f0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [8U] >> 2U)) 
                             | (0xfc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [7U] >> 8U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U] 
        = ((0x3fffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[7U]) 
           | (0xffc00000U & ((0xf0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0xaU] 
                                             << 0xaU)) 
                             | (0xfc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                              [9U] 
                                              << 4U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U] 
        = ((0xfffff000U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U]) 
           | ((0xfc0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                         [1U] >> 0x12U)) | (0x3fU & 
                                            (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [0U] >> 0x18U))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U] 
        = ((0xff000fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U]) 
           | (0xfffff000U & ((0xfc0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                           [3U] >> 6U)) 
                             | (0x3f000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                            [2U] >> 0xcU)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U] 
        = ((0xffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[8U]) 
           | (0xff000000U & ((0xc0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [5U] << 6U)) 
                             | (0x3f000000U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [4U]))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U] 
        = ((0xfffffff0U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U]) 
           | (0xfU & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                      [5U] >> 0x1aU)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U] 
        = ((0xffff000fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U]) 
           | (0xfffffff0U & ((0xfc00U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] >> 0xeU)) 
                             | (0x3f0U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0x14U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U] 
        = ((0xf000ffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U]) 
           | (0xffff0000U & ((0xfc00000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                            [9U] >> 2U)) 
                             | (0x3f0000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                             [8U] >> 8U)))));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U] 
        = ((0xfffffffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1[9U]) 
           | (0xf0000000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                             [0xaU] << 4U)));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [0U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound5));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [1U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 1U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [2U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 2U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [3U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 3U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [4U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 4U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [5U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 5U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [6U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 6U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [7U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 7U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [8U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 8U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [9U]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 9U));
    ascon_top__DOT____Vlvbound5 = (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                                   [0xaU]);
    vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound5) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__0__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__0__in = vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__0__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__0__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__0__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__0__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__0__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__0__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__0__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__0__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__0__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__0__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__0__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__0__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__0__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__0__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__0__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__0__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffffeU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | (IData)(__Vfunc_ascon_top__DOT__xor_tree__0__Vfuncout));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound6));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [1U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 1U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [2U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 2U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [3U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 3U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [4U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 4U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [5U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 5U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [6U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 6U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 7U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [8U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 8U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [9U] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 9U));
    ascon_top__DOT____Vlvbound6 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0xaU] >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound6) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__1__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__1__in = vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__1__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__1__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__1__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__1__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__1__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__1__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__1__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__1__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__1__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__1__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__1__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__1__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__1__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__1__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__1__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffffdU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__1__Vfuncout) 
                                                   << 1U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound7));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [1U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 1U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [2U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 2U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [3U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 3U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [4U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 4U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [5U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 5U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [6U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 6U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 7U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [8U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 8U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [9U] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 9U));
    ascon_top__DOT____Vlvbound7 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0xaU] >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound7) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__2__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__2__in = vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__2__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__2__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__2__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__2__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__2__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__2__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__2__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__2__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__2__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__2__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__2__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__2__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__2__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__2__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__2__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffffbU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__2__Vfuncout) 
                                                   << 2U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound8));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [1U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 1U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [2U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 2U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [3U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 3U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [4U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 4U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [5U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 5U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [6U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 6U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 7U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [8U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 8U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [9U] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 9U));
    ascon_top__DOT____Vlvbound8 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0xaU] >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound8) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__3__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__3__in = vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__3__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__3__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__3__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__3__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__3__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__3__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__3__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__3__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__3__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__3__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__3__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__3__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__3__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__3__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__3__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffff7U 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__3__Vfuncout) 
                                                   << 3U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound9));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [1U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 1U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [2U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 2U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [3U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 3U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [4U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 4U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [5U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 5U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [6U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 6U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [7U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 7U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [8U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 8U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [9U] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 9U));
    ascon_top__DOT____Vlvbound9 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                         [0xaU] >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound9) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__4__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__4__in = vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__4__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__4__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__4__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__4__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__4__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__4__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__4__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__4__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__4__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__4__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__4__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__4__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__4__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__4__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__4__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffffefU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__4__Vfuncout) 
                                                   << 4U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound10));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 2U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 3U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 4U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 5U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 6U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 7U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 8U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 9U));
    ascon_top__DOT____Vlvbound10 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound10) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__5__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__5__in = vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__5__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__5__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__5__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__5__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__5__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__5__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__5__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__5__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__5__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__5__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__5__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__5__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__5__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__5__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__5__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffffdfU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__5__Vfuncout) 
                                                   << 5U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound11));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 1U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 2U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 3U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 4U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 5U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 6U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 7U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 8U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 9U));
    ascon_top__DOT____Vlvbound11 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound11) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__6__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__6__in = vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__6__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__6__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__6__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__6__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__6__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__6__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__6__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__6__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__6__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__6__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__6__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__6__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__6__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__6__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__6__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffffbfU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__6__Vfuncout) 
                                                   << 6U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound12));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 1U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 2U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 3U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 4U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 5U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 6U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 7U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 8U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 9U));
    ascon_top__DOT____Vlvbound12 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound12) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__7__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__7__in = vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__7__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__7__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__7__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__7__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__7__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__7__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__7__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__7__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__7__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__7__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__7__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__7__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__7__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__7__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__7__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffff7fU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__7__Vfuncout) 
                                                   << 7U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound13));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 1U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 2U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 3U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 4U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 5U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 6U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 7U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 8U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 9U));
    ascon_top__DOT____Vlvbound13 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound13) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__8__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__8__in = vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__8__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__8__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__8__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__8__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__8__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__8__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__8__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__8__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__8__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__8__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__8__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__8__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__8__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__8__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__8__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffeffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__8__Vfuncout) 
                                                   << 8U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound14));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 1U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 2U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 3U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 4U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 5U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 6U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 7U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 8U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 9U));
    ascon_top__DOT____Vlvbound14 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound14) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__9__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__9__in = vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__9__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__9__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__9__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__9__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__9__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__9__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__9__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__9__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__9__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage[(7U 
                                                                    & ((IData)(1U) 
                                                                       + __Vfunc_ascon_top__DOT__xor_tree__9__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__9__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__9__num, (IData)(2U))))));
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
        ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__9__level))
          ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__9__stage
             [(7U & __Vfunc_ascon_top__DOT__xor_tree__9__level)])
          : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffdffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__9__Vfuncout) 
                                                   << 9U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound15));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 1U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 2U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 3U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 4U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 5U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 6U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 7U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 8U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 9U));
    ascon_top__DOT____Vlvbound15 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound15) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__10__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__10__in = vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__10__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__10__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__10__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__10__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__10__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__10__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__10__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__10__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__10__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__10__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__10__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__10__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__10__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__10__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__10__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffffbffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__10__Vfuncout) 
                                                   << 0xaU));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound16));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 1U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 2U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 3U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 4U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 5U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 6U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 7U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 8U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 9U));
    ascon_top__DOT____Vlvbound16 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound16) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__11__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__11__in = vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__11__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__11__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__11__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__11__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__11__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__11__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__11__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__11__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__11__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__11__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__11__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__11__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__11__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__11__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__11__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffff7ffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__11__Vfuncout) 
                                                   << 0xbU));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound17));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 1U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 2U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 3U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 4U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 5U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 6U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 7U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 8U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 9U));
    ascon_top__DOT____Vlvbound17 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound17) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__12__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__12__in = vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__12__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__12__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__12__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__12__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__12__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__12__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__12__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__12__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__12__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__12__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__12__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__12__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__12__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__12__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__12__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffefffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__12__Vfuncout) 
                                                   << 0xcU));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound18));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 1U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 2U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 3U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 4U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 5U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 6U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 7U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 8U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 9U));
    ascon_top__DOT____Vlvbound18 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound18) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__13__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__13__in = vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__13__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__13__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__13__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__13__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__13__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__13__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__13__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__13__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__13__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__13__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__13__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__13__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__13__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__13__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__13__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffdfffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__13__Vfuncout) 
                                                   << 0xdU));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound19));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 1U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 2U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 3U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 4U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 5U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 6U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 7U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 8U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 9U));
    ascon_top__DOT____Vlvbound19 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound19) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__14__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__14__in = vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__14__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__14__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__14__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__14__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__14__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__14__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__14__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__14__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__14__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__14__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__14__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__14__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__14__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__14__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__14__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fffbfffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__14__Vfuncout) 
                                                   << 0xeU));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound20));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 1U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 2U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 3U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 4U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 5U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 6U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 7U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 8U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 9U));
    ascon_top__DOT____Vlvbound20 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound20) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__15__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__15__in = vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__15__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__15__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__15__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__15__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__15__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__15__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__15__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__15__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__15__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__15__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__15__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__15__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__15__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__15__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__15__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3fff7fffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__15__Vfuncout) 
                                                   << 0xfU));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound21));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 1U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 2U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 3U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 4U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 5U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 6U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 7U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 8U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 9U));
    ascon_top__DOT____Vlvbound21 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound21) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__16__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__16__in = vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__16__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__16__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__16__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__16__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__16__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__16__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__16__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__16__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__16__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__16__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__16__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__16__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__16__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__16__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__16__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffeffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__16__Vfuncout) 
                                                   << 0x10U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7feU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound22));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [1U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7fdU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 1U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [2U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7fbU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 2U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [3U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7f7U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 3U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [4U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7efU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 4U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [5U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7dfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 5U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [6U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x7bfU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 6U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [7U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x77fU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 7U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [8U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x6ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 8U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [9U] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x5ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 9U));
    ascon_top__DOT____Vlvbound22 = (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                          [0xaU] >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits 
        = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound22) 
              << 0xaU));
    __Vfunc_ascon_top__DOT__xor_tree__17__N = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__17__in = vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__17__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__17__num = 0xbU;
    __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__17__N)) {
        vlSelf->ascon_top__DOT____Vlvbound2 = ((0xaU 
                                                >= 
                                                (0xfU 
                                                 & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i)) 
                                               & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__in) 
                                                  >> 
                                                  (0xfU 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i)));
        if (VL_LIKELY((0xaU >= (0xfU & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[0U] 
                = (((~ ((IData)(1U) << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                    [0U]) | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound2) 
                                       << (0xfU & __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__17__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound3 = (
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i)))) 
                                                   ^ 
                                                   ((0xaU 
                                                     >= 
                                                     (0xfU 
                                                      & ((IData)(1U) 
                                                         + 
                                                         VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i)))) 
                                                    & (((4U 
                                                         >= 
                                                         (7U 
                                                          & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                         ? 
                                                        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                        [
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                         : 0U) 
                                                       >> 
                                                       (0xfU 
                                                        & ((IData)(1U) 
                                                           + 
                                                           VL_MULS_III(4,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))))));
            if (VL_LIKELY(((0xaU >= (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i)) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__17__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound3) 
                                    << (0xfU & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound4 = (
                                                   (0xaU 
                                                    >= 
                                                    (0xfU 
                                                     & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                                                        - (IData)(1U)))) 
                                                   & (((4U 
                                                        >= 
                                                        (7U 
                                                         & __Vfunc_ascon_top__DOT__xor_tree__17__level))
                                                        ? 
                                                       vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                                                       [
                                                       (7U 
                                                        & __Vfunc_ascon_top__DOT__xor_tree__17__level)]
                                                        : 0U) 
                                                      >> 
                                                      (0xfU 
                                                       & (__Vfunc_ascon_top__DOT__xor_tree__17__num 
                                                          - (IData)(1U)))));
            if (VL_LIKELY(((0xaU >= (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U)))) 
                           & (4U >= (7U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__17__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage[(7U 
                                                                     & ((IData)(1U) 
                                                                        + __Vfunc_ascon_top__DOT__xor_tree__17__level))] 
                    = (((~ ((IData)(1U) << (0xfU & 
                                            VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
                        [(7U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__17__level))]) 
                       | (0x7ffU & ((IData)(vlSelf->ascon_top__DOT____Vlvbound4) 
                                    << (0xfU & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__17__num, (IData)(2U))))));
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
        = ((4U >= (7U & __Vfunc_ascon_top__DOT__xor_tree__17__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__17__stage
               [(7U & __Vfunc_ascon_top__DOT__xor_tree__17__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares = ((0x3ffdffffU 
                                                 & vlSelf->ascon_top__DOT__recombine_shares) 
                                                | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__17__Vfuncout) 
                                                   << 0x11U));
}
