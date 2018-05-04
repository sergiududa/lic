// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_xdS_H__
#define __conv_layer2_conv_xdS_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_xdS_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_xdS_ram) {
        ram[0] = "0b0110000110111011001";
        ram[1] = "0b0100110100111101100";
        ram[2] = "0b0111111111010001001";
        ram[3] = "0b0010100011001111010";
        ram[4] = "0b1010000010010011001";
        ram[5] = "0b1011000011110000101";
        ram[6] = "0b0010100011000111110";
        ram[7] = "0b0100001011101111100";
        ram[8] = "0b0100000011101011010";
        ram[9] = "0b1110101010000001000";
        ram[10] = "0b0111001011001110110";
        ram[11] = "0b0110001111110011011";
        ram[12] = "0b0110101011010011111";
        ram[13] = "0b1100010001011100110";
        ram[14] = "0b1010110010011101000";
        ram[15] = "0b1000101110111010000";


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


SC_MODULE(conv_layer2_conv_xdS) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_xdS_ram* meminst;


SC_CTOR(conv_layer2_conv_xdS) {
meminst = new conv_layer2_conv_xdS_ram("conv_layer2_conv_xdS_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_xdS() {
    delete meminst;
}


};//endmodule
#endif
