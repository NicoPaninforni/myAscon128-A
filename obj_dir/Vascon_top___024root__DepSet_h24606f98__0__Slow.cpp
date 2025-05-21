// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top__pch.h"
#include "Vascon_top___024root.h"

VL_ATTR_COLD void Vascon_top___024root___eval_static(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_static\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__clk__0 = vlSelfRef.clk;
    vlSelfRef.__Vtrigprevexpr___TOP__reset_n__0 = vlSelfRef.reset_n;
}

VL_ATTR_COLD void Vascon_top___024root___eval_initial(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_initial\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vascon_top___024root___eval_final(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_final\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__stl(Vascon_top___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vascon_top___024root___eval_phase__stl(Vascon_top___024root* vlSelf);

VL_ATTR_COLD void Vascon_top___024root___eval_settle(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___eval_settle\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY(((0x64U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vascon_top___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("ascon_top.sv", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (Vascon_top___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelfRef.__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vascon_top___024root___dump_triggers__stl(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___dump_triggers__stl\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ vlSelfRef.__VstlTriggered.any()))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelfRef.__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__0(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___stl_sequent__TOP__0\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    QData/*63:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_1_0;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 = 0;
    QData/*63:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_1_1;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 = 0;
    IData/*21:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_1;
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_1 = 0;
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_10;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_10);
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_11;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_11);
    VlWide<4>/*109:0*/ ascon_top__DOT____VdfgRegularize_h0932e10f_3_12;
    VL_ZERO_W(110, ascon_top__DOT____VdfgRegularize_h0932e10f_3_12);
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 = 0;
    QData/*63:0*/ ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0;
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 = 0;
    VlWide<4>/*109:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0;
    VL_ZERO_W(110, ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0);
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout;
    VL_ZERO_W(128, __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout);
    VlWide<4>/*127:0*/ __Vfunc_ascon_top__DOT__reverse_bytes__110__x;
    VL_ZERO_W(128, __Vfunc_ascon_top__DOT__reverse_bytes__110__x);
    VlWide<3>/*95:0*/ __Vtemp_3;
    VlWide<3>/*95:0*/ __Vtemp_4;
    VlWide<3>/*95:0*/ __Vtemp_5;
    VlWide<3>/*95:0*/ __Vtemp_6;
    VlWide<4>/*127:0*/ __Vtemp_11;
    VlWide<4>/*127:0*/ __Vtemp_17;
    VlWide<4>/*127:0*/ __Vtemp_44;
    // Body
    vlSelfRef.done = 0U;
    vlSelfRef.ascon_top__DOT__round_counter_enable = 0U;
    vlSelfRef.ascon_top__DOT__reg_key1_load = 0U;
    vlSelfRef.ascon_top__DOT__reg_key2_load = 0U;
    vlSelfRef.ascon_top__DOT__number_bits = 0U;
    vlSelfRef.debug_bitcounter = vlSelfRef.ascon_top__DOT__bit_counter;
    vlSelfRef.debug_roundcounter = vlSelfRef.ascon_top__DOT__round_counter;
    vlSelfRef.debug_state = vlSelfRef.ascon_top__DOT__current_state;
    vlSelfRef.debug_round_state_0 = vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelfRef.debug_round_state_1 = vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelfRef.debug_round_state_2 = vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    vlSelfRef.debug_round_state_3 = vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelfRef.debug_round_state_4 = vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    vlSelfRef.debug_extra_padding_ff = vlSelfRef.ascon_top__DOT__extra_padding_ff;
    vlSelfRef.ready_for_data = 0U;
    vlSelfRef.ascon_top__DOT__last_block_process = 0U;
    vlSelfRef.ascon_top__DOT__extra_padding_load = 0U;
    vlSelfRef.ascon_top__DOT__extra_padding = 0U;
    vlSelfRef.ascon_top__DOT__last_block_process_load = 0U;
    vlSelfRef.ciphertext_valid = 0U;
    vlSelfRef.ascon_top__DOT__load_reg_data_in = 0U;
    vlSelfRef.ascon_top__DOT__rst_counter_round = 0U;
    vlSelfRef.ascon_top__DOT__reg_data_in[0U] = vlSelfRef.data_in[0U];
    vlSelfRef.ascon_top__DOT__reg_data_in[1U] = vlSelfRef.data_in[1U];
    vlSelfRef.ascon_top__DOT__reg_data_in[2U] = vlSelfRef.data_in[2U];
    vlSelfRef.ascon_top__DOT__reg_data_in[3U] = vlSelfRef.data_in[3U];
    vlSelfRef.ready_tag = 0U;
    vlSelfRef.ascon_top__DOT__number_round = 0xcU;
    vlSelfRef.ascon_top__DOT__shift_en = 0U;
    vlSelfRef.ascon_top__DOT__write_en = 0U;
    vlSelfRef.ascon_top__DOT__last_cycle = 0U;
    vlSelfRef.ascon_top__DOT__shift_enable_x0 = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 0U;
    vlSelfRef.ascon_top__DOT__sel_bypass = 0U;
    vlSelfRef.ascon_top__DOT__last_cycle_x0 = 0U;
    vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key = 0U;
    vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 0U;
    vlSelfRef.ascon_top__DOT__xor_signal = 0ULL;
    if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                  >> 4U)))) {
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if (vlSelfRef.last_block) {
                            vlSelfRef.ascon_top__DOT__last_block_process = 1U;
                        }
                    }
                }
            }
        }
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                            vlSelfRef.ascon_top__DOT__extra_padding = 1U;
                        }
                    }
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__last_block_process_load = 1U;
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if (vlSelfRef.last_block) {
                            if (((~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)) 
                                 & (IData)(vlSelfRef.ascon_top__DOT__last_block_process_ff))) {
                                vlSelfRef.ascon_top__DOT__xor_signal = 0x8000000000000000ULL;
                            }
                        }
                    }
                }
            }
        } else if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
            if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                        vlSelfRef.ascon_top__DOT__extra_padding = 1U;
                    }
                    if (vlSelfRef.last_block) {
                        vlSelfRef.ascon_top__DOT__last_block_process_load = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 1U)))) {
                if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__xor_signal 
                        = vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q;
                }
            }
        }
    }
    vlSelfRef.ascon_top__DOT__shift_type = 0U;
    __Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
        = vlSelfRef.ascon_top__DOT__data_in_shifter__DOT__reg_q[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
        = vlSelfRef.ascon_top__DOT__data_in_shifter__DOT__reg_q[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
        = vlSelfRef.ascon_top__DOT__data_in_shifter__DOT__reg_q[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
        = vlSelfRef.ascon_top__DOT__data_in_shifter__DOT__reg_q[3U];
    VL_RAND_RESET_W(128, vlSelf->__Vfunc_ascon_top__DOT__reverse_bytes__110__y);
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
        = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
              >> 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
        = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
              >> 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
        = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                         >> 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
        = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                         >> 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
        = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
                           << 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
        = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
                           << 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U] 
        = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[1U] 
              << 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U] 
        = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[3U] 
              << 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
        = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
              >> 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
        = ((0xffffff00U & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
              >> 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
        = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                         >> 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
        = ((0xffff00ffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
           | (0xff00U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                         >> 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
        = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
                           << 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
        = ((0xff00ffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
           | (0xff0000U & (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
                           << 8U)));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U] 
        = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[0U] 
              << 0x18U));
    vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U] 
        = ((0xffffffU & vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U]) 
           | (__Vfunc_ascon_top__DOT__reverse_bytes__110__x[2U] 
              << 0x18U));
    __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[0U] 
        = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[0U];
    __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[1U] 
        = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[1U];
    __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[2U] 
        = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[2U];
    __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[3U] 
        = vlSelfRef.__Vfunc_ascon_top__DOT__reverse_bytes__110__y[3U];
    vlSelfRef.ascon_top__DOT__reverse_reg_data_out[0U] 
        = __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[0U];
    vlSelfRef.ascon_top__DOT__reverse_reg_data_out[1U] 
        = __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[1U];
    vlSelfRef.ascon_top__DOT__reverse_reg_data_out[2U] 
        = __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[2U];
    vlSelfRef.ascon_top__DOT__reverse_reg_data_out[3U] 
        = __Vfunc_ascon_top__DOT__reverse_bytes__110__Vfuncout[3U];
    __Vtemp_3[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_3[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_3[2U] = 0U;
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_1 
        = ((0x41U >= (0x7fU & ((IData)(0x16U) * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
            ? (0x3fffffU & (((0U == (0x1fU & ((IData)(0x16U) 
                                              * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                              ? 0U : (__Vtemp_3[(((IData)(0x15U) 
                                                  + 
                                                  (0x7fU 
                                                   & ((IData)(0x16U) 
                                                      * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))) 
                                                 >> 5U)] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & ((IData)(0x16U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))) 
                            | (__Vtemp_3[(3U & (((IData)(0x16U) 
                                                 * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)) 
                                                >> 5U))] 
                               >> (0x1fU & ((IData)(0x16U) 
                                            * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
            : 0U);
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
        = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0);
    vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
        = (IData)((ascon_top__DOT__state_reg__DOT____Vlvbound_haea4cdec__0 
                   >> 0x20U));
    vlSelfRef.ascon_top__DOT__sel_masked_round = 1U;
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [0U];
    vlSelfRef.ascon_top__DOT__state_reg_out[0U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[1U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [1U];
    vlSelfRef.ascon_top__DOT__state_reg_out[2U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[3U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [2U];
    vlSelfRef.ascon_top__DOT__state_reg_out[4U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[5U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [3U];
    vlSelfRef.ascon_top__DOT__state_reg_out[6U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[7U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
        = vlSelfRef.ascon_top__DOT__state_reg__DOT__state
        [4U];
    vlSelfRef.ascon_top__DOT__state_reg_out[8U] = (IData)(ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0);
    vlSelfRef.ascon_top__DOT__state_reg_out[9U] = (IData)(
                                                          (ascon_top__DOT__state_reg__DOT____Vlvbound_h8d06da4c__0 
                                                           >> 0x20U));
    vlSelfRef.ascon_top__DOT__next_state = vlSelfRef.ascon_top__DOT__current_state;
    if ((0x10U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                vlSelfRef.done = 0U;
                vlSelfRef.ascon_top__DOT__reg_key1_load = 0U;
                vlSelfRef.ascon_top__DOT__reg_key2_load = 0U;
                vlSelfRef.ciphertext_valid = 0U;
                vlSelfRef.ascon_top__DOT__load_reg_data_in = 0U;
                vlSelfRef.ascon_top__DOT__number_round = 0xcU;
                vlSelfRef.ascon_top__DOT__shift_en = 0U;
                vlSelfRef.ascon_top__DOT__write_en = 0U;
                vlSelfRef.ascon_top__DOT__last_cycle = 0U;
                vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key = 0U;
                vlSelfRef.ascon_top__DOT__shift_type = 0U;
                vlSelfRef.ascon_top__DOT__sel_masked_round = 1U;
                vlSelfRef.ascon_top__DOT__next_state = 0U;
            } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                vlSelfRef.done = (1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)));
                if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__reg_key1_load = 0U;
                    vlSelfRef.ascon_top__DOT__reg_key2_load = 0U;
                    vlSelfRef.ciphertext_valid = 0U;
                    vlSelfRef.ascon_top__DOT__load_reg_data_in = 0U;
                    vlSelfRef.ascon_top__DOT__number_round = 0xcU;
                    vlSelfRef.ascon_top__DOT__shift_en = 0U;
                    vlSelfRef.ascon_top__DOT__write_en = 0U;
                    vlSelfRef.ascon_top__DOT__last_cycle = 0U;
                    vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key = 0U;
                    vlSelfRef.ascon_top__DOT__shift_type = 0U;
                    vlSelfRef.ascon_top__DOT__sel_masked_round = 1U;
                    vlSelfRef.ascon_top__DOT__next_state = 0U;
                } else if ((1U & (~ (IData)(vlSelfRef.start)))) {
                    vlSelfRef.ascon_top__DOT__next_state = 0U;
                }
            } else {
                if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                    if (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                         == ((IData)(vlSelfRef.ascon_top__DOT__number_round) 
                             - (IData)(1U)))) {
                        vlSelfRef.ready_tag = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                }
                vlSelfRef.ascon_top__DOT__next_state 
                    = ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))
                        ? 0x1aU : (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                    == ((IData)(vlSelfRef.ascon_top__DOT__number_round) 
                                        - (IData)(1U)))
                                    ? 0x19U : 0x16U));
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__round_counter_enable = 1U;
                        vlSelfRef.ascon_top__DOT__number_bits = 4U;
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    vlSelfRef.ascon_top__DOT__round_counter_enable = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)))) {
                            if (vlSelfRef.valid_data_in) {
                                vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                            }
                        }
                    }
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                    vlSelfRef.ascon_top__DOT__sel_masked_round 
                        = ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state)) 
                           && (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff));
                }
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__number_bits = 4U;
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                        vlSelfRef.ascon_top__DOT__next_state = 0x18U;
                    } else if ((3U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                        vlSelfRef.ascon_top__DOT__next_state = 0x17U;
                    }
                    vlSelfRef.ascon_top__DOT__shift_type = 1U;
                } else {
                    vlSelfRef.ascon_top__DOT__number_bits = 1U;
                    vlSelfRef.ascon_top__DOT__next_state 
                        = ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))
                            ? ((IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)
                                ? 0x10U : ((IData)(vlSelfRef.valid_data_in)
                                            ? ((IData)(vlSelfRef.EOT)
                                                ? 0xfU
                                                : 0x11U)
                                            : 0xeU))
                            : 0x12U);
                }
            } else {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__number_bits = 1U;
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                        vlSelfRef.ascon_top__DOT__next_state 
                            = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0x15U : 0x14U);
                    } else if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                        vlSelfRef.ascon_top__DOT__next_state = 0x13U;
                    }
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__number_bits = 1U;
                    vlSelfRef.ascon_top__DOT__next_state = 0x12U;
                    if (((IData)(vlSelfRef.EOT) & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)))) {
                        vlSelfRef.ascon_top__DOT__next_state = 0x16U;
                    }
                } else {
                    vlSelfRef.ascon_top__DOT__next_state = 0x11U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                    }
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                }
                vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ciphertext_valid = 1U;
                        if (((IData)(vlSelfRef.EOT) 
                             & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)))) {
                            vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                      >> 3U)))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)))) {
                            vlSelfRef.ready_for_data = 1U;
                        }
                    }
                }
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__shift_enable_x0 = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        if ((2U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_x0 = 1U;
                        }
                    }
                }
            } else if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                vlSelfRef.ascon_top__DOT__shift_enable_x0 = 1U;
                if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                    if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                        vlSelfRef.ascon_top__DOT__last_cycle_x0 = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__extra_padding_load = 1U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[0U] = 0U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[1U] = 0U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[2U] = 0U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[3U] = 0x1000000U;
                    }
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if (((IData)(vlSelfRef.EOT) 
                             & (~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)))) {
                            vlSelfRef.ascon_top__DOT__rst_counter_round = 1U;
                        }
                        vlSelfRef.ascon_top__DOT__sel_bypass = 1U;
                    }
                }
            }
        }
    } else {
        if ((8U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    vlSelfRef.ascon_top__DOT__round_counter_enable = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__number_bits = 1U;
                        if (vlSelfRef.last_block) {
                            if (((~ (IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)) 
                                 & (IData)(vlSelfRef.ascon_top__DOT__last_block_process_ff))) {
                                vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                            }
                        }
                    }
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                }
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ready_for_data = 1U;
                    }
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                            vlSelfRef.ascon_top__DOT__extra_padding_load = 1U;
                        }
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                        if (VL_GTS_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                            vlSelfRef.ascon_top__DOT__reg_data_in[0U] = 0U;
                            vlSelfRef.ascon_top__DOT__reg_data_in[1U] = 0U;
                            vlSelfRef.ascon_top__DOT__reg_data_in[2U] = 0U;
                            vlSelfRef.ascon_top__DOT__reg_data_in[3U] = 0U;
                            vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i = 0U;
                            while ((vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i 
                                    < (IData)(vlSelfRef.valid_bytes))) {
                                VL_ASSIGNSEL_WI(128,8,
                                                (0x7fU 
                                                 & (((IData)(0x7fU) 
                                                     - 
                                                     VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i, 3U)) 
                                                    - (IData)(7U))), vlSelfRef.ascon_top__DOT__reg_data_in, 
                                                (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (((IData)(0x7fU) 
                                                           - 
                                                           VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i, 3U)) 
                                                          - (IData)(7U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.data_in[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x7fU 
                                                         & (((IData)(0x7fU) 
                                                             - 
                                                             VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i, 3U)) 
                                                            - (IData)(7U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & (((IData)(0x7fU) 
                                                            - 
                                                            VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i, 3U)) 
                                                           - (IData)(7U)))))) 
                                                    | (vlSelfRef.data_in[
                                                       (3U 
                                                        & ((((IData)(0x7fU) 
                                                             - 
                                                             VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i, 3U)) 
                                                            - (IData)(7U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & (((IData)(0x7fU) 
                                                            - 
                                                            VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i, 3U)) 
                                                           - (IData)(7U)))))));
                                vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelfRef.ascon_top__DOT__unnamedblk9__DOT__i);
                            }
                            VL_ASSIGNSEL_WI(128,8,(0x7fU 
                                                   & (((IData)(0x7fU) 
                                                       - 
                                                       VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.valid_bytes), 3U)) 
                                                      - (IData)(7U))), vlSelfRef.ascon_top__DOT__reg_data_in, 1U);
                        } else {
                            vlSelfRef.ascon_top__DOT__reg_data_in[0U] 
                                = vlSelfRef.data_in[0U];
                            vlSelfRef.ascon_top__DOT__reg_data_in[1U] 
                                = vlSelfRef.data_in[1U];
                            vlSelfRef.ascon_top__DOT__reg_data_in[2U] 
                                = vlSelfRef.data_in[2U];
                            vlSelfRef.ascon_top__DOT__reg_data_in[3U] 
                                = vlSelfRef.data_in[3U];
                        }
                        vlSelfRef.ascon_top__DOT__next_state = 0x11U;
                    } else if (vlSelfRef.valid_data_in) {
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                        vlSelfRef.ascon_top__DOT__next_state 
                            = ((IData)(vlSelfRef.EOT)
                                ? 0xfU : 0x11U);
                    }
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ready_for_data = 1U;
                    if (vlSelfRef.valid_data_in) {
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__next_state 
                        = ((IData)(vlSelfRef.last_block)
                            ? ((IData)(vlSelfRef.ascon_top__DOT__last_block_process_ff)
                                ? ((IData)(vlSelfRef.ascon_top__DOT__extra_padding_ff)
                                    ? 8U : ((IData)(vlSelfRef.valid_data_in)
                                             ? ((IData)(vlSelfRef.EOT)
                                                 ? 0xfU
                                                 : 0x11U)
                                             : 0xeU))
                                : 7U) : ((IData)(vlSelfRef.valid_data_in)
                                          ? 9U : 6U));
                } else {
                    vlSelfRef.ascon_top__DOT__next_state = 0xaU;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__number_bits = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__next_state 
                            = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 0xdU : 0xcU);
                    } else if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                        vlSelfRef.ascon_top__DOT__next_state = 0xbU;
                    }
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__number_bits = 1U;
                    vlSelfRef.ascon_top__DOT__next_state = 0xaU;
                } else {
                    vlSelfRef.ascon_top__DOT__next_state = 9U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ascon_top__DOT__extra_padding_load = 1U;
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[0U] = 0U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[1U] = 0U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[2U] = 0U;
                        vlSelfRef.ascon_top__DOT__reg_data_in[3U] = 0x1000000U;
                    }
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__shift_enable_x0 = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        if ((0U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_x0 = 1U;
                        }
                    }
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_bypass = 1U;
                    }
                }
            }
            vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
        } else {
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    vlSelfRef.ascon_top__DOT__round_counter_enable = 1U;
                    vlSelfRef.ascon_top__DOT__number_bits = 4U;
                    vlSelfRef.ascon_top__DOT__write_en = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4 = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        vlSelfRef.ready_for_data = 1U;
                    }
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        if (VL_LTES_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                            vlSelfRef.ascon_top__DOT__extra_padding_load = 1U;
                        }
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                        if (VL_GTS_III(32, 0x10U, (IData)(vlSelfRef.valid_bytes))) {
                            vlSelfRef.ascon_top__DOT__reg_data_in[0U] = 0U;
                            vlSelfRef.ascon_top__DOT__reg_data_in[1U] = 0U;
                            vlSelfRef.ascon_top__DOT__reg_data_in[2U] = 0U;
                            vlSelfRef.ascon_top__DOT__reg_data_in[3U] = 0U;
                            vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i = 0U;
                            while ((vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i 
                                    < (IData)(vlSelfRef.valid_bytes))) {
                                VL_ASSIGNSEL_WI(128,8,
                                                (0x7fU 
                                                 & (((IData)(0x7fU) 
                                                     - 
                                                     VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i, 3U)) 
                                                    - (IData)(7U))), vlSelfRef.ascon_top__DOT__reg_data_in, 
                                                (0xffU 
                                                 & (((0U 
                                                      == 
                                                      (0x1fU 
                                                       & (((IData)(0x7fU) 
                                                           - 
                                                           VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i, 3U)) 
                                                          - (IData)(7U))))
                                                      ? 0U
                                                      : 
                                                     (vlSelfRef.data_in[
                                                      (((IData)(7U) 
                                                        + 
                                                        (0x7fU 
                                                         & (((IData)(0x7fU) 
                                                             - 
                                                             VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i, 3U)) 
                                                            - (IData)(7U)))) 
                                                       >> 5U)] 
                                                      << 
                                                      ((IData)(0x20U) 
                                                       - 
                                                       (0x1fU 
                                                        & (((IData)(0x7fU) 
                                                            - 
                                                            VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i, 3U)) 
                                                           - (IData)(7U)))))) 
                                                    | (vlSelfRef.data_in[
                                                       (3U 
                                                        & ((((IData)(0x7fU) 
                                                             - 
                                                             VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i, 3U)) 
                                                            - (IData)(7U)) 
                                                           >> 5U))] 
                                                       >> 
                                                       (0x1fU 
                                                        & (((IData)(0x7fU) 
                                                            - 
                                                            VL_SHIFTL_III(7,32,32, vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i, 3U)) 
                                                           - (IData)(7U)))))));
                                vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i 
                                    = ((IData)(1U) 
                                       + vlSelfRef.ascon_top__DOT__unnamedblk8__DOT__i);
                            }
                            VL_ASSIGNSEL_WI(128,8,(0x7fU 
                                                   & (((IData)(0x7fU) 
                                                       - 
                                                       VL_SHIFTL_III(7,32,32, (IData)(vlSelfRef.valid_bytes), 3U)) 
                                                      - (IData)(7U))), vlSelfRef.ascon_top__DOT__reg_data_in, 1U);
                        } else {
                            vlSelfRef.ascon_top__DOT__reg_data_in[0U] 
                                = vlSelfRef.data_in[0U];
                            vlSelfRef.ascon_top__DOT__reg_data_in[1U] 
                                = vlSelfRef.data_in[1U];
                            vlSelfRef.ascon_top__DOT__reg_data_in[2U] 
                                = vlSelfRef.data_in[2U];
                            vlSelfRef.ascon_top__DOT__reg_data_in[3U] 
                                = vlSelfRef.data_in[3U];
                        }
                        vlSelfRef.ascon_top__DOT__next_state = 9U;
                    } else if (vlSelfRef.valid_data_in) {
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                        vlSelfRef.ascon_top__DOT__next_state 
                            = ((IData)(vlSelfRef.last_block)
                                ? 7U : 9U);
                    }
                    vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ready_for_data = 1U;
                    if (vlSelfRef.valid_data_in) {
                        vlSelfRef.ascon_top__DOT__load_reg_data_in = 1U;
                        vlSelfRef.ascon_top__DOT__next_state 
                            = ((IData)(vlSelfRef.last_block)
                                ? 7U : 9U);
                    } else {
                        vlSelfRef.ascon_top__DOT__next_state = 6U;
                    }
                    vlSelfRef.ascon_top__DOT__sel_masked_round = 0U;
                } else {
                    vlSelfRef.ascon_top__DOT__next_state = 2U;
                }
            } else {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__number_bits = 4U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__next_state 
                            = (((IData)(vlSelfRef.ascon_top__DOT__round_counter) 
                                == ((IData)(vlSelfRef.ascon_top__DOT__number_round) 
                                    - (IData)(1U)))
                                ? 5U : 4U);
                    } else if ((3U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                        vlSelfRef.ascon_top__DOT__next_state = 3U;
                    }
                } else if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    if (vlSelfRef.key_valid) {
                        vlSelfRef.ascon_top__DOT__next_state = 2U;
                    }
                } else if (vlSelfRef.start) {
                    vlSelfRef.ascon_top__DOT__next_state = 1U;
                }
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__write_en = 1U;
                    }
                }
            }
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 2U)))) {
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__shift_en = 1U;
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__last_cycle = 1U;
                    }
                    vlSelfRef.ascon_top__DOT__shift_enable_x0 = 1U;
                    if ((1U & (~ (IData)(vlSelfRef.ascon_top__DOT__current_state)))) {
                        if ((2U == (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) {
                            vlSelfRef.ascon_top__DOT__last_cycle_x0 = 1U;
                        }
                    }
                }
            }
        }
        if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                      >> 3U)))) {
            if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                          >> 2U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__reg_key1_load = 1U;
                        vlSelfRef.ascon_top__DOT__reg_key2_load = 1U;
                        vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key = 1U;
                    }
                }
                if ((2U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                    vlSelfRef.ascon_top__DOT__shift_type = 1U;
                }
            }
            if ((4U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                if ((1U & (~ ((IData)(vlSelfRef.ascon_top__DOT__current_state) 
                              >> 1U)))) {
                    if ((1U & (IData)(vlSelfRef.ascon_top__DOT__current_state))) {
                        vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3 = 1U;
                    }
                }
            }
        }
    }
    vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    __Vtemp_4[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_4[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_4[2U] = 0U;
    __Vtemp_5[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_5[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_5[2U] = 0U;
    __Vtemp_6[0U] = (IData)((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))));
    __Vtemp_6[1U] = (IData)(((0xf0ULL - (0xfULL * (QData)((IData)(vlSelfRef.ascon_top__DOT__round_counter)))) 
                             >> 0x20U));
    __Vtemp_6[2U] = 0U;
    vlSelfRef.debug_state_2 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
    vlSelfRef.debug_state_3 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
    vlSelfRef.debug_state_4 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
    vlSelfRef.debug_state_0 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
    vlSelfRef.debug_state_1 = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                                << 0x20U) | (QData)((IData)(
                                                            vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
    if (vlSelfRef.ascon_top__DOT__shift_enable_x0) {
        if (vlSelfRef.ascon_top__DOT__shift_type) {
            if (vlSelfRef.ascon_top__DOT__last_cycle_x0) {
                vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 0x14U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
                    = (((QData)((IData)((0xfffffU & 
                                         vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 0x14U));
            } else {
                vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 0x16U));
                vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
                    = (((QData)((IData)((0x3fffffU 
                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                        << 0x2aU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 0x16U));
            }
        } else {
            vlSelfRef.ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])));
            vlSelfRef.ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
                = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                    << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U])));
        }
    }
    if (vlSelfRef.ascon_top__DOT__sel_masked_round) {
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5 
            = (0x3fffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_1);
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8 
            = (0x3fffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_1);
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3 
            = (0x3fffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_1);
    } else {
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5 
            = (0x3fffffU & ((0x41U >= (0x7fU & ((IData)(0x16U) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                             ? (((0U == (0x1fU & ((IData)(0x16U) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                                  ? 0U : (__Vtemp_4[
                                          (((IData)(0x15U) 
                                            + (0x7fU 
                                               & ((IData)(0x16U) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x16U) 
                                                    + 
                                                    ((IData)(0x42U) 
                                                     * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))) 
                                | (__Vtemp_4[(3U & 
                                              (((IData)(0x16U) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) 
                                               >> 5U))] 
                                   >> (0x1fU & ((IData)(0x16U) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
                             : 0U));
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8 
            = (0x3fffffU & ((0x41U >= (0x7fU & ((IData)(0x2cU) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                             ? (((0U == (0x1fU & ((IData)(0x2cU) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                                  ? 0U : (__Vtemp_5[
                                          (((IData)(0x15U) 
                                            + (0x7fU 
                                               & ((IData)(0x2cU) 
                                                  + 
                                                  ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x2cU) 
                                                    + 
                                                    ((IData)(0x42U) 
                                                     * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))) 
                                | (__Vtemp_5[(3U & 
                                              (((IData)(0x2cU) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))) 
                                               >> 5U))] 
                                   >> (0x1fU & ((IData)(0x2cU) 
                                                + ((IData)(0x42U) 
                                                   * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))))
                             : 0U));
        vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3 
            = (0x3fffffU & ((0x41U >= (0x7fU & ((IData)(0x42U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                             ? (((0U == (0x1fU & ((IData)(0x42U) 
                                                  * (IData)(vlSelfRef.ascon_top__DOT__bit_counter))))
                                  ? 0U : (__Vtemp_6[
                                          (((IData)(0x15U) 
                                            + (0x7fU 
                                               & ((IData)(0x42U) 
                                                  * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))) 
                                           >> 5U)] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & ((IData)(0x42U) 
                                                    * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))) 
                                | (__Vtemp_6[(3U & 
                                              (((IData)(0x42U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)) 
                                               >> 5U))] 
                                   >> (0x1fU & ((IData)(0x42U) 
                                                * (IData)(vlSelfRef.ascon_top__DOT__bit_counter)))))
                             : 0U));
    }
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[0U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[0U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__x, 0x13U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__x, 0x2dU));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__111__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[1U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[0U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__x, 0x1cU) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__x, 0x24U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__112__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[1U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[2U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__x, 0x3dU) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__x, 3U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__113__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[3U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[2U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__x, 0x27U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__x, 0x19U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__114__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[2U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[4U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__x, 1U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__x, 0x3fU));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__115__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[5U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[4U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__x, 6U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__x, 0x3aU));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__116__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[3U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[6U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__x, 0xaU) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__x, 0x36U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__117__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[7U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[6U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__x, 0x11U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__x, 0x2fU));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__118__Vfuncout));
    vlSelfRef.ascon_top__DOT__linear_diffusion_debug[4U] 
        = (((((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
              << 0x20U) | (QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[8U]))) 
            ^ ([&]() {
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__x 
                        = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                            << 0x20U) | (QData)((IData)(
                                                        vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
                    vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__Vfuncout 
                        = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__x, 7U) 
                           | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__x, 0x39U));
                }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__119__Vfuncout)) 
           ^ ([&]() {
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__x 
                    = (((QData)((IData)(vlSelfRef.ascon_top__DOT__state_reg_out[9U])) 
                        << 0x20U) | (QData)((IData)(
                                                    vlSelfRef.ascon_top__DOT__state_reg_out[8U])));
                vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__Vfuncout 
                    = (VL_SHIFTR_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__x, 0x29U) 
                       | VL_SHIFTL_QQI(64,64,32, vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__x, 0x17U));
            }(), vlSelfRef.__Vfunc_ascon_top__DOT__rotr64__120__Vfuncout));
    vlSelfRef.ascon_top__DOT__fresh_r = ((4U & (vlSelfRef.ascon_top__DOT__state_reg_out[1U] 
                                                >> 1U)) 
                                         | ((2U & (
                                                   vlSelfRef.ascon_top__DOT__state_reg_out[1U] 
                                                   >> 4U)) 
                                            | (1U & 
                                               (vlSelfRef.ascon_top__DOT__state_reg_out[0U] 
                                                >> 0xbU))));
    vlSelfRef.ascon_top__DOT__rc_block[1U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5;
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
        = (0x3fffffU & (((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
                          << 0xaU) | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
                                      >> 0x16U)) ^ vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_5));
    vlSelfRef.ascon_top__DOT__rc_block[2U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8;
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
        = ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[5U] 
            >> 0xcU) ^ vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_8);
    vlSelfRef.ascon_top__DOT__rc_block[0U] = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3;
    vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit 
        = (0x3fffffU & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[4U] 
                        ^ vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_3));
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[2U] 
        = vlSelfRef.debug_state_2;
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[3U] 
        = vlSelfRef.debug_state_3;
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[4U] 
        = vlSelfRef.debug_state_4;
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 
        = (vlSelfRef.debug_state_0 ^ (((QData)((IData)(
                                                       vlSelfRef.ascon_top__DOT__reverse_reg_data_out[3U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.ascon_top__DOT__reverse_reg_data_out[2U]))));
    ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 
        = (vlSelfRef.debug_state_1 ^ (((QData)((IData)(
                                                       vlSelfRef.ascon_top__DOT__reverse_reg_data_out[1U])) 
                                       << 0x20U) | (QData)((IData)(
                                                                   vlSelfRef.ascon_top__DOT__reverse_reg_data_out[0U]))));
    vlSelfRef.debug_linear_diffusion_state3 = vlSelfRef.ascon_top__DOT__linear_diffusion_debug
        [3U];
    vlSelfRef.debug_linear_diffusion_state4 = vlSelfRef.ascon_top__DOT__linear_diffusion_debug
        [4U];
    vlSelfRef.tag2 = (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                      [4U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U] 
        = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                  [0U]);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U] 
        = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                   [0U] >> 0x20U));
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U] 
        = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                  [1U]);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U] 
        = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                   [1U] >> 0x20U));
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U] 
        = (IData)(vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                  [2U]);
    vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U] 
        = (IData)((vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                   [2U] >> 0x20U));
    vlSelfRef.tag1 = (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                      [3U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q);
    vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
        = vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    if (vlSelfRef.ascon_top__DOT__shift_enable_x0) {
        vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
            = ((IData)(vlSelfRef.ascon_top__DOT__shift_type)
                ? ((IData)(vlSelfRef.ascon_top__DOT__last_cycle_x0)
                    ? (((QData)((IData)((0xfffffU & vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit))) 
                        << 0x2cU) | (vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 0x14U)) : (
                                                   ((QData)((IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit)) 
                                                    << 0x2aU) 
                                                   | (vlSelfRef.ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                                      >> 0x16U)))
                : (((QData)((IData)((0xfffffU & vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9))) 
                    << 0x2cU) | (((QData)((IData)(vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6)) 
                                  << 0x16U) | (QData)((IData)(vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit)))));
    }
    vlSelfRef.ascon_top__DOT__shares_in[0U] = (IData)(
                                                      (((QData)((IData)(
                                                                        (0x3fffffU 
                                                                         & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                                                        << 0x16U) 
                                                       | (QData)((IData)(
                                                                         (0x3fffffU 
                                                                          & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))));
    vlSelfRef.ascon_top__DOT__shares_in[1U] = ((vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit 
                                                << 0xcU) 
                                               | (IData)(
                                                         ((((QData)((IData)(
                                                                            (0x3fffffU 
                                                                             & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U]))) 
                                                            << 0x16U) 
                                                           | (QData)((IData)(
                                                                             (0x3fffffU 
                                                                              & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U])))) 
                                                          >> 0x20U)));
    vlSelfRef.ascon_top__DOT__shares_in[2U] = ((0xfffffffcU 
                                                & vlSelfRef.ascon_top__DOT__shares_in[2U]) 
                                               | (vlSelfRef.ascon_top__DOT____Vcellinp__sipo_reg_x2_debug__in_shifted_1bit 
                                                  >> 0x14U));
    vlSelfRef.ascon_top__DOT__shares_in[2U] = ((3U 
                                                & vlSelfRef.ascon_top__DOT__shares_in[2U]) 
                                               | ((IData)(
                                                          (((QData)((IData)(
                                                                            (0x3fffffU 
                                                                             & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                                            << 0x16U) 
                                                           | (QData)((IData)(
                                                                             (0x3fffffU 
                                                                              & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))))) 
                                                  << 2U));
    vlSelfRef.ascon_top__DOT__shares_in[3U] = (0x3fffU 
                                               & (((IData)(
                                                           (((QData)((IData)(
                                                                             (0x3fffffU 
                                                                              & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                                             << 0x16U) 
                                                            | (QData)((IData)(
                                                                              (0x3fffffU 
                                                                               & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U]))))) 
                                                   >> 0x1eU) 
                                                  | ((IData)(
                                                             ((((QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U]))) 
                                                                << 0x16U) 
                                                               | (QData)((IData)(
                                                                                (0x3fffffU 
                                                                                & vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U])))) 
                                                              >> 0x20U)) 
                                                     << 2U)));
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_1_0;
    vlSelfRef.ciphertext[0U] = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_1_0);
    vlSelfRef.ciphertext[1U] = (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_1_0 
                                        >> 0x20U));
    vlSelfRef.ciphertext[2U] = (IData)(ascon_top__DOT____VdfgRegularize_h0932e10f_1_1);
    vlSelfRef.ciphertext[3U] = (IData)((ascon_top__DOT____VdfgRegularize_h0932e10f_1_1 
                                        >> 0x20U));
    vlSelfRef.ascon_top__DOT__state_reg_in_bypass[1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_1_1;
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = vlSelfRef.ascon_top__DOT__shares_in[0U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = vlSelfRef.ascon_top__DOT__shares_in[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = vlSelfRef.ascon_top__DOT__shares_in[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = vlSelfRef.ascon_top__DOT__shares_in[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
        = vlSelfRef.random_masks[0U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
        = vlSelfRef.random_masks[1U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
        = vlSelfRef.random_masks[2U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
        = (0x3fffU & vlSelfRef.random_masks[3U]);
    vlSelfRef.ascon_top__DOT__shares_out[3U] = ((0x3fffU 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[3U]) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[4U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                 >> 0x12U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[5U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                 >> 0x12U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                   << 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[6U] = ((0xf0000000U 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[6U]) 
                                                | ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                    >> 0x12U) 
                                                   | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                      << 0xeU)));
    __Vtemp_11[1U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
                      ^ vlSelfRef.random_masks[1U]);
    __Vtemp_11[2U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
                      ^ vlSelfRef.random_masks[2U]);
    __Vtemp_11[3U] = (0x3fffU & (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
                                 ^ vlSelfRef.random_masks[3U]));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ vlSelfRef.random_masks[0U]);
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp_11[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp_11[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp_11[3U];
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
        = ((vlSelfRef.random_masks[4U] << 0x12U) | 
           (vlSelfRef.random_masks[3U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
        = ((vlSelfRef.random_masks[5U] << 0x12U) | 
           (vlSelfRef.random_masks[4U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
        = ((vlSelfRef.random_masks[6U] << 0x12U) | 
           (vlSelfRef.random_masks[5U] >> 0xeU));
    ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
        = (0x3fffU & (vlSelfRef.random_masks[6U] >> 0xeU));
    vlSelfRef.ascon_top__DOT__shares_out[6U] = ((0xfffffffU 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[6U]) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[7U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[0U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[8U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[1U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[9U] = ((ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[2U] 
                                                 >> 4U) 
                                                | (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                   << 0x1cU));
    vlSelfRef.ascon_top__DOT__shares_out[0xaU] = (0x3ffU 
                                                  & (ascon_top__DOT__share_creator__DOT____Vlvbound_hbe82fcfd__0[3U] 
                                                     >> 4U));
    __Vtemp_17[1U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
                      ^ ((vlSelfRef.random_masks[5U] 
                          << 0x12U) | (vlSelfRef.random_masks[4U] 
                                       >> 0xeU)));
    __Vtemp_17[2U] = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
                      ^ ((vlSelfRef.random_masks[6U] 
                          << 0x12U) | (vlSelfRef.random_masks[5U] 
                                       >> 0xeU)));
    __Vtemp_17[3U] = (0x3fffU & (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
                                 ^ (vlSelfRef.random_masks[6U] 
                                    >> 0xeU)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
        = (vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U] 
           ^ ((vlSelfRef.random_masks[4U] << 0x12U) 
              | (vlSelfRef.random_masks[3U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U] 
        = __Vtemp_17[1U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U] 
        = __Vtemp_17[2U];
    vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U] 
        = __Vtemp_17[3U];
    vlSelfRef.ascon_top__DOT__shares_out[0U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[0U];
    vlSelfRef.ascon_top__DOT__shares_out[1U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[1U];
    vlSelfRef.ascon_top__DOT__shares_out[2U] = vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[2U];
    vlSelfRef.ascon_top__DOT__shares_out[3U] = ((0xffffc000U 
                                                 & vlSelfRef.ascon_top__DOT__shares_out[3U]) 
                                                | vlSelfRef.ascon_top__DOT__share_creator__DOT__temp[3U]);
    if (vlSelfRef.ascon_top__DOT__sel_masked_round) {
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
            = vlSelfRef.ascon_top__DOT__shares_out[0U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
            = vlSelfRef.ascon_top__DOT__shares_out[1U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
            = vlSelfRef.ascon_top__DOT__shares_out[2U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
            = (0x3fffU & vlSelfRef.ascon_top__DOT__shares_out[3U]);
        __Vtemp_44[3U] = ((vlSelfRef.ascon_top__DOT__shares_out[7U] 
                           << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[6U] 
                                        >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[4U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[3U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[5U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[4U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[6U] 
                << 0x12U) | (vlSelfRef.ascon_top__DOT__shares_out[5U] 
                             >> 0xeU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[7U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[6U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[8U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[7U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
            = ((vlSelfRef.ascon_top__DOT__shares_out[9U] 
                << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[8U] 
                          >> 0x1cU));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
            = (0x3fffU & ((vlSelfRef.ascon_top__DOT__shares_out[0xaU] 
                           << 4U) | (vlSelfRef.ascon_top__DOT__shares_out[9U] 
                                     >> 0x1cU)));
    } else {
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
            = vlSelfRef.ascon_top__DOT__shares_in[0U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
            = vlSelfRef.ascon_top__DOT__shares_in[1U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
            = vlSelfRef.ascon_top__DOT__shares_in[2U];
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
            = (0x3fffU & vlSelfRef.ascon_top__DOT__shares_in[3U]);
        __Vtemp_44[3U] = (((IData)((((QData)((IData)(
                                                     (0x3fffffU 
                                                      & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                                          << 0xaU) 
                                                         | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                            >> 0x16U))))) 
                                     << 0x16U) | (QData)((IData)(
                                                                 (0x3fffffU 
                                                                  & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                                      << 0xaU) 
                                                                     | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                                        >> 0x16U))))))) 
                           >> 0x1eU) | ((IData)(((((QData)((IData)(
                                                                   (0x3fffffU 
                                                                    & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                                                        << 0xaU) 
                                                                       | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                                          >> 0x16U))))) 
                                                   << 0x16U) 
                                                  | (QData)((IData)(
                                                                    (0x3fffffU 
                                                                     & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                                         << 0xaU) 
                                                                        | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                                           >> 0x16U)))))) 
                                                 >> 0x20U)) 
                                        << 2U));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
            = (IData)((((QData)((IData)((0x3fffffU 
                                         & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                             << 0xaU) 
                                            | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                               >> 0x16U))))) 
                        << 0x16U) | (QData)((IData)(
                                                    (0x3fffffU 
                                                     & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                         << 0xaU) 
                                                        | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                           >> 0x16U)))))));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
            = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (0x3fffffU 
                                                       & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                                             >> 0x16U))))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (0x3fffffU 
                                                                   & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                                       << 0xaU) 
                                                                      | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                                                         >> 0x16U)))))) 
                                    >> 0x20U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
            = (((IData)((((QData)((IData)((0x3fffffU 
                                           & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                               << 0xaU) 
                                              | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[8U] 
                                                 >> 0x16U))))) 
                          << 0x16U) | (QData)((IData)(
                                                      (0x3fffffU 
                                                       & ((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                           << 0xaU) 
                                                          | (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[6U] 
                                                             >> 0x16U))))))) 
                << 2U) | (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_6 
                          >> 0x14U));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
            = (IData)((((QData)((IData)((vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                         >> 0xcU))) 
                        << 0x16U) | (QData)((IData)(
                                                    (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                     >> 0xcU)))));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
            = ((vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                << 0xcU) | (IData)(((((QData)((IData)(
                                                      (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[3U] 
                                                       >> 0xcU))) 
                                      << 0x16U) | (QData)((IData)(
                                                                  (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                                                   >> 0xcU)))) 
                                    >> 0x20U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
            = ((0xff000000U & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                               << 0xcU)) | ((0x3ffffcU 
                                             & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[7U] 
                                                >> 0xaU)) 
                                            | (vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_3_9 
                                               >> 0x14U)));
        ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
            = (0x3fffU & (0xffffffU & (vlSelfRef.ascon_top__DOT__state_reg_out_shiftdplus1[9U] 
                                       >> 0x14U)));
    }
    if (vlSelfRef.ascon_top__DOT__sel_bypass) {
        if (vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key) {
            vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [0U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [0U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [1U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [1U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [2U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q));
            vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
                = (IData)(((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                            [2U] ^ vlSelfRef.ascon_top__DOT__key1_reg__DOT__reg_q) 
                           >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [3U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q));
            vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
                = (IData)(((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                            [3U] ^ vlSelfRef.ascon_top__DOT__key2_reg__DOT__reg_q) 
                           >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [4U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [4U] >> 0x20U));
        } else {
            vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [0U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [0U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [1U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [1U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [2U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [2U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [3U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [3U] >> 0x20U));
            vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
                = (IData)(vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                          [4U]);
            vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
                = (IData)((vlSelfRef.ascon_top__DOT__state_reg_in_bypass
                           [4U] >> 0x20U));
        }
    } else if (vlSelfRef.ascon_top__DOT__sel_load_iv_nonce_key) {
        vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
            = (IData)(vlSelfRef.initialVector);
        vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
            = (IData)((vlSelfRef.initialVector >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
            = (IData)(vlSelfRef.key1);
        vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
            = (IData)((vlSelfRef.key1 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
            = (IData)(vlSelfRef.key2);
        vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
            = (IData)((vlSelfRef.key2 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
            = (IData)(vlSelfRef.nonce1);
        vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
            = (IData)((vlSelfRef.nonce1 >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
            = (IData)(vlSelfRef.nonce2);
        vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
            = (IData)((vlSelfRef.nonce2 >> 0x20U));
    } else {
        vlSelfRef.ascon_top__DOT__state_reg_in[0U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[0U];
        vlSelfRef.ascon_top__DOT__state_reg_in[1U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[1U];
        vlSelfRef.ascon_top__DOT__state_reg_in[2U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[2U];
        vlSelfRef.ascon_top__DOT__state_reg_in[3U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[3U];
        vlSelfRef.ascon_top__DOT__state_reg_in[4U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[4U];
        vlSelfRef.ascon_top__DOT__state_reg_in[5U] 
            = vlSelfRef.ascon_top__DOT____VdfgRegularize_h0932e10f_2_0[5U];
        vlSelfRef.ascon_top__DOT__state_reg_in[6U] 
            = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                        ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                       [3U]));
        vlSelfRef.ascon_top__DOT__state_reg_in[7U] 
            = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                         ? vlSelfRef.tag1 : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                        [3U]) >> 0x20U));
        vlSelfRef.ascon_top__DOT__state_reg_in[8U] 
            = (IData)(((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                        ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                           [4U] ^ vlSelfRef.ascon_top__DOT__xor_signal)
                        : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                       [4U]));
        vlSelfRef.ascon_top__DOT__state_reg_in[9U] 
            = (IData)((((IData)(vlSelfRef.ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                         ? (vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                            [4U] ^ vlSelfRef.ascon_top__DOT__xor_signal)
                         : vlSelfRef.ascon_top__DOT__linear_diffusion_debug
                        [4U]) >> 0x20U));
    }
    ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U] 
        = (0x3fffU & __Vtemp_44[3U]);
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[0U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [0U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[0U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_10[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[1U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [1U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[1U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_11[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][0U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][1U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][2U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U];
    vlSelfRef.ascon_top__DOT__affine_layer_in[2U][3U] 
        = ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U];
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][0U] 
        = ((0xffc00000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][0U]) | (0x3fffffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
                                      ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U] 
                                          << 8U) | 
                                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                          >> 0x18U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][0U] 
        = ((0x3fffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][0U]) | (0xffc00000U & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][1U] 
        = ((0xfffff000U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][1U]) | (0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][1U] 
        = ((0xfffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][1U]) | (0xfffff000U & ((0xfffff000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U]) 
                                        ^ ((ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
                                            << 0x16U) 
                                           | (0x3ff000U 
                                              & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[0U] 
                                                 >> 0xaU))))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xfffffffcU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (3U & ((0xfffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]) 
                               ^ (0xfffU & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[1U] 
                                            >> 0xaU)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xff000003U & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (0xfffffcU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][2U] 
        = ((0xffffffU & vlSelfRef.ascon_top__DOT__affine_layer_out
            [2U][2U]) | (0xff000000U & ((0xff000000U 
                                         & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U]) 
                                        ^ (0xff000000U 
                                           & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                              << 0x16U)))));
    vlSelfRef.ascon_top__DOT__affine_layer_out[2U][3U] 
        = (0x3fffU & ((0xffffffU & ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[3U]) 
                      ^ ((0xc00000U & (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                                       << 0x16U)) | 
                         (ascon_top__DOT____VdfgRegularize_h0932e10f_3_12[2U] 
                          >> 0xaU))));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (1U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [0U][0U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [0U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (2U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [1U][0U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[1U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [1U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (4U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [2U][0U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[2U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [2U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[3U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [3U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[4U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [4U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[5U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [5U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[6U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [6U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x1aU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x200U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [0U][2U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][2U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][2U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[7U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [7U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][2U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x1bU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][3U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x1aU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x400U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [1U][2U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][3U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][2U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[8U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [8U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][3U] << 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [0U][0U] >> 0x1cU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [0U][1U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][2U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][3U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [1U][0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][0U] >> 0x1bU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [1U][1U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][2U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][3U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                         [2U][0U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                            [2U][0U] >> 0x1aU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][1U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x800U & vlSelfRef.ascon_top__DOT__affine_layer_out
                   [2U][2U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[9U] = 
        ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
          [9U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][3U] << 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xaU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xaU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xbU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xbU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xcU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xcU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (8U & vlSelfRef.ascon_top__DOT__affine_layer_out
                       [0U][1U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xdU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xdU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x10U & vlSelfRef.ascon_top__DOT__affine_layer_out
                       [1U][1U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [2U][1U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xeU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xeU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][0U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [0U][1U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [0U][1U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][3U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [1U][0U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                [1U][1U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][3U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                             [2U][0U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x20U & vlSelfRef.ascon_top__DOT__affine_layer_out
                       [2U][1U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][2U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0xfU] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0xfU]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][3U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x10U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x10U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0xfU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x11U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x11U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x10U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x16U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 9U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x12U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x12U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][1U] >> 0x19U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 0x18U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x11U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 4U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][1U] >> 0x17U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xaU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x13U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x13U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 3U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x1000U & vlSelfRef.ascon_top__DOT__affine_layer_out
                        [0U][3U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x2000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [1U][3U] << 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x12U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] << 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xbU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x14U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x14U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 2U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffeU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (1U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][0U] >> 0x15U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ff7U & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (8U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [0U][1U] >> 8U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fbfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x40U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [0U][2U] << 5U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7dffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x200U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [0U][2U] >> 0xeU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x6fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x1000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [0U][3U] >> 1U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffdU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (2U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [1U][0U] >> 0x14U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fefU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x10U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][1U] >> 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7f7fU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x80U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [1U][2U] << 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7bffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x400U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [1U][2U] >> 0xdU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x5fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x2000U & vlSelfRef.ascon_top__DOT__affine_layer_out
                        [1U][3U]));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7ffbU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (4U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                              [2U][0U] >> 0x13U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7fdfU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x20U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                 [2U][1U] >> 6U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x7effU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x100U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] << 7U)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x77ffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x800U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                  [2U][2U] >> 0xcU)));
    vlSelfRef.ascon_top__DOT__next_sbox_input[0x15U] 
        = ((0x3fffU & vlSelfRef.ascon_top__DOT__next_sbox_input
            [0x15U]) | (0x4000U & (vlSelfRef.ascon_top__DOT__affine_layer_out
                                   [2U][3U] << 1U)));
}

VL_ATTR_COLD void Vascon_top___024root___stl_sequent__TOP__2(Vascon_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___stl_sequent__TOP__2\n"); );
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha1c9de3c__0;
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h16d7f4a4__0;
    ascon_top__DOT____Vlvbound_h16d7f4a4__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h25294956__0;
    ascon_top__DOT____Vlvbound_h25294956__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hf32ec5e0__0;
    ascon_top__DOT____Vlvbound_hf32ec5e0__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hdd816e0f__0;
    ascon_top__DOT____Vlvbound_hdd816e0f__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hb8017901__0;
    ascon_top__DOT____Vlvbound_hb8017901__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hb24669c5__0;
    ascon_top__DOT____Vlvbound_hb24669c5__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hf217b141__0;
    ascon_top__DOT____Vlvbound_hf217b141__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h88843c79__0;
    ascon_top__DOT____Vlvbound_h88843c79__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hb0644bd6__0;
    ascon_top__DOT____Vlvbound_hb0644bd6__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h3f8bd819__0;
    ascon_top__DOT____Vlvbound_h3f8bd819__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h369946bc__0;
    ascon_top__DOT____Vlvbound_h369946bc__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h2cf059a8__0;
    ascon_top__DOT____Vlvbound_h2cf059a8__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h7d26ad1b__0;
    ascon_top__DOT____Vlvbound_h7d26ad1b__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he309aad1__0;
    ascon_top__DOT____Vlvbound_he309aad1__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hfb12aa37__0;
    ascon_top__DOT____Vlvbound_hfb12aa37__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h8d6c157f__0;
    ascon_top__DOT____Vlvbound_h8d6c157f__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h3c98cfc9__0;
    ascon_top__DOT____Vlvbound_h3c98cfc9__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h4b042c33__0;
    ascon_top__DOT____Vlvbound_h4b042c33__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hea720d2f__0;
    ascon_top__DOT____Vlvbound_hea720d2f__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h1c61673b__0;
    ascon_top__DOT____Vlvbound_h1c61673b__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha6fe3618__0;
    ascon_top__DOT____Vlvbound_ha6fe3618__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hbc38ebf8__0;
    ascon_top__DOT____Vlvbound_hbc38ebf8__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hdabe3d1e__0;
    ascon_top__DOT____Vlvbound_hdabe3d1e__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h3c7af3a6__0;
    ascon_top__DOT____Vlvbound_h3c7af3a6__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hc8b65143__0;
    ascon_top__DOT____Vlvbound_hc8b65143__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h5c411c4a__0;
    ascon_top__DOT____Vlvbound_h5c411c4a__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h9883e6aa__0;
    ascon_top__DOT____Vlvbound_h9883e6aa__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h27063103__0;
    ascon_top__DOT____Vlvbound_h27063103__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h288a0a33__0;
    ascon_top__DOT____Vlvbound_h288a0a33__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he2174466__0;
    ascon_top__DOT____Vlvbound_he2174466__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hf406b03a__0;
    ascon_top__DOT____Vlvbound_hf406b03a__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_he957677a__0;
    ascon_top__DOT____Vlvbound_he957677a__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h3d6d6854__0;
    ascon_top__DOT____Vlvbound_h3d6d6854__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hcca1da57__0;
    ascon_top__DOT____Vlvbound_hcca1da57__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h7dd2c5eb__0;
    ascon_top__DOT____Vlvbound_h7dd2c5eb__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h6303e279__0;
    ascon_top__DOT____Vlvbound_h6303e279__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h18ac543c__0;
    ascon_top__DOT____Vlvbound_h18ac543c__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h205e92f1__0;
    ascon_top__DOT____Vlvbound_h205e92f1__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h1a72b633__0;
    ascon_top__DOT____Vlvbound_h1a72b633__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hc87422be__0;
    ascon_top__DOT____Vlvbound_hc87422be__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h7885f0ac__0;
    ascon_top__DOT____Vlvbound_h7885f0ac__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h3b1f662b__0;
    ascon_top__DOT____Vlvbound_h3b1f662b__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h40ec75d9__0;
    ascon_top__DOT____Vlvbound_h40ec75d9__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h5de6ed4a__0;
    ascon_top__DOT____Vlvbound_h5de6ed4a__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h412fd247__0;
    ascon_top__DOT____Vlvbound_h412fd247__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hb561ce03__0;
    ascon_top__DOT____Vlvbound_hb561ce03__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h4889a663__0;
    ascon_top__DOT____Vlvbound_h4889a663__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_heff79c51__0;
    ascon_top__DOT____Vlvbound_heff79c51__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hcac2484d__0;
    ascon_top__DOT____Vlvbound_hcac2484d__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h524813d2__0;
    ascon_top__DOT____Vlvbound_h524813d2__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h99a0f5a0__0;
    ascon_top__DOT____Vlvbound_h99a0f5a0__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h7d6b0737__0;
    ascon_top__DOT____Vlvbound_h7d6b0737__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_ha9530225__0;
    ascon_top__DOT____Vlvbound_ha9530225__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hbf4eb9f8__0;
    ascon_top__DOT____Vlvbound_hbf4eb9f8__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h06aa35e7__0;
    ascon_top__DOT____Vlvbound_h06aa35e7__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_h5482e0c5__0;
    ascon_top__DOT____Vlvbound_h5482e0c5__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hd8940368__0;
    ascon_top__DOT____Vlvbound_hd8940368__0 = 0;
    CData/*0:0*/ ascon_top__DOT____Vlvbound_hcd535825__0;
    ascon_top__DOT____Vlvbound_hcd535825__0 = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__in;
    __Vfunc_ascon_top__DOT__xor_tree__42__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__N;
    __Vfunc_ascon_top__DOT__xor_tree__42__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__42__num;
    __Vfunc_ascon_top__DOT__xor_tree__42__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__in;
    __Vfunc_ascon_top__DOT__xor_tree__43__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__N;
    __Vfunc_ascon_top__DOT__xor_tree__43__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__level;
    __Vfunc_ascon_top__DOT__xor_tree__43__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__43__num;
    __Vfunc_ascon_top__DOT__xor_tree__43__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__in;
    __Vfunc_ascon_top__DOT__xor_tree__44__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__N;
    __Vfunc_ascon_top__DOT__xor_tree__44__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__level;
    __Vfunc_ascon_top__DOT__xor_tree__44__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__44__num;
    __Vfunc_ascon_top__DOT__xor_tree__44__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__in;
    __Vfunc_ascon_top__DOT__xor_tree__45__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__N;
    __Vfunc_ascon_top__DOT__xor_tree__45__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__level;
    __Vfunc_ascon_top__DOT__xor_tree__45__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__45__num;
    __Vfunc_ascon_top__DOT__xor_tree__45__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__in;
    __Vfunc_ascon_top__DOT__xor_tree__46__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__N;
    __Vfunc_ascon_top__DOT__xor_tree__46__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__level;
    __Vfunc_ascon_top__DOT__xor_tree__46__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__46__num;
    __Vfunc_ascon_top__DOT__xor_tree__46__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__in;
    __Vfunc_ascon_top__DOT__xor_tree__47__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__N;
    __Vfunc_ascon_top__DOT__xor_tree__47__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__level;
    __Vfunc_ascon_top__DOT__xor_tree__47__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__47__num;
    __Vfunc_ascon_top__DOT__xor_tree__47__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__in;
    __Vfunc_ascon_top__DOT__xor_tree__48__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__N;
    __Vfunc_ascon_top__DOT__xor_tree__48__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__level;
    __Vfunc_ascon_top__DOT__xor_tree__48__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__48__num;
    __Vfunc_ascon_top__DOT__xor_tree__48__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__49__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__in;
    __Vfunc_ascon_top__DOT__xor_tree__49__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__N;
    __Vfunc_ascon_top__DOT__xor_tree__49__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__level;
    __Vfunc_ascon_top__DOT__xor_tree__49__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__49__num;
    __Vfunc_ascon_top__DOT__xor_tree__49__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__50__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__in;
    __Vfunc_ascon_top__DOT__xor_tree__50__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__N;
    __Vfunc_ascon_top__DOT__xor_tree__50__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__level;
    __Vfunc_ascon_top__DOT__xor_tree__50__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__50__num;
    __Vfunc_ascon_top__DOT__xor_tree__50__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__51__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__51__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__51__in;
    __Vfunc_ascon_top__DOT__xor_tree__51__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__51__N;
    __Vfunc_ascon_top__DOT__xor_tree__51__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__51__level;
    __Vfunc_ascon_top__DOT__xor_tree__51__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__51__num;
    __Vfunc_ascon_top__DOT__xor_tree__51__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__52__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__52__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__52__in;
    __Vfunc_ascon_top__DOT__xor_tree__52__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__52__N;
    __Vfunc_ascon_top__DOT__xor_tree__52__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__52__level;
    __Vfunc_ascon_top__DOT__xor_tree__52__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__52__num;
    __Vfunc_ascon_top__DOT__xor_tree__52__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__53__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__53__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__53__in;
    __Vfunc_ascon_top__DOT__xor_tree__53__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__53__N;
    __Vfunc_ascon_top__DOT__xor_tree__53__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__53__level;
    __Vfunc_ascon_top__DOT__xor_tree__53__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__53__num;
    __Vfunc_ascon_top__DOT__xor_tree__53__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__54__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__54__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__54__in;
    __Vfunc_ascon_top__DOT__xor_tree__54__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__54__N;
    __Vfunc_ascon_top__DOT__xor_tree__54__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__54__level;
    __Vfunc_ascon_top__DOT__xor_tree__54__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__54__num;
    __Vfunc_ascon_top__DOT__xor_tree__54__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__55__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__55__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__55__in;
    __Vfunc_ascon_top__DOT__xor_tree__55__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__55__N;
    __Vfunc_ascon_top__DOT__xor_tree__55__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__55__level;
    __Vfunc_ascon_top__DOT__xor_tree__55__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__55__num;
    __Vfunc_ascon_top__DOT__xor_tree__55__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__56__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__56__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__56__in;
    __Vfunc_ascon_top__DOT__xor_tree__56__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__56__N;
    __Vfunc_ascon_top__DOT__xor_tree__56__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__56__level;
    __Vfunc_ascon_top__DOT__xor_tree__56__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__56__num;
    __Vfunc_ascon_top__DOT__xor_tree__56__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__57__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__57__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__57__in;
    __Vfunc_ascon_top__DOT__xor_tree__57__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__57__N;
    __Vfunc_ascon_top__DOT__xor_tree__57__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__57__level;
    __Vfunc_ascon_top__DOT__xor_tree__57__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__57__num;
    __Vfunc_ascon_top__DOT__xor_tree__57__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__58__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__58__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__58__in;
    __Vfunc_ascon_top__DOT__xor_tree__58__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__58__N;
    __Vfunc_ascon_top__DOT__xor_tree__58__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__58__level;
    __Vfunc_ascon_top__DOT__xor_tree__58__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__58__num;
    __Vfunc_ascon_top__DOT__xor_tree__58__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__59__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__59__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__59__in;
    __Vfunc_ascon_top__DOT__xor_tree__59__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__59__N;
    __Vfunc_ascon_top__DOT__xor_tree__59__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__59__level;
    __Vfunc_ascon_top__DOT__xor_tree__59__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__59__num;
    __Vfunc_ascon_top__DOT__xor_tree__59__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__60__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__60__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__60__in;
    __Vfunc_ascon_top__DOT__xor_tree__60__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__60__N;
    __Vfunc_ascon_top__DOT__xor_tree__60__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__60__level;
    __Vfunc_ascon_top__DOT__xor_tree__60__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__60__num;
    __Vfunc_ascon_top__DOT__xor_tree__60__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__61__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__61__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__61__in;
    __Vfunc_ascon_top__DOT__xor_tree__61__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__61__N;
    __Vfunc_ascon_top__DOT__xor_tree__61__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__61__level;
    __Vfunc_ascon_top__DOT__xor_tree__61__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__61__num;
    __Vfunc_ascon_top__DOT__xor_tree__61__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__62__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__62__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__62__in;
    __Vfunc_ascon_top__DOT__xor_tree__62__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__62__N;
    __Vfunc_ascon_top__DOT__xor_tree__62__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__62__level;
    __Vfunc_ascon_top__DOT__xor_tree__62__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__62__num;
    __Vfunc_ascon_top__DOT__xor_tree__62__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__63__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__63__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__63__in;
    __Vfunc_ascon_top__DOT__xor_tree__63__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__63__N;
    __Vfunc_ascon_top__DOT__xor_tree__63__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__63__level;
    __Vfunc_ascon_top__DOT__xor_tree__63__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__63__num;
    __Vfunc_ascon_top__DOT__xor_tree__63__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__64__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__64__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__64__in;
    __Vfunc_ascon_top__DOT__xor_tree__64__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__64__N;
    __Vfunc_ascon_top__DOT__xor_tree__64__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__64__level;
    __Vfunc_ascon_top__DOT__xor_tree__64__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__64__num;
    __Vfunc_ascon_top__DOT__xor_tree__64__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__65__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__65__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__65__in;
    __Vfunc_ascon_top__DOT__xor_tree__65__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__65__N;
    __Vfunc_ascon_top__DOT__xor_tree__65__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__65__level;
    __Vfunc_ascon_top__DOT__xor_tree__65__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__65__num;
    __Vfunc_ascon_top__DOT__xor_tree__65__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__66__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__66__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__66__in;
    __Vfunc_ascon_top__DOT__xor_tree__66__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__66__N;
    __Vfunc_ascon_top__DOT__xor_tree__66__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__66__level;
    __Vfunc_ascon_top__DOT__xor_tree__66__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__66__num;
    __Vfunc_ascon_top__DOT__xor_tree__66__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__67__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__67__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__67__in;
    __Vfunc_ascon_top__DOT__xor_tree__67__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__67__N;
    __Vfunc_ascon_top__DOT__xor_tree__67__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__67__level;
    __Vfunc_ascon_top__DOT__xor_tree__67__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__67__num;
    __Vfunc_ascon_top__DOT__xor_tree__67__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__68__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__68__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__68__in;
    __Vfunc_ascon_top__DOT__xor_tree__68__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__68__N;
    __Vfunc_ascon_top__DOT__xor_tree__68__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__68__level;
    __Vfunc_ascon_top__DOT__xor_tree__68__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__68__num;
    __Vfunc_ascon_top__DOT__xor_tree__68__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__69__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__69__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__69__in;
    __Vfunc_ascon_top__DOT__xor_tree__69__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__69__N;
    __Vfunc_ascon_top__DOT__xor_tree__69__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__69__level;
    __Vfunc_ascon_top__DOT__xor_tree__69__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__69__num;
    __Vfunc_ascon_top__DOT__xor_tree__69__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__70__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__70__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__70__in;
    __Vfunc_ascon_top__DOT__xor_tree__70__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__70__N;
    __Vfunc_ascon_top__DOT__xor_tree__70__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__70__level;
    __Vfunc_ascon_top__DOT__xor_tree__70__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__70__num;
    __Vfunc_ascon_top__DOT__xor_tree__70__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__71__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__71__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__71__in;
    __Vfunc_ascon_top__DOT__xor_tree__71__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__71__N;
    __Vfunc_ascon_top__DOT__xor_tree__71__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__71__level;
    __Vfunc_ascon_top__DOT__xor_tree__71__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__71__num;
    __Vfunc_ascon_top__DOT__xor_tree__71__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__72__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__72__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__72__in;
    __Vfunc_ascon_top__DOT__xor_tree__72__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__72__N;
    __Vfunc_ascon_top__DOT__xor_tree__72__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__72__level;
    __Vfunc_ascon_top__DOT__xor_tree__72__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__72__num;
    __Vfunc_ascon_top__DOT__xor_tree__72__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__73__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__73__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__73__in;
    __Vfunc_ascon_top__DOT__xor_tree__73__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__73__N;
    __Vfunc_ascon_top__DOT__xor_tree__73__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__73__level;
    __Vfunc_ascon_top__DOT__xor_tree__73__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__73__num;
    __Vfunc_ascon_top__DOT__xor_tree__73__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__74__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__74__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__74__in;
    __Vfunc_ascon_top__DOT__xor_tree__74__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__74__N;
    __Vfunc_ascon_top__DOT__xor_tree__74__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__74__level;
    __Vfunc_ascon_top__DOT__xor_tree__74__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__74__num;
    __Vfunc_ascon_top__DOT__xor_tree__74__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__75__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__75__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__75__in;
    __Vfunc_ascon_top__DOT__xor_tree__75__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__75__N;
    __Vfunc_ascon_top__DOT__xor_tree__75__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__75__level;
    __Vfunc_ascon_top__DOT__xor_tree__75__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__75__num;
    __Vfunc_ascon_top__DOT__xor_tree__75__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__76__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__76__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__76__in;
    __Vfunc_ascon_top__DOT__xor_tree__76__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__76__N;
    __Vfunc_ascon_top__DOT__xor_tree__76__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__76__level;
    __Vfunc_ascon_top__DOT__xor_tree__76__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__76__num;
    __Vfunc_ascon_top__DOT__xor_tree__76__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__77__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__77__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__77__in;
    __Vfunc_ascon_top__DOT__xor_tree__77__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__77__N;
    __Vfunc_ascon_top__DOT__xor_tree__77__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__77__level;
    __Vfunc_ascon_top__DOT__xor_tree__77__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__77__num;
    __Vfunc_ascon_top__DOT__xor_tree__77__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__78__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__78__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__78__in;
    __Vfunc_ascon_top__DOT__xor_tree__78__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__78__N;
    __Vfunc_ascon_top__DOT__xor_tree__78__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__78__level;
    __Vfunc_ascon_top__DOT__xor_tree__78__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__78__num;
    __Vfunc_ascon_top__DOT__xor_tree__78__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__79__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__79__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__79__in;
    __Vfunc_ascon_top__DOT__xor_tree__79__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__79__N;
    __Vfunc_ascon_top__DOT__xor_tree__79__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__79__level;
    __Vfunc_ascon_top__DOT__xor_tree__79__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__79__num;
    __Vfunc_ascon_top__DOT__xor_tree__79__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__80__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__80__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__80__in;
    __Vfunc_ascon_top__DOT__xor_tree__80__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__80__N;
    __Vfunc_ascon_top__DOT__xor_tree__80__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__80__level;
    __Vfunc_ascon_top__DOT__xor_tree__80__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__80__num;
    __Vfunc_ascon_top__DOT__xor_tree__80__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__81__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__81__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__81__in;
    __Vfunc_ascon_top__DOT__xor_tree__81__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__81__N;
    __Vfunc_ascon_top__DOT__xor_tree__81__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__81__level;
    __Vfunc_ascon_top__DOT__xor_tree__81__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__81__num;
    __Vfunc_ascon_top__DOT__xor_tree__81__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__82__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__82__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__82__in;
    __Vfunc_ascon_top__DOT__xor_tree__82__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__82__N;
    __Vfunc_ascon_top__DOT__xor_tree__82__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__82__level;
    __Vfunc_ascon_top__DOT__xor_tree__82__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__82__num;
    __Vfunc_ascon_top__DOT__xor_tree__82__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__83__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__83__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__83__in;
    __Vfunc_ascon_top__DOT__xor_tree__83__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__83__N;
    __Vfunc_ascon_top__DOT__xor_tree__83__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__83__level;
    __Vfunc_ascon_top__DOT__xor_tree__83__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__83__num;
    __Vfunc_ascon_top__DOT__xor_tree__83__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__84__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__84__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__84__in;
    __Vfunc_ascon_top__DOT__xor_tree__84__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__84__N;
    __Vfunc_ascon_top__DOT__xor_tree__84__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__84__level;
    __Vfunc_ascon_top__DOT__xor_tree__84__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__84__num;
    __Vfunc_ascon_top__DOT__xor_tree__84__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__85__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__85__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__85__in;
    __Vfunc_ascon_top__DOT__xor_tree__85__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__85__N;
    __Vfunc_ascon_top__DOT__xor_tree__85__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__85__level;
    __Vfunc_ascon_top__DOT__xor_tree__85__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__85__num;
    __Vfunc_ascon_top__DOT__xor_tree__85__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__86__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__86__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__86__in;
    __Vfunc_ascon_top__DOT__xor_tree__86__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__86__N;
    __Vfunc_ascon_top__DOT__xor_tree__86__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__86__level;
    __Vfunc_ascon_top__DOT__xor_tree__86__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__86__num;
    __Vfunc_ascon_top__DOT__xor_tree__86__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__87__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__87__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__87__in;
    __Vfunc_ascon_top__DOT__xor_tree__87__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__87__N;
    __Vfunc_ascon_top__DOT__xor_tree__87__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__87__level;
    __Vfunc_ascon_top__DOT__xor_tree__87__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__87__num;
    __Vfunc_ascon_top__DOT__xor_tree__87__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__88__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__88__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__88__in;
    __Vfunc_ascon_top__DOT__xor_tree__88__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__88__N;
    __Vfunc_ascon_top__DOT__xor_tree__88__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__88__level;
    __Vfunc_ascon_top__DOT__xor_tree__88__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__88__num;
    __Vfunc_ascon_top__DOT__xor_tree__88__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__89__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__89__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__89__in;
    __Vfunc_ascon_top__DOT__xor_tree__89__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__89__N;
    __Vfunc_ascon_top__DOT__xor_tree__89__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__89__level;
    __Vfunc_ascon_top__DOT__xor_tree__89__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__89__num;
    __Vfunc_ascon_top__DOT__xor_tree__89__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__90__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__90__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__90__in;
    __Vfunc_ascon_top__DOT__xor_tree__90__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__90__N;
    __Vfunc_ascon_top__DOT__xor_tree__90__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__90__level;
    __Vfunc_ascon_top__DOT__xor_tree__90__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__90__num;
    __Vfunc_ascon_top__DOT__xor_tree__90__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__91__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__91__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__91__in;
    __Vfunc_ascon_top__DOT__xor_tree__91__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__91__N;
    __Vfunc_ascon_top__DOT__xor_tree__91__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__91__level;
    __Vfunc_ascon_top__DOT__xor_tree__91__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__91__num;
    __Vfunc_ascon_top__DOT__xor_tree__91__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__92__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__92__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__92__in;
    __Vfunc_ascon_top__DOT__xor_tree__92__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__92__N;
    __Vfunc_ascon_top__DOT__xor_tree__92__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__92__level;
    __Vfunc_ascon_top__DOT__xor_tree__92__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__92__num;
    __Vfunc_ascon_top__DOT__xor_tree__92__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__93__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__93__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__93__in;
    __Vfunc_ascon_top__DOT__xor_tree__93__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__93__N;
    __Vfunc_ascon_top__DOT__xor_tree__93__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__93__level;
    __Vfunc_ascon_top__DOT__xor_tree__93__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__93__num;
    __Vfunc_ascon_top__DOT__xor_tree__93__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__94__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__94__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__94__in;
    __Vfunc_ascon_top__DOT__xor_tree__94__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__94__N;
    __Vfunc_ascon_top__DOT__xor_tree__94__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__94__level;
    __Vfunc_ascon_top__DOT__xor_tree__94__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__94__num;
    __Vfunc_ascon_top__DOT__xor_tree__94__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__95__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__95__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__95__in;
    __Vfunc_ascon_top__DOT__xor_tree__95__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__95__N;
    __Vfunc_ascon_top__DOT__xor_tree__95__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__95__level;
    __Vfunc_ascon_top__DOT__xor_tree__95__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__95__num;
    __Vfunc_ascon_top__DOT__xor_tree__95__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__96__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__96__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__96__in;
    __Vfunc_ascon_top__DOT__xor_tree__96__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__96__N;
    __Vfunc_ascon_top__DOT__xor_tree__96__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__96__level;
    __Vfunc_ascon_top__DOT__xor_tree__96__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__96__num;
    __Vfunc_ascon_top__DOT__xor_tree__96__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__97__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__97__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__97__in;
    __Vfunc_ascon_top__DOT__xor_tree__97__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__97__N;
    __Vfunc_ascon_top__DOT__xor_tree__97__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__97__level;
    __Vfunc_ascon_top__DOT__xor_tree__97__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__97__num;
    __Vfunc_ascon_top__DOT__xor_tree__97__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__98__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__98__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__98__in;
    __Vfunc_ascon_top__DOT__xor_tree__98__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__98__N;
    __Vfunc_ascon_top__DOT__xor_tree__98__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__98__level;
    __Vfunc_ascon_top__DOT__xor_tree__98__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__98__num;
    __Vfunc_ascon_top__DOT__xor_tree__98__num = 0;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__99__Vfuncout;
    __Vfunc_ascon_top__DOT__xor_tree__99__Vfuncout = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__99__in;
    __Vfunc_ascon_top__DOT__xor_tree__99__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__99__N;
    __Vfunc_ascon_top__DOT__xor_tree__99__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__99__level;
    __Vfunc_ascon_top__DOT__xor_tree__99__level = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__99__num;
    __Vfunc_ascon_top__DOT__xor_tree__99__num = 0;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__100__in;
    __Vfunc_ascon_top__DOT__xor_tree__100__in = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__100__N;
    __Vfunc_ascon_top__DOT__xor_tree__100__N = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i;
    __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i = 0;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__100__num;
    __Vfunc_ascon_top__DOT__xor_tree__100__num = 0;
    // Body
    __Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout 
        = ((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__stage
               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__41__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__41__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha1c9de3c__0));
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha1c9de3c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha1c9de3c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha1c9de3c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__42__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__in = vlSelfRef.ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__42__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__42__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__42__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__42__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                                 [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                           [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__42__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__42__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__42__num, (IData)(2U));
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level 
            = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout 
        = ((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__stage
               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__42__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__42__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound_h16d7f4a4__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h16d7f4a4__0));
    ascon_top__DOT____Vlvbound_h16d7f4a4__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h16d7f4a4__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h16d7f4a4__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h16d7f4a4__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__43__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__43__in = vlSelfRef.ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__43__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__43__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__43__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__43__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__43__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__43__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__43__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__43__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__43__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__43__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__43__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__43__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__43__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__43__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__43__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__43__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__43__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__43__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound_h25294956__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h25294956__0));
    ascon_top__DOT____Vlvbound_h25294956__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h25294956__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h25294956__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h25294956__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__44__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__44__in = vlSelfRef.ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__44__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__44__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__44__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__44__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__44__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__44__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__44__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__44__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__44__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__44__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__44__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__44__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__44__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__44__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__44__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__44__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__44__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__44__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound_hf32ec5e0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hf32ec5e0__0));
    ascon_top__DOT____Vlvbound_hf32ec5e0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf32ec5e0__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hf32ec5e0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf32ec5e0__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__45__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__45__in = vlSelfRef.ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__45__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__45__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__45__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__45__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__45__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__45__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__45__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__45__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__45__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__45__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__45__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__45__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__45__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__45__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__45__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__45__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__45__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__45__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound_hdd816e0f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hdd816e0f__0));
    ascon_top__DOT____Vlvbound_hdd816e0f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hdd816e0f__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hdd816e0f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hdd816e0f__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__46__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__46__in = vlSelfRef.ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__46__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__46__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__46__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__46__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__46__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__46__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__46__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__46__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__46__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__46__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__46__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__46__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__46__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__46__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__46__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__46__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__46__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__46__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound_hb8017901__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hb8017901__0));
    ascon_top__DOT____Vlvbound_hb8017901__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb8017901__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hb8017901__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb8017901__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__47__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__47__in = vlSelfRef.ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__47__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__47__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__47__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__47__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__47__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__47__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__47__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__47__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__47__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__47__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__47__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__47__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__47__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__47__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__47__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__47__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__47__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__47__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound_hb24669c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hb24669c5__0));
    ascon_top__DOT____Vlvbound_hb24669c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb24669c5__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hb24669c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb24669c5__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__48__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__48__in = vlSelfRef.ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__48__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__48__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__48__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__48__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__48__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__48__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__48__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__48__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__48__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__48__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__48__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__48__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__48__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__48__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__48__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__48__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__48__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__48__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound_hf217b141__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hf217b141__0));
    ascon_top__DOT____Vlvbound_hf217b141__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf217b141__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hf217b141__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf217b141__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__49__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__49__in = vlSelfRef.ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__49__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__49__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__49__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__49__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__49__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__49__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__49__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__49__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__49__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__49__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__49__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__49__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__49__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__49__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__49__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
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
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__49__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__49__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__49__Vfuncout) 
              << 0x11U));
    ascon_top__DOT____Vlvbound_h88843c79__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h88843c79__0));
    ascon_top__DOT____Vlvbound_h88843c79__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h88843c79__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h88843c79__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h88843c79__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__50__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__50__in = vlSelfRef.ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__50__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__50__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__50__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__50__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__50__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__50__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__50__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__50__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__50__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__50__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__50__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__50__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__50__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__50__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__50__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__50__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__50__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__50__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__50__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__50__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__50__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__50__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__50__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__50__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__50__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__50__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__50__Vfuncout) 
              << 0x12U));
    ascon_top__DOT____Vlvbound_hb0644bd6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hb0644bd6__0));
    ascon_top__DOT____Vlvbound_hb0644bd6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb0644bd6__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hb0644bd6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb0644bd6__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__51__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__51__in = vlSelfRef.ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__51__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__51__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__51__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__51__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__51__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__51__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__51__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__51__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__51__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__51__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__51__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__51__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__51__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__51__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__51__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__51__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__51__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__51__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__51__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__51__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__51__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__51__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__51__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__51__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__51__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__51__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__51__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__51__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__51__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__51__Vfuncout) 
              << 0x13U));
    ascon_top__DOT____Vlvbound_h3f8bd819__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h3f8bd819__0));
    ascon_top__DOT____Vlvbound_h3f8bd819__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3f8bd819__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h3f8bd819__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3f8bd819__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__52__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__52__in = vlSelfRef.ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__52__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__52__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__52__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__52__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__52__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__52__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__52__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__52__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__52__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__52__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__52__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__52__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__52__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__52__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__52__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__52__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__52__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__52__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__52__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__52__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__52__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__52__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__52__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__52__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__52__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__52__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__52__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__52__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__52__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__52__Vfuncout) 
              << 0x14U));
    ascon_top__DOT____Vlvbound_h369946bc__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h369946bc__0));
    ascon_top__DOT____Vlvbound_h369946bc__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h369946bc__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h369946bc__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h369946bc__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__53__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__53__in = vlSelfRef.ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__53__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__53__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__53__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__53__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__53__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__53__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__53__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__53__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__53__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__53__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__53__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__53__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__53__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__53__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__53__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__53__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__53__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__53__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__53__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__53__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__53__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__53__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__53__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__53__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__53__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__53__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__53__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__53__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__53__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__53__Vfuncout) 
              << 0x15U));
    ascon_top__DOT____Vlvbound_h2cf059a8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h2cf059a8__0));
    ascon_top__DOT____Vlvbound_h2cf059a8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h2cf059a8__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h2cf059a8__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h2cf059a8__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__54__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__54__in = vlSelfRef.ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__54__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__54__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__54__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__54__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__54__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__54__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__54__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__54__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__54__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__54__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__54__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__54__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__54__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__54__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__54__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__54__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__54__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__54__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__54__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__54__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__54__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__54__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__54__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__54__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__54__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__54__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__54__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__54__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__54__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__54__Vfuncout) 
              << 0x16U));
    ascon_top__DOT____Vlvbound_h7d26ad1b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h7d26ad1b__0));
    ascon_top__DOT____Vlvbound_h7d26ad1b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7d26ad1b__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h7d26ad1b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7d26ad1b__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__55__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__55__in = vlSelfRef.ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__55__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__55__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__55__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__55__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__55__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__55__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__55__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__55__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__55__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__55__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__55__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__55__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__55__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__55__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__55__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__55__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__55__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__55__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__55__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__55__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__55__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__55__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__55__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__55__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__55__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__55__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__55__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__55__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__55__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__55__Vfuncout) 
              << 0x17U));
    ascon_top__DOT____Vlvbound_he309aad1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he309aad1__0));
    ascon_top__DOT____Vlvbound_he309aad1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he309aad1__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he309aad1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he309aad1__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__56__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__56__in = vlSelfRef.ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__56__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__56__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__56__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__56__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__56__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__56__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__56__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__56__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__56__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__56__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__56__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__56__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__56__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__56__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__56__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__56__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__56__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__56__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__56__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__56__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__56__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__56__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__56__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__56__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__56__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__56__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__56__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__56__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__56__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__56__Vfuncout) 
              << 0x18U));
    ascon_top__DOT____Vlvbound_hfb12aa37__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hfb12aa37__0));
    ascon_top__DOT____Vlvbound_hfb12aa37__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hfb12aa37__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hfb12aa37__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hfb12aa37__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__57__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__57__in = vlSelfRef.ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__57__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__57__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__57__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__57__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__57__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__57__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__57__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__57__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__57__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__57__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__57__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__57__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__57__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__57__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__57__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__57__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__57__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__57__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__57__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__57__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__57__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__57__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__57__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__57__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__57__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__57__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__57__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__57__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__57__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__57__Vfuncout) 
              << 0x19U));
    ascon_top__DOT____Vlvbound_h8d6c157f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h8d6c157f__0));
    ascon_top__DOT____Vlvbound_h8d6c157f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h8d6c157f__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h8d6c157f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h8d6c157f__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__58__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__58__in = vlSelfRef.ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__58__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__58__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__58__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__58__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__58__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__58__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__58__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__58__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__58__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__58__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__58__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__58__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__58__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__58__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__58__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__58__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__58__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__58__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__58__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__58__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__58__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__58__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__58__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__58__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__58__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__58__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__58__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__58__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__58__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__58__Vfuncout) 
              << 0x1aU));
    ascon_top__DOT____Vlvbound_h3c98cfc9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h3c98cfc9__0));
    ascon_top__DOT____Vlvbound_h3c98cfc9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3c98cfc9__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h3c98cfc9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3c98cfc9__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__59__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__59__in = vlSelfRef.ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__59__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__59__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__59__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__59__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__59__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__59__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__59__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__59__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__59__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__59__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__59__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__59__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__59__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__59__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__59__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__59__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__59__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__59__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__59__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__59__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__59__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__59__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__59__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__59__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__59__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__59__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__59__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__59__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__59__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__59__Vfuncout) 
              << 0x1bU));
    ascon_top__DOT____Vlvbound_h4b042c33__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h4b042c33__0));
    ascon_top__DOT____Vlvbound_h4b042c33__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4b042c33__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h4b042c33__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4b042c33__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__60__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__60__in = vlSelfRef.ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__60__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__60__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__60__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__60__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__60__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__60__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__60__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__60__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__60__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__60__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__60__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__60__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__60__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__60__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__60__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__60__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__60__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__60__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__60__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__60__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__60__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__60__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__60__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__60__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__60__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__60__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__60__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__60__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__60__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__60__Vfuncout) 
              << 0x1cU));
    ascon_top__DOT____Vlvbound_hea720d2f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hea720d2f__0));
    ascon_top__DOT____Vlvbound_hea720d2f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hea720d2f__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hea720d2f__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hea720d2f__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__61__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__61__in = vlSelfRef.ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__61__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__61__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__61__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__61__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__61__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__61__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__61__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__61__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__61__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__61__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__61__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__61__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__61__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__61__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__61__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__61__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__61__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__61__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__61__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__61__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__61__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__61__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__61__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__61__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__61__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__61__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__61__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__61__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__61__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__61__Vfuncout) 
              << 0x1dU));
    ascon_top__DOT____Vlvbound_h1c61673b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][1U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h1c61673b__0));
    ascon_top__DOT____Vlvbound_h1c61673b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][1U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h1c61673b__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h1c61673b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][1U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h1c61673b__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__62__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__62__in = vlSelfRef.ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__62__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__62__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__62__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__62__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__62__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__62__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__62__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__62__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__62__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__62__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__62__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__62__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__62__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__62__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__62__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__62__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__62__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__62__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__62__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__62__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__62__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__62__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__62__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__62__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__62__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__62__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__62__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__62__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__62__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__62__Vfuncout) 
              << 0x1eU));
    ascon_top__DOT____Vlvbound_ha6fe3618__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][1U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha6fe3618__0));
    ascon_top__DOT____Vlvbound_ha6fe3618__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][1U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha6fe3618__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha6fe3618__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][1U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha6fe3618__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__63__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__63__in = vlSelfRef.ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__63__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__63__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__63__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__63__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__63__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__63__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__63__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__63__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__63__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__63__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__63__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__63__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__63__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__63__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__63__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__63__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__63__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__63__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__63__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__63__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__63__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__63__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__63__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__63__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__63__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__63__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__63__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__63__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__63__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[1U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[1U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__63__Vfuncout) 
              << 0x1fU));
    ascon_top__DOT____Vlvbound_hbc38ebf8__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][2U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hbc38ebf8__0));
    ascon_top__DOT____Vlvbound_hbc38ebf8__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][2U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hbc38ebf8__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hbc38ebf8__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][2U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hbc38ebf8__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__64__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__64__in = vlSelfRef.ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__64__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__64__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__64__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__64__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__64__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__64__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__64__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__64__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__64__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__64__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__64__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__64__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__64__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__64__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__64__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__64__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__64__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__64__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__64__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__64__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__64__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__64__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__64__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__64__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__64__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__64__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__64__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__64__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__64__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffffeU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | (IData)(__Vfunc_ascon_top__DOT__xor_tree__64__Vfuncout));
    ascon_top__DOT____Vlvbound_hdabe3d1e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hdabe3d1e__0));
    ascon_top__DOT____Vlvbound_hdabe3d1e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hdabe3d1e__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hdabe3d1e__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hdabe3d1e__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__65__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__65__in = vlSelfRef.ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__65__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__65__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__65__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__65__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__65__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__65__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__65__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__65__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__65__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__65__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__65__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__65__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__65__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__65__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__65__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__65__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__65__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__65__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__65__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__65__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__65__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__65__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__65__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__65__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__65__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__65__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__65__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__65__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__65__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffffdU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__65__Vfuncout) 
              << 1U));
    ascon_top__DOT____Vlvbound_h3c7af3a6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h3c7af3a6__0));
    ascon_top__DOT____Vlvbound_h3c7af3a6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3c7af3a6__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h3c7af3a6__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3c7af3a6__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__66__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__66__in = vlSelfRef.ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__66__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__66__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__66__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__66__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__66__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__66__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__66__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__66__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__66__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__66__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__66__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__66__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__66__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__66__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__66__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__66__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__66__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__66__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__66__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__66__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__66__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__66__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__66__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__66__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__66__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__66__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__66__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__66__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__66__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffffbU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__66__Vfuncout) 
              << 2U));
    ascon_top__DOT____Vlvbound_hc8b65143__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hc8b65143__0));
    ascon_top__DOT____Vlvbound_hc8b65143__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc8b65143__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hc8b65143__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc8b65143__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__67__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__67__in = vlSelfRef.ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__67__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__67__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__67__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__67__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__67__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__67__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__67__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__67__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__67__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__67__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__67__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__67__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__67__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__67__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__67__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__67__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__67__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__67__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__67__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__67__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__67__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__67__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__67__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__67__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__67__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__67__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__67__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__67__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__67__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffff7U & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__67__Vfuncout) 
              << 3U));
    ascon_top__DOT____Vlvbound_h5c411c4a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h5c411c4a__0));
    ascon_top__DOT____Vlvbound_h5c411c4a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5c411c4a__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h5c411c4a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5c411c4a__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__68__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__68__in = vlSelfRef.ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__68__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__68__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__68__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__68__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__68__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__68__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__68__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__68__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__68__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__68__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__68__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__68__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__68__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__68__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__68__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__68__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__68__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__68__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__68__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__68__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__68__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__68__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__68__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__68__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__68__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__68__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__68__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__68__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__68__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffffefU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__68__Vfuncout) 
              << 4U));
    ascon_top__DOT____Vlvbound_h9883e6aa__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h9883e6aa__0));
    ascon_top__DOT____Vlvbound_h9883e6aa__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h9883e6aa__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h9883e6aa__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 5U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h9883e6aa__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__69__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__69__in = vlSelfRef.ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__69__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__69__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__69__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__69__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__69__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__69__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__69__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__69__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__69__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__69__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__69__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__69__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__69__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__69__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__69__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__69__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__69__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__69__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__69__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__69__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__69__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__69__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__69__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__69__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__69__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__69__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__69__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__69__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__69__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffffdfU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__69__Vfuncout) 
              << 5U));
    ascon_top__DOT____Vlvbound_h27063103__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h27063103__0));
    ascon_top__DOT____Vlvbound_h27063103__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h27063103__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h27063103__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 6U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h27063103__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__70__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__70__in = vlSelfRef.ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__70__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__70__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__70__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__70__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__70__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__70__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__70__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__70__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__70__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__70__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__70__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__70__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__70__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__70__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__70__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__70__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__70__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__70__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__70__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__70__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__70__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__70__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__70__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__70__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__70__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__70__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__70__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__70__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__70__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffffbfU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__70__Vfuncout) 
              << 6U));
    ascon_top__DOT____Vlvbound_h288a0a33__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h288a0a33__0));
    ascon_top__DOT____Vlvbound_h288a0a33__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h288a0a33__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h288a0a33__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 7U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h288a0a33__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__71__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__71__in = vlSelfRef.ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__71__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__71__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__71__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__71__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__71__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__71__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__71__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__71__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__71__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__71__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__71__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__71__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__71__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__71__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__71__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__71__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__71__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__71__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__71__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__71__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__71__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__71__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__71__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__71__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__71__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__71__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__71__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__71__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__71__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffff7fU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__71__Vfuncout) 
              << 7U));
    ascon_top__DOT____Vlvbound_he2174466__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he2174466__0));
    ascon_top__DOT____Vlvbound_he2174466__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he2174466__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he2174466__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 8U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he2174466__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__72__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__72__in = vlSelfRef.ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__72__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__72__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__72__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__72__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__72__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__72__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__72__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__72__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__72__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__72__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__72__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__72__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__72__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__72__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__72__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__72__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__72__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__72__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__72__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__72__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__72__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__72__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__72__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__72__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__72__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__72__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__72__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__72__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__72__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffeffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__72__Vfuncout) 
              << 8U));
    ascon_top__DOT____Vlvbound_hf406b03a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hf406b03a__0));
    ascon_top__DOT____Vlvbound_hf406b03a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf406b03a__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hf406b03a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 9U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hf406b03a__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__73__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__73__in = vlSelfRef.ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__73__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__73__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__73__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__73__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__73__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__73__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__73__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__73__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__73__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__73__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__73__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__73__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__73__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__73__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__73__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__73__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__73__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__73__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__73__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__73__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__73__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__73__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__73__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__73__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__73__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__73__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__73__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__73__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__73__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffdffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__73__Vfuncout) 
              << 9U));
    ascon_top__DOT____Vlvbound_he957677a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_he957677a__0));
    ascon_top__DOT____Vlvbound_he957677a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he957677a__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_he957677a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0xaU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_he957677a__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__74__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__74__in = vlSelfRef.ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__74__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__74__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__74__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__74__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__74__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__74__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__74__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__74__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__74__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__74__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__74__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__74__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__74__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__74__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__74__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__74__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__74__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__74__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__74__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__74__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__74__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__74__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__74__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__74__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__74__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__74__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__74__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__74__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__74__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffffbffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__74__Vfuncout) 
              << 0xaU));
    ascon_top__DOT____Vlvbound_h3d6d6854__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h3d6d6854__0));
    ascon_top__DOT____Vlvbound_h3d6d6854__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3d6d6854__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h3d6d6854__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0xbU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3d6d6854__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__75__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__75__in = vlSelfRef.ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__75__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__75__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__75__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__75__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__75__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__75__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__75__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__75__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__75__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__75__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__75__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__75__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__75__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__75__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__75__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__75__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__75__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__75__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__75__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__75__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__75__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__75__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__75__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__75__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__75__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__75__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__75__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__75__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__75__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffff7ffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__75__Vfuncout) 
              << 0xbU));
    ascon_top__DOT____Vlvbound_hcca1da57__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hcca1da57__0));
    ascon_top__DOT____Vlvbound_hcca1da57__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcca1da57__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hcca1da57__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0xcU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcca1da57__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__76__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__76__in = vlSelfRef.ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__76__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__76__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__76__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__76__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__76__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__76__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__76__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__76__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__76__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__76__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__76__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__76__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__76__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__76__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__76__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__76__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__76__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__76__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__76__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__76__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__76__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__76__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__76__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__76__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__76__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__76__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__76__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__76__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__76__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffefffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__76__Vfuncout) 
              << 0xcU));
    ascon_top__DOT____Vlvbound_h7dd2c5eb__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h7dd2c5eb__0));
    ascon_top__DOT____Vlvbound_h7dd2c5eb__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7dd2c5eb__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h7dd2c5eb__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0xdU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7dd2c5eb__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__77__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__77__in = vlSelfRef.ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__77__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__77__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__77__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__77__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__77__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__77__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__77__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__77__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__77__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__77__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__77__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__77__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__77__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__77__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__77__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__77__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__77__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__77__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__77__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__77__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__77__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__77__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__77__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__77__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__77__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__77__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__77__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__77__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__77__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffdfffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__77__Vfuncout) 
              << 0xdU));
    ascon_top__DOT____Vlvbound_h6303e279__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h6303e279__0));
    ascon_top__DOT____Vlvbound_h6303e279__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6303e279__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h6303e279__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0xeU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h6303e279__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__78__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__78__in = vlSelfRef.ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__78__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__78__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__78__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__78__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__78__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__78__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__78__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__78__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__78__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__78__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__78__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__78__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__78__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__78__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__78__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__78__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__78__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__78__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__78__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__78__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__78__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__78__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__78__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__78__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__78__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__78__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__78__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__78__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__78__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffffbfffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__78__Vfuncout) 
              << 0xeU));
    ascon_top__DOT____Vlvbound_h18ac543c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h18ac543c__0));
    ascon_top__DOT____Vlvbound_h18ac543c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h18ac543c__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h18ac543c__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0xfU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h18ac543c__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__79__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__79__in = vlSelfRef.ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__79__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__79__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__79__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__79__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__79__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__79__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__79__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__79__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__79__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__79__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__79__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__79__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__79__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__79__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__79__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__79__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__79__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__79__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__79__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__79__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__79__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__79__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__79__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__79__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__79__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__79__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__79__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__79__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__79__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffff7fffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__79__Vfuncout) 
              << 0xfU));
    ascon_top__DOT____Vlvbound_h205e92f1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h205e92f1__0));
    ascon_top__DOT____Vlvbound_h205e92f1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h205e92f1__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h205e92f1__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x10U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h205e92f1__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__80__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__80__in = vlSelfRef.ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__80__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__80__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__80__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__80__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__80__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__80__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__80__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__80__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__80__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__80__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__80__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__80__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__80__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__80__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__80__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__80__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__80__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__80__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__80__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__80__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__80__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__80__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__80__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__80__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__80__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__80__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__80__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__80__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__80__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffeffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__80__Vfuncout) 
              << 0x10U));
    ascon_top__DOT____Vlvbound_h1a72b633__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h1a72b633__0));
    ascon_top__DOT____Vlvbound_h1a72b633__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h1a72b633__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h1a72b633__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x11U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h1a72b633__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__81__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__81__in = vlSelfRef.ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__81__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__81__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__81__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__81__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__81__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__81__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__81__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__81__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__81__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__81__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__81__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__81__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__81__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__81__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__81__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__81__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__81__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__81__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__81__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__81__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__81__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__81__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__81__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__81__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__81__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__81__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__81__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__81__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__81__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffdffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__81__Vfuncout) 
              << 0x11U));
    ascon_top__DOT____Vlvbound_hc87422be__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hc87422be__0));
    ascon_top__DOT____Vlvbound_hc87422be__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc87422be__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hc87422be__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x12U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hc87422be__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__82__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__82__in = vlSelfRef.ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__82__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__82__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__82__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__82__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__82__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__82__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__82__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__82__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__82__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__82__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__82__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__82__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__82__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__82__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__82__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__82__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__82__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__82__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__82__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__82__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__82__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__82__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__82__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__82__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__82__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__82__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__82__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__82__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__82__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfffbffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__82__Vfuncout) 
              << 0x12U));
    ascon_top__DOT____Vlvbound_h7885f0ac__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h7885f0ac__0));
    ascon_top__DOT____Vlvbound_h7885f0ac__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7885f0ac__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h7885f0ac__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x13U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7885f0ac__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__83__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__83__in = vlSelfRef.ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__83__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__83__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__83__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__83__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__83__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__83__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__83__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__83__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__83__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__83__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__83__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__83__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__83__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__83__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__83__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__83__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__83__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__83__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__83__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__83__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__83__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__83__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__83__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__83__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__83__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__83__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__83__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__83__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__83__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfff7ffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__83__Vfuncout) 
              << 0x13U));
    ascon_top__DOT____Vlvbound_h3b1f662b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h3b1f662b__0));
    ascon_top__DOT____Vlvbound_h3b1f662b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3b1f662b__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h3b1f662b__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x14U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h3b1f662b__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__84__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__84__in = vlSelfRef.ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__84__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__84__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__84__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__84__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__84__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__84__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__84__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__84__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__84__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__84__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__84__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__84__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__84__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__84__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__84__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__84__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__84__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__84__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__84__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__84__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__84__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__84__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__84__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__84__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__84__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__84__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__84__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__84__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__84__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffefffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__84__Vfuncout) 
              << 0x14U));
    ascon_top__DOT____Vlvbound_h40ec75d9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h40ec75d9__0));
    ascon_top__DOT____Vlvbound_h40ec75d9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h40ec75d9__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h40ec75d9__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x15U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h40ec75d9__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__85__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__85__in = vlSelfRef.ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__85__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__85__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__85__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__85__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__85__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__85__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__85__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__85__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__85__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__85__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__85__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__85__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__85__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__85__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__85__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__85__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__85__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__85__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__85__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__85__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__85__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__85__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__85__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__85__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__85__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__85__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__85__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__85__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__85__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffdfffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__85__Vfuncout) 
              << 0x15U));
    ascon_top__DOT____Vlvbound_h5de6ed4a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h5de6ed4a__0));
    ascon_top__DOT____Vlvbound_h5de6ed4a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5de6ed4a__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h5de6ed4a__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x16U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5de6ed4a__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__86__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__86__in = vlSelfRef.ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__86__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__86__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__86__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__86__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__86__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__86__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__86__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__86__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__86__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__86__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__86__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__86__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__86__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__86__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__86__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__86__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__86__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__86__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__86__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__86__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__86__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__86__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__86__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__86__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__86__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__86__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__86__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__86__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__86__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xffbfffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__86__Vfuncout) 
              << 0x16U));
    ascon_top__DOT____Vlvbound_h412fd247__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h412fd247__0));
    ascon_top__DOT____Vlvbound_h412fd247__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h412fd247__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h412fd247__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x17U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h412fd247__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__87__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__87__in = vlSelfRef.ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__87__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__87__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__87__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__87__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__87__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__87__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__87__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__87__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__87__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__87__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__87__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__87__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__87__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__87__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__87__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__87__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__87__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__87__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__87__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__87__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__87__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__87__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__87__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__87__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__87__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__87__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__87__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__87__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__87__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xff7fffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__87__Vfuncout) 
              << 0x17U));
    ascon_top__DOT____Vlvbound_hb561ce03__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hb561ce03__0));
    ascon_top__DOT____Vlvbound_hb561ce03__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb561ce03__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hb561ce03__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x18U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hb561ce03__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__88__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__88__in = vlSelfRef.ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__88__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__88__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__88__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__88__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__88__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__88__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__88__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__88__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__88__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__88__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__88__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__88__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__88__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__88__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__88__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__88__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__88__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__88__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__88__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__88__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__88__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__88__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__88__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__88__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__88__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__88__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__88__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__88__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__88__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfeffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__88__Vfuncout) 
              << 0x18U));
    ascon_top__DOT____Vlvbound_h4889a663__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h4889a663__0));
    ascon_top__DOT____Vlvbound_h4889a663__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4889a663__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h4889a663__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x19U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h4889a663__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__89__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__89__in = vlSelfRef.ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__89__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__89__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__89__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__89__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__89__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__89__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__89__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__89__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__89__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__89__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__89__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__89__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__89__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__89__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__89__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__89__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__89__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__89__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__89__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__89__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__89__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__89__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__89__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__89__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__89__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__89__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__89__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__89__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__89__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfdffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__89__Vfuncout) 
              << 0x19U));
    ascon_top__DOT____Vlvbound_heff79c51__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_heff79c51__0));
    ascon_top__DOT____Vlvbound_heff79c51__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_heff79c51__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_heff79c51__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x1aU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_heff79c51__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__90__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__90__in = vlSelfRef.ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__90__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__90__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__90__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__90__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__90__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__90__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__90__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__90__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__90__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__90__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__90__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__90__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__90__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__90__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__90__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__90__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__90__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__90__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__90__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__90__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__90__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__90__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__90__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__90__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__90__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__90__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__90__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__90__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__90__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xfbffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__90__Vfuncout) 
              << 0x1aU));
    ascon_top__DOT____Vlvbound_hcac2484d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hcac2484d__0));
    ascon_top__DOT____Vlvbound_hcac2484d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcac2484d__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hcac2484d__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x1bU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcac2484d__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__91__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__91__in = vlSelfRef.ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__91__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__91__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__91__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__91__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__91__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__91__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__91__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__91__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__91__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__91__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__91__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__91__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__91__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__91__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__91__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__91__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__91__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__91__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__91__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__91__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__91__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__91__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__91__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__91__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__91__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__91__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__91__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__91__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__91__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xf7ffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__91__Vfuncout) 
              << 0x1bU));
    ascon_top__DOT____Vlvbound_h524813d2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h524813d2__0));
    ascon_top__DOT____Vlvbound_h524813d2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h524813d2__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h524813d2__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x1cU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h524813d2__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__92__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__92__in = vlSelfRef.ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__92__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__92__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__92__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__92__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__92__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__92__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__92__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__92__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__92__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__92__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__92__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__92__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__92__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__92__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__92__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__92__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__92__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__92__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__92__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__92__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__92__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__92__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__92__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__92__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__92__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__92__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__92__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__92__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__92__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xefffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__92__Vfuncout) 
              << 0x1cU));
    ascon_top__DOT____Vlvbound_h99a0f5a0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h99a0f5a0__0));
    ascon_top__DOT____Vlvbound_h99a0f5a0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h99a0f5a0__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h99a0f5a0__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x1dU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h99a0f5a0__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__93__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__93__in = vlSelfRef.ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__93__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__93__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__93__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__93__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__93__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__93__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__93__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__93__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__93__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__93__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__93__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__93__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__93__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__93__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__93__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__93__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__93__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__93__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__93__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__93__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__93__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__93__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__93__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__93__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__93__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__93__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__93__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__93__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__93__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xdfffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__93__Vfuncout) 
              << 0x1dU));
    ascon_top__DOT____Vlvbound_h7d6b0737__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][2U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h7d6b0737__0));
    ascon_top__DOT____Vlvbound_h7d6b0737__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][2U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7d6b0737__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h7d6b0737__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][2U] 
                                                >> 0x1eU));
    vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h7d6b0737__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__94__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__94__in = vlSelfRef.ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__94__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__94__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__94__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__94__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__94__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__94__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__94__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__94__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__94__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__94__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__94__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__94__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__94__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__94__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__94__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__94__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__94__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__94__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__94__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__94__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__94__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__94__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__94__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__94__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__94__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__94__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__94__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__94__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__94__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0xbfffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__94__Vfuncout) 
              << 0x1eU));
    ascon_top__DOT____Vlvbound_ha9530225__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][2U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_ha9530225__0));
    ascon_top__DOT____Vlvbound_ha9530225__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][2U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha9530225__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_ha9530225__0 = (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][2U] 
                                               >> 0x1fU);
    vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_ha9530225__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__95__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__95__in = vlSelfRef.ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__95__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__95__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__95__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__95__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__95__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__95__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__95__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__95__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__95__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__95__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__95__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__95__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__95__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__95__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__95__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__95__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__95__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__95__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__95__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__95__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__95__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__95__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__95__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__95__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__95__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__95__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__95__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__95__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__95__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[2U] 
        = ((0x7fffffffU & vlSelfRef.ascon_top__DOT__recombine_shares[2U]) 
           | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__95__Vfuncout) 
              << 0x1fU));
    ascon_top__DOT____Vlvbound_hbf4eb9f8__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [0U][3U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hbf4eb9f8__0));
    ascon_top__DOT____Vlvbound_hbf4eb9f8__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [1U][3U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hbf4eb9f8__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hbf4eb9f8__0 = (1U & 
                                               vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                               [2U][3U]);
    vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hbf4eb9f8__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__96__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__96__in = vlSelfRef.ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__96__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__96__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__96__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__96__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__96__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__96__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__96__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__96__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__96__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__96__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__96__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__96__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__96__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__96__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__96__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__96__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__96__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__96__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__96__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__96__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__96__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__96__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__96__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__96__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__96__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__96__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__96__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__96__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__96__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3ffeU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & (IData)(__Vfunc_ascon_top__DOT__xor_tree__96__Vfuncout)));
    ascon_top__DOT____Vlvbound_h06aa35e7__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h06aa35e7__0));
    ascon_top__DOT____Vlvbound_h06aa35e7__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h06aa35e7__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h06aa35e7__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 1U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h06aa35e7__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__97__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__97__in = vlSelfRef.ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__97__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__97__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__97__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__97__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__97__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__97__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__97__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__97__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__97__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__97__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__97__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__97__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__97__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__97__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__97__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__97__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__97__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__97__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__97__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__97__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__97__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__97__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__97__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__97__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__97__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__97__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__97__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__97__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__97__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3ffdU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__97__Vfuncout) 
                         << 1U)));
    ascon_top__DOT____Vlvbound_h5482e0c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_h5482e0c5__0));
    ascon_top__DOT____Vlvbound_h5482e0c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5482e0c5__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_h5482e0c5__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 2U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_h5482e0c5__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__98__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__98__in = vlSelfRef.ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__98__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__98__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__98__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__98__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__98__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__98__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__98__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__98__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__98__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__98__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__98__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__98__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__98__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__98__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__98__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__98__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__98__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__98__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__98__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__98__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__98__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__98__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__98__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__98__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__98__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__98__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__98__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__98__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__98__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3ffbU & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__98__Vfuncout) 
                         << 2U)));
    ascon_top__DOT____Vlvbound_hd8940368__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hd8940368__0));
    ascon_top__DOT____Vlvbound_hd8940368__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hd8940368__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hd8940368__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 3U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hd8940368__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__99__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__99__in = vlSelfRef.ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__99__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    __Vfunc_ascon_top__DOT__xor_tree__99__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__99__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__99__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__99__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__99__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__99__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
                               [(3U & __Vfunc_ascon_top__DOT__xor_tree__99__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__99__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
                                 [(3U & __Vfunc_ascon_top__DOT__xor_tree__99__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__99__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__99__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__99__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__99__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__99__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
                           [(3U & __Vfunc_ascon_top__DOT__xor_tree__99__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__99__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + __Vfunc_ascon_top__DOT__xor_tree__99__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage[(3U 
                                                                       & ((IData)(1U) 
                                                                          + __Vfunc_ascon_top__DOT__xor_tree__99__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__99__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__99__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__99__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__99__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__99__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__99__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__99__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__99__level))
            ? (1U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__99__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__99__level)])
            : 0U);
    vlSelfRef.ascon_top__DOT__recombine_shares[3U] 
        = ((0x3ff7U & vlSelfRef.ascon_top__DOT__recombine_shares[3U]) 
           | (0x3fffU & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__99__Vfuncout) 
                         << 3U)));
    ascon_top__DOT____Vlvbound_hcd535825__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [0U][3U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound_hcd535825__0));
    ascon_top__DOT____Vlvbound_hcd535825__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [1U][3U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcd535825__0) 
              << 1U));
    ascon_top__DOT____Vlvbound_hcd535825__0 = (1U & 
                                               (vlSelfRef.ascon_top__DOT__affine_layer2nd_out
                                                [2U][3U] 
                                                >> 4U));
    vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound_hcd535825__0) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__100__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__100__in = vlSelfRef.ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits;
    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__100__stage[__Vi0] = VL_RAND_RESET_I(3);
    }
    vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__100__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__100__N)) {
        vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0 
            = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i)) 
               && (1U & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__100__in) 
                         >> (3U & __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i))));
        if (VL_LIKELY(((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i))))) {
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i))) 
                    & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage
                    [0U]) | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h438ededb__0) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk2__DOT__i);
    }
    while (VL_LTS_III(32, 1U, __Vfunc_ascon_top__DOT__xor_tree__100__num)) {
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0 
                = (((2U >= (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i))) 
                    && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))
                                ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage
                               [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level)]
                                : 0U) >> (3U & VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i))))) 
                   ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i)))) 
                      && (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))
                                  ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage
                                 [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level)]
                                  : 0U) >> (3U & ((IData)(1U) 
                                                  + 
                                                  VL_MULS_III(32, (IData)(2U), vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i)))))));
            if (VL_LIKELY((((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i)) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_hfe1f1a3f__0) 
                                << (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i))));
            }
            vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i 
                = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__unnamedblk3__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U)))) {
            vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0 
                = ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__100__num 
                                 - (IData)(1U)))) && 
                   (1U & (((2U >= (3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))
                            ? vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage
                           [(3U & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level)]
                            : 0U) >> (3U & (__Vfunc_ascon_top__DOT__xor_tree__100__num 
                                            - (IData)(1U))))));
            if (VL_LIKELY((((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U)))) 
                            && (2U >= (3U & ((IData)(1U) 
                                             + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))))))) {
                vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage[(3U 
                                                                        & ((IData)(1U) 
                                                                           + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U))))) 
                        & vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__stage
                        [(3U & ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level))]) 
                       | (7U & ((IData)(vlSelfRef.ascon_top__DOT____Vlvbound_h56f822d7__0) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__100__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__100__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__100__num, (IData)(2U));
        }
        vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level 
            = ((IData)(1U) + vlSelfRef.__Vfunc_ascon_top__DOT__xor_tree__100__level);
    }
}
