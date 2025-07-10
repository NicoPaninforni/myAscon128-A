// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__11(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__11\n"); );
    // Variables
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9;
    CData/*0:0*/ ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    CData/*3:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in;
    IData/*23:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound8;
    VlWide<4>/*126:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout;
    VlWide<4>/*126:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout;
    IData/*30:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val;
    VlWide<3>/*95:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val;
    VlWide<3>/*95:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i;
    VlWide<3>/*95:0*/ __Vtemp9611;
    VlWide<3>/*95:0*/ __Vtemp9613;
    VlWide<3>/*95:0*/ __Vtemp9650;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound9;
    VlUnpacked<IData/*30:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state;
    VlUnpacked<VlWide<3>/*95:0*/, 31> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data;
    VlUnpacked<IData/*30:0*/, 96> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state;
    VlUnpacked<VlWide<3>/*95:0*/, 96> __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data;
    // Body
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__state_val 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__output_mask_state
        [0x5eU];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[0U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__output_mask_data
        [0x5eU][0U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[1U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__output_mask_data
        [0x5eU][1U];
    vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[2U] 
        = vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__output_mask_data
        [0x5eU][2U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[0U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[0U] 
            << 0x1fU) | vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__state_val);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[1U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[0U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[1U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[2U] 
        = ((vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[1U] 
            >> 1U) | (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[2U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[3U] 
        = (vlSelf->__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__data_val[2U] 
           >> 1U);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[0U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[1U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[2U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__167__Vfuncout[3U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0U] 
        = (1U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[1U] 
        = (2U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [1U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[1U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[1U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[1U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[2U] 
        = (4U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [2U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[2U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[2U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[2U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[3U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[3U] 
        = (8U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [3U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[3U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[3U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[3U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[4U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[4U] 
        = (0x10U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [4U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[4U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[4U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[4U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[5U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[5U] 
        = (0x20U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [5U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[5U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[5U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[5U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[6U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[6U] 
        = (0x40U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [6U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[6U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[6U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[6U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[7U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[7U] 
        = (0x80U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [7U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[7U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[7U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[7U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[8U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[8U] 
        = (0x100U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [8U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[8U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[8U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[8U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[9U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[9U] 
        = (0x200U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [9U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[9U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[9U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[9U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xaU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xaU] 
        = (0x400U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0xaU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xaU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xaU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xaU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xbU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xbU] 
        = (0x800U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0xbU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xbU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xbU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xbU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xcU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xcU] 
        = (0x1000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0xcU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xcU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xcU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xcU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xdU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xdU] 
        = (0x2000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0xdU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xdU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xdU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xdU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xeU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xeU] 
        = (0x4000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0xeU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xeU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xeU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xeU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xfU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xfU] 
        = (0x8000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0xfU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xfU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xfU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xfU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x10U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x10U] 
        = (0x10000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x10U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x10U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x10U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x10U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x11U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x11U] 
        = (0x20000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x11U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x11U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x11U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x11U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x12U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x12U] 
        = (0x40000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x12U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x12U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x12U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x12U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x13U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x13U] 
        = (0x80000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x13U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x13U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x13U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x13U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x14U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x14U] 
        = (0x100000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x14U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x14U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x14U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x14U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x15U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x15U] 
        = (0x200000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x15U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x15U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x15U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x15U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x16U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x16U] 
        = (0x400000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x16U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x16U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x16U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x16U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x17U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x17U] 
        = (0x800000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x17U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x17U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x17U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x17U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x18U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x18U] 
        = (0x1000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x18U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x18U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x18U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x18U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x19U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x19U] 
        = (0x2000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x19U]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x19U][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x19U][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x19U][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1aU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1aU] 
        = (0x4000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x1aU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1aU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1aU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1aU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1bU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1bU] 
        = (0x8000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x1bU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1bU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1bU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1bU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1cU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1cU] 
        = (0x10000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x1cU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1cU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1cU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1cU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1dU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1dU] 
        = (0x20000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x1dU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1dU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1dU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1dU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1eU] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1eU] 
        = (0x40000000U | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
           [0x1eU]);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1eU][0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1eU][1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1eU][2U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i = 0U;
    while (VL_GTS_III(1,32,32, 0x60U, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)) {
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4 = 0U;
        if (VL_LIKELY((0x5fU >= (0x7fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)))) {
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound4;
        }
        if (VL_GTS_III(1,32,32, 0x1fU, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)) {
            vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5 = 1U;
            if (VL_LIKELY(((0x1eU >= (0x1fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)) 
                           & (0x5fU >= (0x7fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i))))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)] 
                    = (((~ ((IData)(1U) << (0x1fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i))) 
                        & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state
                        [(0x7fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)]) 
                       | (0x7fffffffU & ((IData)(vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound5) 
                                         << (0x1fU 
                                             & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i))));
            }
        }
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[0U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[1U] = 0U;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[2U] = 0U;
        if (VL_LIKELY((0x5fU >= (0x7fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)))) {
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)][0U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[0U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)][1U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[1U];
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i)][2U] 
                = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound6[2U];
        }
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__i);
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[0U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[1U] = 0U;
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[2U] = 0x80000000U;
    while ((0U != ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[0U] 
                    | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[1U]) 
                   | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[2U]))) {
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x1eU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1eU][0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1eU][1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1eU][2U];
        __Vtemp9611[1U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
                           ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[1U]);
        __Vtemp9611[2U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
                           ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[2U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
               ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[0U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
            = __Vtemp9611[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
            = __Vtemp9611[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
               [0x1bU] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val);
        __Vtemp9613[1U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
                           [0x1bU][1U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U]);
        __Vtemp9613[2U] = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
                           [0x1bU][2U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
            = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
               [0x1bU][0U] ^ __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U]);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
            = __Vtemp9613[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
            = __Vtemp9613[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x1dU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1eU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1dU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1dU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1dU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1eU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1eU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1eU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x1cU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1dU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1cU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1cU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1cU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1dU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1dU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1dU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x1bU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1cU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1bU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1bU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1bU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1cU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1cU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1cU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x1aU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1bU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1aU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1aU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x1aU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1bU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1bU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1bU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x19U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x1aU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x19U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x19U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x19U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1aU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1aU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x1aU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x18U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x19U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x18U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x18U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x18U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x19U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x19U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x19U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x17U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x18U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x17U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x17U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x17U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x18U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x18U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x18U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x16U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x17U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x16U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x16U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x16U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x17U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x17U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x17U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x15U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x16U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x15U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x15U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x15U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x16U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x16U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x16U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x14U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x15U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x14U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x14U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x14U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x15U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x15U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x15U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x13U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x14U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x13U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x13U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x13U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x14U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x14U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x14U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x12U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x13U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x12U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x12U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x12U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x13U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x13U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x13U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x11U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x12U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x11U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x11U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x11U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x12U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x12U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x12U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0x10U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x11U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x10U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x10U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0x10U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x11U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x11U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x11U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0xfU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0x10U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xfU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xfU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xfU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x10U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x10U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0x10U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0xeU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xfU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xeU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xeU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xeU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xfU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xfU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xfU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0xdU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xeU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xdU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xdU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xdU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xeU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xeU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xeU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0xcU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xdU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xcU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xcU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xcU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xdU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xdU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xdU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0xbU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xcU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xbU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xbU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xbU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xcU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xcU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xcU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0xaU];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xbU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xaU][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xaU][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0xaU][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xbU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xbU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xbU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [9U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0xaU] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [9U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [9U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [9U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xaU][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xaU][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0xaU][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [8U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[9U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [8U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [8U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [8U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[9U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[9U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[9U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [7U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[8U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [7U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [7U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [7U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[8U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[8U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[8U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [6U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[7U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [6U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [6U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [6U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[7U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[7U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[7U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [5U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[6U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [5U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [5U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [5U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[6U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[6U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[6U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [4U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[5U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [4U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [4U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [4U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[5U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[5U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[5U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [3U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[4U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [3U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [3U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [3U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[4U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[4U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[4U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[3U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [2U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [2U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [2U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[3U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[3U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[3U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [1U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [1U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [1U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[2U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[2U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[2U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state
            [0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound7;
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0U][0U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0U][1U];
        vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data
            [0U][2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[1U][0U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[1U][1U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[1U][2U] 
            = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound8[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j = 0x5fU;
        while (VL_LTS_III(1,32,32, 0U, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)) {
            vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9 
                = ((0x5fU >= (0x7fU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                                       - (IData)(1U))))
                    ? __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state
                   [(0x7fU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                              - (IData)(1U)))] : 0U);
            if (VL_LIKELY((0x5fU >= (0x7fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound9;
            }
            if ((0x5fU >= (0x7fU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                                    - (IData)(1U))))) {
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data
                    [(0x7fU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                               - (IData)(1U)))][0U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data
                    [(0x7fU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                               - (IData)(1U)))][1U];
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U] 
                    = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data
                    [(0x7fU & (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                               - (IData)(1U)))][2U];
            } else {
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U] = 0U;
                vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U] = 0U;
            }
            if (VL_LIKELY((0x5fU >= (0x7fU & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)))) {
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)][0U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[0U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)][1U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[1U];
                __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[(0x7fU 
                                                                                & __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j)][2U] 
                    = vlSelf->ascon_top__DOT__lfst_inst__DOT____Vlvbound10[2U];
            }
            __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__j 
                   - (IData)(1U));
        }
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[0U][0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[0U][1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data[0U][2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_state[0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val;
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0U][0U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0U][1U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__lfsr_mask_data[0U][2U] 
            = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U];
        VL_SHIFTR_WWI(96,96,32, __Vtemp9650, __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask, 1U);
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[0U] 
            = __Vtemp9650[0U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[1U] 
            = __Vtemp9650[1U];
        __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_mask[2U] 
            = __Vtemp9650[2U];
    }
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_state
        [0x5fU];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data
        [0x5fU][0U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data
        [0x5fU][1U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__output_mask_data
        [0x5fU][2U];
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[0U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
            << 0x1fU) | __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__state_val);
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[1U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[0U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[2U] 
        = ((__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[1U] 
            >> 1U) | (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
                      << 0x1fU));
    __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[3U] 
        = (__Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__data_val[2U] 
           >> 1U);
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask[0U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[0U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask[1U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[1U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask[2U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[2U];
    vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask[3U] 
        = __Vfunc_ascon_top__DOT__lfst_inst__DOT__lfsr_mask__168__Vfuncout[3U];
    vlSelf->debug_extra_padding_ff = vlSelf->ascon_top__DOT__extra_padding_ff;
    vlSelf->debug_bitcounter = vlSelf->ascon_top__DOT__bit_counter;
    vlSelf->debug_roundcounter = vlSelf->ascon_top__DOT__round_counter;
    vlSelf->debug_round_state_0 = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelf->debug_round_state_1 = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelf->debug_round_state_2 = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelf->debug_round_state_3 = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelf->debug_round_state_4 = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelf->debug_state = vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state;
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
    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0U;
    if ((0x10U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
                        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
                    }
                } else {
                    vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
                }
            }
        }
    } else if ((8U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 3U;
        } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 3U;
        } else if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
            vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 3U;
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits 
            = ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))
                ? 3U : 0xcU);
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits = 0xcU;
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
                        if ((0xaU == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
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
                    if ((2U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                        vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                    }
                }
            }
        }
    } else if ((4U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
            if ((1U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
                if ((2U == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                    vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
                }
            }
        }
    } else if ((2U & (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state))) {
        if ((1U & (~ (IData)(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state)))) {
            if ((0xaU == (IData)(vlSelf->ascon_top__DOT__bit_counter))) {
                vlSelf->ascon_top__DOT__last_cycle_sipo = 1U;
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
    ascon_top__DOT__state_reg__DOT____Vlvbound9 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelf->state_reg_out[0U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound9);
    vlSelf->state_reg_out[1U] = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound9 
                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound9 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelf->state_reg_out[2U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound9);
    vlSelf->state_reg_out[3U] = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound9 
                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound9 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelf->state_reg_out[4U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound9);
    vlSelf->state_reg_out[5U] = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound9 
                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound9 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelf->state_reg_out[6U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound9);
    vlSelf->state_reg_out[7U] = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound9 
                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound9 = vlSelf->ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelf->state_reg_out[8U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound9);
    vlSelf->state_reg_out[9U] = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound9 
                                         >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = (0xffffffU 
                                                   & (IData)(
                                                             vlSelf->ascon_top__DOT__state_reg__DOT__state
                                                             [0U]));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
        = ((0xff000000U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U]) 
           | ascon_top__DOT__state_reg__DOT____Vlvbound8);
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = (0xffffffU 
                                                   & (IData)(
                                                             vlSelf->ascon_top__DOT__state_reg__DOT__state
                                                             [1U]));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
        = ((0xffffffU & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U]) 
           | (ascon_top__DOT__state_reg__DOT____Vlvbound8 
              << 0x18U));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
        = ((0xffff0000U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U]) 
           | (ascon_top__DOT__state_reg__DOT____Vlvbound8 
              >> 8U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = (0xffffffU 
                                                   & (IData)(
                                                             vlSelf->ascon_top__DOT__state_reg__DOT__state
                                                             [2U]));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
        = ((0xffffU & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U]) 
           | (ascon_top__DOT__state_reg__DOT____Vlvbound8 
              << 0x10U));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
        = ((0xffffff00U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U]) 
           | (ascon_top__DOT__state_reg__DOT____Vlvbound8 
              >> 0x10U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = (0xffffffU 
                                                   & (IData)(
                                                             vlSelf->ascon_top__DOT__state_reg__DOT__state
                                                             [3U]));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
        = ((0xffU & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U]) 
           | (ascon_top__DOT__state_reg__DOT____Vlvbound8 
              << 8U));
    ascon_top__DOT__state_reg__DOT____Vlvbound8 = (0xffffffU 
                                                   & (IData)(
                                                             vlSelf->ascon_top__DOT__state_reg__DOT__state
                                                             [4U]));
    vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
        = (0xffffffU & ascon_top__DOT__state_reg__DOT____Vlvbound8);
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [0U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [1U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [2U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [3U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
           [4U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__xor_tree__169__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
           [0U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
           [1U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
           [2U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
           [3U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
           [4U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                           [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                             [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                          [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__stage
               [(3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__xor_tree__170__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
           [0U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
           [1U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
           [2U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [2U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [2U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [2U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
           [3U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [3U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [3U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [3U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
           [4U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [4U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                   [4U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__xor_tree__171__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
            [4U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
           [0U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [0U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                   [0U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0U] 
        = ((7U & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [0U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 3U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
           [1U]);
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xeU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [1U]) | (IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 4U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xdU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 1U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 8U));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)])
            : 0U);
    ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9 
        = __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__Vfuncout;
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1U] 
        = ((0xbU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
            [1U]) | ((IData)(ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound9) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp 
        = (0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                   [1U] >> 0xcU));
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in 
        = vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp;
    vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level = 0U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num = 4U;
    __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__N)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[0U] 
            = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                [0U]) | (0xfU & ((1U & ((IData)(__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__in) 
                                        >> (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))) 
                                 << (3U & __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i))));
        __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk7__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7 
                = (1U & ((((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                            ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                           [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                            : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                         ^ (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                              ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                             [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                              : 0U) >> (3U & ((IData)(1U) 
                                              + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound7) 
                                  << (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__unnamedblk8__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8 
                = (1U & (((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))
                           ? vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                          [(3U & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level)]
                           : 0U) >> (3U & (__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                                           - (IData)(1U)))));
            if (VL_LIKELY((2U >= (3U & ((IData)(1U) 
                                        + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))))) {
                vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage[(3U 
                                                                                & ((IData)(1U) 
                                                                                + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__stage
                        [(3U & ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level))]) 
                       | (0xfU & ((IData)(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT____Vlvbound8) 
                                  << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__num, (IData)(2U));
        }
        vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level 
            = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__xor_tree__172__level);
    }
}
