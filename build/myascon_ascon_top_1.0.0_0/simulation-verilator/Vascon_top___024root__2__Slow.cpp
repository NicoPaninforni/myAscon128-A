// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__4(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__4\n"); );
    // Variables
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_mask;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__Vfuncout;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data;
    // Body
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
        [0x17U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
        [0x17U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__Vfuncout 
        = (((QData)((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val)) 
            << 0x1fU) | (QData)((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_state
        [0x18U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__lfsr_mask_data
        [0x18U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__686__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_state
        [0x19U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__lfsr_mask_data
        [0x19U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__687__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_state
        [0x1aU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__lfsr_mask_data
        [0x1aU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__688__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_state
        [0x1bU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__lfsr_mask_data
        [0x1bU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__689__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_state
        [0x1cU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__lfsr_mask_data
        [0x1cU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__690__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_state
        [0x1dU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__lfsr_mask_data
        [0x1dU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__691__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_state
        [0x1eU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__lfsr_mask_data
        [0x1eU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__692__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_state
        [0U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__output_mask_data
        [0U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__693__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_state
        [1U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__output_mask_data
        [1U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__694__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_state
        [2U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__output_mask_data
        [2U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__695__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_state
        [3U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__output_mask_data
        [3U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__696__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1eU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0U] 
        = (1U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [0U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[1U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[1U] 
        = (2U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [1U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[1U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[2U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[2U] 
        = (4U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [2U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[2U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[3U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[3U] 
        = (8U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [3U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[3U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[4U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[4U] 
        = (0x10U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [4U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[4U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[5U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[5U] 
        = (0x20U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [5U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[5U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[6U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[6U] 
        = (0x40U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [6U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[6U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[7U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[7U] 
        = (0x80U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [7U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[7U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[8U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[8U] 
        = (0x100U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [8U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[8U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[9U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[9U] 
        = (0x200U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [9U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[9U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xaU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xaU] 
        = (0x400U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [0xaU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0xaU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xbU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xbU] 
        = (0x800U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [0xbU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0xbU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xcU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xcU] 
        = (0x1000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
           [0xcU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_mask))) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x1eU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x1eU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val 
            = ((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_mask));
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
               [0x1bU] ^ vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val);
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
               [0x1bU] ^ (IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [0xbU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [0xbU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [0xaU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [0xaU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [9U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [9U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [8U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [8U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [7U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [7U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [6U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [6U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [5U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [5U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [4U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [4U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [3U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [3U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [2U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [2U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [1U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [1U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
            [0U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
            [0U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val;
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_state[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__lfsr_mask_data[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_mask) 
                          >> 1U));
    }
}
