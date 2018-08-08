// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __Ext_KWTA16k_mark_ibs_H__
#define __Ext_KWTA16k_mark_ibs_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct Ext_KWTA16k_mark_ibs_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 16;
  static const unsigned AddressRange = 128;
  static const unsigned AddressWidth = 7;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(Ext_KWTA16k_mark_ibs_ram) {
        ram[0] = "0b1100001111001101";
        ram[1] = "0b0011110000110010";
        ram[2] = "0b1100000011000101";
        ram[3] = "0b0000001100001001";
        ram[4] = "0b0000110000010010";
        ram[5] = "0b0011000000100010";
        ram[6] = "0b1100000001000101";
        ram[7] = "0b0000000010000101";
        ram[8] = "0b0000000100001001";
        ram[9] = "0b0000001000001001";
        ram[10] = "0b0000010000010010";
        ram[11] = "0b0000100000010010";
        ram[12] = "0b0001000000100010";
        ram[13] = "0b0010000000100010";
        ram[14] = "0b0100000001000101";
        ram[15] = "0b1000000001000101";
        ram[16] = "0b0000000010000101";
        ram[17] = "0b0000000010000101";
        ram[18] = "0b0000000100001001";
        ram[19] = "0b0000000100001001";
        ram[20] = "0b0000001000001001";
        ram[21] = "0b0000001000001001";
        ram[22] = "0b0000010000010010";
        ram[23] = "0b0000010000010010";
        ram[24] = "0b0000100000010010";
        ram[25] = "0b0000100000010010";
        ram[26] = "0b0001000000100010";
        ram[27] = "0b0001000000100010";
        ram[28] = "0b0010000000100010";
        ram[29] = "0b0010000000100010";
        ram[30] = "0b0100000001000101";
        ram[31] = "0b0100000001000101";
        ram[32] = "0b1000000001000101";
        ram[33] = "0b1000000001000101";
        ram[34] = "0b0000000010000101";
        ram[35] = "0b0000000010000101";
        ram[36] = "0b0000000010000101";
        ram[37] = "0b0000000010000101";
        ram[38] = "0b0000000100001001";
        ram[39] = "0b0000000100001001";
        ram[40] = "0b0000000100001001";
        ram[41] = "0b0000000100001001";
        ram[42] = "0b0000001000001001";
        ram[43] = "0b0000001000001001";
        ram[44] = "0b0000001000001001";
        ram[45] = "0b0000001000001001";
        ram[46] = "0b0000010000010010";
        ram[47] = "0b0000010000010010";
        ram[48] = "0b0000010000010010";
        ram[49] = "0b0000010000010010";
        ram[50] = "0b0000100000010010";
        ram[51] = "0b0000100000010010";
        ram[52] = "0b0000100000010010";
        ram[53] = "0b0000100000010010";
        ram[54] = "0b0001000000100010";
        ram[55] = "0b0001000000100010";
        ram[56] = "0b0001000000100010";
        ram[57] = "0b0001000000100010";
        ram[58] = "0b0010000000100010";
        ram[59] = "0b0010000000100010";
        ram[60] = "0b0010000000100010";
        ram[61] = "0b0010000000100010";
        ram[62] = "0b1100001111001101";
        ram[63] = "0b0011110000110010";
        ram[64] = "0b1100000011000100";
        ram[65] = "0b0000001100001000";
        ram[66] = "0b0000110000010000";
        ram[67] = "0b0011000000100000";
        ram[68] = "0b1100000001000000";
        ram[69] = "0b0000000010000000";
        ram[70] = "0b0000000100000000";
        ram[71] = "0b0000001000000000";
        ram[72] = "0b0000010000000000";
        ram[73] = "0b0000100000000000";
        ram[74] = "0b0001000000000000";
        ram[75] = "0b0010000000000000";
        ram[76] = "0b0100000000000000";
        ram[77] = "0b1000000000000000";
        for (unsigned i = 78; i < 128 ; i = i + 1) {
            ram[i] = "0b0000000000000000";
        }


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(Ext_KWTA16k_mark_ibs) {


static const unsigned DataWidth = 16;
static const unsigned AddressRange = 128;
static const unsigned AddressWidth = 7;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


Ext_KWTA16k_mark_ibs_ram* meminst;


SC_CTOR(Ext_KWTA16k_mark_ibs) {
meminst = new Ext_KWTA16k_mark_ibs_ram("Ext_KWTA16k_mark_ibs_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~Ext_KWTA16k_mark_ibs() {
    delete meminst;
}


};//endmodule
#endif