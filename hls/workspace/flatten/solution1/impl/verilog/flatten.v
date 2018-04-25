// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="flatten,hls_ip_2017_4_1,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7z020clg400-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=6.508000,HLS_SYN_LAT=1237,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=0,HLS_SYN_FF=60,HLS_SYN_LUT=227}" *)

module flatten (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_r_address0,
        output_r_ce0,
        output_r_we0,
        output_r_d0,
        input_r_address0,
        input_r_ce0,
        input_r_q0
);

parameter    ap_ST_fsm_state1 = 5'd1;
parameter    ap_ST_fsm_state2 = 5'd2;
parameter    ap_ST_fsm_state3 = 5'd4;
parameter    ap_ST_fsm_state4 = 5'd8;
parameter    ap_ST_fsm_state5 = 5'd16;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [9:0] output_r_address0;
output   output_r_ce0;
output   output_r_we0;
output  [31:0] output_r_d0;
output  [9:0] input_r_address0;
output   input_r_ce0;
input  [31:0] input_r_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_r_ce0;
reg output_r_we0;
reg input_r_ce0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [2:0] i_1_fu_112_p2;
reg   [2:0] i_1_reg_270;
wire    ap_CS_fsm_state2;
wire   [6:0] tmp_5_fu_142_p2;
reg   [6:0] tmp_5_reg_275;
wire   [0:0] exitcond2_fu_106_p2;
wire   [10:0] tmp_1_fu_172_p2;
reg   [10:0] tmp_1_reg_280;
wire   [2:0] j_1_fu_184_p2;
reg   [2:0] j_1_reg_288;
wire    ap_CS_fsm_state3;
wire   [10:0] tmp_11_cast_fu_199_p3;
reg   [10:0] tmp_11_cast_reg_293;
wire   [0:0] exitcond1_fu_178_p2;
wire   [6:0] tmp_4_fu_207_p3;
reg   [6:0] tmp_4_reg_298;
wire   [4:0] k_1_fu_225_p2;
reg   [4:0] k_1_reg_306;
wire    ap_CS_fsm_state4;
wire   [0:0] exitcond_fu_219_p2;
wire   [10:0] tmp_8_fu_254_p2;
reg   [10:0] tmp_8_reg_316;
reg   [2:0] i_reg_73;
reg   [2:0] j_reg_84;
reg   [4:0] k_reg_95;
wire    ap_CS_fsm_state5;
wire   [63:0] tmp_12_cast_fu_240_p1;
wire   [63:0] tmp_9_fu_262_p1;
wire   [5:0] tmp_fu_118_p3;
wire   [3:0] tmp_2_fu_130_p3;
wire   [6:0] p_shl1_cast_fu_126_p1;
wire   [6:0] p_shl2_cast_fu_138_p1;
wire   [9:0] p_shl_fu_148_p3;
wire   [7:0] p_shl5_fu_160_p3;
wire   [10:0] p_shl_cast_fu_156_p1;
wire   [10:0] p_shl5_cast_fu_168_p1;
wire   [6:0] tmp_3_cast_fu_190_p1;
wire   [6:0] tmp_7_fu_194_p2;
wire   [10:0] tmp_6_cast_fu_231_p1;
wire   [10:0] tmp_s_fu_235_p2;
wire   [6:0] k_cast3_fu_215_p1;
wire   [6:0] tmp1_fu_245_p2;
wire   [10:0] tmp1_cast_fu_250_p1;
wire  signed [31:0] tmp_8_cast_fu_259_p1;
reg   [4:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 5'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_178_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_73 <= i_1_reg_270;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_73 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_219_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_84 <= j_1_reg_288;
    end else if (((exitcond2_fu_106_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_84 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_178_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        k_reg_95 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        k_reg_95 <= k_1_reg_306;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_1_reg_270 <= i_1_fu_112_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_1_reg_288 <= j_1_fu_184_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        k_1_reg_306 <= k_1_fu_225_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_178_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_11_cast_reg_293[10 : 4] <= tmp_11_cast_fu_199_p3[10 : 4];
        tmp_4_reg_298[6 : 4] <= tmp_4_fu_207_p3[6 : 4];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_106_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_1_reg_280[10 : 5] <= tmp_1_fu_172_p2[10 : 5];
        tmp_5_reg_275[6 : 1] <= tmp_5_fu_142_p2[6 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_219_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp_8_reg_316 <= tmp_8_fu_254_p2;
    end
end

always @ (*) begin
    if (((exitcond2_fu_106_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
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
    if (((exitcond2_fu_106_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        input_r_ce0 = 1'b1;
    end else begin
        input_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_ce0 = 1'b1;
    end else begin
        output_r_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        output_r_we0 = 1'b1;
    end else begin
        output_r_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond2_fu_106_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond1_fu_178_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((exitcond_fu_219_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state5;
            end
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign exitcond1_fu_178_p2 = ((j_reg_84 == 3'd6) ? 1'b1 : 1'b0);

assign exitcond2_fu_106_p2 = ((i_reg_73 == 3'd6) ? 1'b1 : 1'b0);

assign exitcond_fu_219_p2 = ((k_reg_95 == 5'd16) ? 1'b1 : 1'b0);

assign i_1_fu_112_p2 = (i_reg_73 + 3'd1);

assign input_r_address0 = tmp_12_cast_fu_240_p1;

assign j_1_fu_184_p2 = (j_reg_84 + 3'd1);

assign k_1_fu_225_p2 = (k_reg_95 + 5'd1);

assign k_cast3_fu_215_p1 = k_reg_95;

assign output_r_address0 = tmp_9_fu_262_p1;

assign output_r_d0 = input_r_q0;

assign p_shl1_cast_fu_126_p1 = tmp_fu_118_p3;

assign p_shl2_cast_fu_138_p1 = tmp_2_fu_130_p3;

assign p_shl5_cast_fu_168_p1 = p_shl5_fu_160_p3;

assign p_shl5_fu_160_p3 = {{i_reg_73}, {5'd0}};

assign p_shl_cast_fu_156_p1 = p_shl_fu_148_p3;

assign p_shl_fu_148_p3 = {{i_reg_73}, {7'd0}};

assign tmp1_cast_fu_250_p1 = tmp1_fu_245_p2;

assign tmp1_fu_245_p2 = (k_cast3_fu_215_p1 + tmp_4_reg_298);

assign tmp_11_cast_fu_199_p3 = {{tmp_7_fu_194_p2}, {4'd0}};

assign tmp_12_cast_fu_240_p1 = tmp_s_fu_235_p2;

assign tmp_1_fu_172_p2 = (p_shl_cast_fu_156_p1 - p_shl5_cast_fu_168_p1);

assign tmp_2_fu_130_p3 = {{i_reg_73}, {1'd0}};

assign tmp_3_cast_fu_190_p1 = j_reg_84;

assign tmp_4_fu_207_p3 = {{j_reg_84}, {4'd0}};

assign tmp_5_fu_142_p2 = (p_shl1_cast_fu_126_p1 - p_shl2_cast_fu_138_p1);

assign tmp_6_cast_fu_231_p1 = k_reg_95;

assign tmp_7_fu_194_p2 = (tmp_3_cast_fu_190_p1 + tmp_5_reg_275);

assign tmp_8_cast_fu_259_p1 = $signed(tmp_8_reg_316);

assign tmp_8_fu_254_p2 = (tmp_1_reg_280 + tmp1_cast_fu_250_p1);

assign tmp_9_fu_262_p1 = $unsigned(tmp_8_cast_fu_259_p1);

assign tmp_fu_118_p3 = {{i_reg_73}, {3'd0}};

assign tmp_s_fu_235_p2 = (tmp_11_cast_reg_293 + tmp_6_cast_fu_231_p1);

always @ (posedge ap_clk) begin
    tmp_5_reg_275[0] <= 1'b0;
    tmp_1_reg_280[4:0] <= 5'b00000;
    tmp_11_cast_reg_293[3:0] <= 4'b0000;
    tmp_4_reg_298[3:0] <= 4'b0000;
end

endmodule //flatten
