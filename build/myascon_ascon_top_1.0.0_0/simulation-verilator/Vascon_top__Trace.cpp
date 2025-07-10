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
    VlWide<3>/*95:0*/ __Vtemp19875;
    VlWide<3>/*95:0*/ __Vtemp19876;
    VlWide<10>/*319:0*/ __Vtemp19880;
    VlWide<10>/*319:0*/ __Vtemp19884;
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
            tracep->chgWData(oldp+10,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),127);
            tracep->chgWData(oldp+14,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),127);
            tracep->chgWData(oldp+18,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),127);
            tracep->chgWData(oldp+22,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),127);
            tracep->chgWData(oldp+26,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),127);
            tracep->chgWData(oldp+30,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),127);
            tracep->chgWData(oldp+34,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),127);
            tracep->chgWData(oldp+38,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),127);
            tracep->chgWData(oldp+42,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),127);
            tracep->chgWData(oldp+46,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),127);
            tracep->chgWData(oldp+50,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),127);
            tracep->chgWData(oldp+54,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),127);
            tracep->chgWData(oldp+58,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),127);
            tracep->chgWData(oldp+62,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),127);
            tracep->chgWData(oldp+66,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),127);
            tracep->chgWData(oldp+70,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),127);
            tracep->chgWData(oldp+74,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),127);
            tracep->chgWData(oldp+78,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),127);
            tracep->chgWData(oldp+82,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),127);
            tracep->chgWData(oldp+86,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),127);
            tracep->chgWData(oldp+90,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),127);
            tracep->chgWData(oldp+94,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),127);
            tracep->chgWData(oldp+98,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),127);
            tracep->chgWData(oldp+102,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),127);
            tracep->chgWData(oldp+106,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),127);
            tracep->chgWData(oldp+110,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),127);
            tracep->chgWData(oldp+114,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),127);
            tracep->chgWData(oldp+118,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),127);
            tracep->chgWData(oldp+122,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),127);
            tracep->chgWData(oldp+126,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),127);
            tracep->chgWData(oldp+130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),127);
            tracep->chgWData(oldp+134,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),127);
            tracep->chgWData(oldp+138,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),127);
            tracep->chgWData(oldp+142,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),127);
            tracep->chgWData(oldp+146,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),127);
            tracep->chgWData(oldp+150,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),127);
            tracep->chgWData(oldp+154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),127);
            tracep->chgWData(oldp+158,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),127);
            tracep->chgWData(oldp+162,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),127);
            tracep->chgWData(oldp+166,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),127);
            tracep->chgWData(oldp+170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),127);
            tracep->chgWData(oldp+174,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),127);
            tracep->chgWData(oldp+178,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),127);
            tracep->chgWData(oldp+182,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),127);
            tracep->chgWData(oldp+186,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask),127);
            tracep->chgWData(oldp+190,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask),127);
            tracep->chgWData(oldp+194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask),127);
            tracep->chgWData(oldp+198,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask),127);
            tracep->chgWData(oldp+202,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask),127);
            tracep->chgWData(oldp+206,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask),127);
            tracep->chgWData(oldp+210,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask),127);
            tracep->chgWData(oldp+214,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask),127);
            tracep->chgWData(oldp+218,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask),127);
            tracep->chgWData(oldp+222,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask),127);
            tracep->chgWData(oldp+226,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask),127);
            tracep->chgWData(oldp+230,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask),127);
            tracep->chgWData(oldp+234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask),127);
            tracep->chgWData(oldp+238,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask),127);
            tracep->chgWData(oldp+242,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask),127);
            tracep->chgWData(oldp+246,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask),127);
            tracep->chgWData(oldp+250,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask),127);
            tracep->chgWData(oldp+254,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask),127);
            tracep->chgWData(oldp+258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask),127);
            tracep->chgWData(oldp+262,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask),127);
            tracep->chgWData(oldp+266,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask),127);
            tracep->chgWData(oldp+270,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask),127);
            tracep->chgWData(oldp+274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask),127);
            tracep->chgWData(oldp+278,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask),127);
            tracep->chgWData(oldp+282,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask),127);
            tracep->chgWData(oldp+286,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask),127);
            tracep->chgWData(oldp+290,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask),127);
            tracep->chgWData(oldp+294,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask),127);
            tracep->chgWData(oldp+298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask),127);
            tracep->chgWData(oldp+302,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask),127);
            tracep->chgWData(oldp+306,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask),127);
            tracep->chgWData(oldp+310,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask),127);
            tracep->chgWData(oldp+314,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask),127);
            tracep->chgWData(oldp+318,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask),127);
            tracep->chgWData(oldp+322,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask),127);
            tracep->chgWData(oldp+326,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask),127);
            tracep->chgWData(oldp+330,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask),127);
            tracep->chgWData(oldp+334,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask),127);
            tracep->chgWData(oldp+338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask),127);
            tracep->chgWData(oldp+342,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask),127);
            tracep->chgWData(oldp+346,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask),127);
            tracep->chgWData(oldp+350,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask),127);
            tracep->chgWData(oldp+354,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask),127);
            tracep->chgWData(oldp+358,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask),127);
            tracep->chgWData(oldp+362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask),127);
            tracep->chgWData(oldp+366,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask),127);
            tracep->chgWData(oldp+370,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask),127);
            tracep->chgWData(oldp+374,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask),127);
            tracep->chgWData(oldp+378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask),127);
            tracep->chgWData(oldp+382,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask),127);
            tracep->chgWData(oldp+386,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask),127);
            tracep->chgWData(oldp+390,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask),127);
            tracep->chgWData(oldp+394,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask),127);
            tracep->chgWData(oldp+398,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask),127);
            tracep->chgWData(oldp+402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask),127);
            tracep->chgWData(oldp+406,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask),127);
            tracep->chgWData(oldp+410,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask),127);
            tracep->chgWData(oldp+414,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask),127);
            tracep->chgWData(oldp+418,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask),127);
            tracep->chgWData(oldp+422,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask),127);
            tracep->chgWData(oldp+426,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask),127);
            tracep->chgWData(oldp+430,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask),127);
            tracep->chgWData(oldp+434,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask),127);
            tracep->chgWData(oldp+438,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask),127);
            tracep->chgWData(oldp+442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask),127);
            tracep->chgWData(oldp+446,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask),127);
            tracep->chgWData(oldp+450,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask),127);
            tracep->chgWData(oldp+454,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask),127);
            tracep->chgWData(oldp+458,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask),127);
            tracep->chgWData(oldp+462,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask),127);
            tracep->chgWData(oldp+466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask),127);
            tracep->chgWData(oldp+470,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask),127);
            tracep->chgWData(oldp+474,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask),127);
            tracep->chgWData(oldp+478,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask),127);
            tracep->chgWData(oldp+482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask),127);
            tracep->chgWData(oldp+486,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask),127);
            tracep->chgWData(oldp+490,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask),127);
            tracep->chgWData(oldp+494,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask),127);
            tracep->chgWData(oldp+498,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask),127);
            tracep->chgWData(oldp+502,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask),127);
            tracep->chgWData(oldp+506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask),127);
            tracep->chgWData(oldp+510,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask),127);
            tracep->chgWData(oldp+514,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask),127);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+518,(vlSelf->ascon_top__DOT__lfsr_out),96);
            tracep->chgIData(oldp+521,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
            tracep->chgIData(oldp+522,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
            __Vtemp19875[0U] = vlSelf->ascon_top__DOT__lfsr_out[0U];
            __Vtemp19875[1U] = vlSelf->ascon_top__DOT__lfsr_out[1U];
            __Vtemp19875[2U] = (0x3ffffffU & vlSelf->ascon_top__DOT__lfsr_out[2U]);
            tracep->chgWData(oldp+523,(__Vtemp19875),90);
            tracep->chgCData(oldp+526,((vlSelf->ascon_top__DOT__lfsr_out[2U] 
                                        >> 0x1aU)),6);
            tracep->chgBit(oldp+527,(vlSelf->ascon_top__DOT__extra_padding_ff));
            tracep->chgBit(oldp+528,(vlSelf->ascon_top__DOT__shift_en));
            tracep->chgBit(oldp+529,(vlSelf->ascon_top__DOT__shift_type));
            tracep->chgBit(oldp+530,(vlSelf->ascon_top__DOT__last_cycle));
            tracep->chgBit(oldp+531,(vlSelf->ascon_top__DOT__reg_key1_load));
            tracep->chgBit(oldp+532,(vlSelf->ascon_top__DOT__reg_key2_load));
            tracep->chgBit(oldp+533,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
            tracep->chgBit(oldp+534,(vlSelf->ascon_top__DOT__sel_masked_round));
            tracep->chgBit(oldp+535,(vlSelf->ascon_top__DOT__sel_xor_signal));
            tracep->chgBit(oldp+536,(vlSelf->ascon_top__DOT__shift_enable_sipo));
            tracep->chgBit(oldp+537,(vlSelf->ascon_top__DOT__last_cycle_sipo));
            tracep->chgCData(oldp+538,(vlSelf->ascon_top__DOT__round_counter),4);
            tracep->chgCData(oldp+539,(vlSelf->ascon_top__DOT__bit_counter),4);
            tracep->chgQData(oldp+540,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+542,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+544,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
            tracep->chgQData(oldp+546,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
            tracep->chgQData(oldp+548,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
            tracep->chgQData(oldp+550,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
            tracep->chgQData(oldp+552,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
            tracep->chgQData(oldp+554,((0xf0ULL - (0xfULL 
                                                   * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
            VL_EXTEND_WQ(66,64, __Vtemp19876, (0xf0ULL 
                                               - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
            tracep->chgWData(oldp+556,(__Vtemp19876),66);
            tracep->chgCData(oldp+559,(vlSelf->ascon_top__DOT__rc_block[0]),6);
            tracep->chgCData(oldp+560,(vlSelf->ascon_top__DOT__rc_block[1]),6);
            tracep->chgCData(oldp+561,(vlSelf->ascon_top__DOT__rc_block[2]),6);
            tracep->chgCData(oldp+562,(vlSelf->ascon_top__DOT__rc_block[3]),6);
            tracep->chgQData(oldp+563,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                         ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                         : 0x8000000000000000ULL)),64);
            tracep->chgBit(oldp+565,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__state_reg));
            tracep->chgIData(oldp+566,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__i),32);
            tracep->chgBit(oldp+567,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__state_reg));
            tracep->chgIData(oldp+568,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__i),32);
            tracep->chgBit(oldp+569,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__state_reg));
            tracep->chgIData(oldp+570,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__i),32);
            tracep->chgBit(oldp+571,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__state_reg));
            tracep->chgIData(oldp+572,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__i),32);
            tracep->chgBit(oldp+573,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__state_reg));
            tracep->chgIData(oldp+574,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__i),32);
            tracep->chgBit(oldp+575,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__state_reg));
            tracep->chgIData(oldp+576,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__i),32);
            tracep->chgBit(oldp+577,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__state_reg));
            tracep->chgIData(oldp+578,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__i),32);
            tracep->chgBit(oldp+579,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__state_reg));
            tracep->chgIData(oldp+580,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__i),32);
            tracep->chgBit(oldp+581,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__state_reg));
            tracep->chgIData(oldp+582,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__i),32);
            tracep->chgBit(oldp+583,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__state_reg));
            tracep->chgIData(oldp+584,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__i),32);
            tracep->chgBit(oldp+585,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__state_reg));
            tracep->chgIData(oldp+586,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__i),32);
            tracep->chgBit(oldp+587,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__state_reg));
            tracep->chgIData(oldp+588,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__i),32);
            tracep->chgBit(oldp+589,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__state_reg));
            tracep->chgIData(oldp+590,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__i),32);
            tracep->chgBit(oldp+591,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__state_reg));
            tracep->chgIData(oldp+592,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__i),32);
            tracep->chgBit(oldp+593,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__state_reg));
            tracep->chgIData(oldp+594,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__i),32);
            tracep->chgBit(oldp+595,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__state_reg));
            tracep->chgIData(oldp+596,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__i),32);
            tracep->chgBit(oldp+597,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__state_reg));
            tracep->chgIData(oldp+598,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__i),32);
            tracep->chgBit(oldp+599,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__state_reg));
            tracep->chgIData(oldp+600,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__i),32);
            tracep->chgBit(oldp+601,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__state_reg));
            tracep->chgIData(oldp+602,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__i),32);
            tracep->chgBit(oldp+603,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__state_reg));
            tracep->chgIData(oldp+604,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__i),32);
            tracep->chgBit(oldp+605,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__state_reg));
            tracep->chgIData(oldp+606,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__i),32);
            tracep->chgBit(oldp+607,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__state_reg));
            tracep->chgIData(oldp+608,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__i),32);
            tracep->chgBit(oldp+609,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__state_reg));
            tracep->chgIData(oldp+610,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__i),32);
            tracep->chgBit(oldp+611,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__state_reg));
            tracep->chgIData(oldp+612,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__i),32);
            tracep->chgBit(oldp+613,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__state_reg));
            tracep->chgIData(oldp+614,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__i),32);
            tracep->chgBit(oldp+615,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__state_reg));
            tracep->chgIData(oldp+616,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__i),32);
            tracep->chgBit(oldp+617,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__state_reg));
            tracep->chgIData(oldp+618,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__i),32);
            tracep->chgBit(oldp+619,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__state_reg));
            tracep->chgIData(oldp+620,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__i),32);
            tracep->chgBit(oldp+621,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__state_reg));
            tracep->chgIData(oldp+622,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__i),32);
            tracep->chgBit(oldp+623,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__state_reg));
            tracep->chgIData(oldp+624,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__i),32);
            tracep->chgBit(oldp+625,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__state_reg));
            tracep->chgIData(oldp+626,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__i),32);
            tracep->chgBit(oldp+627,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__data_reg));
            tracep->chgIData(oldp+628,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__i),32);
            tracep->chgBit(oldp+629,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__data_reg));
            tracep->chgIData(oldp+630,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__i),32);
            tracep->chgBit(oldp+631,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__data_reg));
            tracep->chgIData(oldp+632,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__i),32);
            tracep->chgBit(oldp+633,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__data_reg));
            tracep->chgIData(oldp+634,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__i),32);
            tracep->chgBit(oldp+635,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__data_reg));
            tracep->chgIData(oldp+636,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__i),32);
            tracep->chgBit(oldp+637,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__data_reg));
            tracep->chgIData(oldp+638,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__i),32);
            tracep->chgBit(oldp+639,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__data_reg));
            tracep->chgIData(oldp+640,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__i),32);
            tracep->chgBit(oldp+641,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__data_reg));
            tracep->chgIData(oldp+642,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__i),32);
            tracep->chgBit(oldp+643,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__data_reg));
            tracep->chgIData(oldp+644,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__i),32);
            tracep->chgBit(oldp+645,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__data_reg));
            tracep->chgIData(oldp+646,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__i),32);
            tracep->chgBit(oldp+647,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__data_reg));
            tracep->chgIData(oldp+648,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__i),32);
            tracep->chgBit(oldp+649,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__data_reg));
            tracep->chgIData(oldp+650,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__i),32);
            tracep->chgBit(oldp+651,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__data_reg));
            tracep->chgIData(oldp+652,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__i),32);
            tracep->chgBit(oldp+653,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__data_reg));
            tracep->chgIData(oldp+654,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__i),32);
            tracep->chgBit(oldp+655,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__data_reg));
            tracep->chgIData(oldp+656,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__i),32);
            tracep->chgBit(oldp+657,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__data_reg));
            tracep->chgIData(oldp+658,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__i),32);
            tracep->chgBit(oldp+659,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__data_reg));
            tracep->chgIData(oldp+660,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__i),32);
            tracep->chgBit(oldp+661,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__data_reg));
            tracep->chgIData(oldp+662,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__i),32);
            tracep->chgBit(oldp+663,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__data_reg));
            tracep->chgIData(oldp+664,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__i),32);
            tracep->chgBit(oldp+665,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__data_reg));
            tracep->chgIData(oldp+666,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__i),32);
            tracep->chgBit(oldp+667,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__data_reg));
            tracep->chgIData(oldp+668,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__i),32);
            tracep->chgBit(oldp+669,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__data_reg));
            tracep->chgIData(oldp+670,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__i),32);
            tracep->chgBit(oldp+671,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__data_reg));
            tracep->chgIData(oldp+672,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__i),32);
            tracep->chgBit(oldp+673,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__data_reg));
            tracep->chgIData(oldp+674,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__i),32);
            tracep->chgBit(oldp+675,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__data_reg));
            tracep->chgIData(oldp+676,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__i),32);
            tracep->chgBit(oldp+677,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__data_reg));
            tracep->chgIData(oldp+678,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__i),32);
            tracep->chgBit(oldp+679,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__data_reg));
            tracep->chgIData(oldp+680,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__i),32);
            tracep->chgBit(oldp+681,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__data_reg));
            tracep->chgIData(oldp+682,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__i),32);
            tracep->chgBit(oldp+683,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__data_reg));
            tracep->chgIData(oldp+684,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__i),32);
            tracep->chgBit(oldp+685,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__data_reg));
            tracep->chgIData(oldp+686,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__i),32);
            tracep->chgBit(oldp+687,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__data_reg));
            tracep->chgIData(oldp+688,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__i),32);
            tracep->chgBit(oldp+689,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__data_reg));
            tracep->chgIData(oldp+690,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__i),32);
            tracep->chgBit(oldp+691,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__data_reg));
            tracep->chgIData(oldp+692,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__i),32);
            tracep->chgBit(oldp+693,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__data_reg));
            tracep->chgIData(oldp+694,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__i),32);
            tracep->chgBit(oldp+695,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__data_reg));
            tracep->chgIData(oldp+696,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__i),32);
            tracep->chgBit(oldp+697,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__data_reg));
            tracep->chgIData(oldp+698,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__i),32);
            tracep->chgBit(oldp+699,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__data_reg));
            tracep->chgIData(oldp+700,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__i),32);
            tracep->chgBit(oldp+701,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__data_reg));
            tracep->chgIData(oldp+702,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__i),32);
            tracep->chgBit(oldp+703,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__data_reg));
            tracep->chgIData(oldp+704,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__i),32);
            tracep->chgBit(oldp+705,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__data_reg));
            tracep->chgIData(oldp+706,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__i),32);
            tracep->chgBit(oldp+707,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__data_reg));
            tracep->chgIData(oldp+708,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__i),32);
            tracep->chgBit(oldp+709,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__data_reg));
            tracep->chgIData(oldp+710,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__i),32);
            tracep->chgBit(oldp+711,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__data_reg));
            tracep->chgIData(oldp+712,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__i),32);
            tracep->chgBit(oldp+713,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__data_reg));
            tracep->chgIData(oldp+714,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__i),32);
            tracep->chgBit(oldp+715,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__data_reg));
            tracep->chgIData(oldp+716,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__i),32);
            tracep->chgBit(oldp+717,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__data_reg));
            tracep->chgIData(oldp+718,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__i),32);
            tracep->chgBit(oldp+719,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__data_reg));
            tracep->chgIData(oldp+720,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__i),32);
            tracep->chgBit(oldp+721,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__data_reg));
            tracep->chgIData(oldp+722,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__i),32);
            tracep->chgBit(oldp+723,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__data_reg));
            tracep->chgIData(oldp+724,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__i),32);
            tracep->chgBit(oldp+725,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__data_reg));
            tracep->chgIData(oldp+726,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__i),32);
            tracep->chgBit(oldp+727,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__data_reg));
            tracep->chgIData(oldp+728,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__i),32);
            tracep->chgBit(oldp+729,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__data_reg));
            tracep->chgIData(oldp+730,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__i),32);
            tracep->chgBit(oldp+731,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__data_reg));
            tracep->chgIData(oldp+732,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__i),32);
            tracep->chgBit(oldp+733,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__data_reg));
            tracep->chgIData(oldp+734,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__i),32);
            tracep->chgBit(oldp+735,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__data_reg));
            tracep->chgIData(oldp+736,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__i),32);
            tracep->chgBit(oldp+737,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__data_reg));
            tracep->chgIData(oldp+738,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__i),32);
            tracep->chgBit(oldp+739,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__data_reg));
            tracep->chgIData(oldp+740,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__i),32);
            tracep->chgBit(oldp+741,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__data_reg));
            tracep->chgIData(oldp+742,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__i),32);
            tracep->chgBit(oldp+743,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__data_reg));
            tracep->chgIData(oldp+744,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__i),32);
            tracep->chgBit(oldp+745,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__data_reg));
            tracep->chgIData(oldp+746,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__i),32);
            tracep->chgBit(oldp+747,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__data_reg));
            tracep->chgIData(oldp+748,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__i),32);
            tracep->chgBit(oldp+749,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__data_reg));
            tracep->chgIData(oldp+750,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__i),32);
            tracep->chgBit(oldp+751,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__data_reg));
            tracep->chgIData(oldp+752,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__i),32);
            tracep->chgBit(oldp+753,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__data_reg));
            tracep->chgIData(oldp+754,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__i),32);
            tracep->chgBit(oldp+755,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__data_reg));
            tracep->chgIData(oldp+756,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__i),32);
            tracep->chgBit(oldp+757,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__data_reg));
            tracep->chgIData(oldp+758,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__i),32);
            tracep->chgBit(oldp+759,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__data_reg));
            tracep->chgIData(oldp+760,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__i),32);
            tracep->chgBit(oldp+761,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__data_reg));
            tracep->chgIData(oldp+762,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__i),32);
            tracep->chgBit(oldp+763,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__data_reg));
            tracep->chgIData(oldp+764,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__i),32);
            tracep->chgBit(oldp+765,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__data_reg));
            tracep->chgIData(oldp+766,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__i),32);
            tracep->chgBit(oldp+767,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__data_reg));
            tracep->chgIData(oldp+768,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__i),32);
            tracep->chgBit(oldp+769,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__data_reg));
            tracep->chgIData(oldp+770,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__i),32);
            tracep->chgBit(oldp+771,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__data_reg));
            tracep->chgIData(oldp+772,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__i),32);
            tracep->chgBit(oldp+773,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__data_reg));
            tracep->chgIData(oldp+774,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__i),32);
            tracep->chgBit(oldp+775,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__data_reg));
            tracep->chgIData(oldp+776,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__i),32);
            tracep->chgBit(oldp+777,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__data_reg));
            tracep->chgIData(oldp+778,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__i),32);
            tracep->chgBit(oldp+779,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__data_reg));
            tracep->chgIData(oldp+780,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__i),32);
            tracep->chgBit(oldp+781,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__data_reg));
            tracep->chgIData(oldp+782,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__i),32);
            tracep->chgBit(oldp+783,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__data_reg));
            tracep->chgIData(oldp+784,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__i),32);
            tracep->chgBit(oldp+785,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__data_reg));
            tracep->chgIData(oldp+786,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__i),32);
            tracep->chgBit(oldp+787,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__data_reg));
            tracep->chgIData(oldp+788,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__i),32);
            tracep->chgBit(oldp+789,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__data_reg));
            tracep->chgIData(oldp+790,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__i),32);
            tracep->chgBit(oldp+791,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__data_reg));
            tracep->chgIData(oldp+792,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__i),32);
            tracep->chgBit(oldp+793,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__data_reg));
            tracep->chgIData(oldp+794,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__i),32);
            tracep->chgBit(oldp+795,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__data_reg));
            tracep->chgIData(oldp+796,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__i),32);
            tracep->chgBit(oldp+797,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__data_reg));
            tracep->chgIData(oldp+798,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__i),32);
            tracep->chgBit(oldp+799,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__data_reg));
            tracep->chgIData(oldp+800,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__i),32);
            tracep->chgBit(oldp+801,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__data_reg));
            tracep->chgIData(oldp+802,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__i),32);
            tracep->chgBit(oldp+803,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__data_reg));
            tracep->chgIData(oldp+804,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__i),32);
            tracep->chgBit(oldp+805,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__data_reg));
            tracep->chgIData(oldp+806,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__i),32);
            tracep->chgBit(oldp+807,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__data_reg));
            tracep->chgIData(oldp+808,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__i),32);
            tracep->chgBit(oldp+809,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__data_reg));
            tracep->chgIData(oldp+810,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__i),32);
            tracep->chgBit(oldp+811,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__data_reg));
            tracep->chgIData(oldp+812,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__i),32);
            tracep->chgBit(oldp+813,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__data_reg));
            tracep->chgIData(oldp+814,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__i),32);
            tracep->chgBit(oldp+815,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__data_reg));
            tracep->chgIData(oldp+816,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__i),32);
            tracep->chgBit(oldp+817,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__data_reg));
            tracep->chgIData(oldp+818,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__i),32);
            tracep->chgCData(oldp+819,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
            tracep->chgCData(oldp+820,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),4);
            tracep->chgCData(oldp+821,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
            tracep->chgBit(oldp+822,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
            tracep->chgBit(oldp+823,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
        }
        if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity
                          [1U] | vlSelf->__Vm_traceActivity
                          [2U]) | vlSelf->__Vm_traceActivity
                         [3U]))) {
            __Vtemp19880[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
            __Vtemp19880[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                        >> 0x20U));
            __Vtemp19880[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
            __Vtemp19880[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                        >> 0x20U));
            __Vtemp19880[4U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
            __Vtemp19880[5U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                        >> 0x20U));
            __Vtemp19880[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U]));
            __Vtemp19880[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U]) >> 0x20U));
            __Vtemp19880[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [4U] ^ 
                                            ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                              ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                              : 0x8000000000000000ULL))
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U]));
            __Vtemp19880[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [4U] ^ 
                                             ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                               ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                               : 0x8000000000000000ULL))
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U]) >> 0x20U));
            tracep->chgWData(oldp+824,(__Vtemp19880),320);
            tracep->chgQData(oldp+834,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [4U] ^ 
                                            ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                              ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                              : 0x8000000000000000ULL))
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U])),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+836,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1),120);
            tracep->chgIData(oldp+840,((0xffffffU & 
                                        vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U])),24);
            tracep->chgIData(oldp+841,((0xffffffU & 
                                        ((vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                          << 8U) | 
                                         (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U] 
                                          >> 0x18U)))),24);
            tracep->chgIData(oldp+842,((0xffffffU & 
                                        ((vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                          << 0x10U) 
                                         | (vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U] 
                                            >> 0x10U)))),24);
            tracep->chgIData(oldp+843,((vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U] 
                                        >> 8U)),24);
            tracep->chgIData(oldp+844,((0xffffffU & 
                                        vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[3U])),24);
            tracep->chgIData(oldp+845,(vlSelf->ascon_top__DOT__mux_1st_x0),24);
            tracep->chgIData(oldp+846,(vlSelf->ascon_top__DOT__mux_1st_x1),24);
            tracep->chgIData(oldp+847,(vlSelf->ascon_top__DOT__mux_1st_x3),24);
            tracep->chgIData(oldp+848,(vlSelf->ascon_top__DOT__mux_1st_x4),24);
            tracep->chgIData(oldp+849,(vlSelf->ascon_top__DOT__sbox_input[0]),20);
            tracep->chgIData(oldp+850,(vlSelf->ascon_top__DOT__sbox_input[1]),20);
            tracep->chgIData(oldp+851,(vlSelf->ascon_top__DOT__sbox_input[2]),20);
            tracep->chgIData(oldp+852,(vlSelf->ascon_top__DOT__sbox_input[3]),20);
            tracep->chgIData(oldp+853,(vlSelf->ascon_top__DOT__sbox_input[4]),20);
            tracep->chgIData(oldp+854,(vlSelf->ascon_top__DOT__sbox_input[5]),20);
            tracep->chgIData(oldp+855,(vlSelf->ascon_top__DOT__sbox_output[0]),20);
            tracep->chgIData(oldp+856,(vlSelf->ascon_top__DOT__sbox_output[1]),20);
            tracep->chgIData(oldp+857,(vlSelf->ascon_top__DOT__sbox_output[2]),20);
            tracep->chgIData(oldp+858,(vlSelf->ascon_top__DOT__sbox_output[3]),20);
            tracep->chgIData(oldp+859,(vlSelf->ascon_top__DOT__sbox_output[4]),20);
            tracep->chgIData(oldp+860,(vlSelf->ascon_top__DOT__sbox_output[5]),20);
            tracep->chgWData(oldp+861,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
            tracep->chgQData(oldp+871,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
            tracep->chgQData(oldp+873,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
            tracep->chgQData(oldp+875,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
            tracep->chgQData(oldp+877,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
            tracep->chgQData(oldp+879,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
            tracep->chgIData(oldp+881,(vlSelf->ascon_top__DOT__unnamedblk1__DOT__p),32);
            tracep->chgQData(oldp+882,(vlSelf->ascon_top__DOT__state_reg__DOT__state[0]),64);
            tracep->chgQData(oldp+884,(vlSelf->ascon_top__DOT__state_reg__DOT__state[1]),64);
            tracep->chgQData(oldp+886,(vlSelf->ascon_top__DOT__state_reg__DOT__state[2]),64);
            tracep->chgQData(oldp+888,(vlSelf->ascon_top__DOT__state_reg__DOT__state[3]),64);
            tracep->chgQData(oldp+890,(vlSelf->ascon_top__DOT__state_reg__DOT__state[4]),64);
            tracep->chgIData(oldp+892,(vlSelf->ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
            tracep->chgCData(oldp+893,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x0)),6);
            tracep->chgCData(oldp+894,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x1)),6);
            tracep->chgCData(oldp+895,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x3)),6);
            tracep->chgCData(oldp+896,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x4)),6);
            tracep->chgIData(oldp+897,(vlSelf->ascon_top__DOT__sbox_input
                                       [0U]),20);
            tracep->chgIData(oldp+898,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                         [4U] << 0x10U) 
                                        | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                            [3U] << 0xcU) 
                                           | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                               [2U] 
                                               << 8U) 
                                              | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                  [1U] 
                                                  << 4U) 
                                                 | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                 [0U]))))),20);
            tracep->chgCData(oldp+899,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),4);
            tracep->chgCData(oldp+900,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),4);
            tracep->chgCData(oldp+901,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),4);
            tracep->chgCData(oldp+902,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),4);
            tracep->chgCData(oldp+903,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),4);
            tracep->chgCData(oldp+904,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [0U])),4);
            tracep->chgCData(oldp+905,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+906,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+907,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+908,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [1U])),4);
            tracep->chgCData(oldp+909,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+910,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+911,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+912,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [2U])),4);
            tracep->chgCData(oldp+913,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+914,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+915,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+916,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [3U])),4);
            tracep->chgCData(oldp+917,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+918,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+919,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+920,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                        [4U])),4);
            tracep->chgCData(oldp+921,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+922,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+923,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+924,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),4);
            tracep->chgCData(oldp+925,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),4);
            tracep->chgCData(oldp+926,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),4);
            tracep->chgCData(oldp+927,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),4);
            tracep->chgCData(oldp+928,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),4);
            tracep->chgIData(oldp+929,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+930,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
            tracep->chgIData(oldp+931,(vlSelf->ascon_top__DOT__sbox_input
                                       [1U]),20);
            tracep->chgIData(oldp+932,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                         [4U] << 0x10U) 
                                        | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                            [3U] << 0xcU) 
                                           | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                               [2U] 
                                               << 8U) 
                                              | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                  [1U] 
                                                  << 4U) 
                                                 | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                 [0U]))))),20);
            tracep->chgCData(oldp+933,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0]),4);
            tracep->chgCData(oldp+934,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1]),4);
            tracep->chgCData(oldp+935,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2]),4);
            tracep->chgCData(oldp+936,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3]),4);
            tracep->chgCData(oldp+937,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4]),4);
            tracep->chgCData(oldp+938,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                        [0U])),4);
            tracep->chgCData(oldp+939,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+940,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+941,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+942,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                        [1U])),4);
            tracep->chgCData(oldp+943,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+944,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+945,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+946,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                        [2U])),4);
            tracep->chgCData(oldp+947,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+948,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+949,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+950,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                        [3U])),4);
            tracep->chgCData(oldp+951,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+952,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+953,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+954,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                        [4U])),4);
            tracep->chgCData(oldp+955,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+956,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+957,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+958,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0]),4);
            tracep->chgCData(oldp+959,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1]),4);
            tracep->chgCData(oldp+960,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2]),4);
            tracep->chgCData(oldp+961,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3]),4);
            tracep->chgCData(oldp+962,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4]),4);
            tracep->chgIData(oldp+963,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+964,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
            tracep->chgIData(oldp+965,(vlSelf->ascon_top__DOT__sbox_input
                                       [2U]),20);
            tracep->chgIData(oldp+966,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                         [4U] << 0x10U) 
                                        | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                            [3U] << 0xcU) 
                                           | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                               [2U] 
                                               << 8U) 
                                              | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                  [1U] 
                                                  << 4U) 
                                                 | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                 [0U]))))),20);
            tracep->chgCData(oldp+967,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0]),4);
            tracep->chgCData(oldp+968,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1]),4);
            tracep->chgCData(oldp+969,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2]),4);
            tracep->chgCData(oldp+970,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3]),4);
            tracep->chgCData(oldp+971,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4]),4);
            tracep->chgCData(oldp+972,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                        [0U])),4);
            tracep->chgCData(oldp+973,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+974,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+975,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [0U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+976,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                        [1U])),4);
            tracep->chgCData(oldp+977,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+978,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+979,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [1U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+980,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                        [2U])),4);
            tracep->chgCData(oldp+981,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+982,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+983,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [2U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+984,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                        [3U])),4);
            tracep->chgCData(oldp+985,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+986,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+987,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [3U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+988,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                        [4U])),4);
            tracep->chgCData(oldp+989,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 4U))),4);
            tracep->chgCData(oldp+990,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 8U))),4);
            tracep->chgCData(oldp+991,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                [4U] 
                                                >> 0xcU))),4);
            tracep->chgCData(oldp+992,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0]),4);
            tracep->chgCData(oldp+993,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1]),4);
            tracep->chgCData(oldp+994,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2]),4);
            tracep->chgCData(oldp+995,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3]),4);
            tracep->chgCData(oldp+996,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4]),4);
            tracep->chgIData(oldp+997,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+998,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
            tracep->chgIData(oldp+999,(vlSelf->ascon_top__DOT__sbox_input
                                       [3U]),20);
            tracep->chgIData(oldp+1000,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1001,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0]),4);
            tracep->chgCData(oldp+1002,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1]),4);
            tracep->chgCData(oldp+1003,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2]),4);
            tracep->chgCData(oldp+1004,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3]),4);
            tracep->chgCData(oldp+1005,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4]),4);
            tracep->chgCData(oldp+1006,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U])),4);
            tracep->chgCData(oldp+1007,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1008,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1009,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1010,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U])),4);
            tracep->chgCData(oldp+1011,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1012,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1013,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1014,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U])),4);
            tracep->chgCData(oldp+1015,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1016,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1017,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1018,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U])),4);
            tracep->chgCData(oldp+1019,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1020,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1021,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1022,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U])),4);
            tracep->chgCData(oldp+1023,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1024,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1025,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1026,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0]),4);
            tracep->chgCData(oldp+1027,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1]),4);
            tracep->chgCData(oldp+1028,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[2]),4);
            tracep->chgCData(oldp+1029,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[3]),4);
            tracep->chgCData(oldp+1030,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[4]),4);
            tracep->chgIData(oldp+1031,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+1032,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
            tracep->chgIData(oldp+1033,(vlSelf->ascon_top__DOT__sbox_input
                                        [4U]),20);
            tracep->chgIData(oldp+1034,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1035,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0]),4);
            tracep->chgCData(oldp+1036,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1]),4);
            tracep->chgCData(oldp+1037,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2]),4);
            tracep->chgCData(oldp+1038,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3]),4);
            tracep->chgCData(oldp+1039,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4]),4);
            tracep->chgCData(oldp+1040,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U])),4);
            tracep->chgCData(oldp+1041,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1042,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1043,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1044,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U])),4);
            tracep->chgCData(oldp+1045,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1046,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1047,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1048,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U])),4);
            tracep->chgCData(oldp+1049,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1050,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1051,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1052,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U])),4);
            tracep->chgCData(oldp+1053,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1054,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1055,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1056,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U])),4);
            tracep->chgCData(oldp+1057,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1058,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1059,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1060,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[0]),4);
            tracep->chgCData(oldp+1061,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[1]),4);
            tracep->chgCData(oldp+1062,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[2]),4);
            tracep->chgCData(oldp+1063,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[3]),4);
            tracep->chgCData(oldp+1064,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[4]),4);
            tracep->chgIData(oldp+1065,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+1066,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
            tracep->chgIData(oldp+1067,(vlSelf->ascon_top__DOT__sbox_input
                                        [5U]),20);
            tracep->chgIData(oldp+1068,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1069,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0]),4);
            tracep->chgCData(oldp+1070,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1]),4);
            tracep->chgCData(oldp+1071,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2]),4);
            tracep->chgCData(oldp+1072,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3]),4);
            tracep->chgCData(oldp+1073,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4]),4);
            tracep->chgCData(oldp+1074,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U])),4);
            tracep->chgCData(oldp+1075,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1076,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1077,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1078,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U])),4);
            tracep->chgCData(oldp+1079,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1080,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1081,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1082,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U])),4);
            tracep->chgCData(oldp+1083,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1084,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1085,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1086,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U])),4);
            tracep->chgCData(oldp+1087,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1088,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1089,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1090,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U])),4);
            tracep->chgCData(oldp+1091,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1092,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1093,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1094,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[0]),4);
            tracep->chgCData(oldp+1095,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[1]),4);
            tracep->chgCData(oldp+1096,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[2]),4);
            tracep->chgCData(oldp+1097,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[3]),4);
            tracep->chgCData(oldp+1098,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[4]),4);
            tracep->chgIData(oldp+1099,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgCData(oldp+1100,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),4);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+1101,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
            tracep->chgQData(oldp+1103,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
            tracep->chgQData(oldp+1105,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
            tracep->chgQData(oldp+1107,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
            tracep->chgQData(oldp+1109,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+1111,(vlSelf->ascon_top__DOT__write_en));
            tracep->chgBit(oldp+1112,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
            tracep->chgBit(oldp+1113,(vlSelf->ascon_top__DOT__sel_init_load));
            tracep->chgBit(oldp+1114,(vlSelf->ascon_top__DOT__sel_padding));
            tracep->chgBit(oldp+1115,(vlSelf->ascon_top__DOT__sel_absorb_data));
            tracep->chgWData(oldp+1116,(vlSelf->ascon_top__DOT__state_reg_in),320);
            tracep->chgWData(oldp+1126,(vlSelf->ascon_top__DOT__data_in_padded),128);
            tracep->chgWData(oldp+1130,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
            tracep->chgIData(oldp+1134,(vlSelf->ascon_top__DOT__unnamedblk5__DOT__i),32);
            tracep->chgBit(oldp+1135,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
            tracep->chgCData(oldp+1136,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
            tracep->chgBit(oldp+1137,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
            tracep->chgBit(oldp+1138,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
            tracep->chgBit(oldp+1139,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
            tracep->chgBit(oldp+1140,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
            tracep->chgQData(oldp+1141,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0]),64);
            tracep->chgQData(oldp+1143,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1]),64);
            tracep->chgQData(oldp+1145,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2]),64);
            tracep->chgQData(oldp+1147,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3]),64);
            tracep->chgQData(oldp+1149,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgWData(oldp+1151,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1),120);
            tracep->chgIData(oldp+1155,(vlSelf->ascon_top__DOT__recombine_shares),30);
            tracep->chgIData(oldp+1156,(vlSelf->ascon_top__DOT__mux_1st_x2),24);
            tracep->chgWData(oldp+1157,(vlSelf->ascon_top__DOT__shares_out),120);
            tracep->chgIData(oldp+1161,(vlSelf->ascon_top__DOT__affine_layer_in[0]),30);
            tracep->chgIData(oldp+1162,(vlSelf->ascon_top__DOT__affine_layer_in[1]),30);
            tracep->chgIData(oldp+1163,(vlSelf->ascon_top__DOT__affine_layer_in[2]),30);
            tracep->chgIData(oldp+1164,(vlSelf->ascon_top__DOT__affine_layer_in[3]),30);
            tracep->chgIData(oldp+1165,(vlSelf->ascon_top__DOT__affine_layer_out[0]),30);
            tracep->chgIData(oldp+1166,(vlSelf->ascon_top__DOT__affine_layer_out[1]),30);
            tracep->chgIData(oldp+1167,(vlSelf->ascon_top__DOT__affine_layer_out[2]),30);
            tracep->chgIData(oldp+1168,(vlSelf->ascon_top__DOT__affine_layer_out[3]),30);
            tracep->chgIData(oldp+1169,(vlSelf->ascon_top__DOT__next_sbox_input[0]),20);
            tracep->chgIData(oldp+1170,(vlSelf->ascon_top__DOT__next_sbox_input[1]),20);
            tracep->chgIData(oldp+1171,(vlSelf->ascon_top__DOT__next_sbox_input[2]),20);
            tracep->chgIData(oldp+1172,(vlSelf->ascon_top__DOT__next_sbox_input[3]),20);
            tracep->chgIData(oldp+1173,(vlSelf->ascon_top__DOT__next_sbox_input[4]),20);
            tracep->chgIData(oldp+1174,(vlSelf->ascon_top__DOT__next_sbox_input[5]),20);
            tracep->chgIData(oldp+1175,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),20);
            tracep->chgIData(oldp+1176,(vlSelf->ascon_top__DOT__sbox_output_unmasked[1]),20);
            tracep->chgIData(oldp+1177,(vlSelf->ascon_top__DOT__sbox_output_unmasked[2]),20);
            tracep->chgIData(oldp+1178,(vlSelf->ascon_top__DOT__sbox_output_unmasked[3]),20);
            tracep->chgIData(oldp+1179,(vlSelf->ascon_top__DOT__sbox_output_unmasked[4]),20);
            tracep->chgIData(oldp+1180,(vlSelf->ascon_top__DOT__sbox_output_unmasked[5]),20);
            tracep->chgIData(oldp+1181,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),20);
            tracep->chgIData(oldp+1182,(vlSelf->ascon_top__DOT__mux_sbox_out[1]),20);
            tracep->chgIData(oldp+1183,(vlSelf->ascon_top__DOT__mux_sbox_out[2]),20);
            tracep->chgIData(oldp+1184,(vlSelf->ascon_top__DOT__mux_sbox_out[3]),20);
            tracep->chgIData(oldp+1185,(vlSelf->ascon_top__DOT__mux_sbox_out[4]),20);
            tracep->chgIData(oldp+1186,(vlSelf->ascon_top__DOT__mux_sbox_out[5]),20);
            tracep->chgIData(oldp+1187,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),30);
            tracep->chgIData(oldp+1188,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),30);
            tracep->chgIData(oldp+1189,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),30);
            tracep->chgIData(oldp+1190,(vlSelf->ascon_top__DOT__affine_layer2nd_in[3]),30);
            tracep->chgIData(oldp+1191,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),30);
            tracep->chgIData(oldp+1192,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),30);
            tracep->chgIData(oldp+1193,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),30);
            tracep->chgIData(oldp+1194,(vlSelf->ascon_top__DOT__affine_layer2nd_out[3]),30);
            tracep->chgCData(oldp+1195,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [0U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+1196,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1197,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1198,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1199,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1200,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1201,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1202,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1203,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1204,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1205,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1206,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1207,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1208,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1209,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1210,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1211,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1212,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1213,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1214,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1215,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1216,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1217,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1218,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1219,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1220,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1221,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1222,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1223,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1224,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),4);
            tracep->chgCData(oldp+1225,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),4);
            tracep->chgQData(oldp+1226,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
            tracep->chgQData(oldp+1228,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
            tracep->chgCData(oldp+1230,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x2)),6);
            tracep->chgQData(oldp+1231,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
            tracep->chgQData(oldp+1233,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
            tracep->chgQData(oldp+1235,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
            tracep->chgIData(oldp+1237,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),30);
            tracep->chgIData(oldp+1238,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1239,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),4);
            tracep->chgCData(oldp+1240,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1241,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1242,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1243,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),4);
            tracep->chgCData(oldp+1244,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1245,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1246,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1247,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),4);
            tracep->chgCData(oldp+1248,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1249,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1250,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1251,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),4);
            tracep->chgCData(oldp+1252,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1253,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1254,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1255,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),4);
            tracep->chgCData(oldp+1256,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1257,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1258,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1259,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
            tracep->chgCData(oldp+1260,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
            tracep->chgCData(oldp+1261,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
            tracep->chgCData(oldp+1262,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
            tracep->chgCData(oldp+1263,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
            tracep->chgCData(oldp+1264,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
            tracep->chgCData(oldp+1265,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
            tracep->chgCData(oldp+1266,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
            tracep->chgCData(oldp+1267,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
            tracep->chgIData(oldp+1268,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1269,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),4);
            tracep->chgCData(oldp+1270,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1271,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1272,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1273,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),4);
            tracep->chgCData(oldp+1274,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1275,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1276,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1277,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),4);
            tracep->chgCData(oldp+1278,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1279,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1280,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1281,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),4);
            tracep->chgCData(oldp+1282,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1283,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1284,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1285,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),4);
            tracep->chgCData(oldp+1286,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1287,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1288,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1289,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
            tracep->chgCData(oldp+1290,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
            tracep->chgCData(oldp+1291,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
            tracep->chgCData(oldp+1292,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
            tracep->chgCData(oldp+1293,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
            tracep->chgCData(oldp+1294,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
            tracep->chgCData(oldp+1295,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
            tracep->chgCData(oldp+1296,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
            tracep->chgCData(oldp+1297,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
            tracep->chgIData(oldp+1298,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1299,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),4);
            tracep->chgCData(oldp+1300,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1301,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1302,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1303,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),4);
            tracep->chgCData(oldp+1304,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1305,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1306,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1307,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),4);
            tracep->chgCData(oldp+1308,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1309,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1310,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1311,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),4);
            tracep->chgCData(oldp+1312,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1313,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1314,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1315,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),4);
            tracep->chgCData(oldp+1316,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1317,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1318,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1319,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
            tracep->chgCData(oldp+1320,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
            tracep->chgCData(oldp+1321,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
            tracep->chgCData(oldp+1322,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
            tracep->chgCData(oldp+1323,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
            tracep->chgCData(oldp+1324,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
            tracep->chgCData(oldp+1325,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
            tracep->chgCData(oldp+1326,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
            tracep->chgCData(oldp+1327,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
            tracep->chgIData(oldp+1328,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1329,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),4);
            tracep->chgCData(oldp+1330,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1331,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1332,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1333,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),4);
            tracep->chgCData(oldp+1334,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1335,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1336,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1337,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),4);
            tracep->chgCData(oldp+1338,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1339,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1340,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1341,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),4);
            tracep->chgCData(oldp+1342,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1343,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1344,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1345,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),4);
            tracep->chgCData(oldp+1346,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1347,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1348,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1349,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
            tracep->chgCData(oldp+1350,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
            tracep->chgCData(oldp+1351,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
            tracep->chgCData(oldp+1352,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
            tracep->chgCData(oldp+1353,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
            tracep->chgCData(oldp+1354,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
            tracep->chgCData(oldp+1355,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
            tracep->chgCData(oldp+1356,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
            tracep->chgCData(oldp+1357,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
            tracep->chgIData(oldp+1358,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1359,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),4);
            tracep->chgCData(oldp+1360,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1361,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1362,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1363,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),4);
            tracep->chgCData(oldp+1364,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1365,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1366,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1367,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),4);
            tracep->chgCData(oldp+1368,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1369,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1370,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1371,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),4);
            tracep->chgCData(oldp+1372,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1373,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1374,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1375,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),4);
            tracep->chgCData(oldp+1376,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1377,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1378,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1379,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
            tracep->chgCData(oldp+1380,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
            tracep->chgCData(oldp+1381,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
            tracep->chgCData(oldp+1382,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
            tracep->chgCData(oldp+1383,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
            tracep->chgCData(oldp+1384,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
            tracep->chgCData(oldp+1385,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
            tracep->chgCData(oldp+1386,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
            tracep->chgCData(oldp+1387,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
            tracep->chgIData(oldp+1388,(((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                          [4U] << 0x10U) 
                                         | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                             [3U] << 0xcU) 
                                            | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                [2U] 
                                                << 8U) 
                                               | ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                   [1U] 
                                                   << 4U) 
                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                  [0U]))))),20);
            tracep->chgCData(oldp+1389,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U])),4);
            tracep->chgCData(oldp+1390,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1391,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1392,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [0U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1393,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U])),4);
            tracep->chgCData(oldp+1394,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1395,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1396,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [1U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1397,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U])),4);
            tracep->chgCData(oldp+1398,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1399,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1400,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [2U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1401,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U])),4);
            tracep->chgCData(oldp+1402,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1403,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1404,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [3U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1405,((0xfU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U])),4);
            tracep->chgCData(oldp+1406,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+1407,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 8U))),4);
            tracep->chgCData(oldp+1408,((0xfU & (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                 [4U] 
                                                 >> 0xcU))),4);
            tracep->chgCData(oldp+1409,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0]),4);
            tracep->chgCData(oldp+1410,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1]),4);
            tracep->chgCData(oldp+1411,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2]),4);
            tracep->chgCData(oldp+1412,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3]),4);
            tracep->chgCData(oldp+1413,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4]),4);
            tracep->chgCData(oldp+1414,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),4);
            tracep->chgCData(oldp+1415,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),4);
            tracep->chgCData(oldp+1416,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),4);
            tracep->chgCData(oldp+1417,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),4);
        }
        tracep->chgBit(oldp+1418,(vlSelf->clk));
        tracep->chgBit(oldp+1419,(vlSelf->reset_n));
        tracep->chgBit(oldp+1420,(vlSelf->start));
        tracep->chgQData(oldp+1421,(vlSelf->key1),64);
        tracep->chgQData(oldp+1423,(vlSelf->key2),64);
        tracep->chgBit(oldp+1425,(vlSelf->key_valid));
        tracep->chgQData(oldp+1426,(vlSelf->nonce1),64);
        tracep->chgQData(oldp+1428,(vlSelf->nonce2),64);
        tracep->chgQData(oldp+1430,(vlSelf->initialVector),64);
        tracep->chgWData(oldp+1432,(vlSelf->data_in),128);
        tracep->chgBit(oldp+1436,(vlSelf->valid_data_in));
        tracep->chgBit(oldp+1437,(vlSelf->last_block));
        tracep->chgCData(oldp+1438,(vlSelf->valid_bytes),5);
        tracep->chgBit(oldp+1439,(vlSelf->EOT));
        tracep->chgWData(oldp+1440,(vlSelf->state_reg_out),320);
        tracep->chgBit(oldp+1450,(vlSelf->ciphertext_valid));
        tracep->chgWData(oldp+1451,(vlSelf->ciphertext),128);
        tracep->chgBit(oldp+1455,(vlSelf->done));
        tracep->chgBit(oldp+1456,(vlSelf->ready_tag));
        tracep->chgQData(oldp+1457,(vlSelf->tag1),64);
        tracep->chgQData(oldp+1459,(vlSelf->tag2),64);
        tracep->chgBit(oldp+1461,(vlSelf->ready_for_data));
        tracep->chgBit(oldp+1462,(vlSelf->read_data));
        tracep->chgBit(oldp+1463,(vlSelf->debug_extra_padding_ff));
        tracep->chgCData(oldp+1464,(vlSelf->debug_bitcounter),4);
        tracep->chgCData(oldp+1465,(vlSelf->debug_roundcounter),4);
        tracep->chgCData(oldp+1466,(vlSelf->debug_state),5);
        tracep->chgQData(oldp+1467,(vlSelf->debug_state_0),64);
        tracep->chgQData(oldp+1469,(vlSelf->debug_state_1),64);
        tracep->chgQData(oldp+1471,(vlSelf->debug_state_2),64);
        tracep->chgQData(oldp+1473,(vlSelf->debug_state_3),64);
        tracep->chgQData(oldp+1475,(vlSelf->debug_state_4),64);
        tracep->chgQData(oldp+1477,(vlSelf->debug_round_state_0),64);
        tracep->chgQData(oldp+1479,(vlSelf->debug_round_state_1),64);
        tracep->chgQData(oldp+1481,(vlSelf->debug_round_state_2),64);
        tracep->chgQData(oldp+1483,(vlSelf->debug_round_state_3),64);
        tracep->chgQData(oldp+1485,(vlSelf->debug_round_state_4),64);
        tracep->chgQData(oldp+1487,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->chgQData(oldp+1489,(vlSelf->debug_linear_diffusion_state4),64);
        tracep->chgIData(oldp+1491,(((0x3f000000U & 
                                      (vlSelf->ascon_top__DOT__mux_1st_x4 
                                       << 0x18U)) | 
                                     ((0xfc0000U & 
                                       (vlSelf->ascon_top__DOT__mux_1st_x3 
                                        << 0x12U)) 
                                      | ((0x3f000U 
                                          & (vlSelf->ascon_top__DOT__mux_1st_x2 
                                             << 0xcU)) 
                                         | ((0xfc0U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x1 
                                                << 6U)) 
                                            | (0x3fU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x0)))))),30);
        __Vtemp19884[0U] = (IData)(vlSelf->initialVector);
        __Vtemp19884[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp19884[2U] = (IData)(vlSelf->key1);
        __Vtemp19884[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp19884[4U] = (IData)(vlSelf->key2);
        __Vtemp19884[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp19884[6U] = (IData)(vlSelf->nonce1);
        __Vtemp19884[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp19884[8U] = (IData)(vlSelf->nonce2);
        __Vtemp19884[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->chgWData(oldp+1492,(__Vtemp19884),320);
        tracep->chgQData(oldp+1502,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [3U])),64);
        tracep->chgCData(oldp+1504,((0x3fU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                               ? (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [1U] 
                                                  >> 0xcU)
                                               : (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [1U] 
                                                   >> 0xcU))))),6);
        tracep->chgCData(oldp+1505,((0x3fU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                               ? (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [2U] 
                                                  >> 0xcU)
                                               : (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [2U] 
                                                   >> 0xcU))))),6);
        tracep->chgCData(oldp+1506,((0x3fU & ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                               ? (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [3U] 
                                                  >> 0xcU)
                                               : (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [3U] 
                                                   >> 0xcU))))),6);
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
    }
}
