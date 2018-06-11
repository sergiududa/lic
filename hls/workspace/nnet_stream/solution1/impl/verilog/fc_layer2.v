// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module fc_layer2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        out_V_din,
        out_V_full_n,
        out_V_write,
        in_V_dout,
        in_V_empty_n,
        in_V_read
);

parameter    ap_ST_fsm_state1 = 24'd1;
parameter    ap_ST_fsm_state2 = 24'd2;
parameter    ap_ST_fsm_state3 = 24'd4;
parameter    ap_ST_fsm_state4 = 24'd8;
parameter    ap_ST_fsm_state5 = 24'd16;
parameter    ap_ST_fsm_state6 = 24'd32;
parameter    ap_ST_fsm_state7 = 24'd64;
parameter    ap_ST_fsm_state8 = 24'd128;
parameter    ap_ST_fsm_state9 = 24'd256;
parameter    ap_ST_fsm_state10 = 24'd512;
parameter    ap_ST_fsm_state11 = 24'd1024;
parameter    ap_ST_fsm_state12 = 24'd2048;
parameter    ap_ST_fsm_state13 = 24'd4096;
parameter    ap_ST_fsm_state14 = 24'd8192;
parameter    ap_ST_fsm_state15 = 24'd16384;
parameter    ap_ST_fsm_state16 = 24'd32768;
parameter    ap_ST_fsm_state17 = 24'd65536;
parameter    ap_ST_fsm_state18 = 24'd131072;
parameter    ap_ST_fsm_state19 = 24'd262144;
parameter    ap_ST_fsm_state20 = 24'd524288;
parameter    ap_ST_fsm_state21 = 24'd1048576;
parameter    ap_ST_fsm_state22 = 24'd2097152;
parameter    ap_ST_fsm_state23 = 24'd4194304;
parameter    ap_ST_fsm_state24 = 24'd8388608;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] out_V_din;
input   out_V_full_n;
output   out_V_write;
input  [31:0] in_V_dout;
input   in_V_empty_n;
output   in_V_read;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg out_V_write;
reg in_V_read;

(* fsm_encoding = "none" *) reg   [23:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [13:0] fc_layer2_weights_address0;
reg    fc_layer2_weights_ce0;
wire   [31:0] fc_layer2_weights_q0;
reg    out_V_blk_n;
wire    ap_CS_fsm_state24;
reg    in_V_blk_n;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond7_fu_222_p2;
wire   [31:0] output_q0;
reg   [31:0] reg_188;
wire    ap_CS_fsm_state9;
wire    ap_CS_fsm_state17;
wire   [31:0] grp_fu_174_p2;
reg   [31:0] reg_193;
wire    ap_CS_fsm_state14;
wire    ap_CS_fsm_state22;
wire   [6:0] indvarinc_fu_199_p2;
wire    ap_CS_fsm_state2;
wire   [13:0] next_mul_fu_216_p2;
reg   [13:0] next_mul_reg_341;
reg    ap_block_state3;
wire   [6:0] j_4_fu_228_p2;
reg   [6:0] j_4_reg_349;
reg   [31:0] tmp_254_reg_354;
wire   [6:0] i_7_fu_240_p2;
reg   [6:0] i_7_reg_362;
wire    ap_CS_fsm_state4;
wire   [0:0] exitcond6_fu_234_p2;
reg   [31:0] fc_layer2_weights_lo_reg_372;
wire    ap_CS_fsm_state5;
reg   [6:0] output_addr_4_reg_377;
wire    ap_CS_fsm_state8;
wire   [31:0] grp_fu_179_p2;
reg   [31:0] tmp_14_reg_382;
wire   [6:0] i_6_fu_272_p2;
reg   [6:0] i_6_reg_390;
wire    ap_CS_fsm_state16;
wire   [0:0] exitcond_fu_266_p2;
wire   [31:0] tmp_252_fu_325_p3;
reg   [31:0] tmp_252_reg_400;
wire    ap_CS_fsm_state23;
reg   [6:0] output_address0;
reg    output_ce0;
reg    output_we0;
reg   [31:0] output_d0;
reg   [6:0] invdar_reg_117;
wire   [0:0] tmp_s_fu_210_p2;
reg   [6:0] j_reg_128;
reg   [13:0] phi_mul_reg_139;
reg   [6:0] i_reg_151;
wire    ap_CS_fsm_state15;
reg   [6:0] i1_reg_163;
wire   [63:0] tmp_fu_205_p1;
wire   [63:0] tmp_507_cast_fu_256_p1;
wire   [63:0] tmp_13_fu_261_p1;
wire   [63:0] tmp_12_fu_278_p1;
reg   [31:0] grp_fu_174_p1;
wire    ap_CS_fsm_state10;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state6;
wire   [13:0] tmp_13_cast_fu_246_p1;
wire   [13:0] tmp_253_fu_250_p2;
wire   [31:0] a_assign_to_int_fu_283_p1;
wire   [7:0] tmp_247_fu_287_p4;
wire   [22:0] tmp_249_fu_297_p1;
wire   [0:0] notrhs_fu_307_p2;
wire   [0:0] notlhs_fu_301_p2;
wire   [0:0] tmp_248_fu_313_p2;
wire   [0:0] tmp_250_fu_183_p2;
wire   [0:0] tmp_251_fu_319_p2;
reg   [23:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 24'd1;
end

fc_layer2_fc_layemb6 #(
    .DataWidth( 32 ),
    .AddressRange( 10080 ),
    .AddressWidth( 14 ))
fc_layer2_weights_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(fc_layer2_weights_address0),
    .ce0(fc_layer2_weights_ce0),
    .q0(fc_layer2_weights_q0)
);

fc_layer2_output #(
    .DataWidth( 32 ),
    .AddressRange( 84 ),
    .AddressWidth( 7 ))
output_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(output_address0),
    .ce0(output_ce0),
    .we0(output_we0),
    .d0(output_d0),
    .q0(output_q0)
);

nnet_fadd_32ns_32dEe #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
nnet_fadd_32ns_32dEe_U39(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_188),
    .din1(grp_fu_174_p1),
    .ce(1'b1),
    .dout(grp_fu_174_p2)
);

nnet_fmul_32ns_32eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
nnet_fmul_32ns_32eOg_U40(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(fc_layer2_weights_lo_reg_372),
    .din1(tmp_254_reg_354),
    .ce(1'b1),
    .dout(grp_fu_179_p2)
);

nnet_fcmp_32ns_32fYi #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 1 ))
nnet_fcmp_32ns_32fYi_U41(
    .din0(reg_193),
    .din1(32'd0),
    .opcode(5'd2),
    .dout(tmp_250_fu_183_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond7_fu_222_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i1_reg_163 <= 7'd0;
    end else if (((out_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state24))) begin
        i1_reg_163 <= i_6_reg_390;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        i_reg_151 <= i_7_reg_362;
    end else if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond7_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_151 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_s_fu_210_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        invdar_reg_117 <= indvarinc_fu_199_p2;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        invdar_reg_117 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_s_fu_210_p2 == 1'd1))) begin
        j_reg_128 <= 7'd0;
    end else if (((1'b1 == ap_CS_fsm_state4) & (exitcond6_fu_234_p2 == 1'd1))) begin
        j_reg_128 <= j_4_reg_349;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) & (tmp_s_fu_210_p2 == 1'd1))) begin
        phi_mul_reg_139 <= 14'd0;
    end else if (((1'b1 == ap_CS_fsm_state4) & (exitcond6_fu_234_p2 == 1'd1))) begin
        phi_mul_reg_139 <= next_mul_reg_341;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        fc_layer2_weights_lo_reg_372 <= fc_layer2_weights_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        i_6_reg_390 <= i_6_fu_272_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        i_7_reg_362 <= i_7_fu_240_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (1'b1 == ap_CS_fsm_state3))) begin
        j_4_reg_349 <= j_4_fu_228_p2;
        next_mul_reg_341 <= next_mul_fu_216_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        output_addr_4_reg_377 <= tmp_13_fu_261_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state9))) begin
        reg_188 <= output_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state22) | (1'b1 == ap_CS_fsm_state14))) begin
        reg_193 <= grp_fu_174_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        tmp_14_reg_382 <= grp_fu_179_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        tmp_252_reg_400 <= tmp_252_fu_325_p3;
    end
end

always @ (posedge ap_clk) begin
    if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond7_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_254_reg_354 <= in_V_dout;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state16) & (exitcond_fu_266_p2 == 1'd1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state16) & (exitcond_fu_266_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        fc_layer2_weights_ce0 = 1'b1;
    end else begin
        fc_layer2_weights_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        grp_fu_174_p1 = 32'd0;
    end else if ((1'b1 == ap_CS_fsm_state10)) begin
        grp_fu_174_p1 = tmp_14_reg_382;
    end else begin
        grp_fu_174_p1 = 'bx;
    end
end

always @ (*) begin
    if (((exitcond7_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        in_V_blk_n = in_V_empty_n;
    end else begin
        in_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond7_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        in_V_read = 1'b1;
    end else begin
        in_V_read = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        out_V_blk_n = out_V_full_n;
    end else begin
        out_V_blk_n = 1'b1;
    end
end

always @ (*) begin
    if (((out_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state24))) begin
        out_V_write = 1'b1;
    end else begin
        out_V_write = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state16)) begin
        output_address0 = tmp_12_fu_278_p1;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        output_address0 = output_addr_4_reg_377;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        output_address0 = tmp_13_fu_261_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_address0 = tmp_fu_205_p1;
    end else begin
        output_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state2))) begin
        output_ce0 = 1'b1;
    end else begin
        output_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        output_d0 = reg_193;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_d0 = 32'd0;
    end else begin
        output_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state15) | (1'b1 == ap_CS_fsm_state2))) begin
        output_we0 = 1'b1;
    end else begin
        output_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((1'b1 == ap_CS_fsm_state2) & (tmp_s_fu_210_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_state3 : begin
            if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond7_fu_222_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else if ((~((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0)) & (exitcond7_fu_222_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((1'b1 == ap_CS_fsm_state4) & (exitcond6_fu_234_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state10;
        end
        ap_ST_fsm_state10 : begin
            ap_NS_fsm = ap_ST_fsm_state11;
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            ap_NS_fsm = ap_ST_fsm_state13;
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state16 : begin
            if (((1'b1 == ap_CS_fsm_state16) & (exitcond_fu_266_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            if (((out_V_full_n == 1'b1) & (1'b1 == ap_CS_fsm_state24))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state24;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_assign_to_int_fu_283_p1 = reg_193;

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state10 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd15];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd16];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd17];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state22 = ap_CS_fsm[32'd21];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd22];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd23];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

always @ (*) begin
    ap_block_state3 = ((exitcond7_fu_222_p2 == 1'd0) & (in_V_empty_n == 1'b0));
end

assign exitcond6_fu_234_p2 = ((i_reg_151 == 7'd84) ? 1'b1 : 1'b0);

assign exitcond7_fu_222_p2 = ((j_reg_128 == 7'd120) ? 1'b1 : 1'b0);

assign exitcond_fu_266_p2 = ((i1_reg_163 == 7'd84) ? 1'b1 : 1'b0);

assign fc_layer2_weights_address0 = tmp_507_cast_fu_256_p1;

assign i_6_fu_272_p2 = (i1_reg_163 + 7'd1);

assign i_7_fu_240_p2 = (i_reg_151 + 7'd1);

assign indvarinc_fu_199_p2 = (invdar_reg_117 + 7'd1);

assign j_4_fu_228_p2 = (j_reg_128 + 7'd1);

assign next_mul_fu_216_p2 = (phi_mul_reg_139 + 14'd84);

assign notlhs_fu_301_p2 = ((tmp_247_fu_287_p4 != 8'd255) ? 1'b1 : 1'b0);

assign notrhs_fu_307_p2 = ((tmp_249_fu_297_p1 == 23'd0) ? 1'b1 : 1'b0);

assign out_V_din = tmp_252_reg_400;

assign tmp_12_fu_278_p1 = i1_reg_163;

assign tmp_13_cast_fu_246_p1 = i_reg_151;

assign tmp_13_fu_261_p1 = i_reg_151;

assign tmp_247_fu_287_p4 = {{a_assign_to_int_fu_283_p1[30:23]}};

assign tmp_248_fu_313_p2 = (notrhs_fu_307_p2 | notlhs_fu_301_p2);

assign tmp_249_fu_297_p1 = a_assign_to_int_fu_283_p1[22:0];

assign tmp_251_fu_319_p2 = (tmp_250_fu_183_p2 & tmp_248_fu_313_p2);

assign tmp_252_fu_325_p3 = ((tmp_251_fu_319_p2[0:0] === 1'b1) ? reg_193 : 32'd0);

assign tmp_253_fu_250_p2 = (phi_mul_reg_139 + tmp_13_cast_fu_246_p1);

assign tmp_507_cast_fu_256_p1 = tmp_253_fu_250_p2;

assign tmp_fu_205_p1 = invdar_reg_117;

assign tmp_s_fu_210_p2 = ((invdar_reg_117 == 7'd83) ? 1'b1 : 1'b0);

endmodule //fc_layer2