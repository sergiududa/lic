// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_yd2_H__
#define __conv_layer2_conv_yd2_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_yd2_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 19;
  static const unsigned AddressRange = 16;
  static const unsigned AddressWidth = 4;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(conv_layer2_conv_yd2_ram) {
        ram[0] = "0b0100000000101111001";
        ram[1] = "0b1110001110000011111";
        ram[2] = "0b1101110001000000001";
        ram[3] = "0b1000000100111000000";
        ram[4] = "0b1010110010111000011";
        ram[5] = "0b0111111000011100111";
        ram[6] = "0b1100000101001001000";
        ram[7] = "0b1101010010110010100";
        ram[8] = "0b0010110100111010001";
        ram[9] = "0b1001001010000100110";
        ram[10] = "0b1000111010010101100";
        ram[11] = "0b0111011000101011010";
        ram[12] = "0b1111011111010110011";
        ram[13] = "0b0010010110001001011";
        ram[14] = "0b0111010110110000010";
        ram[15] = "0b0101101100000111010";


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


SC_MODULE(conv_layer2_conv_yd2) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_yd2_ram* meminst;


SC_CTOR(conv_layer2_conv_yd2) {
meminst = new conv_layer2_conv_yd2_ram("conv_layer2_conv_yd2_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_yd2() {
    delete meminst;
}


};//endmodule
#endif
