// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vtop___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vtop___024root__trace_chg_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(((IData)(vlSelf->top__DOT__pResultsrc)
                                 ? vlSelf->top__DOT__pRD
                                 : vlSelf->top__DOT__p2ALUout)),32);
        bufp->chgCData(oldp+1,((0x1fU & (vlSelf->top__DOT__pinstr 
                                         >> 0xfU))),5);
        bufp->chgCData(oldp+2,((0x1fU & (vlSelf->top__DOT__pinstr 
                                         >> 0x14U))),5);
        bufp->chgCData(oldp+3,((0x1fU & (vlSelf->top__DOT__pinstr 
                                         >> 7U))),5);
        bufp->chgIData(oldp+4,(vlSelf->top__DOT__pinstr),32);
        bufp->chgBit(oldp+5,((3U == (0x7fU & vlSelf->top__DOT__pinstr))));
        bufp->chgBit(oldp+6,(vlSelf->top__DOT__Memwrite));
        bufp->chgCData(oldp+7,(vlSelf->top__DOT__ALUctrl),3);
        bufp->chgBit(oldp+8,(vlSelf->top__DOT__ALUsrc));
        bufp->chgCData(oldp+9,(vlSelf->top__DOT__ImmSrc),3);
        bufp->chgBit(oldp+10,(vlSelf->top__DOT__RegWrite));
        bufp->chgBit(oldp+11,(((3U != (0x7fU & vlSelf->top__DOT__pinstr)) 
                               & ((0x23U != (0x7fU 
                                             & vlSelf->top__DOT__pinstr)) 
                                  & ((~ ((0x33U == 
                                          (0x7fU & vlSelf->top__DOT__pinstr)) 
                                         | (0x13U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__pinstr)))) 
                                     & ((0x37U != (0x7fU 
                                                   & vlSelf->top__DOT__pinstr)) 
                                        & ((~ (IData)(
                                                      (0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__pinstr)))) 
                                           & ((0x6fU 
                                               != (0x7fU 
                                                   & vlSelf->top__DOT__pinstr)) 
                                              & (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__pinstr))))))))));
        bufp->chgBit(oldp+12,(((3U != (0x7fU & vlSelf->top__DOT__pinstr)) 
                               & ((0x23U != (0x7fU 
                                             & vlSelf->top__DOT__pinstr)) 
                                  & ((~ ((0x33U == 
                                          (0x7fU & vlSelf->top__DOT__pinstr)) 
                                         | (0x13U == 
                                            (0x7fU 
                                             & vlSelf->top__DOT__pinstr)))) 
                                     & ((0x37U != (0x7fU 
                                                   & vlSelf->top__DOT__pinstr)) 
                                        & ((~ (IData)(
                                                      (0x1063U 
                                                       == 
                                                       (0x707fU 
                                                        & vlSelf->top__DOT__pinstr)))) 
                                           & ((0x6fU 
                                               == (0x7fU 
                                                   & vlSelf->top__DOT__pinstr)) 
                                              | (0x67U 
                                                 == 
                                                 (0x7fU 
                                                  & vlSelf->top__DOT__pinstr))))))))));
        bufp->chgBit(oldp+13,(vlSelf->top__DOT__branch));
        bufp->chgIData(oldp+14,(vlSelf->top__DOT__ImmOp),32);
        bufp->chgIData(oldp+15,(vlSelf->top__DOT__register__DOT__reg_array
                                [(0x1fU & (vlSelf->top__DOT__pinstr 
                                           >> 0xfU))]),32);
        bufp->chgIData(oldp+16,(vlSelf->top__DOT__RD2),32);
        bufp->chgIData(oldp+17,(((IData)(vlSelf->top__DOT__preg_jump)
                                  ? vlSelf->top__DOT__pRD1
                                  : (vlSelf->top__DOT__pPC 
                                     + vlSelf->top__DOT__pImmOp))),32);
        bufp->chgIData(oldp+18,(vlSelf->top__DOT__data_mem__DOT__data_array
                                [(0x1ffffU & vlSelf->top__DOT__pALUout)]),32);
        bufp->chgIData(oldp+19,(vlSelf->top__DOT__pPC),32);
        bufp->chgBit(oldp+20,(vlSelf->top__DOT__pRegWrite));
        bufp->chgBit(oldp+21,(vlSelf->top__DOT__pResultsrc));
        bufp->chgBit(oldp+22,(vlSelf->top__DOT__pMemwrite));
        bufp->chgCData(oldp+23,(vlSelf->top__DOT__pALUctrl),3);
        bufp->chgBit(oldp+24,(vlSelf->top__DOT__pALUsrc));
        bufp->chgBit(oldp+25,(vlSelf->top__DOT__preg_jump));
        bufp->chgIData(oldp+26,(vlSelf->top__DOT__pRD1),32);
        bufp->chgIData(oldp+27,(vlSelf->top__DOT__pRD2),32);
        bufp->chgIData(oldp+28,(vlSelf->top__DOT__p2RD2),32);
        bufp->chgIData(oldp+29,(vlSelf->top__DOT__pImmOp),32);
        bufp->chgCData(oldp+30,(vlSelf->top__DOT__prd),5);
        bufp->chgIData(oldp+31,(vlSelf->top__DOT__pALUout),32);
        bufp->chgIData(oldp+32,(vlSelf->top__DOT__p2ALUout),32);
        bufp->chgIData(oldp+33,(vlSelf->top__DOT__pRD),32);
        bufp->chgIData(oldp+34,(vlSelf->top__DOT__ALU__DOT__ALUop2),32);
        bufp->chgCData(oldp+35,(vlSelf->top__DOT__control__DOT__ALUop),2);
        bufp->chgCData(oldp+36,((0x7fU & vlSelf->top__DOT__pinstr)),7);
        bufp->chgCData(oldp+37,((7U & (vlSelf->top__DOT__pinstr 
                                       >> 0xcU))),3);
        bufp->chgBit(oldp+38,((1U & (vlSelf->top__DOT__pinstr 
                                     >> 0x1eU))));
        bufp->chgIData(oldp+39,(((0x100000U & (vlSelf->top__DOT__pinstr 
                                               >> 0xbU)) 
                                 | ((0xfffe0U & (vlSelf->top__DOT__pinstr 
                                                 >> 0xaU)) 
                                    | (0x1fU & (vlSelf->top__DOT__pinstr 
                                                >> 7U))))),21);
        bufp->chgIData(oldp+40,(vlSelf->top__DOT__pipline__DOT__PC_d),32);
        bufp->chgBit(oldp+41,(vlSelf->top__DOT__pipline__DOT__RegWrite_d1));
        bufp->chgBit(oldp+42,(vlSelf->top__DOT__pipline__DOT__RegWrite_d2));
        bufp->chgBit(oldp+43,(vlSelf->top__DOT__pipline__DOT__Resultsrc_d1));
        bufp->chgBit(oldp+44,(vlSelf->top__DOT__pipline__DOT__Resultsrc_d2));
        bufp->chgBit(oldp+45,(vlSelf->top__DOT__pipline__DOT__Memwrite_d));
        bufp->chgBit(oldp+46,(vlSelf->top__DOT__pipline__DOT__pjump));
        bufp->chgBit(oldp+47,(vlSelf->top__DOT__pipline__DOT__pbranch));
        bufp->chgCData(oldp+48,(vlSelf->top__DOT__pipline__DOT__rd_d1),5);
        bufp->chgCData(oldp+49,(vlSelf->top__DOT__pipline__DOT__rd_d2),5);
        bufp->chgIData(oldp+50,(vlSelf->top__DOT____Vcellout__register__a0[0]),32);
        bufp->chgIData(oldp+51,(vlSelf->top__DOT____Vcellout__register__a0[1]),32);
        bufp->chgIData(oldp+52,(vlSelf->top__DOT____Vcellout__register__a0[2]),32);
        bufp->chgIData(oldp+53,(vlSelf->top__DOT____Vcellout__register__a0[3]),32);
        bufp->chgIData(oldp+54,(vlSelf->top__DOT____Vcellout__register__a0[4]),32);
        bufp->chgIData(oldp+55,(vlSelf->top__DOT____Vcellout__register__a0[5]),32);
        bufp->chgIData(oldp+56,(vlSelf->top__DOT____Vcellout__register__a0[6]),32);
        bufp->chgIData(oldp+57,(vlSelf->top__DOT____Vcellout__register__a0[7]),32);
        bufp->chgIData(oldp+58,(vlSelf->top__DOT____Vcellout__register__a0[8]),32);
        bufp->chgIData(oldp+59,(vlSelf->top__DOT____Vcellout__register__a0[9]),32);
        bufp->chgIData(oldp+60,(vlSelf->top__DOT____Vcellout__register__a0[10]),32);
        bufp->chgIData(oldp+61,(vlSelf->top__DOT____Vcellout__register__a0[11]),32);
        bufp->chgIData(oldp+62,(vlSelf->top__DOT____Vcellout__register__a0[12]),32);
        bufp->chgIData(oldp+63,(vlSelf->top__DOT____Vcellout__register__a0[13]),32);
        bufp->chgIData(oldp+64,(vlSelf->top__DOT____Vcellout__register__a0[14]),32);
        bufp->chgIData(oldp+65,(vlSelf->top__DOT____Vcellout__register__a0[15]),32);
        bufp->chgIData(oldp+66,(vlSelf->top__DOT____Vcellout__register__a0[16]),32);
        bufp->chgIData(oldp+67,(vlSelf->top__DOT____Vcellout__register__a0[17]),32);
        bufp->chgIData(oldp+68,(vlSelf->top__DOT____Vcellout__register__a0[18]),32);
        bufp->chgIData(oldp+69,(vlSelf->top__DOT____Vcellout__register__a0[19]),32);
        bufp->chgIData(oldp+70,(vlSelf->top__DOT____Vcellout__register__a0[20]),32);
        bufp->chgIData(oldp+71,(vlSelf->top__DOT____Vcellout__register__a0[21]),32);
        bufp->chgIData(oldp+72,(vlSelf->top__DOT____Vcellout__register__a0[22]),32);
        bufp->chgIData(oldp+73,(vlSelf->top__DOT____Vcellout__register__a0[23]),32);
        bufp->chgIData(oldp+74,(vlSelf->top__DOT____Vcellout__register__a0[24]),32);
        bufp->chgIData(oldp+75,(vlSelf->top__DOT____Vcellout__register__a0[25]),32);
        bufp->chgIData(oldp+76,(vlSelf->top__DOT____Vcellout__register__a0[26]),32);
        bufp->chgIData(oldp+77,(vlSelf->top__DOT____Vcellout__register__a0[27]),32);
        bufp->chgIData(oldp+78,(vlSelf->top__DOT____Vcellout__register__a0[28]),32);
        bufp->chgIData(oldp+79,(vlSelf->top__DOT____Vcellout__register__a0[29]),32);
        bufp->chgIData(oldp+80,(vlSelf->top__DOT____Vcellout__register__a0[30]),32);
        bufp->chgIData(oldp+81,(vlSelf->top__DOT____Vcellout__register__a0[31]),32);
        bufp->chgIData(oldp+82,(vlSelf->top__DOT__register__DOT__reg_array[0]),32);
        bufp->chgIData(oldp+83,(vlSelf->top__DOT__register__DOT__reg_array[1]),32);
        bufp->chgIData(oldp+84,(vlSelf->top__DOT__register__DOT__reg_array[2]),32);
        bufp->chgIData(oldp+85,(vlSelf->top__DOT__register__DOT__reg_array[3]),32);
        bufp->chgIData(oldp+86,(vlSelf->top__DOT__register__DOT__reg_array[4]),32);
        bufp->chgIData(oldp+87,(vlSelf->top__DOT__register__DOT__reg_array[5]),32);
        bufp->chgIData(oldp+88,(vlSelf->top__DOT__register__DOT__reg_array[6]),32);
        bufp->chgIData(oldp+89,(vlSelf->top__DOT__register__DOT__reg_array[7]),32);
        bufp->chgIData(oldp+90,(vlSelf->top__DOT__register__DOT__reg_array[8]),32);
        bufp->chgIData(oldp+91,(vlSelf->top__DOT__register__DOT__reg_array[9]),32);
        bufp->chgIData(oldp+92,(vlSelf->top__DOT__register__DOT__reg_array[10]),32);
        bufp->chgIData(oldp+93,(vlSelf->top__DOT__register__DOT__reg_array[11]),32);
        bufp->chgIData(oldp+94,(vlSelf->top__DOT__register__DOT__reg_array[12]),32);
        bufp->chgIData(oldp+95,(vlSelf->top__DOT__register__DOT__reg_array[13]),32);
        bufp->chgIData(oldp+96,(vlSelf->top__DOT__register__DOT__reg_array[14]),32);
        bufp->chgIData(oldp+97,(vlSelf->top__DOT__register__DOT__reg_array[15]),32);
        bufp->chgIData(oldp+98,(vlSelf->top__DOT__register__DOT__reg_array[16]),32);
        bufp->chgIData(oldp+99,(vlSelf->top__DOT__register__DOT__reg_array[17]),32);
        bufp->chgIData(oldp+100,(vlSelf->top__DOT__register__DOT__reg_array[18]),32);
        bufp->chgIData(oldp+101,(vlSelf->top__DOT__register__DOT__reg_array[19]),32);
        bufp->chgIData(oldp+102,(vlSelf->top__DOT__register__DOT__reg_array[20]),32);
        bufp->chgIData(oldp+103,(vlSelf->top__DOT__register__DOT__reg_array[21]),32);
        bufp->chgIData(oldp+104,(vlSelf->top__DOT__register__DOT__reg_array[22]),32);
        bufp->chgIData(oldp+105,(vlSelf->top__DOT__register__DOT__reg_array[23]),32);
        bufp->chgIData(oldp+106,(vlSelf->top__DOT__register__DOT__reg_array[24]),32);
        bufp->chgIData(oldp+107,(vlSelf->top__DOT__register__DOT__reg_array[25]),32);
        bufp->chgIData(oldp+108,(vlSelf->top__DOT__register__DOT__reg_array[26]),32);
        bufp->chgIData(oldp+109,(vlSelf->top__DOT__register__DOT__reg_array[27]),32);
        bufp->chgIData(oldp+110,(vlSelf->top__DOT__register__DOT__reg_array[28]),32);
        bufp->chgIData(oldp+111,(vlSelf->top__DOT__register__DOT__reg_array[29]),32);
        bufp->chgIData(oldp+112,(vlSelf->top__DOT__register__DOT__reg_array[30]),32);
        bufp->chgIData(oldp+113,(vlSelf->top__DOT__register__DOT__reg_array[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+114,(vlSelf->top__DOT__PC),32);
        bufp->chgIData(oldp+115,(((IData)(4U) + vlSelf->top__DOT__PC)),32);
        bufp->chgIData(oldp+116,(vlSelf->top__DOT__instr_mem__DOT__rom_array
                                 [(0xfffU & (vlSelf->top__DOT__PC 
                                             >> 2U))]),32);
        bufp->chgIData(oldp+117,(vlSelf->top__DOT__ALUout),32);
        bufp->chgBit(oldp+118,((0U == vlSelf->top__DOT__ALUout)));
    }
    bufp->chgBit(oldp+119,(vlSelf->clk));
    bufp->chgBit(oldp+120,(vlSelf->rst));
    bufp->chgBit(oldp+121,(vlSelf->trigger));
    bufp->chgIData(oldp+122,(vlSelf->a0[0]),32);
    bufp->chgIData(oldp+123,(vlSelf->a0[1]),32);
    bufp->chgIData(oldp+124,(vlSelf->a0[2]),32);
    bufp->chgIData(oldp+125,(vlSelf->a0[3]),32);
    bufp->chgIData(oldp+126,(vlSelf->a0[4]),32);
    bufp->chgIData(oldp+127,(vlSelf->a0[5]),32);
    bufp->chgIData(oldp+128,(vlSelf->a0[6]),32);
    bufp->chgIData(oldp+129,(vlSelf->a0[7]),32);
    bufp->chgIData(oldp+130,(vlSelf->a0[8]),32);
    bufp->chgIData(oldp+131,(vlSelf->a0[9]),32);
    bufp->chgIData(oldp+132,(vlSelf->a0[10]),32);
    bufp->chgIData(oldp+133,(vlSelf->a0[11]),32);
    bufp->chgIData(oldp+134,(vlSelf->a0[12]),32);
    bufp->chgIData(oldp+135,(vlSelf->a0[13]),32);
    bufp->chgIData(oldp+136,(vlSelf->a0[14]),32);
    bufp->chgIData(oldp+137,(vlSelf->a0[15]),32);
    bufp->chgIData(oldp+138,(vlSelf->a0[16]),32);
    bufp->chgIData(oldp+139,(vlSelf->a0[17]),32);
    bufp->chgIData(oldp+140,(vlSelf->a0[18]),32);
    bufp->chgIData(oldp+141,(vlSelf->a0[19]),32);
    bufp->chgIData(oldp+142,(vlSelf->a0[20]),32);
    bufp->chgIData(oldp+143,(vlSelf->a0[21]),32);
    bufp->chgIData(oldp+144,(vlSelf->a0[22]),32);
    bufp->chgIData(oldp+145,(vlSelf->a0[23]),32);
    bufp->chgIData(oldp+146,(vlSelf->a0[24]),32);
    bufp->chgIData(oldp+147,(vlSelf->a0[25]),32);
    bufp->chgIData(oldp+148,(vlSelf->a0[26]),32);
    bufp->chgIData(oldp+149,(vlSelf->a0[27]),32);
    bufp->chgIData(oldp+150,(vlSelf->a0[28]),32);
    bufp->chgIData(oldp+151,(vlSelf->a0[29]),32);
    bufp->chgIData(oldp+152,(vlSelf->a0[30]),32);
    bufp->chgIData(oldp+153,(vlSelf->a0[31]),32);
    bufp->chgCData(oldp+154,(vlSelf->data_out),8);
    bufp->chgBit(oldp+155,(((IData)(vlSelf->top__DOT__pipline__DOT__pjump) 
                            | ((IData)(vlSelf->top__DOT__pipline__DOT__pbranch) 
                               & (0U != vlSelf->top__DOT__ALUout)))));
    bufp->chgIData(oldp+156,((((IData)(vlSelf->top__DOT__pipline__DOT__pjump) 
                               | ((IData)(vlSelf->top__DOT__pipline__DOT__pbranch) 
                                  & (0U != vlSelf->top__DOT__ALUout)))
                               ? ((IData)(vlSelf->top__DOT__preg_jump)
                                   ? vlSelf->top__DOT__pRD1
                                   : (vlSelf->top__DOT__pPC 
                                      + vlSelf->top__DOT__pImmOp))
                               : ((IData)(4U) + vlSelf->top__DOT__PC))),32);
}

void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_cleanup\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
