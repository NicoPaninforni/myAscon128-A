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

extern const VlWide<10>/*319:0*/ Vascon_top__ConstPool__CONST_3c9d791d_0;

void Vascon_top___024root__traceChgSub0(Vascon_top___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlWide<10>/*319:0*/ __Vtemp23210;
    VlWide<3>/*95:0*/ __Vtemp23211;
    VlWide<10>/*319:0*/ __Vtemp23215;
    VlWide<10>/*319:0*/ __Vtemp23879;
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
            tracep->chgWData(oldp+10,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__0__KET____DOT__mask),386);
            tracep->chgWData(oldp+23,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__1__KET____DOT__mask),386);
            tracep->chgWData(oldp+36,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__2__KET____DOT__mask),386);
            tracep->chgWData(oldp+49,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__3__KET____DOT__mask),386);
            tracep->chgWData(oldp+62,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__4__KET____DOT__mask),386);
            tracep->chgWData(oldp+75,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__5__KET____DOT__mask),386);
            tracep->chgWData(oldp+88,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__6__KET____DOT__mask),386);
            tracep->chgWData(oldp+101,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__7__KET____DOT__mask),386);
            tracep->chgWData(oldp+114,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__8__KET____DOT__mask),386);
            tracep->chgWData(oldp+127,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__9__KET____DOT__mask),386);
            tracep->chgWData(oldp+140,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__10__KET____DOT__mask),386);
            tracep->chgWData(oldp+153,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__11__KET____DOT__mask),386);
            tracep->chgWData(oldp+166,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__12__KET____DOT__mask),386);
            tracep->chgWData(oldp+179,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__13__KET____DOT__mask),386);
            tracep->chgWData(oldp+192,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__14__KET____DOT__mask),386);
            tracep->chgWData(oldp+205,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__15__KET____DOT__mask),386);
            tracep->chgWData(oldp+218,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__16__KET____DOT__mask),386);
            tracep->chgWData(oldp+231,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__17__KET____DOT__mask),386);
            tracep->chgWData(oldp+244,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__18__KET____DOT__mask),386);
            tracep->chgWData(oldp+257,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__19__KET____DOT__mask),386);
            tracep->chgWData(oldp+270,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__20__KET____DOT__mask),386);
            tracep->chgWData(oldp+283,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__21__KET____DOT__mask),386);
            tracep->chgWData(oldp+296,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__22__KET____DOT__mask),386);
            tracep->chgWData(oldp+309,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__23__KET____DOT__mask),386);
            tracep->chgWData(oldp+322,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__24__KET____DOT__mask),386);
            tracep->chgWData(oldp+335,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__25__KET____DOT__mask),386);
            tracep->chgWData(oldp+348,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__26__KET____DOT__mask),386);
            tracep->chgWData(oldp+361,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__27__KET____DOT__mask),386);
            tracep->chgWData(oldp+374,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__28__KET____DOT__mask),386);
            tracep->chgWData(oldp+387,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__29__KET____DOT__mask),386);
            tracep->chgWData(oldp+400,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_state__BRA__30__KET____DOT__mask),386);
            tracep->chgWData(oldp+413,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__0__KET____DOT__mask),386);
            tracep->chgWData(oldp+426,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__1__KET____DOT__mask),386);
            tracep->chgWData(oldp+439,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__2__KET____DOT__mask),386);
            tracep->chgWData(oldp+452,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__3__KET____DOT__mask),386);
            tracep->chgWData(oldp+465,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__4__KET____DOT__mask),386);
            tracep->chgWData(oldp+478,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__5__KET____DOT__mask),386);
            tracep->chgWData(oldp+491,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__6__KET____DOT__mask),386);
            tracep->chgWData(oldp+504,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__7__KET____DOT__mask),386);
            tracep->chgWData(oldp+517,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__8__KET____DOT__mask),386);
            tracep->chgWData(oldp+530,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__9__KET____DOT__mask),386);
            tracep->chgWData(oldp+543,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__10__KET____DOT__mask),386);
            tracep->chgWData(oldp+556,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__11__KET____DOT__mask),386);
            tracep->chgWData(oldp+569,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__12__KET____DOT__mask),386);
            tracep->chgWData(oldp+582,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__13__KET____DOT__mask),386);
            tracep->chgWData(oldp+595,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__14__KET____DOT__mask),386);
            tracep->chgWData(oldp+608,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__15__KET____DOT__mask),386);
            tracep->chgWData(oldp+621,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__16__KET____DOT__mask),386);
            tracep->chgWData(oldp+634,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__17__KET____DOT__mask),386);
            tracep->chgWData(oldp+647,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__18__KET____DOT__mask),386);
            tracep->chgWData(oldp+660,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__19__KET____DOT__mask),386);
            tracep->chgWData(oldp+673,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__20__KET____DOT__mask),386);
            tracep->chgWData(oldp+686,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__21__KET____DOT__mask),386);
            tracep->chgWData(oldp+699,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__22__KET____DOT__mask),386);
            tracep->chgWData(oldp+712,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__23__KET____DOT__mask),386);
            tracep->chgWData(oldp+725,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__24__KET____DOT__mask),386);
            tracep->chgWData(oldp+738,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__25__KET____DOT__mask),386);
            tracep->chgWData(oldp+751,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__26__KET____DOT__mask),386);
            tracep->chgWData(oldp+764,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__27__KET____DOT__mask),386);
            tracep->chgWData(oldp+777,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__28__KET____DOT__mask),386);
            tracep->chgWData(oldp+790,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__29__KET____DOT__mask),386);
            tracep->chgWData(oldp+803,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__30__KET____DOT__mask),386);
            tracep->chgWData(oldp+816,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__31__KET____DOT__mask),386);
            tracep->chgWData(oldp+829,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__32__KET____DOT__mask),386);
            tracep->chgWData(oldp+842,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__33__KET____DOT__mask),386);
            tracep->chgWData(oldp+855,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__34__KET____DOT__mask),386);
            tracep->chgWData(oldp+868,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__35__KET____DOT__mask),386);
            tracep->chgWData(oldp+881,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__36__KET____DOT__mask),386);
            tracep->chgWData(oldp+894,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__37__KET____DOT__mask),386);
            tracep->chgWData(oldp+907,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__38__KET____DOT__mask),386);
            tracep->chgWData(oldp+920,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__39__KET____DOT__mask),386);
            tracep->chgWData(oldp+933,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__40__KET____DOT__mask),386);
            tracep->chgWData(oldp+946,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__41__KET____DOT__mask),386);
            tracep->chgWData(oldp+959,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__42__KET____DOT__mask),386);
            tracep->chgWData(oldp+972,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__43__KET____DOT__mask),386);
            tracep->chgWData(oldp+985,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__44__KET____DOT__mask),386);
            tracep->chgWData(oldp+998,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__45__KET____DOT__mask),386);
            tracep->chgWData(oldp+1011,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__46__KET____DOT__mask),386);
            tracep->chgWData(oldp+1024,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__47__KET____DOT__mask),386);
            tracep->chgWData(oldp+1037,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__48__KET____DOT__mask),386);
            tracep->chgWData(oldp+1050,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__49__KET____DOT__mask),386);
            tracep->chgWData(oldp+1063,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__50__KET____DOT__mask),386);
            tracep->chgWData(oldp+1076,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__51__KET____DOT__mask),386);
            tracep->chgWData(oldp+1089,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__52__KET____DOT__mask),386);
            tracep->chgWData(oldp+1102,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__53__KET____DOT__mask),386);
            tracep->chgWData(oldp+1115,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__54__KET____DOT__mask),386);
            tracep->chgWData(oldp+1128,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__55__KET____DOT__mask),386);
            tracep->chgWData(oldp+1141,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__56__KET____DOT__mask),386);
            tracep->chgWData(oldp+1154,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__57__KET____DOT__mask),386);
            tracep->chgWData(oldp+1167,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__58__KET____DOT__mask),386);
            tracep->chgWData(oldp+1180,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__59__KET____DOT__mask),386);
            tracep->chgWData(oldp+1193,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__60__KET____DOT__mask),386);
            tracep->chgWData(oldp+1206,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__61__KET____DOT__mask),386);
            tracep->chgWData(oldp+1219,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__62__KET____DOT__mask),386);
            tracep->chgWData(oldp+1232,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__63__KET____DOT__mask),386);
            tracep->chgWData(oldp+1245,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__64__KET____DOT__mask),386);
            tracep->chgWData(oldp+1258,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__65__KET____DOT__mask),386);
            tracep->chgWData(oldp+1271,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__66__KET____DOT__mask),386);
            tracep->chgWData(oldp+1284,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__67__KET____DOT__mask),386);
            tracep->chgWData(oldp+1297,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__68__KET____DOT__mask),386);
            tracep->chgWData(oldp+1310,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__69__KET____DOT__mask),386);
            tracep->chgWData(oldp+1323,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__70__KET____DOT__mask),386);
            tracep->chgWData(oldp+1336,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__71__KET____DOT__mask),386);
            tracep->chgWData(oldp+1349,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__72__KET____DOT__mask),386);
            tracep->chgWData(oldp+1362,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__73__KET____DOT__mask),386);
            tracep->chgWData(oldp+1375,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__74__KET____DOT__mask),386);
            tracep->chgWData(oldp+1388,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__75__KET____DOT__mask),386);
            tracep->chgWData(oldp+1401,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__76__KET____DOT__mask),386);
            tracep->chgWData(oldp+1414,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__77__KET____DOT__mask),386);
            tracep->chgWData(oldp+1427,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__78__KET____DOT__mask),386);
            tracep->chgWData(oldp+1440,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__79__KET____DOT__mask),386);
            tracep->chgWData(oldp+1453,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__80__KET____DOT__mask),386);
            tracep->chgWData(oldp+1466,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__81__KET____DOT__mask),386);
            tracep->chgWData(oldp+1479,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__82__KET____DOT__mask),386);
            tracep->chgWData(oldp+1492,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__83__KET____DOT__mask),386);
            tracep->chgWData(oldp+1505,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__84__KET____DOT__mask),386);
            tracep->chgWData(oldp+1518,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__85__KET____DOT__mask),386);
            tracep->chgWData(oldp+1531,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__86__KET____DOT__mask),386);
            tracep->chgWData(oldp+1544,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__87__KET____DOT__mask),386);
            tracep->chgWData(oldp+1557,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__88__KET____DOT__mask),386);
            tracep->chgWData(oldp+1570,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__89__KET____DOT__mask),386);
            tracep->chgWData(oldp+1583,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__90__KET____DOT__mask),386);
            tracep->chgWData(oldp+1596,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__91__KET____DOT__mask),386);
            tracep->chgWData(oldp+1609,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__92__KET____DOT__mask),386);
            tracep->chgWData(oldp+1622,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__93__KET____DOT__mask),386);
            tracep->chgWData(oldp+1635,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__94__KET____DOT__mask),386);
            tracep->chgWData(oldp+1648,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__95__KET____DOT__mask),386);
            tracep->chgWData(oldp+1661,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__96__KET____DOT__mask),386);
            tracep->chgWData(oldp+1674,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__97__KET____DOT__mask),386);
            tracep->chgWData(oldp+1687,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__98__KET____DOT__mask),386);
            tracep->chgWData(oldp+1700,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__99__KET____DOT__mask),386);
            tracep->chgWData(oldp+1713,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__100__KET____DOT__mask),386);
            tracep->chgWData(oldp+1726,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__101__KET____DOT__mask),386);
            tracep->chgWData(oldp+1739,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__102__KET____DOT__mask),386);
            tracep->chgWData(oldp+1752,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__103__KET____DOT__mask),386);
            tracep->chgWData(oldp+1765,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__104__KET____DOT__mask),386);
            tracep->chgWData(oldp+1778,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__105__KET____DOT__mask),386);
            tracep->chgWData(oldp+1791,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__106__KET____DOT__mask),386);
            tracep->chgWData(oldp+1804,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__107__KET____DOT__mask),386);
            tracep->chgWData(oldp+1817,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__108__KET____DOT__mask),386);
            tracep->chgWData(oldp+1830,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__109__KET____DOT__mask),386);
            tracep->chgWData(oldp+1843,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__110__KET____DOT__mask),386);
            tracep->chgWData(oldp+1856,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__111__KET____DOT__mask),386);
            tracep->chgWData(oldp+1869,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__112__KET____DOT__mask),386);
            tracep->chgWData(oldp+1882,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__113__KET____DOT__mask),386);
            tracep->chgWData(oldp+1895,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__114__KET____DOT__mask),386);
            tracep->chgWData(oldp+1908,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__115__KET____DOT__mask),386);
            tracep->chgWData(oldp+1921,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__116__KET____DOT__mask),386);
            tracep->chgWData(oldp+1934,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__117__KET____DOT__mask),386);
            tracep->chgWData(oldp+1947,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__118__KET____DOT__mask),386);
            tracep->chgWData(oldp+1960,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__119__KET____DOT__mask),386);
            tracep->chgWData(oldp+1973,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__120__KET____DOT__mask),386);
            tracep->chgWData(oldp+1986,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__121__KET____DOT__mask),386);
            tracep->chgWData(oldp+1999,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__122__KET____DOT__mask),386);
            tracep->chgWData(oldp+2012,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__123__KET____DOT__mask),386);
            tracep->chgWData(oldp+2025,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__124__KET____DOT__mask),386);
            tracep->chgWData(oldp+2038,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__125__KET____DOT__mask),386);
            tracep->chgWData(oldp+2051,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__126__KET____DOT__mask),386);
            tracep->chgWData(oldp+2064,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__127__KET____DOT__mask),386);
            tracep->chgWData(oldp+2077,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__128__KET____DOT__mask),386);
            tracep->chgWData(oldp+2090,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__129__KET____DOT__mask),386);
            tracep->chgWData(oldp+2103,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__130__KET____DOT__mask),386);
            tracep->chgWData(oldp+2116,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__131__KET____DOT__mask),386);
            tracep->chgWData(oldp+2129,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__132__KET____DOT__mask),386);
            tracep->chgWData(oldp+2142,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__133__KET____DOT__mask),386);
            tracep->chgWData(oldp+2155,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__134__KET____DOT__mask),386);
            tracep->chgWData(oldp+2168,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__135__KET____DOT__mask),386);
            tracep->chgWData(oldp+2181,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__136__KET____DOT__mask),386);
            tracep->chgWData(oldp+2194,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__137__KET____DOT__mask),386);
            tracep->chgWData(oldp+2207,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__138__KET____DOT__mask),386);
            tracep->chgWData(oldp+2220,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__139__KET____DOT__mask),386);
            tracep->chgWData(oldp+2233,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__140__KET____DOT__mask),386);
            tracep->chgWData(oldp+2246,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__141__KET____DOT__mask),386);
            tracep->chgWData(oldp+2259,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__142__KET____DOT__mask),386);
            tracep->chgWData(oldp+2272,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__143__KET____DOT__mask),386);
            tracep->chgWData(oldp+2285,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__144__KET____DOT__mask),386);
            tracep->chgWData(oldp+2298,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__145__KET____DOT__mask),386);
            tracep->chgWData(oldp+2311,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__146__KET____DOT__mask),386);
            tracep->chgWData(oldp+2324,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__147__KET____DOT__mask),386);
            tracep->chgWData(oldp+2337,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__148__KET____DOT__mask),386);
            tracep->chgWData(oldp+2350,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__149__KET____DOT__mask),386);
            tracep->chgWData(oldp+2363,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__150__KET____DOT__mask),386);
            tracep->chgWData(oldp+2376,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__151__KET____DOT__mask),386);
            tracep->chgWData(oldp+2389,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__152__KET____DOT__mask),386);
            tracep->chgWData(oldp+2402,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__153__KET____DOT__mask),386);
            tracep->chgWData(oldp+2415,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__154__KET____DOT__mask),386);
            tracep->chgWData(oldp+2428,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__155__KET____DOT__mask),386);
            tracep->chgWData(oldp+2441,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__156__KET____DOT__mask),386);
            tracep->chgWData(oldp+2454,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__157__KET____DOT__mask),386);
            tracep->chgWData(oldp+2467,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__158__KET____DOT__mask),386);
            tracep->chgWData(oldp+2480,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__159__KET____DOT__mask),386);
            tracep->chgWData(oldp+2493,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__160__KET____DOT__mask),386);
            tracep->chgWData(oldp+2506,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__161__KET____DOT__mask),386);
            tracep->chgWData(oldp+2519,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__162__KET____DOT__mask),386);
            tracep->chgWData(oldp+2532,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__163__KET____DOT__mask),386);
            tracep->chgWData(oldp+2545,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__164__KET____DOT__mask),386);
            tracep->chgWData(oldp+2558,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__165__KET____DOT__mask),386);
            tracep->chgWData(oldp+2571,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__166__KET____DOT__mask),386);
            tracep->chgWData(oldp+2584,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__167__KET____DOT__mask),386);
            tracep->chgWData(oldp+2597,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__168__KET____DOT__mask),386);
            tracep->chgWData(oldp+2610,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__169__KET____DOT__mask),386);
            tracep->chgWData(oldp+2623,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__170__KET____DOT__mask),386);
            tracep->chgWData(oldp+2636,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__171__KET____DOT__mask),386);
            tracep->chgWData(oldp+2649,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__172__KET____DOT__mask),386);
            tracep->chgWData(oldp+2662,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__173__KET____DOT__mask),386);
            tracep->chgWData(oldp+2675,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__174__KET____DOT__mask),386);
            tracep->chgWData(oldp+2688,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__175__KET____DOT__mask),386);
            tracep->chgWData(oldp+2701,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__176__KET____DOT__mask),386);
            tracep->chgWData(oldp+2714,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__177__KET____DOT__mask),386);
            tracep->chgWData(oldp+2727,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__178__KET____DOT__mask),386);
            tracep->chgWData(oldp+2740,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__179__KET____DOT__mask),386);
            tracep->chgWData(oldp+2753,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__180__KET____DOT__mask),386);
            tracep->chgWData(oldp+2766,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__181__KET____DOT__mask),386);
            tracep->chgWData(oldp+2779,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__182__KET____DOT__mask),386);
            tracep->chgWData(oldp+2792,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__183__KET____DOT__mask),386);
            tracep->chgWData(oldp+2805,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__184__KET____DOT__mask),386);
            tracep->chgWData(oldp+2818,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__185__KET____DOT__mask),386);
            tracep->chgWData(oldp+2831,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__186__KET____DOT__mask),386);
            tracep->chgWData(oldp+2844,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__187__KET____DOT__mask),386);
            tracep->chgWData(oldp+2857,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__188__KET____DOT__mask),386);
            tracep->chgWData(oldp+2870,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__189__KET____DOT__mask),386);
            tracep->chgWData(oldp+2883,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__190__KET____DOT__mask),386);
            tracep->chgWData(oldp+2896,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__191__KET____DOT__mask),386);
            tracep->chgWData(oldp+2909,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__192__KET____DOT__mask),386);
            tracep->chgWData(oldp+2922,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__193__KET____DOT__mask),386);
            tracep->chgWData(oldp+2935,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__194__KET____DOT__mask),386);
            tracep->chgWData(oldp+2948,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__195__KET____DOT__mask),386);
            tracep->chgWData(oldp+2961,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__196__KET____DOT__mask),386);
            tracep->chgWData(oldp+2974,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__197__KET____DOT__mask),386);
            tracep->chgWData(oldp+2987,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__198__KET____DOT__mask),386);
            tracep->chgWData(oldp+3000,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__199__KET____DOT__mask),386);
            tracep->chgWData(oldp+3013,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__200__KET____DOT__mask),386);
            tracep->chgWData(oldp+3026,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__201__KET____DOT__mask),386);
            tracep->chgWData(oldp+3039,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__202__KET____DOT__mask),386);
            tracep->chgWData(oldp+3052,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__203__KET____DOT__mask),386);
            tracep->chgWData(oldp+3065,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__204__KET____DOT__mask),386);
            tracep->chgWData(oldp+3078,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__205__KET____DOT__mask),386);
            tracep->chgWData(oldp+3091,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__206__KET____DOT__mask),386);
            tracep->chgWData(oldp+3104,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__207__KET____DOT__mask),386);
            tracep->chgWData(oldp+3117,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__208__KET____DOT__mask),386);
            tracep->chgWData(oldp+3130,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__209__KET____DOT__mask),386);
            tracep->chgWData(oldp+3143,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__210__KET____DOT__mask),386);
            tracep->chgWData(oldp+3156,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__211__KET____DOT__mask),386);
            tracep->chgWData(oldp+3169,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__212__KET____DOT__mask),386);
            tracep->chgWData(oldp+3182,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__213__KET____DOT__mask),386);
            tracep->chgWData(oldp+3195,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__214__KET____DOT__mask),386);
            tracep->chgWData(oldp+3208,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__215__KET____DOT__mask),386);
            tracep->chgWData(oldp+3221,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__216__KET____DOT__mask),386);
            tracep->chgWData(oldp+3234,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__217__KET____DOT__mask),386);
            tracep->chgWData(oldp+3247,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__218__KET____DOT__mask),386);
            tracep->chgWData(oldp+3260,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__219__KET____DOT__mask),386);
            tracep->chgWData(oldp+3273,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__220__KET____DOT__mask),386);
            tracep->chgWData(oldp+3286,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__221__KET____DOT__mask),386);
            tracep->chgWData(oldp+3299,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__222__KET____DOT__mask),386);
            tracep->chgWData(oldp+3312,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__223__KET____DOT__mask),386);
            tracep->chgWData(oldp+3325,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__224__KET____DOT__mask),386);
            tracep->chgWData(oldp+3338,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__225__KET____DOT__mask),386);
            tracep->chgWData(oldp+3351,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__226__KET____DOT__mask),386);
            tracep->chgWData(oldp+3364,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__227__KET____DOT__mask),386);
            tracep->chgWData(oldp+3377,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__228__KET____DOT__mask),386);
            tracep->chgWData(oldp+3390,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__229__KET____DOT__mask),386);
            tracep->chgWData(oldp+3403,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__230__KET____DOT__mask),386);
            tracep->chgWData(oldp+3416,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__231__KET____DOT__mask),386);
            tracep->chgWData(oldp+3429,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__232__KET____DOT__mask),386);
            tracep->chgWData(oldp+3442,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__233__KET____DOT__mask),386);
            tracep->chgWData(oldp+3455,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__234__KET____DOT__mask),386);
            tracep->chgWData(oldp+3468,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__235__KET____DOT__mask),386);
            tracep->chgWData(oldp+3481,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__236__KET____DOT__mask),386);
            tracep->chgWData(oldp+3494,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__237__KET____DOT__mask),386);
            tracep->chgWData(oldp+3507,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__238__KET____DOT__mask),386);
            tracep->chgWData(oldp+3520,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__239__KET____DOT__mask),386);
            tracep->chgWData(oldp+3533,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__240__KET____DOT__mask),386);
            tracep->chgWData(oldp+3546,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__241__KET____DOT__mask),386);
            tracep->chgWData(oldp+3559,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__242__KET____DOT__mask),386);
            tracep->chgWData(oldp+3572,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__243__KET____DOT__mask),386);
            tracep->chgWData(oldp+3585,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__244__KET____DOT__mask),386);
            tracep->chgWData(oldp+3598,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__245__KET____DOT__mask),386);
            tracep->chgWData(oldp+3611,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__246__KET____DOT__mask),386);
            tracep->chgWData(oldp+3624,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__247__KET____DOT__mask),386);
            tracep->chgWData(oldp+3637,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__248__KET____DOT__mask),386);
            tracep->chgWData(oldp+3650,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__249__KET____DOT__mask),386);
            tracep->chgWData(oldp+3663,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__250__KET____DOT__mask),386);
            tracep->chgWData(oldp+3676,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__251__KET____DOT__mask),386);
            tracep->chgWData(oldp+3689,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__252__KET____DOT__mask),386);
            tracep->chgWData(oldp+3702,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__253__KET____DOT__mask),386);
            tracep->chgWData(oldp+3715,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__254__KET____DOT__mask),386);
            tracep->chgWData(oldp+3728,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__255__KET____DOT__mask),386);
            tracep->chgWData(oldp+3741,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__256__KET____DOT__mask),386);
            tracep->chgWData(oldp+3754,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__257__KET____DOT__mask),386);
            tracep->chgWData(oldp+3767,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__258__KET____DOT__mask),386);
            tracep->chgWData(oldp+3780,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__259__KET____DOT__mask),386);
            tracep->chgWData(oldp+3793,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__260__KET____DOT__mask),386);
            tracep->chgWData(oldp+3806,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__261__KET____DOT__mask),386);
            tracep->chgWData(oldp+3819,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__262__KET____DOT__mask),386);
            tracep->chgWData(oldp+3832,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__263__KET____DOT__mask),386);
            tracep->chgWData(oldp+3845,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__264__KET____DOT__mask),386);
            tracep->chgWData(oldp+3858,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__265__KET____DOT__mask),386);
            tracep->chgWData(oldp+3871,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__266__KET____DOT__mask),386);
            tracep->chgWData(oldp+3884,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__267__KET____DOT__mask),386);
            tracep->chgWData(oldp+3897,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__268__KET____DOT__mask),386);
            tracep->chgWData(oldp+3910,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__269__KET____DOT__mask),386);
            tracep->chgWData(oldp+3923,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__270__KET____DOT__mask),386);
            tracep->chgWData(oldp+3936,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__271__KET____DOT__mask),386);
            tracep->chgWData(oldp+3949,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__272__KET____DOT__mask),386);
            tracep->chgWData(oldp+3962,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__273__KET____DOT__mask),386);
            tracep->chgWData(oldp+3975,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__274__KET____DOT__mask),386);
            tracep->chgWData(oldp+3988,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__275__KET____DOT__mask),386);
            tracep->chgWData(oldp+4001,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__276__KET____DOT__mask),386);
            tracep->chgWData(oldp+4014,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__277__KET____DOT__mask),386);
            tracep->chgWData(oldp+4027,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__278__KET____DOT__mask),386);
            tracep->chgWData(oldp+4040,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__279__KET____DOT__mask),386);
            tracep->chgWData(oldp+4053,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__280__KET____DOT__mask),386);
            tracep->chgWData(oldp+4066,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__281__KET____DOT__mask),386);
            tracep->chgWData(oldp+4079,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__282__KET____DOT__mask),386);
            tracep->chgWData(oldp+4092,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__283__KET____DOT__mask),386);
            tracep->chgWData(oldp+4105,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__284__KET____DOT__mask),386);
            tracep->chgWData(oldp+4118,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__285__KET____DOT__mask),386);
            tracep->chgWData(oldp+4131,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__286__KET____DOT__mask),386);
            tracep->chgWData(oldp+4144,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__287__KET____DOT__mask),386);
            tracep->chgWData(oldp+4157,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__288__KET____DOT__mask),386);
            tracep->chgWData(oldp+4170,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__289__KET____DOT__mask),386);
            tracep->chgWData(oldp+4183,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__290__KET____DOT__mask),386);
            tracep->chgWData(oldp+4196,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__291__KET____DOT__mask),386);
            tracep->chgWData(oldp+4209,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__292__KET____DOT__mask),386);
            tracep->chgWData(oldp+4222,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__293__KET____DOT__mask),386);
            tracep->chgWData(oldp+4235,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__294__KET____DOT__mask),386);
            tracep->chgWData(oldp+4248,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__295__KET____DOT__mask),386);
            tracep->chgWData(oldp+4261,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__296__KET____DOT__mask),386);
            tracep->chgWData(oldp+4274,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__297__KET____DOT__mask),386);
            tracep->chgWData(oldp+4287,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__298__KET____DOT__mask),386);
            tracep->chgWData(oldp+4300,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__299__KET____DOT__mask),386);
            tracep->chgWData(oldp+4313,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__300__KET____DOT__mask),386);
            tracep->chgWData(oldp+4326,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__301__KET____DOT__mask),386);
            tracep->chgWData(oldp+4339,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__302__KET____DOT__mask),386);
            tracep->chgWData(oldp+4352,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__303__KET____DOT__mask),386);
            tracep->chgWData(oldp+4365,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__304__KET____DOT__mask),386);
            tracep->chgWData(oldp+4378,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__305__KET____DOT__mask),386);
            tracep->chgWData(oldp+4391,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__306__KET____DOT__mask),386);
            tracep->chgWData(oldp+4404,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__307__KET____DOT__mask),386);
            tracep->chgWData(oldp+4417,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__308__KET____DOT__mask),386);
            tracep->chgWData(oldp+4430,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__309__KET____DOT__mask),386);
            tracep->chgWData(oldp+4443,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__310__KET____DOT__mask),386);
            tracep->chgWData(oldp+4456,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__311__KET____DOT__mask),386);
            tracep->chgWData(oldp+4469,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__312__KET____DOT__mask),386);
            tracep->chgWData(oldp+4482,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__313__KET____DOT__mask),386);
            tracep->chgWData(oldp+4495,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__314__KET____DOT__mask),386);
            tracep->chgWData(oldp+4508,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__315__KET____DOT__mask),386);
            tracep->chgWData(oldp+4521,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__316__KET____DOT__mask),386);
            tracep->chgWData(oldp+4534,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__317__KET____DOT__mask),386);
            tracep->chgWData(oldp+4547,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__318__KET____DOT__mask),386);
            tracep->chgWData(oldp+4560,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__319__KET____DOT__mask),386);
            tracep->chgWData(oldp+4573,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__320__KET____DOT__mask),386);
            tracep->chgWData(oldp+4586,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__321__KET____DOT__mask),386);
            tracep->chgWData(oldp+4599,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__322__KET____DOT__mask),386);
            tracep->chgWData(oldp+4612,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__323__KET____DOT__mask),386);
            tracep->chgWData(oldp+4625,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__324__KET____DOT__mask),386);
            tracep->chgWData(oldp+4638,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__325__KET____DOT__mask),386);
            tracep->chgWData(oldp+4651,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__326__KET____DOT__mask),386);
            tracep->chgWData(oldp+4664,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__327__KET____DOT__mask),386);
            tracep->chgWData(oldp+4677,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__328__KET____DOT__mask),386);
            tracep->chgWData(oldp+4690,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__329__KET____DOT__mask),386);
            tracep->chgWData(oldp+4703,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__330__KET____DOT__mask),386);
            tracep->chgWData(oldp+4716,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__331__KET____DOT__mask),386);
            tracep->chgWData(oldp+4729,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__332__KET____DOT__mask),386);
            tracep->chgWData(oldp+4742,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__333__KET____DOT__mask),386);
            tracep->chgWData(oldp+4755,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__334__KET____DOT__mask),386);
            tracep->chgWData(oldp+4768,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__335__KET____DOT__mask),386);
            tracep->chgWData(oldp+4781,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__336__KET____DOT__mask),386);
            tracep->chgWData(oldp+4794,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__337__KET____DOT__mask),386);
            tracep->chgWData(oldp+4807,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__338__KET____DOT__mask),386);
            tracep->chgWData(oldp+4820,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__339__KET____DOT__mask),386);
            tracep->chgWData(oldp+4833,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__340__KET____DOT__mask),386);
            tracep->chgWData(oldp+4846,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__341__KET____DOT__mask),386);
            tracep->chgWData(oldp+4859,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__342__KET____DOT__mask),386);
            tracep->chgWData(oldp+4872,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__343__KET____DOT__mask),386);
            tracep->chgWData(oldp+4885,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__344__KET____DOT__mask),386);
            tracep->chgWData(oldp+4898,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__345__KET____DOT__mask),386);
            tracep->chgWData(oldp+4911,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__346__KET____DOT__mask),386);
            tracep->chgWData(oldp+4924,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__347__KET____DOT__mask),386);
            tracep->chgWData(oldp+4937,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__348__KET____DOT__mask),386);
            tracep->chgWData(oldp+4950,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__349__KET____DOT__mask),386);
            tracep->chgWData(oldp+4963,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__350__KET____DOT__mask),386);
            tracep->chgWData(oldp+4976,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__351__KET____DOT__mask),386);
            tracep->chgWData(oldp+4989,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__352__KET____DOT__mask),386);
            tracep->chgWData(oldp+5002,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__353__KET____DOT__mask),386);
            tracep->chgWData(oldp+5015,(vlSelf->ascon_top__DOT__lfst_inst__DOT__genblk1__DOT__lfsr_data__BRA__354__KET____DOT__mask),386);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
            tracep->chgWData(oldp+5028,(vlSelf->ascon_top__DOT__lfsr_out),355);
            tracep->chgIData(oldp+5040,(vlSelf->ascon_top__DOT__lfsr_state_in),31);
            tracep->chgIData(oldp+5041,(vlSelf->ascon_top__DOT__lfsr_state_out),31);
            __Vtemp23210[0U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[0U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[0U]);
            __Vtemp23210[1U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[1U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[1U]);
            __Vtemp23210[2U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[2U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[2U]);
            __Vtemp23210[3U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[3U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[3U]);
            __Vtemp23210[4U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[4U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[4U]);
            __Vtemp23210[5U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[5U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[5U]);
            __Vtemp23210[6U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[6U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[6U]);
            __Vtemp23210[7U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[7U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[7U]);
            __Vtemp23210[8U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[8U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[8U]);
            __Vtemp23210[9U] = (Vascon_top__ConstPool__CONST_3c9d791d_0[9U] 
                                & vlSelf->ascon_top__DOT__lfsr_out[9U]);
            tracep->chgWData(oldp+5042,(__Vtemp23210),300);
            tracep->chgQData(oldp+5052,((0x7fffffffffffffULL 
                                         & (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__lfsr_out[0xbU])) 
                                             << 0x34U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__lfsr_out[0xaU])) 
                                                << 0x14U) 
                                               | ((QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__lfsr_out[9U])) 
                                                  >> 0xcU))))),55);
            tracep->chgBit(oldp+5054,(vlSelf->ascon_top__DOT__extra_padding_ff));
            tracep->chgBit(oldp+5055,(vlSelf->ascon_top__DOT__shift_en));
            tracep->chgBit(oldp+5056,(vlSelf->ascon_top__DOT__shift_type));
            tracep->chgBit(oldp+5057,(vlSelf->ascon_top__DOT__last_cycle));
            tracep->chgBit(oldp+5058,(vlSelf->ascon_top__DOT__reg_key1_load));
            tracep->chgBit(oldp+5059,(vlSelf->ascon_top__DOT__reg_key2_load));
            tracep->chgBit(oldp+5060,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3));
            tracep->chgBit(oldp+5061,(vlSelf->ascon_top__DOT__sel_masked_round));
            tracep->chgBit(oldp+5062,(vlSelf->ascon_top__DOT__sel_xor_signal));
            tracep->chgBit(oldp+5063,(vlSelf->ascon_top__DOT__shift_enable_sipo));
            tracep->chgBit(oldp+5064,(vlSelf->ascon_top__DOT__last_cycle_sipo));
            tracep->chgCData(oldp+5065,(vlSelf->ascon_top__DOT__round_counter),4);
            tracep->chgCData(oldp+5066,(vlSelf->ascon_top__DOT__bit_counter),4);
            tracep->chgQData(oldp+5067,(vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+5069,(vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q),64);
            tracep->chgQData(oldp+5071,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state),64);
            tracep->chgQData(oldp+5073,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state),64);
            tracep->chgQData(oldp+5075,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state),64);
            tracep->chgQData(oldp+5077,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state),64);
            tracep->chgQData(oldp+5079,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state),64);
            tracep->chgQData(oldp+5081,((0xf0ULL - 
                                         (0xfULL * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter))))),64);
            VL_EXTEND_WQ(66,64, __Vtemp23211, (0xf0ULL 
                                               - (0xfULL 
                                                  * (QData)((IData)(vlSelf->ascon_top__DOT__round_counter)))));
            tracep->chgWData(oldp+5083,(__Vtemp23211),66);
            tracep->chgCData(oldp+5086,(vlSelf->ascon_top__DOT__rc_block[0]),6);
            tracep->chgCData(oldp+5087,(vlSelf->ascon_top__DOT__rc_block[1]),6);
            tracep->chgCData(oldp+5088,(vlSelf->ascon_top__DOT__rc_block[2]),6);
            tracep->chgCData(oldp+5089,(vlSelf->ascon_top__DOT__rc_block[3]),6);
            tracep->chgCData(oldp+5090,(vlSelf->ascon_top__DOT__rc_block[4]),6);
            tracep->chgCData(oldp+5091,(vlSelf->ascon_top__DOT__rc_block[5]),6);
            tracep->chgCData(oldp+5092,(vlSelf->ascon_top__DOT__rc_block[6]),6);
            tracep->chgCData(oldp+5093,(vlSelf->ascon_top__DOT__rc_block[7]),6);
            tracep->chgCData(oldp+5094,(vlSelf->ascon_top__DOT__rc_block[8]),6);
            tracep->chgCData(oldp+5095,(vlSelf->ascon_top__DOT__rc_block[9]),6);
            tracep->chgCData(oldp+5096,(vlSelf->ascon_top__DOT__rc_block[10]),6);
            tracep->chgQData(oldp+5097,(((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                          ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                          : 0x8000000000000000ULL)),64);
            tracep->chgCData(oldp+5099,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__current_state),5);
            tracep->chgCData(oldp+5100,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_bits),4);
            tracep->chgCData(oldp+5101,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__number_round),4);
            tracep->chgBit(oldp+5102,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_ff));
            tracep->chgBit(oldp+5103,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__round_counter_enable));
        }
        if (VL_UNLIKELY(((vlSelf->__Vm_traceActivity
                          [1U] | vlSelf->__Vm_traceActivity
                          [2U]) | vlSelf->__Vm_traceActivity
                         [3U]))) {
            __Vtemp23215[0U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))));
            __Vtemp23215[1U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                                        >> 0x20U));
            __Vtemp23215[2U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))));
            __Vtemp23215[3U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                        >> 0x20U));
            __Vtemp23215[4U] = (IData)((((QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                         << 0x20U) 
                                        | (QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))));
            __Vtemp23215[5U] = (IData)(((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                        >> 0x20U));
            __Vtemp23215[6U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [3U]));
            __Vtemp23215[7U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U]) >> 0x20U));
            __Vtemp23215[8U] = (IData)(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                         ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                            [4U] ^ 
                                            ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                              ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                              : 0x8000000000000000ULL))
                                         : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                        [4U]));
            __Vtemp23215[9U] = (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [4U] ^ 
                                             ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                               ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                               : 0x8000000000000000ULL))
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U]) >> 0x20U));
            tracep->chgWData(oldp+5104,(__Vtemp23215),320);
            tracep->chgQData(oldp+5114,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                                          ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                             [4U] ^ 
                                             ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                               ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                               : 0x8000000000000000ULL))
                                          : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [4U])),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
            tracep->chgWData(oldp+5116,(vlSelf->ascon_top__DOT__state_reg_out),320);
            tracep->chgWData(oldp+5126,(vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1),320);
            tracep->chgQData(oldp+5136,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[0U])))),64);
            tracep->chgQData(oldp+5138,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[2U])))),64);
            tracep->chgQData(oldp+5140,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[4U])))),64);
            tracep->chgQData(oldp+5142,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[6U])))),64);
            tracep->chgQData(oldp+5144,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__state_reg_out_shiftdplus1[8U])))),64);
            tracep->chgWData(oldp+5146,(vlSelf->ascon_top__DOT__mux_1st_x0),66);
            tracep->chgWData(oldp+5149,(vlSelf->ascon_top__DOT__mux_1st_x1),66);
            tracep->chgWData(oldp+5152,(vlSelf->ascon_top__DOT__mux_1st_x3),66);
            tracep->chgWData(oldp+5155,(vlSelf->ascon_top__DOT__mux_1st_x4),66);
            tracep->chgQData(oldp+5158,(vlSelf->ascon_top__DOT__sbox_input[0]),55);
            tracep->chgQData(oldp+5160,(vlSelf->ascon_top__DOT__sbox_input[1]),55);
            tracep->chgQData(oldp+5162,(vlSelf->ascon_top__DOT__sbox_input[2]),55);
            tracep->chgQData(oldp+5164,(vlSelf->ascon_top__DOT__sbox_input[3]),55);
            tracep->chgQData(oldp+5166,(vlSelf->ascon_top__DOT__sbox_input[4]),55);
            tracep->chgQData(oldp+5168,(vlSelf->ascon_top__DOT__sbox_input[5]),55);
            tracep->chgQData(oldp+5170,(vlSelf->ascon_top__DOT__sbox_output[0]),55);
            tracep->chgQData(oldp+5172,(vlSelf->ascon_top__DOT__sbox_output[1]),55);
            tracep->chgQData(oldp+5174,(vlSelf->ascon_top__DOT__sbox_output[2]),55);
            tracep->chgQData(oldp+5176,(vlSelf->ascon_top__DOT__sbox_output[3]),55);
            tracep->chgQData(oldp+5178,(vlSelf->ascon_top__DOT__sbox_output[4]),55);
            tracep->chgQData(oldp+5180,(vlSelf->ascon_top__DOT__sbox_output[5]),55);
            tracep->chgWData(oldp+5182,(vlSelf->ascon_top__DOT__linear_diffusion_out),320);
            tracep->chgQData(oldp+5192,(vlSelf->ascon_top__DOT__linear_diffusion_debug[0]),64);
            tracep->chgQData(oldp+5194,(vlSelf->ascon_top__DOT__linear_diffusion_debug[1]),64);
            tracep->chgQData(oldp+5196,(vlSelf->ascon_top__DOT__linear_diffusion_debug[2]),64);
            tracep->chgQData(oldp+5198,(vlSelf->ascon_top__DOT__linear_diffusion_debug[3]),64);
            tracep->chgQData(oldp+5200,(vlSelf->ascon_top__DOT__linear_diffusion_debug[4]),64);
            tracep->chgIData(oldp+5202,(vlSelf->ascon_top__DOT__unnamedblk1__DOT__p),32);
            tracep->chgQData(oldp+5203,(vlSelf->ascon_top__DOT__state_reg__DOT__state[0]),64);
            tracep->chgQData(oldp+5205,(vlSelf->ascon_top__DOT__state_reg__DOT__state[1]),64);
            tracep->chgQData(oldp+5207,(vlSelf->ascon_top__DOT__state_reg__DOT__state[2]),64);
            tracep->chgQData(oldp+5209,(vlSelf->ascon_top__DOT__state_reg__DOT__state[3]),64);
            tracep->chgQData(oldp+5211,(vlSelf->ascon_top__DOT__state_reg__DOT__state[4]),64);
            tracep->chgIData(oldp+5213,(vlSelf->ascon_top__DOT__state_reg__DOT__unnamedblk3__DOT__i),32);
            tracep->chgQData(oldp+5214,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x0[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x0[0U])))),64);
            tracep->chgCData(oldp+5216,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x0[0U])),6);
            tracep->chgQData(oldp+5217,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x1[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x1[0U])))),64);
            tracep->chgCData(oldp+5219,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x1[0U])),6);
            tracep->chgQData(oldp+5220,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x3[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x3[0U])))),64);
            tracep->chgCData(oldp+5222,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x3[0U])),6);
            tracep->chgQData(oldp+5223,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x4[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x4[0U])))),64);
            tracep->chgCData(oldp+5225,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x4[0U])),6);
            tracep->chgQData(oldp+5226,(vlSelf->ascon_top__DOT__sbox_input
                                        [0U]),55);
            tracep->chgQData(oldp+5228,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                             [3U])) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                [2U])) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                   [1U] 
                                                                   << 0xbU) 
                                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5230,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[0]),11);
            tracep->chgSData(oldp+5231,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[1]),11);
            tracep->chgSData(oldp+5232,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[2]),11);
            tracep->chgSData(oldp+5233,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[3]),11);
            tracep->chgSData(oldp+5234,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x[4]),11);
            tracep->chgSData(oldp+5235,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5236,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5237,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5238,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5239,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5240,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5241,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5242,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5243,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5244,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5245,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5246,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5247,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5248,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5249,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5250,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5251,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5252,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5253,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5254,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5255,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5256,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5257,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5258,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5259,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5260,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5261,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5262,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5263,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5264,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5265,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5266,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5267,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5268,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5269,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5270,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5271,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5272,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5273,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5274,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5275,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5276,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5277,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5278,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5279,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5280,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5281,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5282,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5283,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5284,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5285,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5286,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5287,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5288,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5289,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5290,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[0]),11);
            tracep->chgSData(oldp+5291,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[1]),11);
            tracep->chgSData(oldp+5292,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[2]),11);
            tracep->chgSData(oldp+5293,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[3]),11);
            tracep->chgSData(oldp+5294,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y[4]),11);
            tracep->chgIData(oldp+5295,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+5296,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+5297,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgSData(oldp+5298,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
            tracep->chgIData(oldp+5299,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
            tracep->chgQData(oldp+5300,(vlSelf->ascon_top__DOT__sbox_input
                                        [1U]),55);
            tracep->chgQData(oldp+5302,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                             [3U])) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                [2U])) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                   [1U] 
                                                                   << 0xbU) 
                                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5304,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[0]),11);
            tracep->chgSData(oldp+5305,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[1]),11);
            tracep->chgSData(oldp+5306,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[2]),11);
            tracep->chgSData(oldp+5307,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[3]),11);
            tracep->chgSData(oldp+5308,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__x[4]),11);
            tracep->chgSData(oldp+5309,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5310,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5311,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5312,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5313,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5314,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5315,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5316,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5317,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5318,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5319,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5320,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5321,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5322,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5323,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5324,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5325,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5326,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5327,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5328,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5329,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5330,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5331,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5332,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5333,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5334,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5335,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5336,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5337,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5338,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5339,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5340,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5341,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5342,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5343,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5344,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5345,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5346,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5347,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5348,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5349,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5350,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5351,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5352,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5353,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5354,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5355,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5356,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5357,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5358,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5359,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5360,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5361,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5362,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5363,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5364,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[0]),11);
            tracep->chgSData(oldp+5365,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[1]),11);
            tracep->chgSData(oldp+5366,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[2]),11);
            tracep->chgSData(oldp+5367,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[3]),11);
            tracep->chgSData(oldp+5368,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y[4]),11);
            tracep->chgIData(oldp+5369,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+5370,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+5371,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgSData(oldp+5372,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
            tracep->chgIData(oldp+5373,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
            tracep->chgQData(oldp+5374,(vlSelf->ascon_top__DOT__sbox_input
                                        [2U]),55);
            tracep->chgQData(oldp+5376,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                             [3U])) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                [2U])) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                   [1U] 
                                                                   << 0xbU) 
                                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5378,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[0]),11);
            tracep->chgSData(oldp+5379,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[1]),11);
            tracep->chgSData(oldp+5380,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[2]),11);
            tracep->chgSData(oldp+5381,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[3]),11);
            tracep->chgSData(oldp+5382,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__x[4]),11);
            tracep->chgSData(oldp+5383,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5384,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5385,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5386,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5387,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5388,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5389,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5390,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5391,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5392,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5393,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5394,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5395,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5396,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5397,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5398,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5399,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5400,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5401,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5402,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5403,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5404,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5405,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5406,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5407,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5408,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5409,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5410,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5411,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5412,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5413,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5414,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5415,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5416,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5417,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5418,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5419,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5420,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5421,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5422,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5423,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5424,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5425,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5426,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5427,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5428,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5429,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5430,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5431,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5432,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5433,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5434,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5435,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5436,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5437,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5438,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[0]),11);
            tracep->chgSData(oldp+5439,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[1]),11);
            tracep->chgSData(oldp+5440,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[2]),11);
            tracep->chgSData(oldp+5441,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[3]),11);
            tracep->chgSData(oldp+5442,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y[4]),11);
            tracep->chgIData(oldp+5443,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+5444,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+5445,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgSData(oldp+5446,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
            tracep->chgIData(oldp+5447,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
            tracep->chgQData(oldp+5448,(vlSelf->ascon_top__DOT__sbox_input
                                        [3U]),55);
            tracep->chgQData(oldp+5450,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                             [3U])) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                [2U])) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                   [1U] 
                                                                   << 0xbU) 
                                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5452,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[0]),11);
            tracep->chgSData(oldp+5453,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[1]),11);
            tracep->chgSData(oldp+5454,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[2]),11);
            tracep->chgSData(oldp+5455,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[3]),11);
            tracep->chgSData(oldp+5456,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__x[4]),11);
            tracep->chgSData(oldp+5457,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5458,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5459,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5460,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5461,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5462,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5463,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5464,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5465,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5466,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5467,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5468,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5469,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5470,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5471,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5472,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5473,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5474,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5475,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5476,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5477,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5478,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5479,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5480,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5481,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5482,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5483,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5484,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5485,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5486,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5487,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5488,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5489,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5490,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5491,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5492,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5493,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5494,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5495,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5496,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5497,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5498,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5499,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5500,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5501,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5502,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5503,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5504,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5505,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5506,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5507,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5508,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5509,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5510,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5511,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5512,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[0]),11);
            tracep->chgSData(oldp+5513,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[1]),11);
            tracep->chgSData(oldp+5514,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[2]),11);
            tracep->chgSData(oldp+5515,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[3]),11);
            tracep->chgSData(oldp+5516,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y[4]),11);
            tracep->chgIData(oldp+5517,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+5518,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+5519,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgSData(oldp+5520,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
            tracep->chgIData(oldp+5521,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
            tracep->chgQData(oldp+5522,(vlSelf->ascon_top__DOT__sbox_input
                                        [4U]),55);
            tracep->chgQData(oldp+5524,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                             [3U])) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                [2U])) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                   [1U] 
                                                                   << 0xbU) 
                                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5526,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[0]),11);
            tracep->chgSData(oldp+5527,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[1]),11);
            tracep->chgSData(oldp+5528,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[2]),11);
            tracep->chgSData(oldp+5529,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[3]),11);
            tracep->chgSData(oldp+5530,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__x[4]),11);
            tracep->chgSData(oldp+5531,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5532,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5533,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5534,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5535,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5536,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5537,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5538,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5539,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5540,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5541,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5542,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5543,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5544,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5545,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5546,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5547,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5548,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5549,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5550,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5551,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5552,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5553,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5554,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5555,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5556,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5557,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5558,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5559,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5560,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5561,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5562,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5563,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5564,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5565,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5566,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5567,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5568,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5569,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5570,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5571,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5572,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5573,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5574,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5575,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5576,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5577,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5578,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5579,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5580,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5581,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5582,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5583,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5584,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5585,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5586,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[0]),11);
            tracep->chgSData(oldp+5587,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[1]),11);
            tracep->chgSData(oldp+5588,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[2]),11);
            tracep->chgSData(oldp+5589,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[3]),11);
            tracep->chgSData(oldp+5590,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y[4]),11);
            tracep->chgIData(oldp+5591,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+5592,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+5593,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgSData(oldp+5594,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
            tracep->chgIData(oldp+5595,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
            tracep->chgQData(oldp+5596,(vlSelf->ascon_top__DOT__sbox_input
                                        [5U]),55);
            tracep->chgQData(oldp+5598,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                             [3U])) 
                                             << 0x21U) 
                                            | (((QData)((IData)(
                                                                vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                [2U])) 
                                                << 0x16U) 
                                               | (QData)((IData)(
                                                                 ((vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                   [1U] 
                                                                   << 0xbU) 
                                                                  | vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5600,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[0]),11);
            tracep->chgSData(oldp+5601,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[1]),11);
            tracep->chgSData(oldp+5602,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[2]),11);
            tracep->chgSData(oldp+5603,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[3]),11);
            tracep->chgSData(oldp+5604,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__x[4]),11);
            tracep->chgSData(oldp+5605,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5606,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5607,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5608,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5609,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5610,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5611,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5612,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5613,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5614,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5615,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5616,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5617,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5618,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5619,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5620,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5621,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5622,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5623,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5624,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5625,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5626,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5627,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5628,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5629,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5630,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5631,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5632,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5633,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5634,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5635,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5636,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5637,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5638,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5639,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5640,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5641,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5642,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5643,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5644,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5645,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5646,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5647,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5648,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5649,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5650,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5651,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5652,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5653,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5654,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5655,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5656,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5657,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5658,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5659,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_reg
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5660,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[0]),11);
            tracep->chgSData(oldp+5661,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[1]),11);
            tracep->chgSData(oldp+5662,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[2]),11);
            tracep->chgSData(oldp+5663,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[3]),11);
            tracep->chgSData(oldp+5664,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y[4]),11);
            tracep->chgIData(oldp+5665,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+5666,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__i),32);
            tracep->chgIData(oldp+5667,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__j),32);
            tracep->chgSData(oldp+5668,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__temp),11);
            tracep->chgIData(oldp+5669,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk9__DOT__unnamedblk10__DOT__unnamedblk11__DOT__unnamedblk12__DOT__k),32);
        }
        if (VL_UNLIKELY((vlSelf->__Vm_traceActivity
                         [2U] | vlSelf->__Vm_traceActivity
                         [3U]))) {
            tracep->chgQData(oldp+5670,(vlSelf->ascon_top__DOT__state_reg_in_absorb[0]),64);
            tracep->chgQData(oldp+5672,(vlSelf->ascon_top__DOT__state_reg_in_absorb[1]),64);
            tracep->chgQData(oldp+5674,(vlSelf->ascon_top__DOT__state_reg_in_absorb[2]),64);
            tracep->chgQData(oldp+5676,(vlSelf->ascon_top__DOT__state_reg_in_absorb[3]),64);
            tracep->chgQData(oldp+5678,(vlSelf->ascon_top__DOT__state_reg_in_absorb[4]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
            tracep->chgBit(oldp+5680,(vlSelf->ascon_top__DOT__write_en));
            tracep->chgBit(oldp+5681,(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4));
            tracep->chgBit(oldp+5682,(vlSelf->ascon_top__DOT__sel_init_load));
            tracep->chgBit(oldp+5683,(vlSelf->ascon_top__DOT__sel_padding));
            tracep->chgBit(oldp+5684,(vlSelf->ascon_top__DOT__sel_absorb_data));
            tracep->chgWData(oldp+5685,(vlSelf->ascon_top__DOT__state_reg_in),320);
            tracep->chgWData(oldp+5695,(vlSelf->ascon_top__DOT__data_in_padded),128);
            tracep->chgWData(oldp+5699,(vlSelf->ascon_top__DOT__reverse_reg_data_out),128);
            tracep->chgIData(oldp+5703,(vlSelf->ascon_top__DOT__unnamedblk5__DOT__i),32);
            tracep->chgBit(oldp+5704,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding));
            tracep->chgCData(oldp+5705,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__next_state),5);
            tracep->chgBit(oldp+5706,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process));
            tracep->chgBit(oldp+5707,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__last_block_process_load));
            tracep->chgBit(oldp+5708,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__extra_padding_load));
            tracep->chgBit(oldp+5709,(vlSelf->ascon_top__DOT__mealy_fsm__DOT__rst_counter_round));
            tracep->chgQData(oldp+5710,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[0]),64);
            tracep->chgQData(oldp+5712,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[1]),64);
            tracep->chgQData(oldp+5714,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[2]),64);
            tracep->chgQData(oldp+5716,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[3]),64);
            tracep->chgQData(oldp+5718,(vlSelf->ascon_top__DOT__state_reg__DOT__next_state[4]),64);
        }
        if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[4U])) {
            tracep->chgWData(oldp+5720,(vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1),320);
            tracep->chgIData(oldp+5730,(vlSelf->ascon_top__DOT__recombine_shares),30);
            tracep->chgWData(oldp+5731,(vlSelf->ascon_top__DOT__mux_1st_x2),66);
            tracep->chgWData(oldp+5734,(vlSelf->ascon_top__DOT__shares_out),330);
            tracep->chgIData(oldp+5745,(vlSelf->ascon_top__DOT__affine_layer_in[0]),30);
            tracep->chgIData(oldp+5746,(vlSelf->ascon_top__DOT__affine_layer_in[1]),30);
            tracep->chgIData(oldp+5747,(vlSelf->ascon_top__DOT__affine_layer_in[2]),30);
            tracep->chgIData(oldp+5748,(vlSelf->ascon_top__DOT__affine_layer_in[3]),30);
            tracep->chgIData(oldp+5749,(vlSelf->ascon_top__DOT__affine_layer_in[4]),30);
            tracep->chgIData(oldp+5750,(vlSelf->ascon_top__DOT__affine_layer_in[5]),30);
            tracep->chgIData(oldp+5751,(vlSelf->ascon_top__DOT__affine_layer_in[6]),30);
            tracep->chgIData(oldp+5752,(vlSelf->ascon_top__DOT__affine_layer_in[7]),30);
            tracep->chgIData(oldp+5753,(vlSelf->ascon_top__DOT__affine_layer_in[8]),30);
            tracep->chgIData(oldp+5754,(vlSelf->ascon_top__DOT__affine_layer_in[9]),30);
            tracep->chgIData(oldp+5755,(vlSelf->ascon_top__DOT__affine_layer_in[10]),30);
            tracep->chgIData(oldp+5756,(vlSelf->ascon_top__DOT__affine_layer_out[0]),30);
            tracep->chgIData(oldp+5757,(vlSelf->ascon_top__DOT__affine_layer_out[1]),30);
            tracep->chgIData(oldp+5758,(vlSelf->ascon_top__DOT__affine_layer_out[2]),30);
            tracep->chgIData(oldp+5759,(vlSelf->ascon_top__DOT__affine_layer_out[3]),30);
            tracep->chgIData(oldp+5760,(vlSelf->ascon_top__DOT__affine_layer_out[4]),30);
            tracep->chgIData(oldp+5761,(vlSelf->ascon_top__DOT__affine_layer_out[5]),30);
            tracep->chgIData(oldp+5762,(vlSelf->ascon_top__DOT__affine_layer_out[6]),30);
            tracep->chgIData(oldp+5763,(vlSelf->ascon_top__DOT__affine_layer_out[7]),30);
            tracep->chgIData(oldp+5764,(vlSelf->ascon_top__DOT__affine_layer_out[8]),30);
            tracep->chgIData(oldp+5765,(vlSelf->ascon_top__DOT__affine_layer_out[9]),30);
            tracep->chgIData(oldp+5766,(vlSelf->ascon_top__DOT__affine_layer_out[10]),30);
            tracep->chgQData(oldp+5767,(vlSelf->ascon_top__DOT__next_sbox_input[0]),55);
            tracep->chgQData(oldp+5769,(vlSelf->ascon_top__DOT__next_sbox_input[1]),55);
            tracep->chgQData(oldp+5771,(vlSelf->ascon_top__DOT__next_sbox_input[2]),55);
            tracep->chgQData(oldp+5773,(vlSelf->ascon_top__DOT__next_sbox_input[3]),55);
            tracep->chgQData(oldp+5775,(vlSelf->ascon_top__DOT__next_sbox_input[4]),55);
            tracep->chgQData(oldp+5777,(vlSelf->ascon_top__DOT__next_sbox_input[5]),55);
            tracep->chgQData(oldp+5779,(vlSelf->ascon_top__DOT__sbox_output_unmasked[0]),55);
            tracep->chgQData(oldp+5781,(vlSelf->ascon_top__DOT__sbox_output_unmasked[1]),55);
            tracep->chgQData(oldp+5783,(vlSelf->ascon_top__DOT__sbox_output_unmasked[2]),55);
            tracep->chgQData(oldp+5785,(vlSelf->ascon_top__DOT__sbox_output_unmasked[3]),55);
            tracep->chgQData(oldp+5787,(vlSelf->ascon_top__DOT__sbox_output_unmasked[4]),55);
            tracep->chgQData(oldp+5789,(vlSelf->ascon_top__DOT__sbox_output_unmasked[5]),55);
            tracep->chgQData(oldp+5791,(vlSelf->ascon_top__DOT__mux_sbox_out[0]),55);
            tracep->chgQData(oldp+5793,(vlSelf->ascon_top__DOT__mux_sbox_out[1]),55);
            tracep->chgQData(oldp+5795,(vlSelf->ascon_top__DOT__mux_sbox_out[2]),55);
            tracep->chgQData(oldp+5797,(vlSelf->ascon_top__DOT__mux_sbox_out[3]),55);
            tracep->chgQData(oldp+5799,(vlSelf->ascon_top__DOT__mux_sbox_out[4]),55);
            tracep->chgQData(oldp+5801,(vlSelf->ascon_top__DOT__mux_sbox_out[5]),55);
            tracep->chgIData(oldp+5803,(vlSelf->ascon_top__DOT__affine_layer2nd_in[0]),30);
            tracep->chgIData(oldp+5804,(vlSelf->ascon_top__DOT__affine_layer2nd_in[1]),30);
            tracep->chgIData(oldp+5805,(vlSelf->ascon_top__DOT__affine_layer2nd_in[2]),30);
            tracep->chgIData(oldp+5806,(vlSelf->ascon_top__DOT__affine_layer2nd_in[3]),30);
            tracep->chgIData(oldp+5807,(vlSelf->ascon_top__DOT__affine_layer2nd_in[4]),30);
            tracep->chgIData(oldp+5808,(vlSelf->ascon_top__DOT__affine_layer2nd_in[5]),30);
            tracep->chgIData(oldp+5809,(vlSelf->ascon_top__DOT__affine_layer2nd_in[6]),30);
            tracep->chgIData(oldp+5810,(vlSelf->ascon_top__DOT__affine_layer2nd_in[7]),30);
            tracep->chgIData(oldp+5811,(vlSelf->ascon_top__DOT__affine_layer2nd_in[8]),30);
            tracep->chgIData(oldp+5812,(vlSelf->ascon_top__DOT__affine_layer2nd_in[9]),30);
            tracep->chgIData(oldp+5813,(vlSelf->ascon_top__DOT__affine_layer2nd_in[10]),30);
            tracep->chgIData(oldp+5814,(vlSelf->ascon_top__DOT__affine_layer2nd_out[0]),30);
            tracep->chgIData(oldp+5815,(vlSelf->ascon_top__DOT__affine_layer2nd_out[1]),30);
            tracep->chgIData(oldp+5816,(vlSelf->ascon_top__DOT__affine_layer2nd_out[2]),30);
            tracep->chgIData(oldp+5817,(vlSelf->ascon_top__DOT__affine_layer2nd_out[3]),30);
            tracep->chgIData(oldp+5818,(vlSelf->ascon_top__DOT__affine_layer2nd_out[4]),30);
            tracep->chgIData(oldp+5819,(vlSelf->ascon_top__DOT__affine_layer2nd_out[5]),30);
            tracep->chgIData(oldp+5820,(vlSelf->ascon_top__DOT__affine_layer2nd_out[6]),30);
            tracep->chgIData(oldp+5821,(vlSelf->ascon_top__DOT__affine_layer2nd_out[7]),30);
            tracep->chgIData(oldp+5822,(vlSelf->ascon_top__DOT__affine_layer2nd_out[8]),30);
            tracep->chgIData(oldp+5823,(vlSelf->ascon_top__DOT__affine_layer2nd_out[9]),30);
            tracep->chgIData(oldp+5824,(vlSelf->ascon_top__DOT__affine_layer2nd_out[10]),30);
            tracep->chgCData(oldp+5825,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [0U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5826,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [1U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5827,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [2U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5828,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [3U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5829,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [4U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5830,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [5U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5831,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [6U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5832,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [7U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5833,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [8U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5834,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [9U] 
                                                   >> 0xcU)))),6);
            tracep->chgCData(oldp+5835,((0x3fU & (~ 
                                                  (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                   [0xaU] 
                                                   >> 0xcU)))),6);
            tracep->chgSData(oldp+5836,(vlSelf->ascon_top__DOT__recombine__BRA__0__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5837,(vlSelf->ascon_top__DOT__recombine__BRA__1__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5838,(vlSelf->ascon_top__DOT__recombine__BRA__2__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5839,(vlSelf->ascon_top__DOT__recombine__BRA__3__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5840,(vlSelf->ascon_top__DOT__recombine__BRA__4__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5841,(vlSelf->ascon_top__DOT__recombine__BRA__5__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5842,(vlSelf->ascon_top__DOT__recombine__BRA__6__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5843,(vlSelf->ascon_top__DOT__recombine__BRA__7__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5844,(vlSelf->ascon_top__DOT__recombine__BRA__8__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5845,(vlSelf->ascon_top__DOT__recombine__BRA__9__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5846,(vlSelf->ascon_top__DOT__recombine__BRA__10__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5847,(vlSelf->ascon_top__DOT__recombine__BRA__11__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5848,(vlSelf->ascon_top__DOT__recombine__BRA__12__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5849,(vlSelf->ascon_top__DOT__recombine__BRA__13__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5850,(vlSelf->ascon_top__DOT__recombine__BRA__14__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5851,(vlSelf->ascon_top__DOT__recombine__BRA__15__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5852,(vlSelf->ascon_top__DOT__recombine__BRA__16__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5853,(vlSelf->ascon_top__DOT__recombine__BRA__17__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5854,(vlSelf->ascon_top__DOT__recombine__BRA__18__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5855,(vlSelf->ascon_top__DOT__recombine__BRA__19__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5856,(vlSelf->ascon_top__DOT__recombine__BRA__20__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5857,(vlSelf->ascon_top__DOT__recombine__BRA__21__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5858,(vlSelf->ascon_top__DOT__recombine__BRA__22__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5859,(vlSelf->ascon_top__DOT__recombine__BRA__23__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5860,(vlSelf->ascon_top__DOT__recombine__BRA__24__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5861,(vlSelf->ascon_top__DOT__recombine__BRA__25__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5862,(vlSelf->ascon_top__DOT__recombine__BRA__26__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5863,(vlSelf->ascon_top__DOT__recombine__BRA__27__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5864,(vlSelf->ascon_top__DOT__recombine__BRA__28__KET____DOT__temp_bits),11);
            tracep->chgSData(oldp+5865,(vlSelf->ascon_top__DOT__recombine__BRA__29__KET____DOT__temp_bits),11);
            tracep->chgQData(oldp+5866,(vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state),64);
            tracep->chgQData(oldp+5868,(vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state),64);
            tracep->chgQData(oldp+5870,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__mux_1st_x2[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlSelf->ascon_top__DOT__mux_1st_x2[0U])))),64);
            tracep->chgCData(oldp+5872,((0x3fU & vlSelf->ascon_top__DOT__mux_1st_x2[0U])),6);
            tracep->chgQData(oldp+5873,(vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state),64);
            tracep->chgQData(oldp+5875,(vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state),64);
            tracep->chgQData(oldp+5877,(vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state),64);
            tracep->chgIData(oldp+5879,(vlSelf->ascon_top__DOT__share_creator__DOT__temp),30);
            tracep->chgQData(oldp+5880,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
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
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5882,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5883,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5884,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5885,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5886,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5887,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5888,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5889,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5890,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5891,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5892,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5893,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5894,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5895,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5896,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5897,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5898,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5899,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5900,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5901,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5902,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5903,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5904,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5905,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5906,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5907,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5908,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5909,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5910,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5911,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5912,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5913,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5914,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5915,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5916,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5917,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5918,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5919,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5920,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5921,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5922,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5923,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5924,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5925,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5926,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5927,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5928,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5929,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5930,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5931,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5932,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5933,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5934,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5935,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5936,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5937,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
            tracep->chgSData(oldp+5938,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
            tracep->chgSData(oldp+5939,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
            tracep->chgSData(oldp+5940,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
            tracep->chgSData(oldp+5941,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
            tracep->chgIData(oldp+5942,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
            tracep->chgSData(oldp+5943,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
            tracep->chgSData(oldp+5944,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
            tracep->chgSData(oldp+5945,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
            tracep->chgSData(oldp+5946,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
            tracep->chgIData(oldp+5947,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
            tracep->chgIData(oldp+5948,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
            tracep->chgQData(oldp+5949,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
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
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+5951,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U])),11);
            tracep->chgSData(oldp+5952,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5953,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5954,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5955,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5956,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5957,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5958,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5959,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5960,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5961,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5962,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U])),11);
            tracep->chgSData(oldp+5963,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5964,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5965,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5966,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5967,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5968,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5969,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5970,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5971,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5972,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5973,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U])),11);
            tracep->chgSData(oldp+5974,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5975,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5976,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5977,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5978,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5979,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5980,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5981,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5982,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5983,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5984,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U])),11);
            tracep->chgSData(oldp+5985,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5986,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5987,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5988,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+5989,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+5990,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+5991,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+5992,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+5993,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+5994,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+5995,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U])),11);
            tracep->chgSData(oldp+5996,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+5997,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+5998,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+5999,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6000,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6001,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6002,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6003,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6004,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6005,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6006,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
            tracep->chgSData(oldp+6007,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
            tracep->chgSData(oldp+6008,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
            tracep->chgSData(oldp+6009,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
            tracep->chgSData(oldp+6010,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
            tracep->chgIData(oldp+6011,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
            tracep->chgSData(oldp+6012,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
            tracep->chgSData(oldp+6013,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
            tracep->chgSData(oldp+6014,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
            tracep->chgSData(oldp+6015,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
            tracep->chgIData(oldp+6016,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
            tracep->chgIData(oldp+6017,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__1__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
            tracep->chgQData(oldp+6018,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
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
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+6020,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U])),11);
            tracep->chgSData(oldp+6021,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6022,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6023,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6024,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6025,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6026,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6027,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6028,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6029,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6030,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6031,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U])),11);
            tracep->chgSData(oldp+6032,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6033,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6034,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6035,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6036,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6037,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6038,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6039,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6040,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6041,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6042,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U])),11);
            tracep->chgSData(oldp+6043,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6044,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6045,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6046,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6047,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6048,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6049,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6050,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6051,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6052,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6053,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U])),11);
            tracep->chgSData(oldp+6054,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6055,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6056,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6057,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6058,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6059,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6060,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6061,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6062,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6063,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6064,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U])),11);
            tracep->chgSData(oldp+6065,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6066,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6067,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6068,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6069,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6070,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6071,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6072,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6073,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6074,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6075,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
            tracep->chgSData(oldp+6076,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
            tracep->chgSData(oldp+6077,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
            tracep->chgSData(oldp+6078,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
            tracep->chgSData(oldp+6079,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
            tracep->chgIData(oldp+6080,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
            tracep->chgSData(oldp+6081,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
            tracep->chgSData(oldp+6082,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
            tracep->chgSData(oldp+6083,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
            tracep->chgSData(oldp+6084,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
            tracep->chgIData(oldp+6085,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
            tracep->chgIData(oldp+6086,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__2__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
            tracep->chgQData(oldp+6087,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
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
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+6089,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U])),11);
            tracep->chgSData(oldp+6090,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6091,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6092,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6093,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6094,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6095,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6096,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6097,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6098,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6099,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6100,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U])),11);
            tracep->chgSData(oldp+6101,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6102,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6103,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6104,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6105,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6106,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6107,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6108,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6109,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6110,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6111,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U])),11);
            tracep->chgSData(oldp+6112,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6113,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6114,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6115,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6116,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6117,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6118,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6119,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6120,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6121,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6122,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U])),11);
            tracep->chgSData(oldp+6123,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6124,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6125,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6126,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6127,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6128,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6129,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6130,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6131,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6132,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6133,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U])),11);
            tracep->chgSData(oldp+6134,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6135,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6136,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6137,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6138,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6139,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6140,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6141,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6142,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6143,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6144,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
            tracep->chgSData(oldp+6145,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
            tracep->chgSData(oldp+6146,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
            tracep->chgSData(oldp+6147,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
            tracep->chgSData(oldp+6148,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
            tracep->chgIData(oldp+6149,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
            tracep->chgSData(oldp+6150,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
            tracep->chgSData(oldp+6151,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
            tracep->chgSData(oldp+6152,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
            tracep->chgSData(oldp+6153,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
            tracep->chgIData(oldp+6154,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
            tracep->chgIData(oldp+6155,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__3__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
            tracep->chgQData(oldp+6156,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
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
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+6158,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U])),11);
            tracep->chgSData(oldp+6159,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6160,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6161,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6162,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6163,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6164,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6165,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6166,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6167,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6168,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6169,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U])),11);
            tracep->chgSData(oldp+6170,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6171,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6172,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6173,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6174,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6175,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6176,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6177,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6178,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6179,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6180,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U])),11);
            tracep->chgSData(oldp+6181,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6182,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6183,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6184,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6185,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6186,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6187,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6188,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6189,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6190,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6191,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U])),11);
            tracep->chgSData(oldp+6192,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6193,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6194,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6195,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6196,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6197,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6198,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6199,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6200,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6201,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6202,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U])),11);
            tracep->chgSData(oldp+6203,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6204,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6205,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6206,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6207,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6208,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6209,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6210,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6211,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6212,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6213,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
            tracep->chgSData(oldp+6214,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
            tracep->chgSData(oldp+6215,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
            tracep->chgSData(oldp+6216,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
            tracep->chgSData(oldp+6217,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
            tracep->chgIData(oldp+6218,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
            tracep->chgSData(oldp+6219,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
            tracep->chgSData(oldp+6220,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
            tracep->chgSData(oldp+6221,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
            tracep->chgSData(oldp+6222,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
            tracep->chgIData(oldp+6223,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
            tracep->chgIData(oldp+6224,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__4__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
            tracep->chgQData(oldp+6225,((((QData)((IData)(
                                                          vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask
                                                          [4U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
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
                                                                  [0U]))))))),55);
            tracep->chgSData(oldp+6227,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [0U][0U])),11);
            tracep->chgSData(oldp+6228,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6229,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6230,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6231,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6232,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6233,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6234,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6235,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [0U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [0U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6236,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6237,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [0U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6238,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [1U][0U])),11);
            tracep->chgSData(oldp+6239,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6240,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6241,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6242,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6243,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6244,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6245,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6246,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [1U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [1U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6247,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6248,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [1U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6249,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [2U][0U])),11);
            tracep->chgSData(oldp+6250,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6251,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6252,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6253,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6254,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6255,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6256,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6257,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [2U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [2U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6258,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6259,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [2U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6260,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [3U][0U])),11);
            tracep->chgSData(oldp+6261,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6262,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6263,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6264,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6265,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6266,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6267,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6268,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [3U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [3U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6269,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6270,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [3U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6271,((0x7ffU & vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                         [4U][0U])),11);
            tracep->chgSData(oldp+6272,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][0U] 
                                                   >> 0xbU))),11);
            tracep->chgSData(oldp+6273,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][1U] 
                                                    << 0xaU) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][0U] 
                                                      >> 0x16U)))),11);
            tracep->chgSData(oldp+6274,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 1U))),11);
            tracep->chgSData(oldp+6275,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][1U] 
                                                   >> 0xcU))),11);
            tracep->chgSData(oldp+6276,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][2U] 
                                                    << 9U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][1U] 
                                                      >> 0x17U)))),11);
            tracep->chgSData(oldp+6277,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 2U))),11);
            tracep->chgSData(oldp+6278,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][2U] 
                                                   >> 0xdU))),11);
            tracep->chgSData(oldp+6279,((0x7ffU & (
                                                   (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                    [4U][3U] 
                                                    << 8U) 
                                                   | (vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                      [4U][2U] 
                                                      >> 0x18U)))),11);
            tracep->chgSData(oldp+6280,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 3U))),11);
            tracep->chgSData(oldp+6281,((0x7ffU & (
                                                   vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__and_result_bank
                                                   [4U][3U] 
                                                   >> 0xeU))),11);
            tracep->chgSData(oldp+6282,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[0]),11);
            tracep->chgSData(oldp+6283,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[1]),11);
            tracep->chgSData(oldp+6284,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[2]),11);
            tracep->chgSData(oldp+6285,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[3]),11);
            tracep->chgSData(oldp+6286,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__y_noMask[4]),11);
            tracep->chgIData(oldp+6287,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__fresh_idx),32);
            tracep->chgSData(oldp+6288,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi),11);
            tracep->chgSData(oldp+6289,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1),11);
            tracep->chgSData(oldp+6290,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2),11);
            tracep->chgSData(oldp+6291,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1),11);
            tracep->chgIData(oldp+6292,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__j),32);
            tracep->chgIData(oldp+6293,(vlSelf->ascon_top__DOT__gen_unsupported__DOT__gen_sbox__BRA__5__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__unnamedblk4__DOT__unnamedblk5__DOT__k),32);
        }
        tracep->chgBit(oldp+6294,(vlSelf->clk));
        tracep->chgBit(oldp+6295,(vlSelf->reset_n));
        tracep->chgBit(oldp+6296,(vlSelf->start));
        tracep->chgQData(oldp+6297,(vlSelf->key1),64);
        tracep->chgQData(oldp+6299,(vlSelf->key2),64);
        tracep->chgBit(oldp+6301,(vlSelf->key_valid));
        tracep->chgQData(oldp+6302,(vlSelf->nonce1),64);
        tracep->chgQData(oldp+6304,(vlSelf->nonce2),64);
        tracep->chgQData(oldp+6306,(vlSelf->initialVector),64);
        tracep->chgWData(oldp+6308,(vlSelf->data_in),128);
        tracep->chgBit(oldp+6312,(vlSelf->valid_data_in));
        tracep->chgBit(oldp+6313,(vlSelf->last_block));
        tracep->chgCData(oldp+6314,(vlSelf->valid_bytes),5);
        tracep->chgBit(oldp+6315,(vlSelf->EOT));
        tracep->chgBit(oldp+6316,(vlSelf->ciphertext_valid));
        tracep->chgWData(oldp+6317,(vlSelf->ciphertext),128);
        tracep->chgBit(oldp+6321,(vlSelf->done));
        tracep->chgBit(oldp+6322,(vlSelf->ready_tag));
        tracep->chgQData(oldp+6323,(vlSelf->tag1),64);
        tracep->chgQData(oldp+6325,(vlSelf->tag2),64);
        tracep->chgBit(oldp+6327,(vlSelf->ready_for_data));
        tracep->chgBit(oldp+6328,(vlSelf->debug_extra_padding_ff));
        tracep->chgCData(oldp+6329,(vlSelf->debug_bitcounter),4);
        tracep->chgCData(oldp+6330,(vlSelf->debug_roundcounter),4);
        tracep->chgCData(oldp+6331,(vlSelf->debug_state),5);
        tracep->chgQData(oldp+6332,(vlSelf->debug_state_0),64);
        tracep->chgQData(oldp+6334,(vlSelf->debug_state_1),64);
        tracep->chgQData(oldp+6336,(vlSelf->debug_state_2),64);
        tracep->chgQData(oldp+6338,(vlSelf->debug_state_3),64);
        tracep->chgQData(oldp+6340,(vlSelf->debug_state_4),64);
        tracep->chgQData(oldp+6342,(vlSelf->debug_round_state_0),64);
        tracep->chgQData(oldp+6344,(vlSelf->debug_round_state_1),64);
        tracep->chgQData(oldp+6346,(vlSelf->debug_round_state_2),64);
        tracep->chgQData(oldp+6348,(vlSelf->debug_round_state_3),64);
        tracep->chgQData(oldp+6350,(vlSelf->debug_round_state_4),64);
        tracep->chgQData(oldp+6352,(vlSelf->debug_linear_diffusion_state3),64);
        tracep->chgQData(oldp+6354,(vlSelf->debug_linear_diffusion_state4),64);
        tracep->chgIData(oldp+6356,(((0x3f000000U & 
                                      (vlSelf->ascon_top__DOT__mux_1st_x4[0U] 
                                       << 0x18U)) | 
                                     ((0xfc0000U & 
                                       (vlSelf->ascon_top__DOT__mux_1st_x3[0U] 
                                        << 0x12U)) 
                                      | ((0x3f000U 
                                          & (vlSelf->ascon_top__DOT__mux_1st_x2[0U] 
                                             << 0xcU)) 
                                         | ((0xfc0U 
                                             & (vlSelf->ascon_top__DOT__mux_1st_x1[0U] 
                                                << 6U)) 
                                            | (0x3fU 
                                               & vlSelf->ascon_top__DOT__mux_1st_x0[0U])))))),30);
        __Vtemp23879[0U] = (IData)(vlSelf->initialVector);
        __Vtemp23879[1U] = (IData)((vlSelf->initialVector 
                                    >> 0x20U));
        __Vtemp23879[2U] = (IData)(vlSelf->key1);
        __Vtemp23879[3U] = (IData)((vlSelf->key1 >> 0x20U));
        __Vtemp23879[4U] = (IData)(vlSelf->key2);
        __Vtemp23879[5U] = (IData)((vlSelf->key2 >> 0x20U));
        __Vtemp23879[6U] = (IData)(vlSelf->nonce1);
        __Vtemp23879[7U] = (IData)((vlSelf->nonce1 
                                    >> 0x20U));
        __Vtemp23879[8U] = (IData)(vlSelf->nonce2);
        __Vtemp23879[9U] = (IData)((vlSelf->nonce2 
                                    >> 0x20U));
        tracep->chgWData(oldp+6357,(__Vtemp23879),320);
        tracep->chgQData(oldp+6367,(((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                      ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                         [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                      : vlSelf->ascon_top__DOT__linear_diffusion_debug
                                     [3U])),64);
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
