// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__3(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__3\n"); );
    // Variables
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_mask;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__Vfuncout;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data;
    // Body
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__state_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__lfsr_mask_state
        [0xbU];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__data_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__lfsr_mask_data
        [0xbU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__Vfuncout 
        = (((QData)((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__data_val)) 
            << 0x1fU) | (QData)((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__673__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_state
        [0xcU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__lfsr_mask_data
        [0xcU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__674__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_state
        [0xdU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__lfsr_mask_data
        [0xdU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__675__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_state
        [0xeU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__lfsr_mask_data
        [0xeU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__676__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_state
        [0xfU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__lfsr_mask_data
        [0xfU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__677__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_state
        [0x10U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__lfsr_mask_data
        [0x10U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__678__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_state
        [0x11U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__lfsr_mask_data
        [0x11U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__679__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_state
        [0x12U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__lfsr_mask_data
        [0x12U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__680__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_state
        [0x13U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__lfsr_mask_data
        [0x13U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__681__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_state
        [0x14U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__lfsr_mask_data
        [0x14U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__682__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_state
        [0x15U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__lfsr_mask_data
        [0x15U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__683__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_state
        [0x16U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__lfsr_mask_data
        [0x16U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__684__Vfuncout;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0U] 
        = (1U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[1U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[1U] 
        = (2U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [1U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[1U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[2U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[2U] 
        = (4U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [2U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[2U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[3U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[3U] 
        = (8U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [3U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[3U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[4U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[4U] 
        = (0x10U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [4U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[4U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[5U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[5U] 
        = (0x20U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [5U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[5U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[6U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[6U] 
        = (0x40U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [6U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[6U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[7U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[7U] 
        = (0x80U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [7U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[7U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[8U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[8U] 
        = (0x100U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [8U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[8U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[9U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[9U] 
        = (0x200U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [9U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[9U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xaU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xaU] 
        = (0x400U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0xaU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xaU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xbU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xbU] 
        = (0x800U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0xbU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xbU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xcU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xcU] 
        = (0x1000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0xcU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xcU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xdU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xdU] 
        = (0x2000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0xdU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xdU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xeU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xeU] 
        = (0x4000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0xeU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xeU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xfU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xfU] 
        = (0x8000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0xfU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xfU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x10U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x10U] 
        = (0x10000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x10U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x10U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x11U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x11U] 
        = (0x20000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x11U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x11U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x12U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x12U] 
        = (0x40000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x12U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x12U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x13U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x13U] 
        = (0x80000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x13U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x13U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x14U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x14U] 
        = (0x100000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x14U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x14U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x15U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x15U] 
        = (0x200000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x15U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x15U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x16U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x16U] 
        = (0x400000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x16U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x16U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x17U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x17U] 
        = (0x800000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x17U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x17U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x18U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x18U] 
        = (0x1000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x18U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x18U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x19U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x19U] 
        = (0x2000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x19U]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x19U] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1aU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1aU] 
        = (0x4000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x1aU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1aU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1bU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1bU] 
        = (0x8000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x1bU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1bU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1cU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1cU] 
        = (0x10000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x1cU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1cU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1dU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1dU] 
        = (0x20000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x1dU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1dU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1eU] = 0U;
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1eU] 
        = (0x40000000U | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
           [0x1eU]);
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_mask))) {
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x1eU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x1eU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val 
            = ((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_mask));
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val 
            = (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
               [0x1bU] ^ vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val);
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val 
            = (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
               [0x1bU] ^ (IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x1dU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x1dU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x1cU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x1cU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x1bU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x1bU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x1aU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x1aU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x19U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x19U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x18U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x18U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x17U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x17U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x16U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x16U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x15U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x15U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x14U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x14U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x13U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x13U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x12U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x12U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x11U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x11U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0x10U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0x10U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0xfU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0xfU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0xeU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0xeU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0xdU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0xdU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0xcU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0xcU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0xbU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0xbU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0xaU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0xaU];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [9U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [9U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [8U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [8U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [7U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [7U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [6U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [6U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [5U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [5U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [4U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [4U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [3U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [3U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [2U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [2U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [1U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [1U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state
            [0U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data
            [0U];
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_state[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__output_mask_data[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val;
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_state[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__state_val;
        vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__lfsr_mask_data[0U] 
            = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__685__data_mask) 
                          >> 1U));
    }
}
