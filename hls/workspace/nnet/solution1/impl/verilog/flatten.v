// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4.1
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module flatten (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_V_address0,
        output_V_ce0,
        output_V_we0,
        output_V_d0,
        input_V_address0,
        input_V_ce0,
        input_V_q0
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
output  [9:0] output_V_address0;
output   output_V_ce0;
output   output_V_we0;
output  [23:0] output_V_d0;
output  [9:0] input_V_address0;
output   input_V_ce0;
input  [22:0] input_V_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg output_V_ce0;
reg output_V_we0;
reg input_V_ce0;

(* fsm_encoding = "none" *) reg   [4:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [2:0] i_3_fu_109_p2;
reg   [2:0] i_3_reg_272;
wire    ap_CS_fsm_state2;
wire   [10:0] tmp_fu_139_p2;
reg   [10:0] tmp_reg_277;
wire   [0:0] exitcond3_fu_103_p2;
wire   [6:0] tmp_234_fu_169_p2;
reg   [6:0] tmp_234_reg_282;
wire   [2:0] j_1_fu_181_p2;
reg   [2:0] j_1_reg_290;
wire    ap_CS_fsm_state3;
wire   [6:0] tmp_4_fu_187_p3;
reg   [6:0] tmp_4_reg_295;
wire   [0:0] exitcond2_fu_175_p2;
wire   [10:0] tmp_255_cast_fu_204_p3;
reg   [10:0] tmp_255_cast_reg_300;
wire   [4:0] k_1_fu_222_p2;
reg   [4:0] k_1_reg_308;
wire    ap_CS_fsm_state4;
wire   [10:0] tmp_7_fu_237_p2;
reg   [10:0] tmp_7_reg_313;
wire   [0:0] exitcond_fu_216_p2;
reg   [2:0] i_reg_70;
reg   [2:0] j_reg_81;
reg   [4:0] k_reg_92;
wire    ap_CS_fsm_state5;
wire   [63:0] tmp_256_cast_fu_251_p1;
wire   [63:0] tmp_8_fu_259_p1;
wire   [9:0] p_shl_fu_115_p3;
wire   [7:0] p_shl5_fu_127_p3;
wire   [10:0] p_shl_cast_fu_123_p1;
wire   [10:0] p_shl5_cast_fu_135_p1;
wire   [5:0] tmp_s_fu_145_p3;
wire   [3:0] tmp_233_fu_157_p3;
wire   [6:0] p_shl1_cast_fu_153_p1;
wire   [6:0] p_shl2_cast_fu_165_p1;
wire   [6:0] tmp_5_cast_fu_195_p1;
wire   [6:0] tmp_235_fu_199_p2;
wire   [6:0] k_cast3_fu_212_p1;
wire   [6:0] tmp1_fu_228_p2;
wire   [10:0] tmp1_cast_fu_233_p1;
wire   [10:0] tmp_9_cast_fu_242_p1;
wire   [10:0] tmp_236_fu_246_p2;
wire  signed [31:0] tmp_7_cast_fu_256_p1;
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
    if (((exitcond2_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_70 <= i_3_reg_272;
    end else if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        i_reg_70 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_216_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
        j_reg_81 <= j_1_reg_290;
    end else if (((exitcond3_fu_103_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_81 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        k_reg_92 <= 5'd0;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        k_reg_92 <= k_1_reg_308;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_3_reg_272 <= i_3_fu_109_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_1_reg_290 <= j_1_fu_181_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        k_1_reg_308 <= k_1_fu_222_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_103_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_234_reg_282[6 : 1] <= tmp_234_fu_169_p2[6 : 1];
        tmp_reg_277[10 : 5] <= tmp_fu_139_p2[10 : 5];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond2_fu_175_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_255_cast_reg_300[10 : 4] <= tmp_255_cast_fu_204_p3[10 : 4];
        tmp_4_reg_295[6 : 4] <= tmp_4_fu_187_p3[6 : 4];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_216_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state4))) begin
        tmp_7_reg_313 <= tmp_7_fu_237_p2;
    end
end

always @ (*) begin
    if ((((exitcond3_fu_103_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond3_fu_103_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        input_V_ce0 = 1'b1;
    end else begin
        input_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        output_V_ce0 = 1'b1;
    end else begin
        output_V_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        output_V_we0 = 1'b1;
    end else begin
        output_V_we0 = 1'b0;
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
            if (((exitcond3_fu_103_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond2_fu_175_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            if (((exitcond_fu_216_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state4))) begin
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

assign exitcond2_fu_175_p2 = ((j_reg_81 == 3'd6) ? 1'b1 : 1'b0);

assign exitcond3_fu_103_p2 = ((i_reg_70 == 3'd6) ? 1'b1 : 1'b0);

assign exitcond_fu_216_p2 = ((k_reg_92 == 5'd16) ? 1'b1 : 1'b0);

assign i_3_fu_109_p2 = (i_reg_70 + 3'd1);

assign input_V_address0 = tmp_256_cast_fu_251_p1;

assign j_1_fu_181_p2 = (j_reg_81 + 3'd1);

assign k_1_fu_222_p2 = (k_reg_92 + 5'd1);

assign k_cast3_fu_212_p1 = k_reg_92;

assign output_V_address0 = tmp_8_fu_259_p1;

assign output_V_d0 = input_V_q0;

assign p_shl1_cast_fu_153_p1 = tmp_s_fu_145_p3;

assign p_shl2_cast_fu_165_p1 = tmp_233_fu_157_p3;

assign p_shl5_cast_fu_135_p1 = p_shl5_fu_127_p3;

assign p_shl5_fu_127_p3 = {{i_reg_70}, {5'd0}};

assign p_shl_cast_fu_123_p1 = p_shl_fu_115_p3;

assign p_shl_fu_115_p3 = {{i_reg_70}, {7'd0}};

assign tmp1_cast_fu_233_p1 = tmp1_fu_228_p2;

assign tmp1_fu_228_p2 = (k_cast3_fu_212_p1 + tmp_4_reg_295);

assign tmp_233_fu_157_p3 = {{i_reg_70}, {1'd0}};

assign tmp_234_fu_169_p2 = (p_shl1_cast_fu_153_p1 - p_shl2_cast_fu_165_p1);

assign tmp_235_fu_199_p2 = (tmp_5_cast_fu_195_p1 + tmp_234_reg_282);

assign tmp_236_fu_246_p2 = (tmp_255_cast_reg_300 + tmp_9_cast_fu_242_p1);

assign tmp_255_cast_fu_204_p3 = {{tmp_235_fu_199_p2}, {4'd0}};

assign tmp_256_cast_fu_251_p1 = tmp_236_fu_246_p2;

assign tmp_4_fu_187_p3 = {{j_reg_81}, {4'd0}};

assign tmp_5_cast_fu_195_p1 = j_reg_81;

assign tmp_7_cast_fu_256_p1 = $signed(tmp_7_reg_313);

assign tmp_7_fu_237_p2 = (tmp_reg_277 + tmp1_cast_fu_233_p1);

assign tmp_8_fu_259_p1 = $unsigned(tmp_7_cast_fu_256_p1);

assign tmp_9_cast_fu_242_p1 = k_reg_92;

assign tmp_fu_139_p2 = (p_shl_cast_fu_123_p1 - p_shl5_cast_fu_135_p1);

assign tmp_s_fu_145_p3 = {{i_reg_70}, {3'd0}};

always @ (posedge ap_clk) begin
    tmp_reg_277[4:0] <= 5'b00000;
    tmp_234_reg_282[0] <= 1'b0;
    tmp_4_reg_295[3:0] <= 4'b0000;
    tmp_255_cast_reg_300[3:0] <= 4'b0000;
end

endmodule //flatten
