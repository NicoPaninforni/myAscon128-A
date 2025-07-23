// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vascon_top.h for the primary calling header

#include "Vascon_top___024root.h"
#include "Vascon_top__Syms.h"

void Vascon_top___024root___settle__TOP__17(Vascon_top___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vascon_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vascon_top___024root___settle__TOP__17\n"); );
    // Variables
    CData/*4:0*/ ascon_top__DOT____Vlvbound322;
    CData/*0:0*/ ascon_top__DOT____Vlvbound603;
    CData/*0:0*/ ascon_top__DOT____Vlvbound604;
    CData/*0:0*/ ascon_top__DOT____Vlvbound605;
    CData/*0:0*/ ascon_top__DOT____Vlvbound606;
    CData/*0:0*/ ascon_top__DOT____Vlvbound607;
    CData/*0:0*/ ascon_top__DOT____Vlvbound608;
    CData/*0:0*/ ascon_top__DOT____Vlvbound609;
    CData/*0:0*/ ascon_top__DOT____Vlvbound610;
    CData/*0:0*/ ascon_top__DOT____Vlvbound611;
    CData/*0:0*/ ascon_top__DOT____Vlvbound612;
    CData/*0:0*/ ascon_top__DOT____Vlvbound613;
    CData/*0:0*/ ascon_top__DOT____Vlvbound614;
    CData/*0:0*/ ascon_top__DOT____Vlvbound615;
    CData/*0:0*/ ascon_top__DOT____Vlvbound616;
    CData/*0:0*/ ascon_top__DOT____Vlvbound617;
    CData/*0:0*/ ascon_top__DOT____Vlvbound618;
    CData/*0:0*/ ascon_top__DOT____Vlvbound619;
    CData/*0:0*/ ascon_top__DOT____Vlvbound620;
    CData/*0:0*/ ascon_top__DOT____Vlvbound621;
    CData/*0:0*/ ascon_top__DOT____Vlvbound622;
    CData/*0:0*/ ascon_top__DOT____Vlvbound623;
    CData/*0:0*/ ascon_top__DOT____Vlvbound624;
    CData/*0:0*/ ascon_top__DOT____Vlvbound625;
    CData/*0:0*/ ascon_top__DOT____Vlvbound626;
    CData/*0:0*/ ascon_top__DOT____Vlvbound627;
    CData/*0:0*/ ascon_top__DOT____Vlvbound628;
    CData/*0:0*/ ascon_top__DOT____Vlvbound629;
    CData/*0:0*/ ascon_top__DOT____Vlvbound630;
    CData/*0:0*/ ascon_top__DOT____Vlvbound631;
    CData/*0:0*/ ascon_top__DOT____Vlvbound632;
    CData/*0:0*/ ascon_top__DOT____Vlvbound633;
    CData/*0:0*/ ascon_top__DOT____Vlvbound634;
    CData/*0:0*/ ascon_top__DOT____Vlvbound635;
    CData/*0:0*/ ascon_top__DOT____Vlvbound636;
    CData/*0:0*/ ascon_top__DOT____Vlvbound637;
    CData/*0:0*/ ascon_top__DOT____Vlvbound638;
    CData/*0:0*/ ascon_top__DOT____Vlvbound639;
    CData/*0:0*/ ascon_top__DOT____Vlvbound640;
    CData/*0:0*/ ascon_top__DOT____Vlvbound641;
    CData/*0:0*/ ascon_top__DOT____Vlvbound642;
    CData/*0:0*/ ascon_top__DOT____Vlvbound643;
    CData/*0:0*/ ascon_top__DOT____Vlvbound644;
    CData/*0:0*/ ascon_top__DOT____Vlvbound645;
    CData/*4:0*/ ascon_top__DOT__share_creator__DOT____Vlvbound1;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4;
    CData/*0:0*/ ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__598__Vfuncout;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__599__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__599__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__600__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__600__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__601__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__601__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__602__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__602__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__603__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__603__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__604__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__604__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__605__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__605__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__606__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__606__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__607__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__607__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__608__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__608__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__609__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__609__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__610__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__610__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__611__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__611__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__612__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__612__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__613__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__613__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__614__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__614__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__615__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__615__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__616__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__616__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__617__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__617__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__618__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__618__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__619__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__619__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__620__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__620__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__621__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__621__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__622__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__622__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__623__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__623__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__624__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__624__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__625__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__625__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__626__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__626__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__627__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__627__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__628__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__628__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__629__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__629__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__630__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__630__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__631__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__631__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__632__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__632__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__633__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__633__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__634__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__634__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__635__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__635__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__636__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__636__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__637__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__637__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__638__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__638__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__639__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__639__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__640__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__640__in;
    CData/*0:0*/ __Vfunc_ascon_top__DOT__xor_tree__641__Vfuncout;
    CData/*2:0*/ __Vfunc_ascon_top__DOT__xor_tree__641__in;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__599__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__599__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__599__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__600__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__600__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__600__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__601__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__601__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__601__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__602__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__602__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__602__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__603__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__603__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__603__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__604__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__604__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__604__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__605__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__605__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__605__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__606__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__606__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__606__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__607__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__607__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__607__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__608__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__608__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__608__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__609__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__609__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__609__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__610__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__610__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__610__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__611__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__611__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__611__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__612__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__612__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__612__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__613__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__613__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__613__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__614__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__614__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__614__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__615__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__615__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__615__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__616__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__616__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__616__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__617__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__617__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__617__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__618__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__618__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__618__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__619__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__619__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__619__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__620__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__620__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__620__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__621__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__621__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__621__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__622__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__622__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__622__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__623__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__623__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__623__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__624__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__624__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__624__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__625__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__625__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__625__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__626__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__626__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__626__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__627__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__627__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__627__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__628__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__628__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__628__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__629__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__629__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__629__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__630__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__630__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__630__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__631__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__631__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__631__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__632__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__632__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__632__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__633__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__633__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__633__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__634__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__634__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__634__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__635__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__635__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__635__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__636__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__636__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__636__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__637__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__637__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__637__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__638__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__638__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__638__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__639__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__639__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__639__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__640__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__640__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__640__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__641__N;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__641__level;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__641__num;
    IData/*31:0*/ __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__642__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__642__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__643__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__643__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__644__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__644__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__645__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__645__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__646__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__646__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__647__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__647__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__648__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__648__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__649__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__649__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__650__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__650__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__651__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__651__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__652__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__652__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__653__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__653__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__654__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__654__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__655__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__655__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__656__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__656__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__657__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__657__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__658__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__658__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__659__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__659__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__660__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__660__x;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__661__Vfuncout;
    QData/*63:0*/ __Vfunc_ascon_top__DOT__rotr64__661__x;
    // Body
    __Vfunc_ascon_top__DOT__xor_tree__598__Vfuncout 
        = ((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__598__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__598__stage
               [(3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__598__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xffefffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__598__Vfuncout) 
            << 0x14U));
    ascon_top__DOT____Vlvbound603 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound603));
    ascon_top__DOT____Vlvbound603 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound603) 
              << 1U));
    ascon_top__DOT____Vlvbound603 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound603) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__599__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__599__in = vlSelf->ascon_top__DOT__recombine__BRA__277__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__599__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__599__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__599__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__599__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__599__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__599__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__599__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__599__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__599__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__599__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__599__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__599__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__599__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__599__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__599__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__599__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__599__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__599__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__599__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__599__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__599__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__599__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__599__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__599__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__599__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__599__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__599__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__599__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xffdfffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__599__Vfuncout) 
            << 0x15U));
    ascon_top__DOT____Vlvbound604 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound604));
    ascon_top__DOT____Vlvbound604 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound604) 
              << 1U));
    ascon_top__DOT____Vlvbound604 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound604) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__600__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__600__in = vlSelf->ascon_top__DOT__recombine__BRA__278__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__600__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__600__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__600__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__600__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__600__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__600__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__600__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__600__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__600__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__600__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__600__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__600__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__600__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__600__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__600__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__600__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__600__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__600__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__600__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__600__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__600__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__600__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__600__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__600__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__600__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__600__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__600__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__600__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xffbfffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__600__Vfuncout) 
            << 0x16U));
    ascon_top__DOT____Vlvbound605 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound605));
    ascon_top__DOT____Vlvbound605 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound605) 
              << 1U));
    ascon_top__DOT____Vlvbound605 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound605) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__601__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__601__in = vlSelf->ascon_top__DOT__recombine__BRA__279__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__601__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__601__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__601__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__601__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__601__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__601__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__601__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__601__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__601__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__601__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__601__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__601__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__601__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__601__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__601__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__601__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__601__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__601__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__601__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__601__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__601__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__601__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__601__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__601__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__601__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__601__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__601__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__601__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xff7fffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__601__Vfuncout) 
            << 0x17U));
    ascon_top__DOT____Vlvbound606 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound606));
    ascon_top__DOT____Vlvbound606 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound606) 
              << 1U));
    ascon_top__DOT____Vlvbound606 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound606) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__602__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__602__in = vlSelf->ascon_top__DOT__recombine__BRA__280__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__602__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__602__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__602__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__602__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__602__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__602__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__602__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__602__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__602__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__602__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__602__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__602__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__602__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__602__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__602__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__602__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__602__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__602__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__602__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__602__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__602__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__602__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__602__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__602__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__602__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__602__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__602__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__602__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xfeffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__602__Vfuncout) 
            << 0x18U));
    ascon_top__DOT____Vlvbound607 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound607));
    ascon_top__DOT____Vlvbound607 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound607) 
              << 1U));
    ascon_top__DOT____Vlvbound607 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound607) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__603__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__603__in = vlSelf->ascon_top__DOT__recombine__BRA__281__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__603__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__603__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__603__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__603__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__603__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__603__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__603__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__603__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__603__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__603__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__603__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__603__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__603__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__603__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__603__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__603__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__603__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__603__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__603__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__603__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__603__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__603__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__603__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__603__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__603__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__603__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__603__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__603__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xfdffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__603__Vfuncout) 
            << 0x19U));
    ascon_top__DOT____Vlvbound608 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound608));
    ascon_top__DOT____Vlvbound608 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound608) 
              << 1U));
    ascon_top__DOT____Vlvbound608 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound608) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__604__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__604__in = vlSelf->ascon_top__DOT__recombine__BRA__282__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__604__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__604__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__604__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__604__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__604__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__604__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__604__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__604__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__604__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__604__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__604__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__604__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__604__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__604__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__604__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__604__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__604__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__604__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__604__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__604__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__604__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__604__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__604__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__604__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__604__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__604__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__604__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__604__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xfbffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__604__Vfuncout) 
            << 0x1aU));
    ascon_top__DOT____Vlvbound609 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound609));
    ascon_top__DOT____Vlvbound609 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound609) 
              << 1U));
    ascon_top__DOT____Vlvbound609 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound609) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__605__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__605__in = vlSelf->ascon_top__DOT__recombine__BRA__283__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__605__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__605__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__605__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__605__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__605__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__605__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__605__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__605__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__605__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__605__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__605__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__605__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__605__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__605__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__605__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__605__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__605__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__605__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__605__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__605__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__605__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__605__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__605__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__605__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__605__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__605__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__605__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__605__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xf7ffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__605__Vfuncout) 
            << 0x1bU));
    ascon_top__DOT____Vlvbound610 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound610));
    ascon_top__DOT____Vlvbound610 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound610) 
              << 1U));
    ascon_top__DOT____Vlvbound610 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound610) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__606__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__606__in = vlSelf->ascon_top__DOT__recombine__BRA__284__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__606__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__606__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__606__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__606__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__606__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__606__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__606__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__606__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__606__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__606__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__606__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__606__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__606__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__606__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__606__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__606__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__606__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__606__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__606__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__606__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__606__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__606__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__606__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__606__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__606__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__606__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__606__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__606__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xefffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__606__Vfuncout) 
            << 0x1cU));
    ascon_top__DOT____Vlvbound611 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound611));
    ascon_top__DOT____Vlvbound611 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound611) 
              << 1U));
    ascon_top__DOT____Vlvbound611 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound611) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__607__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__607__in = vlSelf->ascon_top__DOT__recombine__BRA__285__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__607__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__607__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__607__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__607__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__607__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__607__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__607__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__607__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__607__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__607__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__607__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__607__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__607__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__607__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__607__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__607__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__607__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__607__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__607__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__607__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__607__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__607__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__607__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__607__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__607__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__607__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__607__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__607__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xdfffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__607__Vfuncout) 
            << 0x1dU));
    ascon_top__DOT____Vlvbound612 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][8U] 
                                           >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound612));
    ascon_top__DOT____Vlvbound612 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][8U] 
                                           >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound612) 
              << 1U));
    ascon_top__DOT____Vlvbound612 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][8U] 
                                           >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound612) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__608__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__608__in = vlSelf->ascon_top__DOT__recombine__BRA__286__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__608__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__608__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__608__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__608__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__608__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__608__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__608__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__608__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__608__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__608__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__608__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__608__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__608__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__608__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__608__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__608__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__608__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__608__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__608__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__608__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__608__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__608__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__608__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__608__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__608__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__608__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__608__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__608__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0xbfffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__608__Vfuncout) 
            << 0x1eU));
    ascon_top__DOT____Vlvbound613 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [0U][8U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound613));
    ascon_top__DOT____Vlvbound613 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [1U][8U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound613) 
              << 1U));
    ascon_top__DOT____Vlvbound613 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [2U][8U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound613) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__609__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__609__in = vlSelf->ascon_top__DOT__recombine__BRA__287__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__609__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__609__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__609__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__609__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__609__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__609__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__609__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__609__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__609__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__609__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__609__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__609__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__609__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__609__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__609__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__609__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__609__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__609__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__609__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__609__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__609__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__609__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__609__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__609__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__609__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__609__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__609__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__609__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[8U] = 
        ((0x7fffffffU & vlSelf->ascon_top__DOT__recombine_shares[8U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__609__Vfuncout) 
            << 0x1fU));
    ascon_top__DOT____Vlvbound614 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [0U][9U]);
    vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound614));
    ascon_top__DOT____Vlvbound614 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [1U][9U]);
    vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound614) 
              << 1U));
    ascon_top__DOT____Vlvbound614 = (1U & vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [2U][9U]);
    vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound614) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__610__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__610__in = vlSelf->ascon_top__DOT__recombine__BRA__288__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__610__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__610__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__610__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__610__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__610__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__610__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__610__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__610__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__610__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__610__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__610__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__610__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__610__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__610__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__610__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__610__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__610__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__610__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__610__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__610__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__610__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__610__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__610__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__610__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__610__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__610__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__610__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__610__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffffeU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | (IData)(__Vfunc_ascon_top__DOT__xor_tree__610__Vfuncout));
    ascon_top__DOT____Vlvbound615 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound615));
    ascon_top__DOT____Vlvbound615 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound615) 
              << 1U));
    ascon_top__DOT____Vlvbound615 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 1U));
    vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound615) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__611__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__611__in = vlSelf->ascon_top__DOT__recombine__BRA__289__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__611__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__611__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__611__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__611__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__611__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__611__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__611__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__611__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__611__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__611__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__611__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__611__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__611__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__611__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__611__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__611__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__611__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__611__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__611__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__611__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__611__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__611__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__611__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__611__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__611__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__611__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__611__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__611__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffffdU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__611__Vfuncout) 
            << 1U));
    ascon_top__DOT____Vlvbound616 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound616));
    ascon_top__DOT____Vlvbound616 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound616) 
              << 1U));
    ascon_top__DOT____Vlvbound616 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 2U));
    vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound616) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__612__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__612__in = vlSelf->ascon_top__DOT__recombine__BRA__290__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__612__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__612__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__612__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__612__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__612__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__612__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__612__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__612__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__612__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__612__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__612__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__612__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__612__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__612__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__612__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__612__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__612__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__612__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__612__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__612__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__612__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__612__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__612__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__612__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__612__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__612__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__612__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__612__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffffbU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__612__Vfuncout) 
            << 2U));
    ascon_top__DOT____Vlvbound617 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound617));
    ascon_top__DOT____Vlvbound617 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound617) 
              << 1U));
    ascon_top__DOT____Vlvbound617 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 3U));
    vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound617) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__613__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__613__in = vlSelf->ascon_top__DOT__recombine__BRA__291__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__613__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__613__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__613__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__613__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__613__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__613__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__613__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__613__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__613__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__613__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__613__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__613__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__613__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__613__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__613__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__613__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__613__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__613__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__613__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__613__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__613__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__613__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__613__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__613__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__613__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__613__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__613__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__613__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffff7U & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__613__Vfuncout) 
            << 3U));
    ascon_top__DOT____Vlvbound618 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound618));
    ascon_top__DOT____Vlvbound618 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound618) 
              << 1U));
    ascon_top__DOT____Vlvbound618 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 4U));
    vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound618) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__614__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__614__in = vlSelf->ascon_top__DOT__recombine__BRA__292__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__614__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__614__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__614__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__614__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__614__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__614__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__614__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__614__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__614__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__614__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__614__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__614__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__614__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__614__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__614__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__614__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__614__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__614__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__614__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__614__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__614__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__614__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__614__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__614__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__614__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__614__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__614__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__614__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffffefU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__614__Vfuncout) 
            << 4U));
    ascon_top__DOT____Vlvbound619 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound619));
    ascon_top__DOT____Vlvbound619 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound619) 
              << 1U));
    ascon_top__DOT____Vlvbound619 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 5U));
    vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound619) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__615__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__615__in = vlSelf->ascon_top__DOT__recombine__BRA__293__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__615__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__615__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__615__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__615__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__615__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__615__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__615__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__615__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__615__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__615__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__615__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__615__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__615__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__615__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__615__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__615__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__615__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__615__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__615__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__615__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__615__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__615__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__615__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__615__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__615__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__615__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__615__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__615__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffffdfU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__615__Vfuncout) 
            << 5U));
    ascon_top__DOT____Vlvbound620 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound620));
    ascon_top__DOT____Vlvbound620 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound620) 
              << 1U));
    ascon_top__DOT____Vlvbound620 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 6U));
    vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound620) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__616__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__616__in = vlSelf->ascon_top__DOT__recombine__BRA__294__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__616__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__616__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__616__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__616__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__616__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__616__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__616__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__616__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__616__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__616__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__616__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__616__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__616__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__616__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__616__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__616__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__616__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__616__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__616__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__616__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__616__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__616__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__616__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__616__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__616__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__616__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__616__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__616__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffffbfU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__616__Vfuncout) 
            << 6U));
    ascon_top__DOT____Vlvbound621 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound621));
    ascon_top__DOT____Vlvbound621 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound621) 
              << 1U));
    ascon_top__DOT____Vlvbound621 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 7U));
    vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound621) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__617__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__617__in = vlSelf->ascon_top__DOT__recombine__BRA__295__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__617__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__617__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__617__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__617__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__617__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__617__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__617__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__617__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__617__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__617__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__617__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__617__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__617__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__617__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__617__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__617__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__617__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__617__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__617__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__617__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__617__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__617__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__617__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__617__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__617__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__617__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__617__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__617__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffff7fU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__617__Vfuncout) 
            << 7U));
    ascon_top__DOT____Vlvbound622 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound622));
    ascon_top__DOT____Vlvbound622 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound622) 
              << 1U));
    ascon_top__DOT____Vlvbound622 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 8U));
    vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound622) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__618__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__618__in = vlSelf->ascon_top__DOT__recombine__BRA__296__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__618__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__618__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__618__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__618__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__618__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__618__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__618__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__618__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__618__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__618__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__618__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__618__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__618__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__618__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__618__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__618__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__618__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__618__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__618__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__618__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__618__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__618__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__618__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__618__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__618__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__618__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__618__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__618__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffeffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__618__Vfuncout) 
            << 8U));
    ascon_top__DOT____Vlvbound623 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound623));
    ascon_top__DOT____Vlvbound623 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound623) 
              << 1U));
    ascon_top__DOT____Vlvbound623 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 9U));
    vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound623) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__619__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__619__in = vlSelf->ascon_top__DOT__recombine__BRA__297__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__619__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__619__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__619__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__619__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__619__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__619__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__619__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__619__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__619__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__619__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__619__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__619__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__619__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__619__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__619__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__619__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__619__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__619__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__619__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__619__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__619__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__619__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__619__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__619__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__619__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__619__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__619__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__619__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffdffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__619__Vfuncout) 
            << 9U));
    ascon_top__DOT____Vlvbound624 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound624));
    ascon_top__DOT____Vlvbound624 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound624) 
              << 1U));
    ascon_top__DOT____Vlvbound624 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0xaU));
    vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound624) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__620__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__620__in = vlSelf->ascon_top__DOT__recombine__BRA__298__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__620__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__620__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__620__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__620__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__620__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__620__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__620__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__620__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__620__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__620__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__620__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__620__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__620__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__620__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__620__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__620__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__620__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__620__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__620__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__620__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__620__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__620__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__620__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__620__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__620__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__620__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__620__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__620__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffffbffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__620__Vfuncout) 
            << 0xaU));
    ascon_top__DOT____Vlvbound625 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound625));
    ascon_top__DOT____Vlvbound625 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound625) 
              << 1U));
    ascon_top__DOT____Vlvbound625 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0xbU));
    vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound625) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__621__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__621__in = vlSelf->ascon_top__DOT__recombine__BRA__299__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__621__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__621__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__621__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__621__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__621__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__621__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__621__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__621__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__621__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__621__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__621__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__621__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__621__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__621__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__621__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__621__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__621__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__621__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__621__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__621__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__621__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__621__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__621__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__621__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__621__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__621__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__621__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__621__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffff7ffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__621__Vfuncout) 
            << 0xbU));
    ascon_top__DOT____Vlvbound626 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound626));
    ascon_top__DOT____Vlvbound626 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound626) 
              << 1U));
    ascon_top__DOT____Vlvbound626 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0xcU));
    vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound626) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__622__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__622__in = vlSelf->ascon_top__DOT__recombine__BRA__300__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__622__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__622__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__622__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__622__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__622__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__622__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__622__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__622__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__622__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__622__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__622__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__622__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__622__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__622__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__622__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__622__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__622__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__622__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__622__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__622__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__622__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__622__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__622__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__622__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__622__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__622__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__622__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__622__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffefffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__622__Vfuncout) 
            << 0xcU));
    ascon_top__DOT____Vlvbound627 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound627));
    ascon_top__DOT____Vlvbound627 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound627) 
              << 1U));
    ascon_top__DOT____Vlvbound627 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0xdU));
    vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound627) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__623__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__623__in = vlSelf->ascon_top__DOT__recombine__BRA__301__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__623__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__623__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__623__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__623__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__623__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__623__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__623__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__623__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__623__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__623__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__623__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__623__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__623__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__623__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__623__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__623__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__623__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__623__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__623__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__623__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__623__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__623__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__623__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__623__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__623__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__623__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__623__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__623__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffdfffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__623__Vfuncout) 
            << 0xdU));
    ascon_top__DOT____Vlvbound628 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound628));
    ascon_top__DOT____Vlvbound628 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound628) 
              << 1U));
    ascon_top__DOT____Vlvbound628 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0xeU));
    vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound628) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__624__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__624__in = vlSelf->ascon_top__DOT__recombine__BRA__302__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__624__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__624__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__624__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__624__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__624__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__624__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__624__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__624__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__624__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__624__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__624__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__624__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__624__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__624__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__624__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__624__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__624__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__624__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__624__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__624__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__624__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__624__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__624__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__624__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__624__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__624__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__624__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__624__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffffbfffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__624__Vfuncout) 
            << 0xeU));
    ascon_top__DOT____Vlvbound629 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound629));
    ascon_top__DOT____Vlvbound629 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound629) 
              << 1U));
    ascon_top__DOT____Vlvbound629 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0xfU));
    vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound629) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__625__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__625__in = vlSelf->ascon_top__DOT__recombine__BRA__303__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__625__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__625__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__625__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__625__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__625__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__625__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__625__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__625__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__625__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__625__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__625__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__625__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__625__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__625__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__625__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__625__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__625__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__625__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__625__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__625__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__625__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__625__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__625__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__625__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__625__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__625__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__625__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__625__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffff7fffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__625__Vfuncout) 
            << 0xfU));
    ascon_top__DOT____Vlvbound630 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound630));
    ascon_top__DOT____Vlvbound630 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound630) 
              << 1U));
    ascon_top__DOT____Vlvbound630 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x10U));
    vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound630) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__626__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__626__in = vlSelf->ascon_top__DOT__recombine__BRA__304__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__626__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__626__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__626__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__626__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__626__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__626__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__626__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__626__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__626__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__626__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__626__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__626__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__626__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__626__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__626__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__626__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__626__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__626__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__626__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__626__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__626__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__626__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__626__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__626__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__626__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__626__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__626__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__626__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffeffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__626__Vfuncout) 
            << 0x10U));
    ascon_top__DOT____Vlvbound631 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound631));
    ascon_top__DOT____Vlvbound631 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound631) 
              << 1U));
    ascon_top__DOT____Vlvbound631 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x11U));
    vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound631) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__627__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__627__in = vlSelf->ascon_top__DOT__recombine__BRA__305__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__627__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__627__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__627__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__627__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__627__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__627__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__627__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__627__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__627__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__627__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__627__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__627__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__627__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__627__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__627__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__627__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__627__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__627__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__627__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__627__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__627__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__627__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__627__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__627__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__627__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__627__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__627__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__627__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffdffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__627__Vfuncout) 
            << 0x11U));
    ascon_top__DOT____Vlvbound632 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound632));
    ascon_top__DOT____Vlvbound632 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound632) 
              << 1U));
    ascon_top__DOT____Vlvbound632 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x12U));
    vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound632) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__628__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__628__in = vlSelf->ascon_top__DOT__recombine__BRA__306__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__628__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__628__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__628__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__628__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__628__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__628__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__628__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__628__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__628__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__628__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__628__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__628__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__628__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__628__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__628__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__628__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__628__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__628__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__628__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__628__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__628__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__628__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__628__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__628__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__628__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__628__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__628__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__628__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfffbffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__628__Vfuncout) 
            << 0x12U));
    ascon_top__DOT____Vlvbound633 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound633));
    ascon_top__DOT____Vlvbound633 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound633) 
              << 1U));
    ascon_top__DOT____Vlvbound633 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x13U));
    vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound633) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__629__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__629__in = vlSelf->ascon_top__DOT__recombine__BRA__307__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__629__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__629__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__629__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__629__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__629__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__629__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__629__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__629__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__629__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__629__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__629__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__629__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__629__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__629__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__629__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__629__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__629__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__629__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__629__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__629__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__629__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__629__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__629__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__629__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__629__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__629__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__629__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__629__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfff7ffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__629__Vfuncout) 
            << 0x13U));
    ascon_top__DOT____Vlvbound634 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound634));
    ascon_top__DOT____Vlvbound634 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound634) 
              << 1U));
    ascon_top__DOT____Vlvbound634 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x14U));
    vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound634) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__630__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__630__in = vlSelf->ascon_top__DOT__recombine__BRA__308__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__630__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__630__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__630__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__630__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__630__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__630__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__630__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__630__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__630__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__630__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__630__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__630__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__630__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__630__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__630__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__630__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__630__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__630__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__630__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__630__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__630__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__630__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__630__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__630__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__630__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__630__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__630__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__630__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffefffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__630__Vfuncout) 
            << 0x14U));
    ascon_top__DOT____Vlvbound635 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound635));
    ascon_top__DOT____Vlvbound635 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound635) 
              << 1U));
    ascon_top__DOT____Vlvbound635 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x15U));
    vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound635) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__631__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__631__in = vlSelf->ascon_top__DOT__recombine__BRA__309__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__631__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__631__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__631__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__631__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__631__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__631__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__631__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__631__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__631__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__631__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__631__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__631__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__631__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__631__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__631__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__631__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__631__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__631__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__631__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__631__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__631__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__631__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__631__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__631__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__631__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__631__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__631__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__631__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffdfffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__631__Vfuncout) 
            << 0x15U));
    ascon_top__DOT____Vlvbound636 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound636));
    ascon_top__DOT____Vlvbound636 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound636) 
              << 1U));
    ascon_top__DOT____Vlvbound636 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x16U));
    vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound636) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__632__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__632__in = vlSelf->ascon_top__DOT__recombine__BRA__310__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__632__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__632__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__632__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__632__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__632__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__632__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__632__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__632__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__632__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__632__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__632__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__632__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__632__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__632__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__632__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__632__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__632__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__632__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__632__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__632__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__632__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__632__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__632__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__632__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__632__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__632__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__632__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__632__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xffbfffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__632__Vfuncout) 
            << 0x16U));
    ascon_top__DOT____Vlvbound637 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound637));
    ascon_top__DOT____Vlvbound637 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound637) 
              << 1U));
    ascon_top__DOT____Vlvbound637 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x17U));
    vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound637) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__633__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__633__in = vlSelf->ascon_top__DOT__recombine__BRA__311__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__633__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__633__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__633__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__633__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__633__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__633__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__633__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__633__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__633__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__633__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__633__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__633__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__633__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__633__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__633__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__633__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__633__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__633__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__633__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__633__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__633__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__633__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__633__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__633__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__633__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__633__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__633__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__633__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xff7fffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__633__Vfuncout) 
            << 0x17U));
    ascon_top__DOT____Vlvbound638 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound638));
    ascon_top__DOT____Vlvbound638 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound638) 
              << 1U));
    ascon_top__DOT____Vlvbound638 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x18U));
    vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound638) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__634__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__634__in = vlSelf->ascon_top__DOT__recombine__BRA__312__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__634__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__634__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__634__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__634__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__634__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__634__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__634__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__634__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__634__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__634__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__634__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__634__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__634__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__634__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__634__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__634__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__634__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__634__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__634__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__634__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__634__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__634__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__634__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__634__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__634__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__634__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__634__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__634__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfeffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__634__Vfuncout) 
            << 0x18U));
    ascon_top__DOT____Vlvbound639 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound639));
    ascon_top__DOT____Vlvbound639 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound639) 
              << 1U));
    ascon_top__DOT____Vlvbound639 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x19U));
    vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound639) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__635__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__635__in = vlSelf->ascon_top__DOT__recombine__BRA__313__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__635__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__635__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__635__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__635__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__635__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__635__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__635__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__635__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__635__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__635__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__635__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__635__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__635__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__635__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__635__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__635__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__635__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__635__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__635__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__635__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__635__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__635__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__635__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__635__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__635__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__635__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__635__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__635__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfdffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__635__Vfuncout) 
            << 0x19U));
    ascon_top__DOT____Vlvbound640 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound640));
    ascon_top__DOT____Vlvbound640 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound640) 
              << 1U));
    ascon_top__DOT____Vlvbound640 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x1aU));
    vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound640) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__636__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__636__in = vlSelf->ascon_top__DOT__recombine__BRA__314__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__636__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__636__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__636__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__636__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__636__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__636__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__636__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__636__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__636__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__636__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__636__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__636__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__636__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__636__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__636__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__636__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__636__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__636__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__636__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__636__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__636__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__636__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__636__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__636__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__636__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__636__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__636__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__636__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xfbffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__636__Vfuncout) 
            << 0x1aU));
    ascon_top__DOT____Vlvbound641 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound641));
    ascon_top__DOT____Vlvbound641 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound641) 
              << 1U));
    ascon_top__DOT____Vlvbound641 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x1bU));
    vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound641) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__637__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__637__in = vlSelf->ascon_top__DOT__recombine__BRA__315__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__637__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__637__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__637__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__637__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__637__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__637__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__637__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__637__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__637__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__637__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__637__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__637__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__637__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__637__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__637__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__637__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__637__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__637__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__637__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__637__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__637__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__637__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__637__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__637__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__637__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__637__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__637__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__637__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xf7ffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__637__Vfuncout) 
            << 0x1bU));
    ascon_top__DOT____Vlvbound642 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound642));
    ascon_top__DOT____Vlvbound642 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound642) 
              << 1U));
    ascon_top__DOT____Vlvbound642 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x1cU));
    vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound642) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__638__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__638__in = vlSelf->ascon_top__DOT__recombine__BRA__316__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__638__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__638__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__638__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__638__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__638__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__638__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__638__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__638__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__638__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__638__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__638__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__638__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__638__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__638__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__638__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__638__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__638__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__638__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__638__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__638__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__638__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__638__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__638__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__638__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__638__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__638__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__638__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__638__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xefffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__638__Vfuncout) 
            << 0x1cU));
    ascon_top__DOT____Vlvbound643 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound643));
    ascon_top__DOT____Vlvbound643 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound643) 
              << 1U));
    ascon_top__DOT____Vlvbound643 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x1dU));
    vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound643) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__639__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__639__in = vlSelf->ascon_top__DOT__recombine__BRA__317__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__639__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__639__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__639__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__639__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__639__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__639__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__639__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__639__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__639__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__639__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__639__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__639__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__639__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__639__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__639__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__639__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__639__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__639__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__639__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__639__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__639__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__639__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__639__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__639__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__639__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__639__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__639__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__639__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xdfffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__639__Vfuncout) 
            << 0x1dU));
    ascon_top__DOT____Vlvbound644 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [0U][9U] 
                                           >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound644));
    ascon_top__DOT____Vlvbound644 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [1U][9U] 
                                           >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound644) 
              << 1U));
    ascon_top__DOT____Vlvbound644 = (1U & (vlSelf->ascon_top__DOT__state_reg_out_shares
                                           [2U][9U] 
                                           >> 0x1eU));
    vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound644) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__640__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__640__in = vlSelf->ascon_top__DOT__recombine__BRA__318__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__640__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__640__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__640__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__640__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__640__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__640__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__640__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__640__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__640__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__640__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__640__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__640__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__640__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__640__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__640__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__640__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__640__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__640__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__640__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__640__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__640__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__640__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__640__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__640__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__640__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__640__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__640__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__640__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0xbfffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__640__Vfuncout) 
            << 0x1eU));
    ascon_top__DOT____Vlvbound645 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [0U][9U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits 
        = ((6U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits)) 
           | (IData)(ascon_top__DOT____Vlvbound645));
    ascon_top__DOT____Vlvbound645 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [1U][9U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits 
        = ((5U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound645) 
              << 1U));
    ascon_top__DOT____Vlvbound645 = (vlSelf->ascon_top__DOT__state_reg_out_shares
                                     [2U][9U] >> 0x1fU);
    vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits 
        = ((3U & (IData)(vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits)) 
           | ((IData)(ascon_top__DOT____Vlvbound645) 
              << 2U));
    __Vfunc_ascon_top__DOT__xor_tree__641__N = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__641__in = vlSelf->ascon_top__DOT__recombine__BRA__319__KET____DOT__temp_bits;
    __Vfunc_ascon_top__DOT__xor_tree__641__level = 0U;
    __Vfunc_ascon_top__DOT__xor_tree__641__num = 3U;
    __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i = 0U;
    while (VL_LTS_III(1,32,32, __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i, __Vfunc_ascon_top__DOT__xor_tree__641__N)) {
        vlSelf->ascon_top__DOT____Vlvbound323 = ((2U 
                                                  >= 
                                                  (3U 
                                                   & __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i)) 
                                                 & ((IData)(__Vfunc_ascon_top__DOT__xor_tree__641__in) 
                                                    >> 
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i)));
        if (VL_LIKELY((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i)))) {
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage[0U] 
                = (((~ ((IData)(1U) << (3U & __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i))) 
                    & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
                    [0U]) | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound323) 
                                   << (3U & __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i))));
        }
        __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk6__DOT__i);
    }
    while (VL_LTS_III(1,32,32, 1U, __Vfunc_ascon_top__DOT__xor_tree__641__num)) {
        vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i = 0U;
        while (VL_LTS_III(1,32,32, vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i, 
                          VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound324 = 
                (((2U >= (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i))) 
                  & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__641__level))
                       ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
                      [(3U & __Vfunc_ascon_top__DOT__xor_tree__641__level)]
                       : 0U) >> (3U & VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i)))) 
                 ^ ((2U >= (3U & ((IData)(1U) + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i)))) 
                    & (((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__641__level))
                         ? vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
                        [(3U & __Vfunc_ascon_top__DOT__xor_tree__641__level)]
                         : 0U) >> (3U & ((IData)(1U) 
                                         + VL_MULS_III(2,32,32, (IData)(2U), vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i))))));
            if (VL_LIKELY(((2U >= (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i)) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__641__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__641__level))] 
                    = (((~ ((IData)(1U) << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__641__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound324) 
                                << (3U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i))));
            }
            vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i 
                = ((IData)(1U) + vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__unnamedblk7__DOT__i);
        }
        if ((1U == VL_MODDIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U)))) {
            vlSelf->ascon_top__DOT____Vlvbound325 = 
                ((2U >= (3U & (__Vfunc_ascon_top__DOT__xor_tree__641__num 
                               - (IData)(1U)))) & (
                                                   ((2U 
                                                     >= 
                                                     (3U 
                                                      & __Vfunc_ascon_top__DOT__xor_tree__641__level))
                                                     ? 
                                                    vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
                                                    [
                                                    (3U 
                                                     & __Vfunc_ascon_top__DOT__xor_tree__641__level)]
                                                     : 0U) 
                                                   >> 
                                                   (3U 
                                                    & (__Vfunc_ascon_top__DOT__xor_tree__641__num 
                                                       - (IData)(1U)))));
            if (VL_LIKELY(((2U >= (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U)))) 
                           & (2U >= (3U & ((IData)(1U) 
                                           + __Vfunc_ascon_top__DOT__xor_tree__641__level)))))) {
                vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage[(3U 
                                                                      & ((IData)(1U) 
                                                                         + __Vfunc_ascon_top__DOT__xor_tree__641__level))] 
                    = (((~ ((IData)(1U) << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U))))) 
                        & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
                        [(3U & ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__641__level))]) 
                       | (7U & ((IData)(vlSelf->ascon_top__DOT____Vlvbound325) 
                                << (3U & VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U))))));
            }
            __Vfunc_ascon_top__DOT__xor_tree__641__num 
                = ((IData)(1U) + VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U)));
        } else {
            __Vfunc_ascon_top__DOT__xor_tree__641__num 
                = VL_DIVS_III(32, __Vfunc_ascon_top__DOT__xor_tree__641__num, (IData)(2U));
        }
        __Vfunc_ascon_top__DOT__xor_tree__641__level 
            = ((IData)(1U) + __Vfunc_ascon_top__DOT__xor_tree__641__level);
    }
    __Vfunc_ascon_top__DOT__xor_tree__641__Vfuncout 
        = ((2U >= (3U & __Vfunc_ascon_top__DOT__xor_tree__641__level))
            ? (1U & vlSelf->__Vfunc_ascon_top__DOT__xor_tree__641__stage
               [(3U & __Vfunc_ascon_top__DOT__xor_tree__641__level)])
            : 0U);
    vlSelf->ascon_top__DOT__recombine_shares[9U] = 
        ((0x7fffffffU & vlSelf->ascon_top__DOT__recombine_shares[9U]) 
         | ((IData)(__Vfunc_ascon_top__DOT__xor_tree__641__Vfuncout) 
            << 0x1fU));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [0U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[0U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [0U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[0U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [0U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [1U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[1U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [1U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[1U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [1U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [2U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [2U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[2U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [2U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[2U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [2U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [3U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [3U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[3U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [3U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[3U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [3U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [4U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [0U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2 
        = vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__x
        [1U];
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1 
        = (7U & (~ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox1)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] = 0U;
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1feU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
           [4U]);
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((6U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | (IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1fdU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xaU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1f7U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 3U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & (((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                  & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                     >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1fbU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 2U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                 ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 0xbU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1bfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 6U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 1U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1efU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 4U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 4U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((5U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 1U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 1U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 2U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x1dfU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound4) 
                     << 5U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   >> 2U) & ((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2) 
                             >> 1U)) ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                                        >> 0xcU)));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0x17fU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound5) 
                     << 7U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2 
        = (1U & ((((IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__not_xiprox1) 
                   & (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xiprox2)) 
                  ^ (IData)(vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__unnamedblk1__DOT__unnamedblk2__DOT__unnamedblk3__DOT__xi)) 
                 >> 2U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank[4U] 
        = ((0xffU & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound2) 
                     << 8U));
    ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3 
        = (1U & (vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__and_result_bank
                 [4U] >> 8U));
    vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask[4U] 
        = ((3U & vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U]) | ((IData)(ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT____Vlvbound3) 
                     << 2U));
    vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)))) 
                                                 << 0x3fU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                                   >> 1U)))
                : ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x0)) 
                                                 << 0x3dU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x0_debug__DOT__state 
                                                   >> 3U))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)))) 
                                                 << 0x3fU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                                   >> 1U)))
                : ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x1)) 
                                                 << 0x3dU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x1_debug__DOT__state 
                                                   >> 3U))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3)))) 
                                                 << 0x3fU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                                   >> 1U)))
                : ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x3)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x3)) 
                                                 << 0x3dU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x3_debug__DOT__state 
                                                   >> 3U))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4)))) 
                                                 << 0x3fU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                                   >> 1U)))
                : ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x4)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x4)) 
                                                 << 0x3dU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x4_debug__DOT__state 
                                                   >> 3U))));
    }
    vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
        = vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state;
    if (vlSelf->ascon_top__DOT__shift_enable_sipo) {
        vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__next_state 
            = ((IData)(vlSelf->ascon_top__DOT__shift_type)
                ? ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(
                                                                 (1U 
                                                                  & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)))) 
                                                 << 0x3fU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                                   >> 1U)))
                : ((IData)(vlSelf->ascon_top__DOT__last_cycle_sipo)
                    ? (((QData)((IData)((1U & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                     >> 1U)) : (((QData)((IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                                 << 0x3dU) 
                                                | (vlSelf->ascon_top__DOT__sipo_reg_x2_debug__DOT__state 
                                                   >> 3U))));
    }
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                     << 4U)) | ((8U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                       << 3U)) | ((4U 
                                                   & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                      << 2U)) 
                                                  | ((2U 
                                                      & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                         << 1U)) 
                                                     | (1U 
                                                        & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0))))));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x1fU & (IData)(vlSelf->ascon_top__DOT__lfsr_out));
    vlSelf->ascon_top__DOT__shares_out = ((0x7c1fU 
                                           & (IData)(vlSelf->ascon_top__DOT__shares_out)) 
                                          | ((IData)(ascon_top__DOT__share_creator__DOT____Vlvbound1) 
                                             << 5U));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__share_creator__DOT__temp) 
                    ^ (IData)(vlSelf->ascon_top__DOT__lfsr_out)));
    ascon_top__DOT__share_creator__DOT____Vlvbound1 
        = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                    >> 5U));
    vlSelf->ascon_top__DOT__shares_out = ((0x3ffU & (IData)(vlSelf->ascon_top__DOT__shares_out)) 
                                          | ((IData)(ascon_top__DOT__share_creator__DOT____Vlvbound1) 
                                             << 0xaU));
    vlSelf->ascon_top__DOT__share_creator__DOT__temp 
        = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__share_creator__DOT__temp) 
                    ^ ((IData)(vlSelf->ascon_top__DOT__lfsr_out) 
                       >> 5U)));
    vlSelf->ascon_top__DOT__shares_out = ((0x7fe0U 
                                           & (IData)(vlSelf->ascon_top__DOT__shares_out)) 
                                          | (IData)(vlSelf->ascon_top__DOT__share_creator__DOT__temp));
    vlSelf->debug_sbox_nomasked_0 = (((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__recombine_shares_sbox[1U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__recombine_shares_sbox[0U])));
    vlSelf->debug_sbox_nomasked_1 = (((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__recombine_shares_sbox[3U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__recombine_shares_sbox[2U])));
    vlSelf->debug_sbox_nomasked_2 = (((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__recombine_shares_sbox[5U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__recombine_shares_sbox[4U])));
    vlSelf->debug_sbox_nomasked_3 = (((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__recombine_shares_sbox[7U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__recombine_shares_sbox[6U])));
    vlSelf->debug_sbox_nomasked_4 = (((QData)((IData)(
                                                      vlSelf->ascon_top__DOT__recombine_shares_sbox[9U])) 
                                      << 0x20U) | (QData)((IData)(
                                                                  vlSelf->ascon_top__DOT__recombine_shares_sbox[8U])));
    vlSelf->debug_state_0 = (((QData)((IData)(vlSelf->state_reg_out[1U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->state_reg_out[0U])));
    vlSelf->debug_state_1 = (((QData)((IData)(vlSelf->state_reg_out[3U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->state_reg_out[2U])));
    vlSelf->debug_state_2 = (((QData)((IData)(vlSelf->state_reg_out[5U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->state_reg_out[4U])));
    vlSelf->debug_state_3 = (((QData)((IData)(vlSelf->state_reg_out[7U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->state_reg_out[6U])));
    vlSelf->debug_state_4 = (((QData)((IData)(vlSelf->state_reg_out[9U])) 
                              << 0x20U) | (QData)((IData)(
                                                          vlSelf->state_reg_out[8U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[2U] 
        = (((QData)((IData)(vlSelf->state_reg_out[5U])) 
            << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[4U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[3U] 
        = (((QData)((IData)(vlSelf->state_reg_out[7U])) 
            << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[6U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[4U] 
        = (((QData)((IData)(vlSelf->state_reg_out[9U])) 
            << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[8U])));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[0U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[1U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[0U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[3U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[2U]))));
    vlSelf->ascon_top__DOT__state_reg_in_absorb[1U] 
        = ((((QData)((IData)(vlSelf->state_reg_out[3U])) 
             << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[2U]))) 
           ^ (((QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[1U])) 
               << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__reverse_reg_data_out[0U]))));
    __Vfunc_ascon_top__DOT__rotr64__645__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[0U])));
    __Vfunc_ascon_top__DOT__rotr64__645__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__645__x >> 0x1cU) 
         | (__Vfunc_ascon_top__DOT__rotr64__645__x 
            << 0x24U));
    __Vfunc_ascon_top__DOT__rotr64__644__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[0U])));
    __Vfunc_ascon_top__DOT__rotr64__644__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__644__x >> 0x13U) 
         | (__Vfunc_ascon_top__DOT__rotr64__644__x 
            << 0x2dU));
    __Vfunc_ascon_top__DOT__rotr64__643__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[0U])));
    __Vfunc_ascon_top__DOT__rotr64__643__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__643__x >> 0x1cU) 
         | (__Vfunc_ascon_top__DOT__rotr64__643__x 
            << 0x24U));
    __Vfunc_ascon_top__DOT__rotr64__642__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[1U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[0U])));
    __Vfunc_ascon_top__DOT__rotr64__642__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__642__x >> 0x13U) 
         | (__Vfunc_ascon_top__DOT__rotr64__642__x 
            << 0x2dU));
    vlSelf->ascon_top__DOT__linear_diffusion_debug[0U] 
        = ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
            ? (((((QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[0U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__642__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__643__Vfuncout)
            : (((((QData)((IData)(vlSelf->state_reg_out[1U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[0U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__644__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__645__Vfuncout));
    __Vfunc_ascon_top__DOT__rotr64__649__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[2U])));
    __Vfunc_ascon_top__DOT__rotr64__649__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__649__x >> 0x27U) 
         | (__Vfunc_ascon_top__DOT__rotr64__649__x 
            << 0x19U));
    __Vfunc_ascon_top__DOT__rotr64__648__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[2U])));
    __Vfunc_ascon_top__DOT__rotr64__648__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__648__x >> 0x3dU) 
         | (__Vfunc_ascon_top__DOT__rotr64__648__x 
            << 3U));
    __Vfunc_ascon_top__DOT__rotr64__647__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[2U])));
    __Vfunc_ascon_top__DOT__rotr64__647__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__647__x >> 0x27U) 
         | (__Vfunc_ascon_top__DOT__rotr64__647__x 
            << 0x19U));
    __Vfunc_ascon_top__DOT__rotr64__646__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[3U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[2U])));
    __Vfunc_ascon_top__DOT__rotr64__646__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__646__x >> 0x3dU) 
         | (__Vfunc_ascon_top__DOT__rotr64__646__x 
            << 3U));
    vlSelf->ascon_top__DOT__linear_diffusion_debug[1U] 
        = ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
            ? (((((QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[3U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[2U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__646__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__647__Vfuncout)
            : (((((QData)((IData)(vlSelf->state_reg_out[3U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[2U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__648__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__649__Vfuncout));
    __Vfunc_ascon_top__DOT__rotr64__653__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[4U])));
    __Vfunc_ascon_top__DOT__rotr64__653__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__653__x >> 6U) 
         | (__Vfunc_ascon_top__DOT__rotr64__653__x 
            << 0x3aU));
    __Vfunc_ascon_top__DOT__rotr64__652__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[4U])));
    __Vfunc_ascon_top__DOT__rotr64__652__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__652__x >> 1U) 
         | (__Vfunc_ascon_top__DOT__rotr64__652__x 
            << 0x3fU));
    __Vfunc_ascon_top__DOT__rotr64__651__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[4U])));
    __Vfunc_ascon_top__DOT__rotr64__651__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__651__x >> 6U) 
         | (__Vfunc_ascon_top__DOT__rotr64__651__x 
            << 0x3aU));
    __Vfunc_ascon_top__DOT__rotr64__650__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[5U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[4U])));
    __Vfunc_ascon_top__DOT__rotr64__650__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__650__x >> 1U) 
         | (__Vfunc_ascon_top__DOT__rotr64__650__x 
            << 0x3fU));
    vlSelf->ascon_top__DOT__linear_diffusion_debug[2U] 
        = ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
            ? (((((QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[5U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[4U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__650__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__651__Vfuncout)
            : (((((QData)((IData)(vlSelf->state_reg_out[5U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[4U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__652__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__653__Vfuncout));
    __Vfunc_ascon_top__DOT__rotr64__657__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[7U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[6U])));
    __Vfunc_ascon_top__DOT__rotr64__657__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__657__x >> 0x11U) 
         | (__Vfunc_ascon_top__DOT__rotr64__657__x 
            << 0x2fU));
    __Vfunc_ascon_top__DOT__rotr64__656__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[7U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[6U])));
    __Vfunc_ascon_top__DOT__rotr64__656__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__656__x >> 0xaU) 
         | (__Vfunc_ascon_top__DOT__rotr64__656__x 
            << 0x36U));
    __Vfunc_ascon_top__DOT__rotr64__655__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[7U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[6U])));
    __Vfunc_ascon_top__DOT__rotr64__655__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__655__x >> 0x11U) 
         | (__Vfunc_ascon_top__DOT__rotr64__655__x 
            << 0x2fU));
    __Vfunc_ascon_top__DOT__rotr64__654__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[7U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[6U])));
    __Vfunc_ascon_top__DOT__rotr64__654__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__654__x >> 0xaU) 
         | (__Vfunc_ascon_top__DOT__rotr64__654__x 
            << 0x36U));
    vlSelf->ascon_top__DOT__linear_diffusion_debug[3U] 
        = ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
            ? (((((QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[7U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[6U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__654__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__655__Vfuncout)
            : (((((QData)((IData)(vlSelf->state_reg_out[7U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[6U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__656__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__657__Vfuncout));
    __Vfunc_ascon_top__DOT__rotr64__661__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[9U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[8U])));
    __Vfunc_ascon_top__DOT__rotr64__661__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__661__x >> 0x29U) 
         | (__Vfunc_ascon_top__DOT__rotr64__661__x 
            << 0x17U));
    __Vfunc_ascon_top__DOT__rotr64__660__x = (((QData)((IData)(
                                                               vlSelf->state_reg_out[9U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->state_reg_out[8U])));
    __Vfunc_ascon_top__DOT__rotr64__660__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__660__x >> 7U) 
         | (__Vfunc_ascon_top__DOT__rotr64__660__x 
            << 0x39U));
    __Vfunc_ascon_top__DOT__rotr64__659__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[9U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[8U])));
    __Vfunc_ascon_top__DOT__rotr64__659__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__659__x >> 0x29U) 
         | (__Vfunc_ascon_top__DOT__rotr64__659__x 
            << 0x17U));
    __Vfunc_ascon_top__DOT__rotr64__658__x = (((QData)((IData)(
                                                               vlSelf->ascon_top__DOT__recombine_shares[9U])) 
                                               << 0x20U) 
                                              | (QData)((IData)(
                                                                vlSelf->ascon_top__DOT__recombine_shares[8U])));
    __Vfunc_ascon_top__DOT__rotr64__658__Vfuncout = 
        ((__Vfunc_ascon_top__DOT__rotr64__658__x >> 7U) 
         | (__Vfunc_ascon_top__DOT__rotr64__658__x 
            << 0x39U));
    vlSelf->ascon_top__DOT__linear_diffusion_debug[4U] 
        = ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
            ? (((((QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[9U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__recombine_shares[8U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__658__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__659__Vfuncout)
            : (((((QData)((IData)(vlSelf->state_reg_out[9U])) 
                  << 0x20U) | (QData)((IData)(vlSelf->state_reg_out[8U]))) 
                ^ __Vfunc_ascon_top__DOT__rotr64__660__Vfuncout) 
               ^ __Vfunc_ascon_top__DOT__rotr64__661__Vfuncout));
    vlSelf->ascon_top__DOT__sbox_output_unmasked[0U] 
        = ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
            [4U] << 0xcU) | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                              [3U] << 9U) | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                              [2U] 
                                              << 6U) 
                                             | ((vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                 [1U] 
                                                 << 3U) 
                                                | vlSelf->ascon_top__DOT__gen_no_changing__DOT__gen_sbox__BRA__0__KET____DOT__u_sbox__DOT__y_noMask
                                                [0U]))));
    if (vlSelf->ascon_top__DOT__sel_masked_round) {
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x1fU & (IData)(vlSelf->ascon_top__DOT__shares_out));
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__shares_out) 
                        >> 5U));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x1fU & ((IData)(vlSelf->ascon_top__DOT__shares_out) 
                        >> 0xaU));
    } else {
        vlSelf->ascon_top__DOT__affine_layer_in[0U] 
            = (0x1fU & ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                  << 4U)) | ((8U & 
                                              ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                               << 3U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                    << 2U)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                       << 1U)) 
                                                   | (1U 
                                                      & (IData)(vlSelf->ascon_top__DOT__mux_1st_x0)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[1U] 
            = (0x1fU & ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                  << 3U)) | ((8U & 
                                              ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                               << 2U)) 
                                             | ((4U 
                                                 & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x2) 
                                                    << 1U)) 
                                                | ((2U 
                                                    & (IData)(vlSelf->ascon_top__DOT__mux_1st_x1)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x0) 
                                                         >> 1U)))))));
        vlSelf->ascon_top__DOT__affine_layer_in[2U] 
            = (0x1fU & ((0x10U & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x4) 
                                  << 2U)) | ((8U & 
                                              ((IData)(vlSelf->ascon_top__DOT__mux_1st_x3) 
                                               << 1U)) 
                                             | ((4U 
                                                 & (IData)(vlSelf->ascon_top__DOT__mux_1st_x2)) 
                                                | ((2U 
                                                    & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x1) 
                                                       >> 1U)) 
                                                   | (1U 
                                                      & ((IData)(vlSelf->ascon_top__DOT__mux_1st_x0) 
                                                         >> 2U)))))));
    }
    vlSelf->ciphertext[0U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [0U]);
    vlSelf->ciphertext[1U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [0U] >> 0x20U));
    vlSelf->ciphertext[2U] = (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                     [1U]);
    vlSelf->ciphertext[3U] = (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                      [1U] >> 0x20U));
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
    vlSelf->ascon_top__DOT__mux_sbox_out[0U] = ((IData)(vlSelf->ascon_top__DOT__sel_masked_round)
                                                 ? 
                                                vlSelf->ascon_top__DOT__sbox_output
                                                [0U]
                                                 : 
                                                vlSelf->ascon_top__DOT__sbox_output_unmasked
                                                [0U]);
    vlSelf->ascon_top__DOT__affine_layer_out[0U] = 
        ((0x10U & ((0xfffffff0U & vlSelf->ascon_top__DOT__affine_layer_in
                    [0U]) ^ (0xfffffff0U & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [0U] << 1U)))) 
         | ((8U & vlSelf->ascon_top__DOT__affine_layer_in
             [0U]) | ((4U & ((0xfffffffcU & vlSelf->ascon_top__DOT__affine_layer_in
                              [0U]) ^ (0xfffffffcU 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [0U] << 1U)))) 
                      | ((2U & vlSelf->ascon_top__DOT__affine_layer_in
                          [0U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_in
                                         [0U] ^ (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [0U] 
                                                 >> 4U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[1U] = 
        ((0x10U & ((0xfffffff0U & vlSelf->ascon_top__DOT__affine_layer_in
                    [1U]) ^ (0xfffffff0U & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [1U] << 1U)))) 
         | ((8U & vlSelf->ascon_top__DOT__affine_layer_in
             [1U]) | ((4U & ((0xfffffffcU & vlSelf->ascon_top__DOT__affine_layer_in
                              [1U]) ^ (0xfffffffcU 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [1U] << 1U)))) 
                      | ((2U & vlSelf->ascon_top__DOT__affine_layer_in
                          [1U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_in
                                         [1U] ^ (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [1U] 
                                                 >> 4U)))))));
    vlSelf->ascon_top__DOT__affine_layer_out[2U] = 
        ((0x10U & ((0xfffffff0U & vlSelf->ascon_top__DOT__affine_layer_in
                    [2U]) ^ (0xfffffff0U & (vlSelf->ascon_top__DOT__affine_layer_in
                                            [2U] << 1U)))) 
         | ((8U & vlSelf->ascon_top__DOT__affine_layer_in
             [2U]) | ((4U & ((0xfffffffcU & vlSelf->ascon_top__DOT__affine_layer_in
                              [2U]) ^ (0xfffffffcU 
                                       & (vlSelf->ascon_top__DOT__affine_layer_in
                                          [2U] << 1U)))) 
                      | ((2U & vlSelf->ascon_top__DOT__affine_layer_in
                          [2U]) | (1U & (vlSelf->ascon_top__DOT__affine_layer_in
                                         [2U] ^ (vlSelf->ascon_top__DOT__affine_layer_in
                                                 [2U] 
                                                 >> 4U)))))));
    vlSelf->tag1 = ((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[7U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[6U]))) 
                    ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q);
    vlSelf->tag2 = ((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[9U])) 
                      << 0x20U) | (QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[8U]))) 
                    ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q);
    if (vlSelf->ascon_top__DOT__sel_absorb_data) {
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][0U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [0U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [0U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][1U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [0U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [0U] 
                                                      >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][2U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [1U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [1U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][3U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [1U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [1U] 
                                                      >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][4U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q))
                : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [2U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][5U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                            [2U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q) 
                           >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                 [2U] 
                                                 >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][6U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q))
                : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [3U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][7U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(((vlSelf->ascon_top__DOT__state_reg_in_absorb
                            [3U] ^ vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q) 
                           >> 0x20U)) : (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                 [3U] 
                                                 >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][8U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                          [4U]) : (IData)(vlSelf->ascon_top__DOT__state_reg_in_absorb
                                          [4U]));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][9U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->ascon_top__DOT__state_reg_in_absorb
                           [4U] >> 0x20U)) : (IData)(
                                                     (vlSelf->ascon_top__DOT__state_reg_in_absorb
                                                      [4U] 
                                                      >> 0x20U)));
    } else {
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][0U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->initialVector) : (IData)(
                                                           (((QData)((IData)(
                                                                             vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(
                                                                              vlSelf->ascon_top__DOT__linear_diffusion_out[0U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][1U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->initialVector >> 0x20U))
                : (IData)(((((QData)((IData)(vlSelf->ascon_top__DOT__linear_diffusion_out[1U])) 
                             << 0x20U) | (QData)((IData)(
                                                         vlSelf->ascon_top__DOT__linear_diffusion_out[0U]))) 
                           >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][2U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->key1) : (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[2U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][3U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->key1 >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[3U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[2U]))) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][4U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->key2) : (IData)((
                                                   ((QData)((IData)(
                                                                    vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                    << 0x20U) 
                                                   | (QData)((IData)(
                                                                     vlSelf->ascon_top__DOT__linear_diffusion_out[4U])))));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][5U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->key2 >> 0x20U)) : (IData)(
                                                             ((((QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[5U])) 
                                                                << 0x20U) 
                                                               | (QData)((IData)(
                                                                                vlSelf->ascon_top__DOT__linear_diffusion_out[4U]))) 
                                                              >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][6U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->nonce1) : (IData)(
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                                                      ? 
                                                     (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                      [3U] 
                                                      ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                                                      : 
                                                     vlSelf->ascon_top__DOT__linear_diffusion_debug
                                                     [3U])));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][7U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->nonce1 >> 0x20U))
                : (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x3)
                             ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                [3U] ^ vlSelf->ascon_top__DOT__key1_reg__DOT__reg_q)
                             : vlSelf->ascon_top__DOT__linear_diffusion_debug
                            [3U]) >> 0x20U)));
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][8U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)(vlSelf->nonce2) : (IData)(
                                                    ((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
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
        vlSelf->ascon_top__DOT__state_reg_in_shares[0U][9U] 
            = ((IData)(vlSelf->ascon_top__DOT__sel_init_load)
                ? (IData)((vlSelf->nonce2 >> 0x20U))
                : (IData)((((IData)(vlSelf->ascon_top__DOT__sel_mux_linear_diffusion_out_x4)
                             ? (vlSelf->ascon_top__DOT__linear_diffusion_debug
                                [4U] ^ ((IData)(vlSelf->ascon_top__DOT__sel_xor_signal)
                                         ? vlSelf->ascon_top__DOT__key2_reg__DOT__reg_q
                                         : 0x8000000000000000ULL))
                             : vlSelf->ascon_top__DOT__linear_diffusion_debug
                            [4U]) >> 0x20U)));
    }
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1eU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (1U & vlSelf->ascon_top__DOT__mux_sbox_out
                     [0U]));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1dU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x1bU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0x17U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[0U] 
        = ((0xfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1eU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 1U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1dU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 3U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x1bU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 5U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0x17U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 7U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[1U] 
        = ((0xfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 9U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1eU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (1U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 2U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1dU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (2U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 4U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x1bU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (4U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 6U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0x17U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (8U & (vlSelf->ascon_top__DOT__mux_sbox_out
                           [0U] >> 8U)));
    vlSelf->ascon_top__DOT__affine_layer2nd_in[2U] 
        = ((0xfU & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | (0x10U & (vlSelf->ascon_top__DOT__mux_sbox_out
                              [0U] >> 0xaU)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffeU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (1U 
                                                      & vlSelf->ascon_top__DOT__affine_layer_out
                                                      [0U]));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ff7U 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (8U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fbfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x40U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7dffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x200U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x6fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x1000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [0U] 
                                                         << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffdU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (2U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 1U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fefU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x10U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 3U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7f7fU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x80U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 5U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7bffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x400U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 7U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x5fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x2000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [1U] 
                                                         << 9U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7ffbU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (4U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 2U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7fdfU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x20U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 4U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x7effU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x100U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 6U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x77ffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x800U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 8U)));
    vlSelf->ascon_top__DOT__next_sbox_input[0U] = (
                                                   (0x3fffU 
                                                    & vlSelf->ascon_top__DOT__next_sbox_input
                                                    [0U]) 
                                                   | (0x4000U 
                                                      & (vlSelf->ascon_top__DOT__affine_layer_out
                                                         [2U] 
                                                         << 0xaU)));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[0U] 
        = ((0x10U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [0U]) | ((8U & ((0xfffffff8U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                             [0U]) ^ (0xfffffff8U & 
                                      (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [0U] << 1U)))) 
                     | ((4U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                   [0U] >> 2U)) << 2U)) 
                        | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                 [0U] ^ ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [0U] 
                                                << 1U)) 
                                         | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [0U] 
                                                  >> 4U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[1U] 
        = ((0x10U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [1U]) | ((8U & ((0xfffffff8U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                             [1U]) ^ (0xfffffff8U & 
                                      (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [1U] << 1U)))) 
                     | ((4U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                   [1U] >> 2U)) << 2U)) 
                        | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                 [1U] ^ ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [1U] 
                                                << 1U)) 
                                         | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [1U] 
                                                  >> 4U))))))));
    vlSelf->ascon_top__DOT__affine_layer2nd_out[2U] 
        = ((0x10U & vlSelf->ascon_top__DOT__affine_layer2nd_in
            [2U]) | ((8U & ((0xfffffff8U & vlSelf->ascon_top__DOT__affine_layer2nd_in
                             [2U]) ^ (0xfffffff8U & 
                                      (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                       [2U] << 1U)))) 
                     | ((4U & ((~ (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                   [2U] >> 2U)) << 2U)) 
                        | (3U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                 [2U] ^ ((2U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                [2U] 
                                                << 1U)) 
                                         | (1U & (vlSelf->ascon_top__DOT__affine_layer2nd_in
                                                  [2U] 
                                                  >> 4U))))))));
    ascon_top__DOT____Vlvbound322 = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [0U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[0U] 
        = ascon_top__DOT____Vlvbound322;
    ascon_top__DOT____Vlvbound322 = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [1U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[1U] 
        = ascon_top__DOT____Vlvbound322;
    ascon_top__DOT____Vlvbound322 = vlSelf->ascon_top__DOT__affine_layer2nd_out
        [2U];
    vlSelf->ascon_top__DOT__state_reg_in_shift1_shares[2U] 
        = ascon_top__DOT____Vlvbound322;
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ffeU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (1U & vlSelf->ascon_top__DOT__affine_layer2nd_out
                     [0U]));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ffdU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (2U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                           [1U] << 1U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ffbU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (4U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                           [2U] << 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7ff7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (8U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                           [0U] << 2U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7fefU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x10U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [1U] << 3U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7fdfU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x20U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [2U] << 4U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7fbfU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x40U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [0U] << 4U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7f7fU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x80U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                              [1U] << 5U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7effU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x100U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [2U] << 6U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7dffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x200U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [0U] << 6U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x7bffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x400U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [1U] << 7U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x77ffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x800U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                               [2U] << 8U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x6fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x1000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [0U] << 8U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x5fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x2000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [1U] << 9U)));
    vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares[0U] 
        = ((0x3fffU & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
            [0U]) | (0x4000U & (vlSelf->ascon_top__DOT__affine_layer2nd_out
                                [2U] << 0xaU)));
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [1U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U]))) << 0x3fU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [1U]))) << 0x3dU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 3U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 3U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 6U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 6U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 9U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 9U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [1U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 0xcU)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [1U] >> 0xcU)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__1__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [2U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U]))) << 0x3fU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [2U]))) << 0x3dU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 3U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 3U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 6U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 6U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 9U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 9U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [2U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 0xcU)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [2U] >> 0xcU)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__2__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [0U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                         [0U]))) << 0x3fU) 
                       | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                          [0U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U]))) << 0x3fU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                     [0U]))) << 0x3dU) 
                   | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                      [0U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][1U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][0U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[0U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [1U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 1U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [1U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 3U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 3U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [1U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][3U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][2U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[1U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [2U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 2U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [2U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 6U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 6U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [2U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][5U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][4U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[2U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [3U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 3U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [3U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 9U)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 9U)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [3U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][7U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][6U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[3U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
    ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1 
        = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
        [4U];
    vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
        = ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound1;
    if (vlSelf->ascon_top__DOT__shift_en) {
        if (vlSelf->ascon_top__DOT__shift_type) {
            if (vlSelf->ascon_top__DOT__last_cycle) {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound2;
            } else {
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3 
                    = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shift1_shares
                                               [0U] 
                                               >> 4U)))) 
                        << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                     [4U] >> 1U));
                vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                    = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound3;
            }
        } else if (vlSelf->ascon_top__DOT__last_cycle) {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4 
                = (((QData)((IData)((1U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 0xcU)))) 
                    << 0x3fU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 1U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound4;
        } else {
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5 
                = (((QData)((IData)((7U & (vlSelf->ascon_top__DOT__state_reg_in_shiftdplus1_shares
                                           [0U] >> 0xcU)))) 
                    << 0x3dU) | (vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__state
                                 [4U] >> 3U));
            vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
                = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound5;
        }
    } else if (vlSelf->ascon_top__DOT__write_en) {
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6 
            = (((QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                [0U][9U])) << 0x20U) 
               | (QData)((IData)(vlSelf->ascon_top__DOT__state_reg_in_shares
                                 [0U][8U])));
        vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT__next_state[4U] 
            = vlSelf->ascon_top__DOT__gen_state_regs__BRA__0__KET____DOT__state_reg_share__DOT____Vlvbound6;
    }
}
