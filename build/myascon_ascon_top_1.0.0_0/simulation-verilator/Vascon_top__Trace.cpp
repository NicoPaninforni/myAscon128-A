// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vascon_top__Syms.h"


void Vascon_top___024root__traceChgSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep);

void Vascon_top___024root__traceChgTop0(void* voidSelf, VerilatedVcd* tracep) {
    Vascon_top___024root* const __restrict vlSelf = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    {
        Vascon_top___024root__traceChgSub0((&vlSymsp->TOP), tracep);
    }
}

void Vascon_top___024root__traceChgSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<10>/*319:0*/ __Vtemp13374;
    VlWide<10>/*319:0*/ __Vtemp13375;
    VlWide<10>/*319:0*/ __Vtemp13376;
    VlWide<10>/*319:0*/ __Vtemp13377;
    VlWide<10>/*319:0*/ __Vtemp13381;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 1);
    if (false && oldp) {}  // Prevent unused
    // Body
    {
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlSelf->ascon_top__DOT__rotations_a[0]),32);
            tracep->chgIData(oldp+1,(vlSelf->ascon_top__DOT__rotations_a[1]),32);
            tracep->chgIData(oldp+2,(vlSelf->ascon_top__DOT__rotations_a[2]),32);
            tracep->chgIData(oldp+3,(vlSelf->ascon_top__DOT__rotations_a[3]),32);
            tracep->chgIData(oldp+4,(vlSelf->ascon_top__DOT__rotations_a[4]),32);
            tracep->chgIData(oldp+5,(vlSelf->ascon_top__DOT__rotations_b[0]),32);
            tracep->chgIData(oldp+6,(vlSelf->ascon_top__DOT__rotations_b[1]),32);
            tracep->chgIData(oldp+7,(vlSelf->ascon_top__DOT__rotations_b[2]),32);
            tracep->chgIData(oldp+8,(vlSelf->ascon_top__DOT__rotations_b[3]),32);
            tracep->chgIData(oldp+9,(vlSelf->ascon_top__DOT__rotations_b[4]),32);
            tracep->chgQData(oldp+10,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),44);
            tracep->chgQData(oldp+12,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),44);
            tracep->chgQData(oldp+14,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),44);
            tracep->chgQData(oldp+16,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),44);
            tracep->chgQData(oldp+18,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),44);
            tracep->chgQData(oldp+20,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),44);
            tracep->chgQData(oldp+22,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),44);
            tracep->chgQData(oldp+24,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),44);
            tracep->chgQData(oldp+26,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),44);
            tracep->chgQData(oldp+28,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),44);
            tracep->chgQData(oldp+30,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),44);
            tracep->chgQData(oldp+32,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),44);
            tracep->chgQData(oldp+34,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),44);
            tracep->chgQData(oldp+36,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),44);
            tracep->chgQData(oldp+38,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),44);
            tracep->chgQData(oldp+40,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),44);
            tracep->chgQData(oldp+42,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),44);
            tracep->chgQData(oldp+44,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),44);
            tracep->chgQData(oldp+46,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),44);
            tracep->chgQData(oldp+48,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),44);
            tracep->chgQData(oldp+50,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),44);
            tracep->chgQData(oldp+52,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),44);
            tracep->chgQData(oldp+54,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),44);
            tracep->chgQData(oldp+56,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),44);
            tracep->chgQData(oldp+58,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),44);
            tracep->chgQData(oldp+60,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),44);
            tracep->chgQData(oldp+62,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),44);
            tracep->chgQData(oldp+64,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),44);
            tracep->chgQData(oldp+66,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),44);
            tracep->chgQData(oldp+68,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),44);
            tracep->chgQData(oldp+70,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),44);
            tracep->chgQData(oldp+72,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),44);
            tracep->chgQData(oldp+74,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),44);
            tracep->chgQData(oldp+76,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),44);
            tracep->chgQData(oldp+78,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),44);
            tracep->chgQData(oldp+80,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),44);
            tracep->chgQData(oldp+82,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),44);
            tracep->chgQData(oldp+84,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),44);
            tracep->chgQData(oldp+86,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),44);
            tracep->chgQData(oldp+88,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),44);
            tracep->chgQData(oldp+90,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),44);
            tracep->chgQData(oldp+92,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),44);
            tracep->chgQData(oldp+94,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),44);
            tracep->chgQData(oldp+96,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),44);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+98,(vlSelf->ascon_top__DOT__extra_padding_ff));
            tracep->chgBit(oldp+99,(vlSelf->ascon_top__DOT__shift_en));
            tracep->chgBit(oldp+100,(vlSelf->ascon_top__DOT__shift_type));
            tracep->chgBit(oldp+101,(vlSelf->ascon_top__DOT__last_cycle));
            tracep->chgBit(oldp+102,(vlSelf->ascon_top__DOT__reg_key1_load));
            tracep->chgBit(oldp+103,(vlSelf->ascon_top__DOT__reg_key2_load));
            tracep->chgBit(oldp+104,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
            tracep->chgBit(oldp+105,(vlSelf->ascon_top__DOT__sel_masked_round));
            tracep->chgBit(oldp+106,(vlSelf->ascon_top__DOT__sel_xor_signal));
            tracep->chgCData(oldp+107,(vlSelf->ascon_top__DOT__round_counter),4);
            tracep->chgCData(oldp+108,(vlSelf->ascon_top__DOT__bit_counter),7);
            tracep->chgBit(oldp+109,(vlSelf->ascon_top__DOT__shift_enable_sipo));
            tracep->chgBit(oldp+110,(vlSelf->ascon_top__DOT__last_cycle_sipo));
            tracep->chgSData(oldp+111,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[0]),15);
            tracep->chgSData(oldp+112,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[1]),15);
            tracep->chgSData(oldp+113,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares[2]),15);
            tracep->chgWData(oldp+114,(vlSelf->ascon_top__DOT__state_reg_out_shares[0]),320);
            tracep->chgWData(oldp+124,(vlSelf->ascon_top__DOT__state_reg_out_shares[1]),320);
            tracep->chgWData(oldp+134,(vlSelf->ascon_top__DOT__state_reg_out_shares[2]),320);
            tracep->chgQData(oldp+144,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+146,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+148,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
            tracep->chgQData(oldp+150,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
            tracep->chgQData(oldp+152,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
            tracep->chgQData(oldp+154,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
            tracep->chgQData(oldp+156,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
            tracep->chgCData(oldp+158,((7U & vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                        [0U])),3);
            tracep->chgCData(oldp+159,((7U & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                              [0U] 
                                              >> 3U))),3);
            tracep->chgCData(oldp+160,((7U & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                              [0U] 
                                              >> 6U))),3);
            tracep->chgCData(oldp+161,((7U & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                              [0U] 
                                              >> 9U))),3);
            tracep->chgCData(oldp+162,((7U & (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1_shares
                                              [0U] 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+163,(vlSelf->ascon_top__DOT__mux_1st_x0),3);
            tracep->chgCData(oldp+164,(vlSelf->ascon_top__DOT__mux_1st_x1),3);
            tracep->chgCData(oldp+165,(vlSelf->ascon_top__DOT__mux_1st_x2),3);
            tracep->chgCData(oldp+166,(vlSelf->ascon_top__DOT__mux_1st_x3),3);
            tracep->chgCData(oldp+167,(vlSelf->ascon_top__DOT__mux_1st_x4),3);
            tracep->chgQData(oldp+168,((0xf0ULL - (0xfULL 
                                                   * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
            tracep->chgBit(oldp+170,(vlSelf->ascon_top__DOT__rc_block[0]));
            tracep->chgBit(oldp+171,(vlSelf->ascon_top__DOT__rc_block[1]));
            tracep->chgBit(oldp+172,(vlSelf->ascon_top__DOT__rc_block[2]));
            tracep->chgCData(oldp+173,(((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                                  << 4U)) 
                                        | ((8U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                                  << 3U)) 
                                           | ((4U & 
                                               ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                << 2U)) 
                                              | ((2U 
                                                  & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                     << 1U)) 
                                                 | (1U 
                                                    & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0))))))),5);
            tracep->chgWData(oldp+174,(vlSelf->ascon_top__DOT__recombine_shares_sbox),320);
            tracep->chgWData(oldp+184,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
            tracep->chgQData(oldp+194,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
            tracep->chgQData(oldp+196,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
            tracep->chgQData(oldp+198,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
            tracep->chgQData(oldp+200,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
            tracep->chgQData(oldp+202,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
            tracep->chgWData(oldp+204,(vlSelf->ascon_top__DOT__recombine_shares),320);
            tracep->chgQData(oldp+214,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U])),64);
            tracep->chgQData(oldp+216,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                         ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                         : 0x8000000000000000ULL)),64);
            tracep->chgCData(oldp+218,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+219,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+220,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+221,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+222,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+223,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+224,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+225,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+226,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+227,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+228,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+229,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+230,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+231,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+232,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+233,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+234,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+235,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+236,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+237,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+238,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+239,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+240,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+241,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+242,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+243,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+244,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+245,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+246,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+247,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+248,(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+249,(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+250,(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+251,(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+252,(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+253,(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+254,(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+255,(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+256,(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+257,(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+258,(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+259,(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+260,(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+261,(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+262,(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+263,(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+264,(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+265,(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+266,(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+267,(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+268,(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+269,(vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+270,(vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+271,(vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+272,(vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+273,(vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+274,(vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+275,(vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+276,(vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+277,(vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+278,(vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+279,(vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+280,(vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+281,(vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+282,(vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+283,(vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+284,(vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+285,(vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+286,(vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+287,(vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+288,(vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+289,(vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+290,(vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+291,(vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+292,(vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+293,(vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+294,(vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+295,(vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+296,(vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+297,(vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+298,(vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+299,(vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+300,(vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+301,(vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+302,(vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+303,(vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+304,(vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+305,(vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+306,(vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+307,(vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+308,(vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+309,(vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+310,(vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+311,(vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+312,(vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+313,(vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+314,(vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+315,(vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+316,(vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+317,(vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+318,(vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+319,(vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+320,(vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+321,(vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+322,(vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+323,(vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+324,(vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+325,(vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+326,(vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+327,(vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+328,(vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+329,(vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+330,(vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+331,(vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+332,(vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+333,(vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+334,(vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+335,(vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+336,(vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+337,(vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+338,(vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+339,(vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+340,(vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+341,(vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+342,(vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+343,(vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+344,(vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+345,(vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+346,(vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+347,(vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+348,(vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+349,(vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+350,(vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+351,(vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+352,(vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+353,(vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+354,(vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+355,(vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+356,(vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+357,(vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+358,(vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+359,(vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+360,(vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+361,(vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+362,(vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+363,(vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+364,(vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+365,(vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+366,(vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+367,(vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+368,(vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+369,(vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+370,(vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+371,(vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+372,(vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+373,(vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+374,(vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+375,(vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+376,(vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+377,(vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+378,(vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+379,(vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+380,(vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+381,(vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+382,(vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+383,(vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+384,(vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+385,(vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+386,(vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+387,(vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+388,(vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+389,(vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+390,(vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+391,(vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+392,(vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+393,(vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+394,(vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+395,(vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+396,(vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+397,(vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+398,(vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+399,(vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+400,(vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+401,(vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+402,(vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+403,(vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+404,(vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+405,(vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+406,(vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+407,(vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+408,(vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+409,(vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+410,(vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+411,(vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+412,(vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+413,(vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+414,(vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+415,(vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+416,(vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+417,(vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+418,(vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+419,(vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+420,(vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+421,(vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+422,(vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+423,(vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+424,(vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+425,(vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+426,(vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+427,(vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+428,(vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+429,(vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+430,(vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+431,(vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+432,(vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+433,(vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+434,(vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+435,(vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+436,(vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+437,(vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+438,(vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+439,(vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+440,(vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+441,(vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+442,(vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+443,(vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+444,(vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+445,(vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+446,(vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+447,(vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+448,(vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+449,(vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+450,(vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+451,(vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+452,(vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+453,(vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+454,(vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+455,(vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+456,(vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+457,(vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+458,(vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+459,(vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+460,(vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+461,(vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+462,(vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+463,(vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+464,(vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+465,(vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+466,(vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+467,(vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+468,(vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+469,(vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+470,(vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+471,(vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+472,(vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+473,(vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+474,(vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+475,(vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+476,(vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+477,(vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+478,(vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+479,(vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+480,(vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+481,(vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+482,(vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+483,(vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+484,(vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+485,(vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+486,(vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+487,(vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+488,(vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+489,(vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+490,(vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+491,(vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+492,(vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+493,(vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+494,(vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+495,(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+496,(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+497,(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+498,(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+499,(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+500,(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+501,(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+502,(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+503,(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+504,(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+505,(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+506,(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+507,(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+508,(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+509,(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+510,(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+511,(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+512,(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+513,(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+514,(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+515,(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+516,(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+517,(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+518,(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+519,(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+520,(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+521,(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+522,(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+523,(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+524,(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+525,(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+526,(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+527,(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+528,(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+529,(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+530,(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+531,(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+532,(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+533,(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+534,(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+535,(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+536,(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+537,(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits_sbox),3);
            tracep->chgCData(oldp+538,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+539,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+540,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+541,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+542,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+543,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+544,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+545,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+546,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+547,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+548,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+549,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+550,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+551,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+552,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+553,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+554,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+555,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+556,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+557,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+558,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+559,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+560,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+561,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+562,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+563,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+564,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+565,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+566,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+567,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+568,(vlSelf->ascon_top__DOT__recombine__BRA__30__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+569,(vlSelf->ascon_top__DOT__recombine__BRA__31__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+570,(vlSelf->ascon_top__DOT__recombine__BRA__32__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+571,(vlSelf->ascon_top__DOT__recombine__BRA__33__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+572,(vlSelf->ascon_top__DOT__recombine__BRA__34__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+573,(vlSelf->ascon_top__DOT__recombine__BRA__35__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+574,(vlSelf->ascon_top__DOT__recombine__BRA__36__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+575,(vlSelf->ascon_top__DOT__recombine__BRA__37__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+576,(vlSelf->ascon_top__DOT__recombine__BRA__38__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+577,(vlSelf->ascon_top__DOT__recombine__BRA__39__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+578,(vlSelf->ascon_top__DOT__recombine__BRA__40__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+579,(vlSelf->ascon_top__DOT__recombine__BRA__41__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+580,(vlSelf->ascon_top__DOT__recombine__BRA__42__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+581,(vlSelf->ascon_top__DOT__recombine__BRA__43__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+582,(vlSelf->ascon_top__DOT__recombine__BRA__44__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+583,(vlSelf->ascon_top__DOT__recombine__BRA__45__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+584,(vlSelf->ascon_top__DOT__recombine__BRA__46__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+585,(vlSelf->ascon_top__DOT__recombine__BRA__47__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+586,(vlSelf->ascon_top__DOT__recombine__BRA__48__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+587,(vlSelf->ascon_top__DOT__recombine__BRA__49__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+588,(vlSelf->ascon_top__DOT__recombine__BRA__50__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+589,(vlSelf->ascon_top__DOT__recombine__BRA__51__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+590,(vlSelf->ascon_top__DOT__recombine__BRA__52__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+591,(vlSelf->ascon_top__DOT__recombine__BRA__53__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+592,(vlSelf->ascon_top__DOT__recombine__BRA__54__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+593,(vlSelf->ascon_top__DOT__recombine__BRA__55__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+594,(vlSelf->ascon_top__DOT__recombine__BRA__56__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+595,(vlSelf->ascon_top__DOT__recombine__BRA__57__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+596,(vlSelf->ascon_top__DOT__recombine__BRA__58__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+597,(vlSelf->ascon_top__DOT__recombine__BRA__59__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+598,(vlSelf->ascon_top__DOT__recombine__BRA__60__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+599,(vlSelf->ascon_top__DOT__recombine__BRA__61__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+600,(vlSelf->ascon_top__DOT__recombine__BRA__62__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+601,(vlSelf->ascon_top__DOT__recombine__BRA__63__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+602,(vlSelf->ascon_top__DOT__recombine__BRA__64__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+603,(vlSelf->ascon_top__DOT__recombine__BRA__65__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+604,(vlSelf->ascon_top__DOT__recombine__BRA__66__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+605,(vlSelf->ascon_top__DOT__recombine__BRA__67__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+606,(vlSelf->ascon_top__DOT__recombine__BRA__68__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+607,(vlSelf->ascon_top__DOT__recombine__BRA__69__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+608,(vlSelf->ascon_top__DOT__recombine__BRA__70__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+609,(vlSelf->ascon_top__DOT__recombine__BRA__71__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+610,(vlSelf->ascon_top__DOT__recombine__BRA__72__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+611,(vlSelf->ascon_top__DOT__recombine__BRA__73__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+612,(vlSelf->ascon_top__DOT__recombine__BRA__74__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+613,(vlSelf->ascon_top__DOT__recombine__BRA__75__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+614,(vlSelf->ascon_top__DOT__recombine__BRA__76__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+615,(vlSelf->ascon_top__DOT__recombine__BRA__77__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+616,(vlSelf->ascon_top__DOT__recombine__BRA__78__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+617,(vlSelf->ascon_top__DOT__recombine__BRA__79__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+618,(vlSelf->ascon_top__DOT__recombine__BRA__80__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+619,(vlSelf->ascon_top__DOT__recombine__BRA__81__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+620,(vlSelf->ascon_top__DOT__recombine__BRA__82__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+621,(vlSelf->ascon_top__DOT__recombine__BRA__83__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+622,(vlSelf->ascon_top__DOT__recombine__BRA__84__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+623,(vlSelf->ascon_top__DOT__recombine__BRA__85__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+624,(vlSelf->ascon_top__DOT__recombine__BRA__86__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+625,(vlSelf->ascon_top__DOT__recombine__BRA__87__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+626,(vlSelf->ascon_top__DOT__recombine__BRA__88__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+627,(vlSelf->ascon_top__DOT__recombine__BRA__89__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+628,(vlSelf->ascon_top__DOT__recombine__BRA__90__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+629,(vlSelf->ascon_top__DOT__recombine__BRA__91__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+630,(vlSelf->ascon_top__DOT__recombine__BRA__92__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+631,(vlSelf->ascon_top__DOT__recombine__BRA__93__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+632,(vlSelf->ascon_top__DOT__recombine__BRA__94__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+633,(vlSelf->ascon_top__DOT__recombine__BRA__95__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+634,(vlSelf->ascon_top__DOT__recombine__BRA__96__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+635,(vlSelf->ascon_top__DOT__recombine__BRA__97__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+636,(vlSelf->ascon_top__DOT__recombine__BRA__98__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+637,(vlSelf->ascon_top__DOT__recombine__BRA__99__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+638,(vlSelf->ascon_top__DOT__recombine__BRA__100__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+639,(vlSelf->ascon_top__DOT__recombine__BRA__101__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+640,(vlSelf->ascon_top__DOT__recombine__BRA__102__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+641,(vlSelf->ascon_top__DOT__recombine__BRA__103__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+642,(vlSelf->ascon_top__DOT__recombine__BRA__104__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+643,(vlSelf->ascon_top__DOT__recombine__BRA__105__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+644,(vlSelf->ascon_top__DOT__recombine__BRA__106__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+645,(vlSelf->ascon_top__DOT__recombine__BRA__107__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+646,(vlSelf->ascon_top__DOT__recombine__BRA__108__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+647,(vlSelf->ascon_top__DOT__recombine__BRA__109__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+648,(vlSelf->ascon_top__DOT__recombine__BRA__110__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+649,(vlSelf->ascon_top__DOT__recombine__BRA__111__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+650,(vlSelf->ascon_top__DOT__recombine__BRA__112__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+651,(vlSelf->ascon_top__DOT__recombine__BRA__113__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+652,(vlSelf->ascon_top__DOT__recombine__BRA__114__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+653,(vlSelf->ascon_top__DOT__recombine__BRA__115__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+654,(vlSelf->ascon_top__DOT__recombine__BRA__116__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+655,(vlSelf->ascon_top__DOT__recombine__BRA__117__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+656,(vlSelf->ascon_top__DOT__recombine__BRA__118__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+657,(vlSelf->ascon_top__DOT__recombine__BRA__119__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+658,(vlSelf->ascon_top__DOT__recombine__BRA__120__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+659,(vlSelf->ascon_top__DOT__recombine__BRA__121__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+660,(vlSelf->ascon_top__DOT__recombine__BRA__122__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+661,(vlSelf->ascon_top__DOT__recombine__BRA__123__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+662,(vlSelf->ascon_top__DOT__recombine__BRA__124__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+663,(vlSelf->ascon_top__DOT__recombine__BRA__125__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+664,(vlSelf->ascon_top__DOT__recombine__BRA__126__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+665,(vlSelf->ascon_top__DOT__recombine__BRA__127__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+666,(vlSelf->ascon_top__DOT__recombine__BRA__128__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+667,(vlSelf->ascon_top__DOT__recombine__BRA__129__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+668,(vlSelf->ascon_top__DOT__recombine__BRA__130__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+669,(vlSelf->ascon_top__DOT__recombine__BRA__131__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+670,(vlSelf->ascon_top__DOT__recombine__BRA__132__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+671,(vlSelf->ascon_top__DOT__recombine__BRA__133__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+672,(vlSelf->ascon_top__DOT__recombine__BRA__134__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+673,(vlSelf->ascon_top__DOT__recombine__BRA__135__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+674,(vlSelf->ascon_top__DOT__recombine__BRA__136__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+675,(vlSelf->ascon_top__DOT__recombine__BRA__137__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+676,(vlSelf->ascon_top__DOT__recombine__BRA__138__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+677,(vlSelf->ascon_top__DOT__recombine__BRA__139__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+678,(vlSelf->ascon_top__DOT__recombine__BRA__140__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+679,(vlSelf->ascon_top__DOT__recombine__BRA__141__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+680,(vlSelf->ascon_top__DOT__recombine__BRA__142__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+681,(vlSelf->ascon_top__DOT__recombine__BRA__143__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+682,(vlSelf->ascon_top__DOT__recombine__BRA__144__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+683,(vlSelf->ascon_top__DOT__recombine__BRA__145__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+684,(vlSelf->ascon_top__DOT__recombine__BRA__146__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+685,(vlSelf->ascon_top__DOT__recombine__BRA__147__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+686,(vlSelf->ascon_top__DOT__recombine__BRA__148__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+687,(vlSelf->ascon_top__DOT__recombine__BRA__149__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+688,(vlSelf->ascon_top__DOT__recombine__BRA__150__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+689,(vlSelf->ascon_top__DOT__recombine__BRA__151__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+690,(vlSelf->ascon_top__DOT__recombine__BRA__152__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+691,(vlSelf->ascon_top__DOT__recombine__BRA__153__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+692,(vlSelf->ascon_top__DOT__recombine__BRA__154__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+693,(vlSelf->ascon_top__DOT__recombine__BRA__155__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+694,(vlSelf->ascon_top__DOT__recombine__BRA__156__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+695,(vlSelf->ascon_top__DOT__recombine__BRA__157__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+696,(vlSelf->ascon_top__DOT__recombine__BRA__158__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+697,(vlSelf->ascon_top__DOT__recombine__BRA__159__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+698,(vlSelf->ascon_top__DOT__recombine__BRA__160__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+699,(vlSelf->ascon_top__DOT__recombine__BRA__161__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+700,(vlSelf->ascon_top__DOT__recombine__BRA__162__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+701,(vlSelf->ascon_top__DOT__recombine__BRA__163__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+702,(vlSelf->ascon_top__DOT__recombine__BRA__164__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+703,(vlSelf->ascon_top__DOT__recombine__BRA__165__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+704,(vlSelf->ascon_top__DOT__recombine__BRA__166__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+705,(vlSelf->ascon_top__DOT__recombine__BRA__167__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+706,(vlSelf->ascon_top__DOT__recombine__BRA__168__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+707,(vlSelf->ascon_top__DOT__recombine__BRA__169__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+708,(vlSelf->ascon_top__DOT__recombine__BRA__170__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+709,(vlSelf->ascon_top__DOT__recombine__BRA__171__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+710,(vlSelf->ascon_top__DOT__recombine__BRA__172__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+711,(vlSelf->ascon_top__DOT__recombine__BRA__173__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+712,(vlSelf->ascon_top__DOT__recombine__BRA__174__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+713,(vlSelf->ascon_top__DOT__recombine__BRA__175__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+714,(vlSelf->ascon_top__DOT__recombine__BRA__176__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+715,(vlSelf->ascon_top__DOT__recombine__BRA__177__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+716,(vlSelf->ascon_top__DOT__recombine__BRA__178__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+717,(vlSelf->ascon_top__DOT__recombine__BRA__179__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+718,(vlSelf->ascon_top__DOT__recombine__BRA__180__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+719,(vlSelf->ascon_top__DOT__recombine__BRA__181__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+720,(vlSelf->ascon_top__DOT__recombine__BRA__182__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+721,(vlSelf->ascon_top__DOT__recombine__BRA__183__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+722,(vlSelf->ascon_top__DOT__recombine__BRA__184__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+723,(vlSelf->ascon_top__DOT__recombine__BRA__185__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+724,(vlSelf->ascon_top__DOT__recombine__BRA__186__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+725,(vlSelf->ascon_top__DOT__recombine__BRA__187__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+726,(vlSelf->ascon_top__DOT__recombine__BRA__188__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+727,(vlSelf->ascon_top__DOT__recombine__BRA__189__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+728,(vlSelf->ascon_top__DOT__recombine__BRA__190__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+729,(vlSelf->ascon_top__DOT__recombine__BRA__191__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+730,(vlSelf->ascon_top__DOT__recombine__BRA__192__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+731,(vlSelf->ascon_top__DOT__recombine__BRA__193__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+732,(vlSelf->ascon_top__DOT__recombine__BRA__194__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+733,(vlSelf->ascon_top__DOT__recombine__BRA__195__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+734,(vlSelf->ascon_top__DOT__recombine__BRA__196__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+735,(vlSelf->ascon_top__DOT__recombine__BRA__197__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+736,(vlSelf->ascon_top__DOT__recombine__BRA__198__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+737,(vlSelf->ascon_top__DOT__recombine__BRA__199__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+738,(vlSelf->ascon_top__DOT__recombine__BRA__200__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+739,(vlSelf->ascon_top__DOT__recombine__BRA__201__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+740,(vlSelf->ascon_top__DOT__recombine__BRA__202__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+741,(vlSelf->ascon_top__DOT__recombine__BRA__203__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+742,(vlSelf->ascon_top__DOT__recombine__BRA__204__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+743,(vlSelf->ascon_top__DOT__recombine__BRA__205__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+744,(vlSelf->ascon_top__DOT__recombine__BRA__206__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+745,(vlSelf->ascon_top__DOT__recombine__BRA__207__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+746,(vlSelf->ascon_top__DOT__recombine__BRA__208__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+747,(vlSelf->ascon_top__DOT__recombine__BRA__209__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+748,(vlSelf->ascon_top__DOT__recombine__BRA__210__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+749,(vlSelf->ascon_top__DOT__recombine__BRA__211__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+750,(vlSelf->ascon_top__DOT__recombine__BRA__212__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+751,(vlSelf->ascon_top__DOT__recombine__BRA__213__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+752,(vlSelf->ascon_top__DOT__recombine__BRA__214__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+753,(vlSelf->ascon_top__DOT__recombine__BRA__215__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+754,(vlSelf->ascon_top__DOT__recombine__BRA__216__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+755,(vlSelf->ascon_top__DOT__recombine__BRA__217__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+756,(vlSelf->ascon_top__DOT__recombine__BRA__218__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+757,(vlSelf->ascon_top__DOT__recombine__BRA__219__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+758,(vlSelf->ascon_top__DOT__recombine__BRA__220__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+759,(vlSelf->ascon_top__DOT__recombine__BRA__221__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+760,(vlSelf->ascon_top__DOT__recombine__BRA__222__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+761,(vlSelf->ascon_top__DOT__recombine__BRA__223__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+762,(vlSelf->ascon_top__DOT__recombine__BRA__224__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+763,(vlSelf->ascon_top__DOT__recombine__BRA__225__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+764,(vlSelf->ascon_top__DOT__recombine__BRA__226__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+765,(vlSelf->ascon_top__DOT__recombine__BRA__227__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+766,(vlSelf->ascon_top__DOT__recombine__BRA__228__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+767,(vlSelf->ascon_top__DOT__recombine__BRA__229__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+768,(vlSelf->ascon_top__DOT__recombine__BRA__230__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+769,(vlSelf->ascon_top__DOT__recombine__BRA__231__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+770,(vlSelf->ascon_top__DOT__recombine__BRA__232__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+771,(vlSelf->ascon_top__DOT__recombine__BRA__233__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+772,(vlSelf->ascon_top__DOT__recombine__BRA__234__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+773,(vlSelf->ascon_top__DOT__recombine__BRA__235__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+774,(vlSelf->ascon_top__DOT__recombine__BRA__236__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+775,(vlSelf->ascon_top__DOT__recombine__BRA__237__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+776,(vlSelf->ascon_top__DOT__recombine__BRA__238__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+777,(vlSelf->ascon_top__DOT__recombine__BRA__239__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+778,(vlSelf->ascon_top__DOT__recombine__BRA__240__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+779,(vlSelf->ascon_top__DOT__recombine__BRA__241__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+780,(vlSelf->ascon_top__DOT__recombine__BRA__242__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+781,(vlSelf->ascon_top__DOT__recombine__BRA__243__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+782,(vlSelf->ascon_top__DOT__recombine__BRA__244__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+783,(vlSelf->ascon_top__DOT__recombine__BRA__245__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+784,(vlSelf->ascon_top__DOT__recombine__BRA__246__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+785,(vlSelf->ascon_top__DOT__recombine__BRA__247__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+786,(vlSelf->ascon_top__DOT__recombine__BRA__248__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+787,(vlSelf->ascon_top__DOT__recombine__BRA__249__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+788,(vlSelf->ascon_top__DOT__recombine__BRA__250__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+789,(vlSelf->ascon_top__DOT__recombine__BRA__251__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+790,(vlSelf->ascon_top__DOT__recombine__BRA__252__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+791,(vlSelf->ascon_top__DOT__recombine__BRA__253__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+792,(vlSelf->ascon_top__DOT__recombine__BRA__254__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+793,(vlSelf->ascon_top__DOT__recombine__BRA__255__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+794,(vlSelf->ascon_top__DOT__recombine__BRA__256__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+795,(vlSelf->ascon_top__DOT__recombine__BRA__257__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+796,(vlSelf->ascon_top__DOT__recombine__BRA__258__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+797,(vlSelf->ascon_top__DOT__recombine__BRA__259__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+798,(vlSelf->ascon_top__DOT__recombine__BRA__260__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+799,(vlSelf->ascon_top__DOT__recombine__BRA__261__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+800,(vlSelf->ascon_top__DOT__recombine__BRA__262__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+801,(vlSelf->ascon_top__DOT__recombine__BRA__263__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+802,(vlSelf->ascon_top__DOT__recombine__BRA__264__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+803,(vlSelf->ascon_top__DOT__recombine__BRA__265__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+804,(vlSelf->ascon_top__DOT__recombine__BRA__266__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+805,(vlSelf->ascon_top__DOT__recombine__BRA__267__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+806,(vlSelf->ascon_top__DOT__recombine__BRA__268__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+807,(vlSelf->ascon_top__DOT__recombine__BRA__269__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+808,(vlSelf->ascon_top__DOT__recombine__BRA__270__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+809,(vlSelf->ascon_top__DOT__recombine__BRA__271__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+810,(vlSelf->ascon_top__DOT__recombine__BRA__272__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+811,(vlSelf->ascon_top__DOT__recombine__BRA__273__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+812,(vlSelf->ascon_top__DOT__recombine__BRA__274__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+813,(vlSelf->ascon_top__DOT__recombine__BRA__275__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+814,(vlSelf->ascon_top__DOT__recombine__BRA__276__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+815,(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+816,(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+817,(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+818,(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+819,(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+820,(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+821,(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+822,(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+823,(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+824,(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+825,(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+826,(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+827,(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+828,(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+829,(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+830,(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+831,(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+832,(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+833,(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+834,(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+835,(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+836,(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+837,(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+838,(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+839,(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+840,(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+841,(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+842,(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+843,(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+844,(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+845,(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+846,(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+847,(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+848,(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+849,(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+850,(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+851,(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+852,(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+853,(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+854,(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+855,(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+856,(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits),3);
            tracep->chgCData(oldp+857,(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits),3);
            tracep->chgBit(oldp+858,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_cnt_4));
            tracep->chgCData(oldp+859,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
            tracep->chgCData(oldp+860,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),7);
            tracep->chgCData(oldp+861,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
            tracep->chgBit(oldp+862,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
            tracep->chgBit(oldp+863,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
            tracep->chgBit(oldp+864,((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0))));
            tracep->chgQData(oldp+865,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
            tracep->chgBit(oldp+867,((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1))));
            tracep->chgQData(oldp+868,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
            tracep->chgBit(oldp+870,((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2))));
            tracep->chgQData(oldp+871,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
            tracep->chgBit(oldp+873,((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3))));
            tracep->chgQData(oldp+874,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
            tracep->chgBit(oldp+876,((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4))));
            tracep->chgQData(oldp+877,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
            tracep->chgSData(oldp+879,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__out_shifted_dplus1),15);
            tracep->chgWData(oldp+880,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__0__KET____DOT__state_reg_share__data_out),320);
            tracep->chgQData(oldp+890,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[0]),64);
            tracep->chgQData(oldp+892,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[1]),64);
            tracep->chgQData(oldp+894,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[2]),64);
            tracep->chgQData(oldp+896,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[3]),64);
            tracep->chgQData(oldp+898,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state[4]),64);
            tracep->chgIData(oldp+900,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+901,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
            tracep->chgSData(oldp+902,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__out_shifted_dplus1),15);
            tracep->chgWData(oldp+903,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__1__KET____DOT__state_reg_share__data_out),320);
            tracep->chgQData(oldp+913,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[0]),64);
            tracep->chgQData(oldp+915,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[1]),64);
            tracep->chgQData(oldp+917,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[2]),64);
            tracep->chgQData(oldp+919,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[3]),64);
            tracep->chgQData(oldp+921,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state[4]),64);
            tracep->chgIData(oldp+923,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+924,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
            tracep->chgSData(oldp+925,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__out_shifted_dplus1),15);
            tracep->chgWData(oldp+926,(vlSelf->ascon_top__DOT____Vcellout__gen_state_regs__BRA__2__KET____DOT__state_reg_share__data_out),320);
            tracep->chgQData(oldp+936,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[0]),64);
            tracep->chgQData(oldp+938,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[1]),64);
            tracep->chgQData(oldp+940,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[2]),64);
            tracep->chgQData(oldp+942,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[3]),64);
            tracep->chgQData(oldp+944,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state[4]),64);
            tracep->chgIData(oldp+946,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk4__DOT__i),32);
            tracep->chgIData(oldp+947,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__unnamedblk3__DOT__i),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [1U] | vlSelf->__Vm_traceActivity
                         [4U]))) {
            tracep->chgQData(oldp+948,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
            tracep->chgQData(oldp+950,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
            tracep->chgQData(oldp+952,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
            tracep->chgQData(oldp+954,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
            tracep->chgQData(oldp+956,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
            __Vtemp13374[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
            __Vtemp13374[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                        >> 0x20U));
            __Vtemp13374[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
            __Vtemp13374[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                        >> 0x20U));
            __Vtemp13374[4U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
            __Vtemp13374[5U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                        >> 0x20U));
            __Vtemp13374[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U]));
            __Vtemp13374[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U]) >> 0x20U));
            __Vtemp13374[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [4U] ^ 
                                            ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                              ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                              : 0x8000000000000000ULL))
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U]));
            __Vtemp13374[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [4U] ^ 
                                             ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                               ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                               : 0x8000000000000000ULL))
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U]) >> 0x20U));
            tracep->chgWData(oldp+958,(__Vtemp13374),320);
            tracep->chgQData(oldp+968,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [4U] ^ 
                                            ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                              ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                              : 0x8000000000000000ULL))
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U])),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgSData(oldp+970,(vlSelf->ascon_top__DOT__sbox_input[0]),15);
            tracep->chgSData(oldp+971,(vlSelf->ascon_top__DOT__sbox_output[0]),15);
            tracep->chgIData(oldp+972,(vlSelf->ascon_top__DOT__unnamedblk1__DOT__p),32);
            tracep->chgSData(oldp+973,(vlSelf->ascon_top__DOT__sbox_input
                                       [0U]),15);
            tracep->chgSData(oldp+974,(((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                         [4U] << 0xcU) 
                                        | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                            [3U] << 9U) 
                                           | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                               [2U] 
                                               << 6U) 
                                              | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                  [1U] 
                                                  << 3U) 
                                                 | vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                 [0U]))))),15);
            tracep->chgCData(oldp+975,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),3);
            tracep->chgCData(oldp+976,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),3);
            tracep->chgCData(oldp+977,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),3);
            tracep->chgCData(oldp+978,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),3);
            tracep->chgCData(oldp+979,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),3);
            tracep->chgCData(oldp+980,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [0U])),3);
            tracep->chgCData(oldp+981,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 3U))),3);
            tracep->chgCData(oldp+982,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [0U] 
                                              >> 6U))),3);
            tracep->chgCData(oldp+983,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [1U])),3);
            tracep->chgCData(oldp+984,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 3U))),3);
            tracep->chgCData(oldp+985,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [1U] 
                                              >> 6U))),3);
            tracep->chgCData(oldp+986,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [2U])),3);
            tracep->chgCData(oldp+987,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 3U))),3);
            tracep->chgCData(oldp+988,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [2U] 
                                              >> 6U))),3);
            tracep->chgCData(oldp+989,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [3U])),3);
            tracep->chgCData(oldp+990,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 3U))),3);
            tracep->chgCData(oldp+991,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [3U] 
                                              >> 6U))),3);
            tracep->chgCData(oldp+992,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [4U])),3);
            tracep->chgCData(oldp+993,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 3U))),3);
            tracep->chgCData(oldp+994,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                              [4U] 
                                              >> 6U))),3);
            tracep->chgCData(oldp+995,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),3);
            tracep->chgCData(oldp+996,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),3);
            tracep->chgCData(oldp+997,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),3);
            tracep->chgCData(oldp+998,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),3);
            tracep->chgCData(oldp+999,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),3);
            tracep->chgIData(oldp+1000,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+1001,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgSData(oldp+1002,(vlSelf->ascon_top__DOT__lfsr_out),13);
            tracep->chgIData(oldp+1003,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
            tracep->chgIData(oldp+1004,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
            tracep->chgSData(oldp+1005,((0x3ffU & (IData)(vlSelf->ascon_top__DOT__lfsr_out))),10);
            tracep->chgCData(oldp+1006,((7U & ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                               >> 0xaU))),3);
            tracep->chgSData(oldp+1007,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),15);
            tracep->chgBit(oldp+1008,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg));
            tracep->chgBit(oldp+1009,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg));
            tracep->chgBit(oldp+1010,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg));
            tracep->chgBit(oldp+1011,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg));
            tracep->chgBit(oldp+1012,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg));
            tracep->chgBit(oldp+1013,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg));
            tracep->chgBit(oldp+1014,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg));
            tracep->chgBit(oldp+1015,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg));
            tracep->chgBit(oldp+1016,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg));
            tracep->chgBit(oldp+1017,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg));
            tracep->chgBit(oldp+1018,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg));
            tracep->chgBit(oldp+1019,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg));
            tracep->chgBit(oldp+1020,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg));
            tracep->chgBit(oldp+1021,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg));
            tracep->chgBit(oldp+1022,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg));
            tracep->chgBit(oldp+1023,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg));
            tracep->chgBit(oldp+1024,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg));
            tracep->chgBit(oldp+1025,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg));
            tracep->chgBit(oldp+1026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg));
            tracep->chgBit(oldp+1027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg));
            tracep->chgBit(oldp+1028,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg));
            tracep->chgBit(oldp+1029,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg));
            tracep->chgBit(oldp+1030,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg));
            tracep->chgBit(oldp+1031,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg));
            tracep->chgBit(oldp+1032,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg));
            tracep->chgBit(oldp+1033,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg));
            tracep->chgBit(oldp+1034,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg));
            tracep->chgBit(oldp+1035,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg));
            tracep->chgBit(oldp+1036,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg));
            tracep->chgBit(oldp+1037,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg));
            tracep->chgBit(oldp+1038,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg));
            tracep->chgBit(oldp+1039,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg));
            tracep->chgBit(oldp+1040,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg));
            tracep->chgBit(oldp+1041,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg));
            tracep->chgBit(oldp+1042,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg));
            tracep->chgBit(oldp+1043,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg));
            tracep->chgBit(oldp+1044,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg));
            tracep->chgBit(oldp+1045,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg));
            tracep->chgBit(oldp+1046,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg));
            tracep->chgBit(oldp+1047,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg));
            tracep->chgBit(oldp+1048,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg));
            tracep->chgBit(oldp+1049,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg));
            tracep->chgBit(oldp+1050,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg));
            tracep->chgBit(oldp+1051,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg));
            tracep->chgSData(oldp+1052,(((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0xcU) 
                                         | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 9U) 
                                            | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 6U) 
                                               | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 3U) 
                                                  | vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),15);
            tracep->chgCData(oldp+1053,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),3);
            tracep->chgCData(oldp+1054,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1055,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [0U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1056,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),3);
            tracep->chgCData(oldp+1057,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1058,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [1U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1059,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),3);
            tracep->chgCData(oldp+1060,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1061,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [2U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1062,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),3);
            tracep->chgCData(oldp+1063,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1064,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [3U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1065,((7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),3);
            tracep->chgCData(oldp+1066,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U] 
                                               >> 3U))),3);
            tracep->chgCData(oldp+1067,((7U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                               [4U] 
                                               >> 6U))),3);
            tracep->chgCData(oldp+1068,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),3);
            tracep->chgCData(oldp+1069,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),3);
            tracep->chgCData(oldp+1070,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),3);
            tracep->chgCData(oldp+1071,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),3);
            tracep->chgCData(oldp+1072,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),3);
            tracep->chgCData(oldp+1073,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),3);
            tracep->chgCData(oldp+1074,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),3);
            tracep->chgCData(oldp+1075,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),3);
            tracep->chgCData(oldp+1076,(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),3);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgBit(oldp+1077,(vlSelf->ascon_top__DOT__write_en));
            tracep->chgBit(oldp+1078,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
            tracep->chgBit(oldp+1079,(vlSelf->ascon_top__DOT__sel_init_load));
            tracep->chgBit(oldp+1080,(vlSelf->ascon_top__DOT__sel_padding));
            tracep->chgBit(oldp+1081,(vlSelf->ascon_top__DOT__sel_absorb_data));
            tracep->chgWData(oldp+1082,(vlSelf->ascon_top__DOT__state_reg_in_shares[0]),320);
            tracep->chgWData(oldp+1092,(vlSelf->ascon_top__DOT__state_reg_in_shares[1]),320);
            tracep->chgWData(oldp+1102,(vlSelf->ascon_top__DOT__state_reg_in_shares[2]),320);
            tracep->chgWData(oldp+1112,(vlSelf->ascon_top__DOT__data_in_padded),128);
            tracep->chgWData(oldp+1116,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
            tracep->chgIData(oldp+1120,(vlSelf->ascon_top__DOT__unnamedblk4__DOT__i),32);
            tracep->chgBit(oldp+1121,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
            tracep->chgCData(oldp+1122,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
            tracep->chgBit(oldp+1123,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
            tracep->chgBit(oldp+1124,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
            tracep->chgBit(oldp+1125,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
            tracep->chgBit(oldp+1126,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
            __Vtemp13375[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][0U];
            __Vtemp13375[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][1U];
            __Vtemp13375[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][2U];
            __Vtemp13375[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][3U];
            __Vtemp13375[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][4U];
            __Vtemp13375[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][5U];
            __Vtemp13375[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][6U];
            __Vtemp13375[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][7U];
            __Vtemp13375[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][8U];
            __Vtemp13375[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [0U][9U];
            tracep->chgWData(oldp+1127,(__Vtemp13375),320);
            tracep->chgQData(oldp+1137,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0]),64);
            tracep->chgQData(oldp+1139,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1]),64);
            tracep->chgQData(oldp+1141,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2]),64);
            tracep->chgQData(oldp+1143,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3]),64);
            tracep->chgQData(oldp+1145,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4]),64);
            __Vtemp13376[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][0U];
            __Vtemp13376[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][1U];
            __Vtemp13376[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][2U];
            __Vtemp13376[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][3U];
            __Vtemp13376[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][4U];
            __Vtemp13376[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][5U];
            __Vtemp13376[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][6U];
            __Vtemp13376[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][7U];
            __Vtemp13376[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][8U];
            __Vtemp13376[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [1U][9U];
            tracep->chgWData(oldp+1147,(__Vtemp13376),320);
            __Vtemp13377[0U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][0U];
            __Vtemp13377[1U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][1U];
            __Vtemp13377[2U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][2U];
            __Vtemp13377[3U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][3U];
            __Vtemp13377[4U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][4U];
            __Vtemp13377[5U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][5U];
            __Vtemp13377[6U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][6U];
            __Vtemp13377[7U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][7U];
            __Vtemp13377[8U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][8U];
            __Vtemp13377[9U] = vlSelf->ascon_top__DOT__state_reg_in_shares
                [2U][9U];
            tracep->chgWData(oldp+1157,(__Vtemp13377),320);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[5U])) {
            tracep->chgSData(oldp+1167,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0]),15);
            tracep->chgSData(oldp+1168,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[1]),15);
            tracep->chgSData(oldp+1169,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[2]),15);
            tracep->chgCData(oldp+1170,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0]),5);
            tracep->chgCData(oldp+1171,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1]),5);
            tracep->chgCData(oldp+1172,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2]),5);
            tracep->chgSData(oldp+1173,(vlSelf->ascon_top__DOT__shares_out),15);
            tracep->chgCData(oldp+1174,(vlSelf->ascon_top__DOT__affine_layer_in[0]),5);
            tracep->chgCData(oldp+1175,(vlSelf->ascon_top__DOT__affine_layer_in[1]),5);
            tracep->chgCData(oldp+1176,(vlSelf->ascon_top__DOT__affine_layer_in[2]),5);
            tracep->chgCData(oldp+1177,(vlSelf->ascon_top__DOT__affine_layer_out[0]),5);
            tracep->chgCData(oldp+1178,(vlSelf->ascon_top__DOT__affine_layer_out[1]),5);
            tracep->chgCData(oldp+1179,(vlSelf->ascon_top__DOT__affine_layer_out[2]),5);
            tracep->chgSData(oldp+1180,(vlSelf->ascon_top__DOT__next_sbox_input[0]),15);
            tracep->chgSData(oldp+1181,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),15);
            tracep->chgCData(oldp+1182,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),5);
            tracep->chgCData(oldp+1183,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),5);
            tracep->chgCData(oldp+1184,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),5);
            tracep->chgCData(oldp+1185,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),5);
            tracep->chgCData(oldp+1186,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),5);
            tracep->chgCData(oldp+1187,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),5);
            tracep->chgBit(oldp+1188,((1U & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [0U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1189,((1U & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [1U] 
                                                >> 2U)))));
            tracep->chgBit(oldp+1190,((1U & (~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [2U] 
                                                >> 2U)))));
            tracep->chgCData(oldp+1191,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),5);
            tracep->chgSData(oldp+1192,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                        [0U]),15);
            tracep->chgCData(oldp+1193,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                        [0U]),5);
            tracep->chgSData(oldp+1194,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                        [1U]),15);
            tracep->chgCData(oldp+1195,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                        [1U]),5);
            tracep->chgQData(oldp+1196,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0]),64);
            tracep->chgQData(oldp+1198,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1]),64);
            tracep->chgQData(oldp+1200,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2]),64);
            tracep->chgQData(oldp+1202,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3]),64);
            tracep->chgQData(oldp+1204,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4]),64);
            tracep->chgSData(oldp+1206,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                        [2U]),15);
            tracep->chgCData(oldp+1207,(vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                        [2U]),5);
            tracep->chgQData(oldp+1208,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0]),64);
            tracep->chgQData(oldp+1210,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1]),64);
            tracep->chgQData(oldp+1212,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2]),64);
            tracep->chgQData(oldp+1214,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3]),64);
            tracep->chgQData(oldp+1216,(vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4]),64);
        }
        tracep->chgBit(oldp+1218,(vlSelf->clk));
        tracep->chgBit(oldp+1219,(vlSelf->reset_n));
        tracep->chgBit(oldp+1220,(vlSelf->reset_n_lfsr));
        tracep->chgBit(oldp+1221,(vlSelf->start));
        tracep->chgQData(oldp+1222,(vlSelf->key1),64);
        tracep->chgQData(oldp+1224,(vlSelf->key2),64);
        tracep->chgBit(oldp+1226,(vlSelf->load_data));
        tracep->chgQData(oldp+1227,(vlSelf->nonce1),64);
        tracep->chgQData(oldp+1229,(vlSelf->nonce2),64);
        tracep->chgQData(oldp+1231,(vlSelf->initialVector),64);
        tracep->chgWData(oldp+1233,(vlSelf->data_in),128);
        tracep->chgBit(oldp+1237,(vlSelf->valid_data_in));
        tracep->chgBit(oldp+1238,(vlSelf->last_block));
        tracep->chgCData(oldp+1239,(vlSelf->valid_bytes),5);
        tracep->chgBit(oldp+1240,(vlSelf->EOT));
        tracep->chgWData(oldp+1241,(vlSelf->state_reg_out),320);
        tracep->chgBit(oldp+1251,(vlSelf->ciphertext_valid));
        tracep->chgWData(oldp+1252,(vlSelf->ciphertext),128);
        tracep->chgBit(oldp+1256,(vlSelf->done));
        tracep->chgBit(oldp+1257,(vlSelf->ready_tag));
        tracep->chgQData(oldp+1258,(vlSelf->tag1),64);
        tracep->chgQData(oldp+1260,(vlSelf->tag2),64);
        tracep->chgBit(oldp+1262,(vlSelf->ready_for_data));
        tracep->chgBit(oldp+1263,(vlSelf->read_data));
        tracep->chgBit(oldp+1264,(vlSelf->debug_extra_padding_ff));
        tracep->chgCData(oldp+1265,(vlSelf->debug_bitcounter),7);
        tracep->chgCData(oldp+1266,(vlSelf->debug_roundcounter),4);
        tracep->chgCData(oldp+1267,(vlSelf->debug_state),5);
        tracep->chgQData(oldp+1268,(vlSelf->debug_state_0),64);
        tracep->chgQData(oldp+1270,(vlSelf->debug_state_1),64);
        tracep->chgQData(oldp+1272,(vlSelf->debug_state_2),64);
        tracep->chgQData(oldp+1274,(vlSelf->debug_state_3),64);
        tracep->chgQData(oldp+1276,(vlSelf->debug_state_4),64);
        tracep->chgQData(oldp+1278,(vlSelf->debug_round_state_0),64);
        tracep->chgQData(oldp+1280,(vlSelf->debug_round_state_1),64);
        tracep->chgQData(oldp+1282,(vlSelf->debug_round_state_2),64);
        tracep->chgQData(oldp+1284,(vlSelf->debug_round_state_3),64);
        tracep->chgQData(oldp+1286,(vlSelf->debug_round_state_4),64);
        tracep->chgQData(oldp+1288,(vlSelf->debug_sbox_nomasked_0),64);
        tracep->chgQData(oldp+1290,(vlSelf->debug_sbox_nomasked_1),64);
        tracep->chgQData(oldp+1292,(vlSelf->debug_sbox_nomasked_2),64);
        tracep->chgQData(oldp+1294,(vlSelf->debug_sbox_nomasked_3),64);
        tracep->chgQData(oldp+1296,(vlSelf->debug_sbox_nomasked_4),64);
        tracep->chgQData(oldp+1298,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->chgQData(oldp+1300,(vlSelf->debug_linear_diffusion_state4),64);
        __Vtemp13381[0U] = (IData)(vlSelf->initialVector);
        __Vtemp13381[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp13381[2U] = (IData)(vlSelf->key1);
        __Vtemp13381[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp13381[4U] = (IData)(vlSelf->key2);
        __Vtemp13381[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp13381[6U] = (IData)(vlSelf->nonce1);
        __Vtemp13381[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp13381[8U] = (IData)(vlSelf->nonce2);
        __Vtemp13381[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->chgWData(oldp+1302,(__Vtemp13381),320);
    }
}

void Vascon_top___024root__traceCleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    Vascon_top___024root* const __restrict vlSelf = static_cast<Vascon_top___024root*>(voidSelf);
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
        vlSymsp->TOP.__Vm_traceActivity[5U] = 0U;
    }
}
