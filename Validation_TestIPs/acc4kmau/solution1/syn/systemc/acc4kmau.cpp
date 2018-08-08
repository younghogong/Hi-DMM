// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "acc4kmau.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic acc4kmau::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic acc4kmau::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> acc4kmau::ap_ST_fsm_state1 = "1";
const sc_lv<6> acc4kmau::ap_ST_fsm_state2 = "10";
const sc_lv<6> acc4kmau::ap_ST_fsm_state3 = "100";
const sc_lv<6> acc4kmau::ap_ST_fsm_state4 = "1000";
const sc_lv<6> acc4kmau::ap_ST_fsm_state5 = "10000";
const sc_lv<6> acc4kmau::ap_ST_fsm_state6 = "100000";
const sc_lv<32> acc4kmau::ap_const_lv32_0 = "00000000000000000000000000000000";
const bool acc4kmau::ap_const_boolean_1 = true;
const sc_lv<32> acc4kmau::ap_const_lv32_1 = "1";
const sc_lv<32> acc4kmau::ap_const_lv32_2 = "10";
const sc_lv<1> acc4kmau::ap_const_lv1_0 = "0";
const sc_lv<1> acc4kmau::ap_const_lv1_1 = "1";
const sc_lv<32> acc4kmau::ap_const_lv32_3 = "11";
const sc_lv<32> acc4kmau::ap_const_lv32_4 = "100";
const bool acc4kmau::ap_const_boolean_0 = false;
const sc_lv<32> acc4kmau::ap_const_lv32_5 = "101";
const sc_lv<2> acc4kmau::ap_const_lv2_2 = "10";
const sc_lv<2> acc4kmau::ap_const_lv2_3 = "11";
const sc_lv<33> acc4kmau::ap_const_lv33_1FFFFFE70 = "111111111111111111111111001110000";
const sc_lv<33> acc4kmau::ap_const_lv33_270 = "1001110000";

acc4kmau::acc4kmau(sc_module_name name) : sc_module(name), mVcdFile(0) {
    req_cmd_U = new acc4kmau_req_cmd("req_cmd_U");
    req_cmd_U->clk(ap_clk);
    req_cmd_U->reset(ap_rst);
    req_cmd_U->address0(req_cmd_address0);
    req_cmd_U->ce0(req_cmd_ce0);
    req_cmd_U->q0(req_cmd_q0);
    req_list_U = new acc4kmau_req_list("req_list_U");
    req_list_U->clk(ap_clk);
    req_list_U->reset(ap_rst);
    req_list_U->address0(req_list_address0);
    req_list_U->ce0(req_list_ce0);
    req_list_U->q0(req_list_q0);
    req_size_U = new acc4kmau_req_size("req_size_U");
    req_size_U->clk(ap_clk);
    req_size_U->reset(ap_rst);
    req_size_U->address0(req_size_address0);
    req_size_U->ce0(req_size_ce0);
    req_size_U->q0(req_size_q0);
    grp_HLS_malloc_1_s_fu_99 = new HLS_malloc_1_s("grp_HLS_malloc_1_s_fu_99");
    grp_HLS_malloc_1_s_fu_99->ap_clk(ap_clk);
    grp_HLS_malloc_1_s_fu_99->ap_rst(ap_rst);
    grp_HLS_malloc_1_s_fu_99->ap_start(grp_HLS_malloc_1_s_fu_99_ap_start);
    grp_HLS_malloc_1_s_fu_99->ap_done(grp_HLS_malloc_1_s_fu_99_ap_done);
    grp_HLS_malloc_1_s_fu_99->ap_idle(grp_HLS_malloc_1_s_fu_99_ap_idle);
    grp_HLS_malloc_1_s_fu_99->ap_ready(grp_HLS_malloc_1_s_fu_99_ap_ready);
    grp_HLS_malloc_1_s_fu_99->size(size_reg_201);
    grp_HLS_malloc_1_s_fu_99->allocator_size(grp_HLS_malloc_1_s_fu_99_allocator_size);
    grp_HLS_malloc_1_s_fu_99->allocator_size_ap_vld(grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld);
    grp_HLS_malloc_1_s_fu_99->allocator_size_ap_ack(alloc_1_size_ap_ack);
    grp_HLS_malloc_1_s_fu_99->allocator_addr(alloc_1_addr);
    grp_HLS_malloc_1_s_fu_99->allocator_addr_ap_vld(alloc_1_addr_ap_vld);
    grp_HLS_malloc_1_s_fu_99->allocator_addr_ap_ack(grp_HLS_malloc_1_s_fu_99_allocator_addr_ap_ack);
    grp_HLS_malloc_1_s_fu_99->allocator_free_targe(grp_HLS_malloc_1_s_fu_99_allocator_free_targe);
    grp_HLS_malloc_1_s_fu_99->allocator_free_targe_ap_vld(grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld);
    grp_HLS_malloc_1_s_fu_99->allocator_free_targe_ap_ack(alloc_1_free_target_ap_ack);
    grp_HLS_malloc_1_s_fu_99->allocator_cmd(grp_HLS_malloc_1_s_fu_99_allocator_cmd);
    grp_HLS_malloc_1_s_fu_99->allocator_cmd_ap_vld(grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld);
    grp_HLS_malloc_1_s_fu_99->allocator_cmd_ap_ack(alloc_1_cmd_ap_ack);
    grp_HLS_malloc_1_s_fu_99->ap_return(grp_HLS_malloc_1_s_fu_99_ap_return);
    grp_HLS_free_1_s_fu_113 = new HLS_free_1_s("grp_HLS_free_1_s_fu_113");
    grp_HLS_free_1_s_fu_113->ap_clk(ap_clk);
    grp_HLS_free_1_s_fu_113->ap_rst(ap_rst);
    grp_HLS_free_1_s_fu_113->ap_start(grp_HLS_free_1_s_fu_113_ap_start);
    grp_HLS_free_1_s_fu_113->ap_done(grp_HLS_free_1_s_fu_113_ap_done);
    grp_HLS_free_1_s_fu_113->ap_idle(grp_HLS_free_1_s_fu_113_ap_idle);
    grp_HLS_free_1_s_fu_113->ap_ready(grp_HLS_free_1_s_fu_113_ap_ready);
    grp_HLS_free_1_s_fu_113->free_target(size_reg_201);
    grp_HLS_free_1_s_fu_113->free_size(req_size_load_reg_229);
    grp_HLS_free_1_s_fu_113->allocator_size(grp_HLS_free_1_s_fu_113_allocator_size);
    grp_HLS_free_1_s_fu_113->allocator_size_ap_vld(grp_HLS_free_1_s_fu_113_allocator_size_ap_vld);
    grp_HLS_free_1_s_fu_113->allocator_size_ap_ack(alloc_1_size_ap_ack);
    grp_HLS_free_1_s_fu_113->allocator_free_targe(grp_HLS_free_1_s_fu_113_allocator_free_targe);
    grp_HLS_free_1_s_fu_113->allocator_free_targe_ap_vld(grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld);
    grp_HLS_free_1_s_fu_113->allocator_free_targe_ap_ack(alloc_1_free_target_ap_ack);
    grp_HLS_free_1_s_fu_113->allocator_cmd(grp_HLS_free_1_s_fu_113_allocator_cmd);
    grp_HLS_free_1_s_fu_113->allocator_cmd_ap_vld(grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld);
    grp_HLS_free_1_s_fu_113->allocator_cmd_ap_ack(alloc_1_cmd_ap_ack);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_alloc_1_addr_ap_ack);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_addr_ap_ack );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_alloc_1_cmd);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_cmd );
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_cmd );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_predicate_op41_call_state5 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_alloc_1_cmd_ap_vld);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_predicate_op41_call_state5 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_alloc_1_free_target);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_free_targe );
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_free_targe );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_predicate_op41_call_state5 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_alloc_1_free_target_ap_vld);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_predicate_op41_call_state5 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_alloc_1_size);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_size );
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_size );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_size_ap_vld );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_predicate_op41_call_state5 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_alloc_1_size_ap_vld);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld );
    sensitive << ( grp_HLS_free_1_s_fu_113_allocator_size_ap_vld );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_predicate_op41_call_state5 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_block_state5_on_subcall_done);
    sensitive << ( grp_HLS_free_1_s_fu_113_ap_done );
    sensitive << ( ap_predicate_op41_call_state5 );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_136_p2 );
    sensitive << ( tmp_3_fu_148_p2 );
    sensitive << ( tmp_5_fu_160_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_predicate_op41_call_state5);
    sensitive << ( tmp_1_reg_207 );
    sensitive << ( tmp_3_reg_216 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_136_p2 );
    sensitive << ( tmp_3_fu_148_p2 );
    sensitive << ( tmp_5_fu_160_p2 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_136_p2 );
    sensitive << ( tmp_3_fu_148_p2 );
    sensitive << ( tmp_5_fu_160_p2 );
    sensitive << ( r_fu_44 );

    SC_METHOD(thread_grp_HLS_free_1_s_fu_113_ap_start);
    sensitive << ( grp_HLS_free_1_s_fu_113_ap_start_reg );

    SC_METHOD(thread_grp_HLS_malloc_1_s_fu_99_ap_start);
    sensitive << ( grp_HLS_malloc_1_s_fu_99_ap_start_reg );

    SC_METHOD(thread_i_1_fu_142_p2);
    sensitive << ( i_reg_87 );

    SC_METHOD(thread_req_cmd_address0);
    sensitive << ( tmp_fu_126_p1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_req_cmd_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_req_list_address0);
    sensitive << ( tmp_fu_126_p1 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_req_list_ce0);
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_req_size_address0);
    sensitive << ( tmp_reg_186 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_req_size_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_1_fu_136_p2);
    sensitive << ( req_cmd_q0 );
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_tmp_3_fu_148_p2);
    sensitive << ( req_cmd_q0 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_136_p2 );

    SC_METHOD(thread_tmp_4_fu_154_p2);
    sensitive << ( tmp_cast_fu_132_p1 );

    SC_METHOD(thread_tmp_5_fu_160_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_136_p2 );
    sensitive << ( tmp_3_fu_148_p2 );
    sensitive << ( tmp_4_fu_154_p2 );

    SC_METHOD(thread_tmp_cast_fu_132_p1);
    sensitive << ( i_reg_87 );

    SC_METHOD(thread_tmp_fu_126_p1);
    sensitive << ( i_reg_87 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( tmp_1_fu_136_p2 );
    sensitive << ( tmp_1_reg_207 );
    sensitive << ( tmp_3_fu_148_p2 );
    sensitive << ( tmp_3_reg_216 );
    sensitive << ( tmp_5_fu_160_p2 );
    sensitive << ( tmp_5_reg_220 );
    sensitive << ( grp_HLS_malloc_1_s_fu_99_ap_done );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( ap_block_state5_on_subcall_done );
    sensitive << ( ap_CS_fsm_state6 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "000001";
    grp_HLS_malloc_1_s_fu_99_ap_start_reg = SC_LOGIC_0;
    grp_HLS_free_1_s_fu_113_ap_start_reg = SC_LOGIC_0;
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "acc4kmau_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, alloc_1_size, "(port)alloc_1_size");
    sc_trace(mVcdFile, alloc_1_size_ap_vld, "(port)alloc_1_size_ap_vld");
    sc_trace(mVcdFile, alloc_1_size_ap_ack, "(port)alloc_1_size_ap_ack");
    sc_trace(mVcdFile, alloc_1_addr, "(port)alloc_1_addr");
    sc_trace(mVcdFile, alloc_1_addr_ap_vld, "(port)alloc_1_addr_ap_vld");
    sc_trace(mVcdFile, alloc_1_addr_ap_ack, "(port)alloc_1_addr_ap_ack");
    sc_trace(mVcdFile, alloc_1_free_target, "(port)alloc_1_free_target");
    sc_trace(mVcdFile, alloc_1_free_target_ap_vld, "(port)alloc_1_free_target_ap_vld");
    sc_trace(mVcdFile, alloc_1_free_target_ap_ack, "(port)alloc_1_free_target_ap_ack");
    sc_trace(mVcdFile, alloc_1_cmd, "(port)alloc_1_cmd");
    sc_trace(mVcdFile, alloc_1_cmd_ap_vld, "(port)alloc_1_cmd_ap_vld");
    sc_trace(mVcdFile, alloc_1_cmd_ap_ack, "(port)alloc_1_cmd_ap_ack");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, req_cmd_address0, "req_cmd_address0");
    sc_trace(mVcdFile, req_cmd_ce0, "req_cmd_ce0");
    sc_trace(mVcdFile, req_cmd_q0, "req_cmd_q0");
    sc_trace(mVcdFile, req_list_address0, "req_list_address0");
    sc_trace(mVcdFile, req_list_ce0, "req_list_ce0");
    sc_trace(mVcdFile, req_list_q0, "req_list_q0");
    sc_trace(mVcdFile, req_size_address0, "req_size_address0");
    sc_trace(mVcdFile, req_size_ce0, "req_size_ce0");
    sc_trace(mVcdFile, req_size_q0, "req_size_q0");
    sc_trace(mVcdFile, tmp_fu_126_p1, "tmp_fu_126_p1");
    sc_trace(mVcdFile, tmp_reg_186, "tmp_reg_186");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, size_reg_201, "size_reg_201");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_1_fu_136_p2, "tmp_1_fu_136_p2");
    sc_trace(mVcdFile, tmp_1_reg_207, "tmp_1_reg_207");
    sc_trace(mVcdFile, i_1_fu_142_p2, "i_1_fu_142_p2");
    sc_trace(mVcdFile, i_1_reg_211, "i_1_reg_211");
    sc_trace(mVcdFile, tmp_3_fu_148_p2, "tmp_3_fu_148_p2");
    sc_trace(mVcdFile, tmp_3_reg_216, "tmp_3_reg_216");
    sc_trace(mVcdFile, tmp_5_fu_160_p2, "tmp_5_fu_160_p2");
    sc_trace(mVcdFile, tmp_5_reg_220, "tmp_5_reg_220");
    sc_trace(mVcdFile, req_size_load_reg_229, "req_size_load_reg_229");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_ap_start, "grp_HLS_malloc_1_s_fu_99_ap_start");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_ap_done, "grp_HLS_malloc_1_s_fu_99_ap_done");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_ap_idle, "grp_HLS_malloc_1_s_fu_99_ap_idle");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_ap_ready, "grp_HLS_malloc_1_s_fu_99_ap_ready");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_size, "grp_HLS_malloc_1_s_fu_99_allocator_size");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld, "grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_addr_ap_ack, "grp_HLS_malloc_1_s_fu_99_allocator_addr_ap_ack");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_free_targe, "grp_HLS_malloc_1_s_fu_99_allocator_free_targe");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld, "grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_cmd, "grp_HLS_malloc_1_s_fu_99_allocator_cmd");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld, "grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_ap_return, "grp_HLS_malloc_1_s_fu_99_ap_return");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_ap_start, "grp_HLS_free_1_s_fu_113_ap_start");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_ap_done, "grp_HLS_free_1_s_fu_113_ap_done");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_ap_idle, "grp_HLS_free_1_s_fu_113_ap_idle");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_ap_ready, "grp_HLS_free_1_s_fu_113_ap_ready");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_allocator_size, "grp_HLS_free_1_s_fu_113_allocator_size");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_allocator_size_ap_vld, "grp_HLS_free_1_s_fu_113_allocator_size_ap_vld");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_allocator_free_targe, "grp_HLS_free_1_s_fu_113_allocator_free_targe");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld, "grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_allocator_cmd, "grp_HLS_free_1_s_fu_113_allocator_cmd");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld, "grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld");
    sc_trace(mVcdFile, i_reg_87, "i_reg_87");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, ap_predicate_op41_call_state5, "ap_predicate_op41_call_state5");
    sc_trace(mVcdFile, ap_block_state5_on_subcall_done, "ap_block_state5_on_subcall_done");
    sc_trace(mVcdFile, grp_HLS_malloc_1_s_fu_99_ap_start_reg, "grp_HLS_malloc_1_s_fu_99_ap_start_reg");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_HLS_free_1_s_fu_113_ap_start_reg, "grp_HLS_free_1_s_fu_113_ap_start_reg");
    sc_trace(mVcdFile, r_fu_44, "r_fu_44");
    sc_trace(mVcdFile, tmp_cast_fu_132_p1, "tmp_cast_fu_132_p1");
    sc_trace(mVcdFile, tmp_4_fu_154_p2, "tmp_4_fu_154_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("acc4kmau.hdltvin.dat");
    mHdltvoutHandle.open("acc4kmau.hdltvout.dat");
}

acc4kmau::~acc4kmau() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete req_cmd_U;
    delete req_list_U;
    delete req_size_U;
    delete grp_HLS_malloc_1_s_fu_99;
    delete grp_HLS_free_1_s_fu_113;
}

void acc4kmau::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_HLS_free_1_s_fu_113_ap_start_reg = ap_const_logic_0;
    } else {
        if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
            grp_HLS_free_1_s_fu_113_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_free_1_s_fu_113_ap_ready.read())) {
            grp_HLS_free_1_s_fu_113_ap_start_reg = ap_const_logic_0;
        }
    }
    if ( ap_rst.read() == ap_const_logic_1) {
        grp_HLS_malloc_1_s_fu_99_ap_start_reg = ap_const_logic_0;
    } else {
        if ((esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_1) && 
             esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
            grp_HLS_malloc_1_s_fu_99_ap_start_reg = ap_const_logic_1;
        } else if (esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_malloc_1_s_fu_99_ap_ready.read())) {
            grp_HLS_malloc_1_s_fu_99_ap_start_reg = ap_const_logic_0;
        }
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state5_on_subcall_done.read()) && 
         (esl_seteq<1,1,1>(tmp_5_reg_220.read(), ap_const_lv1_0) || 
          esl_seteq<1,1,1>(tmp_3_reg_216.read(), ap_const_lv1_1) || 
          esl_seteq<1,1,1>(tmp_1_reg_207.read(), ap_const_lv1_1)))) {
        i_reg_87 = i_1_reg_211.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_87 = ap_const_lv32_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
         esl_seteq<1,1,1>(grp_HLS_malloc_1_s_fu_99_ap_done.read(), ap_const_logic_1))) {
        r_fu_44 = grp_HLS_malloc_1_s_fu_99_ap_return.read();
    } else if ((esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_1) && 
                esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        r_fu_44 = ap_const_lv32_1;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_1_reg_211 = i_1_fu_142_p2.read();
        size_reg_201 = req_list_q0.read();
        tmp_1_reg_207 = tmp_1_fu_136_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        req_size_load_reg_229 = req_size_q0.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0))) {
        tmp_3_reg_216 = tmp_3_fu_148_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_0))) {
        tmp_5_reg_220 = tmp_5_fu_160_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        tmp_reg_186 = tmp_fu_126_p1.read();
    }
}

void acc4kmau::thread_alloc_1_addr_ap_ack() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        alloc_1_addr_ap_ack = grp_HLS_malloc_1_s_fu_99_allocator_addr_ap_ack.read();
    } else {
        alloc_1_addr_ap_ack = ap_const_logic_0;
    }
}

void acc4kmau::thread_alloc_1_cmd() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld.read()))) {
        alloc_1_cmd = grp_HLS_free_1_s_fu_113_allocator_cmd.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld.read()))) {
        alloc_1_cmd = grp_HLS_malloc_1_s_fu_99_allocator_cmd.read();
    } else {
        alloc_1_cmd = "XXXXXXXX";
    }
}

void acc4kmau::thread_alloc_1_cmd_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()))) {
        alloc_1_cmd_ap_vld = grp_HLS_free_1_s_fu_113_allocator_cmd_ap_vld.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        alloc_1_cmd_ap_vld = grp_HLS_malloc_1_s_fu_99_allocator_cmd_ap_vld.read();
    } else {
        alloc_1_cmd_ap_vld = ap_const_logic_0;
    }
}

void acc4kmau::thread_alloc_1_free_target() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld.read()))) {
        alloc_1_free_target = grp_HLS_free_1_s_fu_113_allocator_free_targe.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld.read()))) {
        alloc_1_free_target = grp_HLS_malloc_1_s_fu_99_allocator_free_targe.read();
    } else {
        alloc_1_free_target =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void acc4kmau::thread_alloc_1_free_target_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()))) {
        alloc_1_free_target_ap_vld = grp_HLS_free_1_s_fu_113_allocator_free_targe_ap_vld.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        alloc_1_free_target_ap_vld = grp_HLS_malloc_1_s_fu_99_allocator_free_targe_ap_vld.read();
    } else {
        alloc_1_free_target_ap_vld = ap_const_logic_0;
    }
}

void acc4kmau::thread_alloc_1_size() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_free_1_s_fu_113_allocator_size_ap_vld.read()))) {
        alloc_1_size = grp_HLS_free_1_s_fu_113_allocator_size.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld.read()))) {
        alloc_1_size = grp_HLS_malloc_1_s_fu_99_allocator_size.read();
    } else {
        alloc_1_size =  (sc_lv<32>) ("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX");
    }
}

void acc4kmau::thread_alloc_1_size_ap_vld() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()))) {
        alloc_1_size_ap_vld = grp_HLS_free_1_s_fu_113_allocator_size_ap_vld.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        alloc_1_size_ap_vld = grp_HLS_malloc_1_s_fu_99_allocator_size_ap_vld.read();
    } else {
        alloc_1_size_ap_vld = ap_const_logic_0;
    }
}

void acc4kmau::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void acc4kmau::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void acc4kmau::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void acc4kmau::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void acc4kmau::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void acc4kmau::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void acc4kmau::thread_ap_block_state5_on_subcall_done() {
    ap_block_state5_on_subcall_done = (esl_seteq<1,1,1>(ap_const_logic_0, grp_HLS_free_1_s_fu_113_ap_done.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_predicate_op41_call_state5.read()));
}

void acc4kmau::thread_ap_done() {
    if ((esl_seteq<1,1,1>(tmp_5_fu_160_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void acc4kmau::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void acc4kmau::thread_ap_predicate_op41_call_state5() {
    ap_predicate_op41_call_state5 = (esl_seteq<1,1,1>(tmp_1_reg_207.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_3_reg_216.read(), ap_const_lv1_1));
}

void acc4kmau::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(tmp_5_fu_160_p2.read(), ap_const_lv1_1) && 
         esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void acc4kmau::thread_ap_return() {
    ap_return = r_fu_44.read();
}

void acc4kmau::thread_grp_HLS_free_1_s_fu_113_ap_start() {
    grp_HLS_free_1_s_fu_113_ap_start = grp_HLS_free_1_s_fu_113_ap_start_reg.read();
}

void acc4kmau::thread_grp_HLS_malloc_1_s_fu_99_ap_start() {
    grp_HLS_malloc_1_s_fu_99_ap_start = grp_HLS_malloc_1_s_fu_99_ap_start_reg.read();
}

void acc4kmau::thread_i_1_fu_142_p2() {
    i_1_fu_142_p2 = (!i_reg_87.read().is_01() || !ap_const_lv32_1.is_01())? sc_lv<32>(): (sc_bigint<32>(i_reg_87.read()) + sc_biguint<32>(ap_const_lv32_1));
}

void acc4kmau::thread_req_cmd_address0() {
    req_cmd_address0 =  (sc_lv<10>) (tmp_fu_126_p1.read());
}

void acc4kmau::thread_req_cmd_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        req_cmd_ce0 = ap_const_logic_1;
    } else {
        req_cmd_ce0 = ap_const_logic_0;
    }
}

void acc4kmau::thread_req_list_address0() {
    req_list_address0 =  (sc_lv<10>) (tmp_fu_126_p1.read());
}

void acc4kmau::thread_req_list_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        req_list_ce0 = ap_const_logic_1;
    } else {
        req_list_ce0 = ap_const_logic_0;
    }
}

void acc4kmau::thread_req_size_address0() {
    req_size_address0 =  (sc_lv<10>) (tmp_reg_186.read());
}

void acc4kmau::thread_req_size_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        req_size_ce0 = ap_const_logic_1;
    } else {
        req_size_ce0 = ap_const_logic_0;
    }
}

void acc4kmau::thread_tmp_1_fu_136_p2() {
    tmp_1_fu_136_p2 = (!req_cmd_q0.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(req_cmd_q0.read() == ap_const_lv2_2);
}

void acc4kmau::thread_tmp_3_fu_148_p2() {
    tmp_3_fu_148_p2 = (!req_cmd_q0.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(req_cmd_q0.read() == ap_const_lv2_3);
}

void acc4kmau::thread_tmp_4_fu_154_p2() {
    tmp_4_fu_154_p2 = (!tmp_cast_fu_132_p1.read().is_01() || !ap_const_lv33_1FFFFFE70.is_01())? sc_lv<33>(): (sc_bigint<33>(tmp_cast_fu_132_p1.read()) + sc_bigint<33>(ap_const_lv33_1FFFFFE70));
}

void acc4kmau::thread_tmp_5_fu_160_p2() {
    tmp_5_fu_160_p2 = (!tmp_4_fu_154_p2.read().is_01() || !ap_const_lv33_270.is_01())? sc_lv<1>(): (sc_biguint<33>(tmp_4_fu_154_p2.read()) < sc_biguint<33>(ap_const_lv33_270));
}

void acc4kmau::thread_tmp_cast_fu_132_p1() {
    tmp_cast_fu_132_p1 = esl_sext<33,32>(i_reg_87.read());
}

void acc4kmau::thread_tmp_fu_126_p1() {
    tmp_fu_126_p1 = esl_sext<64,32>(i_reg_87.read());
}

void acc4kmau::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(tmp_5_fu_160_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else if ((esl_seteq<1,1,1>(tmp_5_fu_160_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else if ((esl_seteq<1,1,1>(tmp_3_fu_148_p2.read(), ap_const_lv1_1) && esl_seteq<1,1,1>(tmp_1_fu_136_p2.read(), ap_const_lv1_0) && esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()))) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(ap_const_boolean_0, ap_block_state5_on_subcall_done.read()) && (esl_seteq<1,1,1>(tmp_5_reg_220.read(), ap_const_lv1_0) || 
  esl_seteq<1,1,1>(tmp_3_reg_216.read(), ap_const_lv1_1) || 
  esl_seteq<1,1,1>(tmp_1_reg_207.read(), ap_const_lv1_1)))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        case 32 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()) && esl_seteq<1,1,1>(grp_HLS_malloc_1_s_fu_99_ap_done.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

void acc4kmau::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_size\" :  \"" << alloc_1_size.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_size_ap_vld\" :  \"" << alloc_1_size_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"alloc_1_size_ap_ack\" :  \"" << alloc_1_size_ap_ack.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"alloc_1_addr\" :  \"" << alloc_1_addr.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"alloc_1_addr_ap_vld\" :  \"" << alloc_1_addr_ap_vld.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_addr_ap_ack\" :  \"" << alloc_1_addr_ap_ack.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_free_target\" :  \"" << alloc_1_free_target.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_free_target_ap_vld\" :  \"" << alloc_1_free_target_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"alloc_1_free_target_ap_ack\" :  \"" << alloc_1_free_target_ap_ack.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_cmd\" :  \"" << alloc_1_cmd.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"alloc_1_cmd_ap_vld\" :  \"" << alloc_1_cmd_ap_vld.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"alloc_1_cmd_ap_ack\" :  \"" << alloc_1_cmd_ap_ack.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_return\" :  \"" << ap_return.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}
