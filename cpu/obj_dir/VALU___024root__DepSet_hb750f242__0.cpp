// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VALU.h for the primary calling header

#include "verilated.h"

#include "VALU___024root.h"

VL_INLINE_OPT void VALU___024root___sequent__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___sequent__TOP__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__top__DOT__register__DOT__reg_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__register__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__register__DOT__reg_array__v0;
    CData/*0:0*/ __Vdlyvdim0__top__DOT__data_mem__DOT__data_array__v0;
    IData/*31:0*/ __Vdlyvval__top__DOT__data_mem__DOT__data_array__v0;
    CData/*0:0*/ __Vdlyvset__top__DOT__data_mem__DOT__data_array__v0;
    // Body
    __Vdlyvset__top__DOT__data_mem__DOT__data_array__v0 = 0U;
    __Vdlyvset__top__DOT__register__DOT__reg_array__v0 = 0U;
    if (vlSelf->top__DOT__MemWrite) {
        __Vdlyvval__top__DOT__data_mem__DOT__data_array__v0 
            = vlSelf->top__DOT__Regop2;
        __Vdlyvset__top__DOT__data_mem__DOT__data_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__data_mem__DOT__data_array__v0 
            = (1U & ((IData)(1U) + vlSelf->top__DOT__test));
    }
    if (vlSelf->top__DOT__RegWrite) {
        __Vdlyvval__top__DOT__register__DOT__reg_array__v0 
            = ((IData)(vlSelf->top__DOT__Resultsrc)
                ? vlSelf->top__DOT__data_mem__DOT__RD
                : vlSelf->top__DOT__test);
        __Vdlyvset__top__DOT__register__DOT__reg_array__v0 = 1U;
        __Vdlyvdim0__top__DOT__register__DOT__reg_array__v0 
            = (0x1fU & (vlSelf->top__DOT__instr >> 7U));
    }
    if (__Vdlyvset__top__DOT__register__DOT__reg_array__v0) {
        vlSelf->top__DOT__register__DOT__reg_array[__Vdlyvdim0__top__DOT__register__DOT__reg_array__v0] 
            = __Vdlyvval__top__DOT__register__DOT__reg_array__v0;
    }
    vlSelf->top__DOT__data_mem__DOT__RD = vlSelf->top__DOT__data_mem__DOT__data_array
        [(1U & ((IData)(1U) + vlSelf->top__DOT__test))];
    vlSelf->top__DOT____Vcellout__register__a0[0x1fU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1fU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1eU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1eU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1dU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1dU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1cU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1cU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1bU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1bU];
    vlSelf->top__DOT____Vcellout__register__a0[0x1aU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x1aU];
    vlSelf->top__DOT____Vcellout__register__a0[0x19U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x19U];
    vlSelf->top__DOT____Vcellout__register__a0[0x18U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x18U];
    vlSelf->top__DOT____Vcellout__register__a0[0x17U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x17U];
    vlSelf->top__DOT____Vcellout__register__a0[0x16U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x16U];
    vlSelf->top__DOT____Vcellout__register__a0[0x15U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x15U];
    vlSelf->top__DOT____Vcellout__register__a0[0x14U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x14U];
    vlSelf->top__DOT____Vcellout__register__a0[0x13U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x13U];
    vlSelf->top__DOT____Vcellout__register__a0[0x12U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x12U];
    vlSelf->top__DOT____Vcellout__register__a0[0x11U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x11U];
    vlSelf->top__DOT____Vcellout__register__a0[0x10U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0x10U];
    vlSelf->top__DOT____Vcellout__register__a0[0xfU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xfU];
    vlSelf->top__DOT____Vcellout__register__a0[0xeU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xeU];
    vlSelf->top__DOT____Vcellout__register__a0[0xdU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xdU];
    vlSelf->top__DOT____Vcellout__register__a0[0xcU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xcU];
    vlSelf->top__DOT____Vcellout__register__a0[0xbU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xbU];
    vlSelf->top__DOT____Vcellout__register__a0[0xaU] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0xaU];
    vlSelf->top__DOT____Vcellout__register__a0[9U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [9U];
    vlSelf->top__DOT____Vcellout__register__a0[8U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [8U];
    vlSelf->top__DOT____Vcellout__register__a0[7U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [7U];
    vlSelf->top__DOT____Vcellout__register__a0[6U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [6U];
    vlSelf->top__DOT____Vcellout__register__a0[5U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [5U];
    vlSelf->top__DOT____Vcellout__register__a0[4U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [4U];
    vlSelf->top__DOT____Vcellout__register__a0[3U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [3U];
    vlSelf->top__DOT____Vcellout__register__a0[2U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [2U];
    vlSelf->top__DOT____Vcellout__register__a0[1U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [1U];
    vlSelf->top__DOT____Vcellout__register__a0[0U] 
        = vlSelf->top__DOT__register__DOT__reg_array
        [0U];
    if (__Vdlyvset__top__DOT__data_mem__DOT__data_array__v0) {
        vlSelf->top__DOT__data_mem__DOT__data_array[__Vdlyvdim0__top__DOT__data_mem__DOT__data_array__v0] 
            = __Vdlyvval__top__DOT__data_mem__DOT__data_array__v0;
    }
    vlSelf->a0[0x1fU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1fU];
    vlSelf->a0[0x1eU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1eU];
    vlSelf->a0[0x1dU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1dU];
    vlSelf->a0[0x1cU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1cU];
    vlSelf->a0[0x1bU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1bU];
    vlSelf->a0[0x1aU] = vlSelf->top__DOT____Vcellout__register__a0
        [0x1aU];
    vlSelf->a0[0x19U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x19U];
    vlSelf->a0[0x18U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x18U];
    vlSelf->a0[0x17U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x17U];
    vlSelf->a0[0x16U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x16U];
    vlSelf->a0[0x15U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x15U];
    vlSelf->a0[0x14U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x14U];
    vlSelf->a0[0x13U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x13U];
    vlSelf->a0[0x12U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x12U];
    vlSelf->a0[0x11U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x11U];
    vlSelf->a0[0x10U] = vlSelf->top__DOT____Vcellout__register__a0
        [0x10U];
    vlSelf->a0[0xfU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xfU];
    vlSelf->a0[0xeU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xeU];
    vlSelf->a0[0xdU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xdU];
    vlSelf->a0[0xcU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xcU];
    vlSelf->a0[0xbU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xbU];
    vlSelf->a0[0xaU] = vlSelf->top__DOT____Vcellout__register__a0
        [0xaU];
    vlSelf->a0[9U] = vlSelf->top__DOT____Vcellout__register__a0
        [9U];
    vlSelf->a0[8U] = vlSelf->top__DOT____Vcellout__register__a0
        [8U];
    vlSelf->a0[7U] = vlSelf->top__DOT____Vcellout__register__a0
        [7U];
    vlSelf->a0[6U] = vlSelf->top__DOT____Vcellout__register__a0
        [6U];
    vlSelf->a0[5U] = vlSelf->top__DOT____Vcellout__register__a0
        [5U];
    vlSelf->a0[4U] = vlSelf->top__DOT____Vcellout__register__a0
        [4U];
    vlSelf->a0[3U] = vlSelf->top__DOT____Vcellout__register__a0
        [3U];
    vlSelf->a0[2U] = vlSelf->top__DOT____Vcellout__register__a0
        [2U];
    vlSelf->a0[1U] = vlSelf->top__DOT____Vcellout__register__a0
        [1U];
    vlSelf->a0[0U] = vlSelf->top__DOT____Vcellout__register__a0
        [0U];
}

VL_INLINE_OPT void VALU___024root___sequent__TOP__1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___sequent__TOP__1\n"); );
    // Body
    vlSelf->top__DOT__PC = ((IData)(vlSelf->rst) ? 0U
                             : vlSelf->top__DOT__pc__DOT__next_PC);
    vlSelf->top__DOT__instr = vlSelf->top__DOT__instr_mem__DOT__rom_array
        [(0x1fU & vlSelf->top__DOT__PC)];
    vlSelf->top__DOT__Regop2 = vlSelf->top__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0x14U))];
    vlSelf->top__DOT__Regop1 = vlSelf->top__DOT__register__DOT__reg_array
        [(0x1fU & (vlSelf->top__DOT__instr >> 0xfU))];
}

extern const VlUnpacked<CData/*1:0*/, 256> VALU__ConstPool__TABLE_h867b1fb7_0;
extern const VlUnpacked<CData/*0:0*/, 256> VALU__ConstPool__TABLE_he22b48e5_0;
extern const VlUnpacked<CData/*0:0*/, 256> VALU__ConstPool__TABLE_he3ca740a_0;
extern const VlUnpacked<CData/*1:0*/, 256> VALU__ConstPool__TABLE_hf3656107_0;
extern const VlUnpacked<CData/*0:0*/, 256> VALU__ConstPool__TABLE_h216be136_0;
extern const VlUnpacked<CData/*6:0*/, 256> VALU__ConstPool__TABLE_hd009eb70_0;
extern const VlUnpacked<CData/*0:0*/, 256> VALU__ConstPool__TABLE_h9bdefb87_0;
extern const VlUnpacked<CData/*0:0*/, 256> VALU__ConstPool__TABLE_h81fb005b_0;

VL_INLINE_OPT void VALU___024root___combo__TOP__0(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___combo__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    // Body
    if ((0U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        vlSelf->top__DOT__ALUctrl = 0U;
    } else if ((1U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        vlSelf->top__DOT__ALUctrl = 1U;
    } else if ((2U == (IData)(vlSelf->top__DOT__control__DOT__ALUop))) {
        if ((2U == (7U & (vlSelf->top__DOT__instr >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = 5U;
        } else if ((6U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = 3U;
        } else if ((7U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = 2U;
        } else if ((0U == (7U & (vlSelf->top__DOT__instr 
                                 >> 0xcU)))) {
            vlSelf->top__DOT__ALUctrl = ((IData)((0x40000020U 
                                                  == 
                                                  (0x40000020U 
                                                   & vlSelf->top__DOT__instr)))
                                          ? 1U : 0U);
        }
    }
    __Vtableidx1 = (((0U == ((4U & (IData)(vlSelf->top__DOT__ALUctrl))
                              ? ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                                  ? 0U : ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                           ? (vlSelf->top__DOT__Regop1 
                                              < vlSelf->top__DOT__ALU__DOT__ALUop2)
                                           : 0U)) : 
                             ((2U & (IData)(vlSelf->top__DOT__ALUctrl))
                               ? ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                   ? (vlSelf->top__DOT__Regop1 
                                      | vlSelf->top__DOT__ALU__DOT__ALUop2)
                                   : (vlSelf->top__DOT__Regop1 
                                      & vlSelf->top__DOT__ALU__DOT__ALUop2))
                               : ((1U & (IData)(vlSelf->top__DOT__ALUctrl))
                                   ? (vlSelf->top__DOT__Regop1 
                                      - vlSelf->top__DOT__ALU__DOT__ALUop2)
                                   : (vlSelf->top__DOT__Regop1 
                                      + vlSelf->top__DOT__ALU__DOT__ALUop2))))) 
                     << 7U) | (0x7fU & vlSelf->top__DOT__instr));
    vlSelf->top__DOT__control__DOT__ALUop = VALU__ConstPool__TABLE_h867b1fb7_0
        [__Vtableidx1];
    vlSelf->top__DOT__RegWrite = VALU__ConstPool__TABLE_he22b48e5_0
        [__Vtableidx1];
    vlSelf->top__DOT__ALUsrc = VALU__ConstPool__TABLE_he3ca740a_0
        [__Vtableidx1];
    vlSelf->top__DOT__ImmSrc = VALU__ConstPool__TABLE_hf3656107_0
        [__Vtableidx1];
    vlSelf->top__DOT__PCsrc = VALU__ConstPool__TABLE_h216be136_0
        [__Vtableidx1];
    if ((0x20U & VALU__ConstPool__TABLE_hd009eb70_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__MemWrite = VALU__ConstPool__TABLE_h9bdefb87_0
            [__Vtableidx1];
    }
    if ((0x40U & VALU__ConstPool__TABLE_hd009eb70_0
         [__Vtableidx1])) {
        vlSelf->top__DOT__Resultsrc = VALU__ConstPool__TABLE_h81fb005b_0
            [__Vtableidx1];
    }
    vlSelf->top__DOT__ImmOp = ((2U & (IData)(vlSelf->top__DOT__ImmSrc))
                                ? ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? vlSelf->top__DOT__instr
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0x800U & (vlSelf->top__DOT__instr 
                                                   << 4U)) 
                                        | ((0x7e0U 
                                            & (vlSelf->top__DOT__instr 
                                               >> 0x14U)) 
                                           | (0x1eU 
                                              & (vlSelf->top__DOT__instr 
                                                 >> 7U))))))
                                : ((1U & (IData)(vlSelf->top__DOT__ImmSrc))
                                    ? (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       ((0xfe0U & (vlSelf->top__DOT__instr 
                                                   >> 0x14U)) 
                                        | (0x1fU & 
                                           (vlSelf->top__DOT__instr 
                                            >> 7U))))
                                    : (((- (IData)(
                                                   (vlSelf->top__DOT__instr 
                                                    >> 0x1fU))) 
                                        << 0xcU) | 
                                       (vlSelf->top__DOT__instr 
                                        >> 0x14U))));
    vlSelf->top__DOT__ALU__DOT__ALUop2 = ((IData)(vlSelf->top__DOT__ALUsrc)
                                           ? vlSelf->top__DOT__ImmOp
                                           : vlSelf->top__DOT__Regop2);
    vlSelf->top__DOT__pc__DOT__next_PC = ((IData)(vlSelf->top__DOT__PCsrc)
                                           ? (vlSelf->top__DOT__PC 
                                              + vlSelf->top__DOT__ImmOp)
                                           : ((IData)(4U) 
                                              + vlSelf->top__DOT__PC));
}

void VALU___024root___eval(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        VALU___024root___sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        VALU___024root___sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    VALU___024root___combo__TOP__0(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

QData VALU___024root___change_request_1(VALU___024root* vlSelf);

VL_INLINE_OPT QData VALU___024root___change_request(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request\n"); );
    // Body
    return (VALU___024root___change_request_1(vlSelf));
}

VL_INLINE_OPT QData VALU___024root___change_request_1(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___change_request_1\n"); );
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlSelf->top__DOT__control__DOT__ALUop ^ vlSelf->__Vchglast__TOP__top__DOT__control__DOT__ALUop)
         | (vlSelf->top__DOT__ALU__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__top__DOT__ALU__DOT__ALUop2));
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__control__DOT__ALUop ^ vlSelf->__Vchglast__TOP__top__DOT__control__DOT__ALUop))) VL_DBG_MSGF("        CHANGE: control.sv:13: top.control.ALUop\n"); );
    VL_DEBUG_IF( if(__req && ((vlSelf->top__DOT__ALU__DOT__ALUop2 ^ vlSelf->__Vchglast__TOP__top__DOT__ALU__DOT__ALUop2))) VL_DBG_MSGF("        CHANGE: ALU.sv:11: top.ALU.ALUop2\n"); );
    // Final
    vlSelf->__Vchglast__TOP__top__DOT__control__DOT__ALUop 
        = vlSelf->top__DOT__control__DOT__ALUop;
    vlSelf->__Vchglast__TOP__top__DOT__ALU__DOT__ALUop2 
        = vlSelf->top__DOT__ALU__DOT__ALUop2;
    return __req;
}

#ifdef VL_DEBUG
void VALU___024root___eval_debug_assertions(VALU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VALU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VALU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
}
#endif  // VL_DEBUG