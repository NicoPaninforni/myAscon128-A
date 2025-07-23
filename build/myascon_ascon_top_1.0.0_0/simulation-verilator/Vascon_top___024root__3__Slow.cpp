// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__5(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__5\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_mask;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val;
    SData/*12:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_mask;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__Vfuncout;
    QData/*43:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__Vfuncout;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state;
    VlUnpacked<SData/*12:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state;
    VlUnpacked<SData/*12:0*/, 13> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data;
    // Body
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_state
        [4U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__output_mask_data
        [4U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__Vfuncout 
        = (((QData)((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__data_val)) 
            << 0x1fU) | (QData)((IData)(vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__697__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_state
        [5U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__output_mask_data
        [5U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__698__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_state
        [6U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__output_mask_data
        [6U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__699__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_state
        [7U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__output_mask_data
        [7U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__700__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_state
        [8U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__output_mask_data
        [8U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__701__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_state
        [9U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__output_mask_data
        [9U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__702__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_state
        [0xaU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__output_mask_data
        [0xaU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__703__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_state
        [0xbU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__output_mask_data
        [0xbU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__704__Vfuncout;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_mask = 0x1000U;
    while ((0U != (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_mask))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val 
            = ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val) 
               ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_mask));
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
               [0x1bU] ^ (IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val));
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__lfsr_mask_data[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_mask 
            = (0x1fffU & ((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_mask) 
                          >> 1U));
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_state
        [0xcU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__output_mask_data
        [0xcU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__Vfuncout 
        = (((QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__data_val)) 
            << 0x1fU) | (QData)((IData)(__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__state_val)));
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__705__Vfuncout;
    vlSelf->debug_extra_padding_ff = vlSelf->ascon_top__DOT__extra_padding_ff;
    vlSelf->debug_bitcounter = vlSelf->ascon_top__DOT__bit_counter;
    vlSelf->debug_roundcounter = vlSelf->ascon_top__DOT__round_counter;
    vlSelf->debug_round_state_0 = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelf->debug_round_state_1 = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelf->debug_round_state_2 = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelf->debug_round_state_3 = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelf->debug_round_state_4 = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
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
    vlSelf->ready_for_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & ((~ (IData)(vlSelf->valid_data_in)) 
                                   & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))))) {
                            vlSelf->ready_for_data = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & ((~ (IData)(vlSelf->valid_data_in)) 
                               & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff))))) {
                        vlSelf->ready_for_data = 1U;
                    }
                }
            }
        }
    }
    vlSelf->ciphertext_valid = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                vlSelf->ciphertext_valid = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                        }
                    } else if (vlSelf->last_block) {
                        if (((~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)) 
                             & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                if (vlSelf->EOT) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                            vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                        } else if (vlSelf->last_block) {
                            if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load = 1U;
                            }
                        }
                    }
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
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                                if (vlSelf->EOT) {
                                    if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelf->last_block) {
                                if ((0x10U <= (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding = 1U;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlSelf->ascon_top__DOT__write_en = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__write_en = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__write_en = 1U;
            }
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                              & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                    vlSelf->ascon_top__DOT__write_en = 1U;
                }
            } else {
                vlSelf->ascon_top__DOT__write_en = 1U;
            }
        } else if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                              & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                    vlSelf->ascon_top__DOT__write_en = 1U;
                }
            }
        } else {
            vlSelf->ascon_top__DOT__write_en = 1U;
        }
    } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                         >> 1U)))) {
        if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__write_en = 1U;
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
    vlSelf->ascon_top__DOT__sel_absorb_data = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        vlSelf->ascon_top__DOT__sel_absorb_data = 1U;
                    }
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
    vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 2U)))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if (vlSelf->last_block) {
                        if (((~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)) 
                             & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff))) {
                            vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                        }
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 1U)))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
            }
        }
    }
    vlSelf->ascon_top__DOT__sel_init_load = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__sel_init_load = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__sel_init_load = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                             >> 2U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    vlSelf->ascon_top__DOT__sel_init_load = 1U;
                }
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
    vlSelf->ascon_top__DOT__sel_padding = 0U;
    if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                  >> 4U)))) {
        if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                        if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                      & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                            if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                                vlSelf->ascon_top__DOT__sel_padding = 1U;
                            } else if (vlSelf->EOT) {
                                if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                    vlSelf->ascon_top__DOT__sel_padding = 1U;
                                }
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                    if ((1U & (~ ((~ (IData)(vlSelf->valid_data_in)) 
                                  & (~ (IData)(vlSelf->ascon_top__DOT__extra_padding_ff)))))) {
                        if (vlSelf->ascon_top__DOT__extra_padding_ff) {
                            vlSelf->ascon_top__DOT__sel_padding = 1U;
                        } else if (vlSelf->last_block) {
                            if ((0x10U > (IData)(vlSelf->valid_bytes))) {
                                vlSelf->ascon_top__DOT__sel_padding = 1U;
                            }
                        }
                    }
                }
            }
        }
    }
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [0U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [0U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [1U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [1U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [2U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [2U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [3U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 3U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 5U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11 
        = vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout;
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound11) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 6U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 7U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                 [3U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp)) 
           | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound10) 
              << 2U));
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level = 0U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num = 3U;
    __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__N)) {
        vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)) 
               & ((IData)(__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__in) 
                  >> (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                   << (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                         : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)))) 
                      & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                           : 0U) >> (3U & ((IData)(1U) 
                                           + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                 - (IData)(1U)))) & 
                   (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
                      ? vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                     [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)]
                      : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                                      - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level);
    }
    vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__706__level)])
            : 0U);
}
