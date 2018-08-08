#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("n", 32, hls_in, 0, "ap_none", "in_data", 1),
	Port_Property("map_r_address0", 15, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("map_r_ce0", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("map_r_q0", 32, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("map_r_address1", 15, hls_out, 1, "ap_memory", "mem_address", 1),
	Port_Property("map_r_ce1", 1, hls_out, 1, "ap_memory", "mem_ce", 1),
	Port_Property("map_r_q1", 32, hls_in, 1, "ap_memory", "mem_dout", 1),
	Port_Property("dis_output_address0", 8, hls_out, 2, "ap_memory", "mem_address", 1),
	Port_Property("dis_output_ce0", 1, hls_out, 2, "ap_memory", "mem_ce", 1),
	Port_Property("dis_output_we0", 1, hls_out, 2, "ap_memory", "mem_we", 1),
	Port_Property("dis_output_d0", 32, hls_out, 2, "ap_memory", "mem_din", 1),
	Port_Property("alloc_1_size", 32, hls_out, 3, "ap_hs", "out_data", 1),
	Port_Property("alloc_1_size_ap_vld", 1, hls_out, 3, "ap_hs", "out_vld", 1),
	Port_Property("alloc_1_size_ap_ack", 1, hls_in, 3, "ap_hs", "out_acc", 1),
	Port_Property("alloc_1_free_target", 32, hls_out, 4, "ap_hs", "out_data", 1),
	Port_Property("alloc_1_free_target_ap_vld", 1, hls_out, 4, "ap_hs", "out_vld", 1),
	Port_Property("alloc_1_free_target_ap_ack", 1, hls_in, 4, "ap_hs", "out_acc", 1),
	Port_Property("alloc_1_addr", 32, hls_in, 5, "ap_hs", "in_data", 1),
	Port_Property("alloc_1_addr_ap_vld", 1, hls_in, 5, "ap_hs", "in_vld", 1),
	Port_Property("alloc_1_addr_ap_ack", 1, hls_out, 5, "ap_hs", "in_acc", 1),
	Port_Property("alloc_1_cmd", 8, hls_out, 6, "ap_hs", "out_data", 1),
	Port_Property("alloc_1_cmd_ap_vld", 1, hls_out, 6, "ap_hs", "out_vld", 1),
	Port_Property("alloc_1_cmd_ap_ack", 1, hls_in, 6, "ap_hs", "out_acc", 1),
};
const char* HLS_Design_Meta::dut_name = "HLS_SPFA";