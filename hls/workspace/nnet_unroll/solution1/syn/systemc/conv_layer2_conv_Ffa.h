// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __conv_layer2_conv_Ffa_H__
#define __conv_layer2_conv_Ffa_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct conv_layer2_conv_Ffa_ram : public sc_core::sc_module {

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


   SC_CTOR(conv_layer2_conv_Ffa_ram) {
        ram[0] = "0b1011001111010111011";
        ram[1] = "0b0000001011111110110";
        ram[2] = "0b0000011000110111000";
        ram[3] = "0b1100001011101011000";
        ram[4] = "0b1100001010101000110";
        ram[5] = "0b0000010111111100100";
        ram[6] = "0b0110101110110100011";
        ram[7] = "0b0010001110111011111";
        ram[8] = "0b1101110100010100000";
        ram[9] = "0b0100010011011000111";
        ram[10] = "0b1000010001100101101";
        ram[11] = "0b0000110001000000111";
        ram[12] = "0b1100011000101101010";
        ram[13] = "0b1101010010010100110";
        ram[14] = "0b0000101100101101010";
        ram[15] = "0b0111010011111111100";


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


SC_MODULE(conv_layer2_conv_Ffa) {


static const unsigned DataWidth = 19;
static const unsigned AddressRange = 16;
static const unsigned AddressWidth = 4;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


conv_layer2_conv_Ffa_ram* meminst;


SC_CTOR(conv_layer2_conv_Ffa) {
meminst = new conv_layer2_conv_Ffa_ram("conv_layer2_conv_Ffa_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~conv_layer2_conv_Ffa() {
    delete meminst;
}


};//endmodule
#endif
