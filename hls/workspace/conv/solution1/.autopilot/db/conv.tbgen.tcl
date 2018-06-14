set C_TypeInfoList {{ 
"conv" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"out": [[], {"reference": "0"}] }, {"in": [[], {"reference": "0"}] }, {"weight": [[], {"array": [ {"array": ["1", [4,1,8]]}, [4]]}] }, {"bias": [[], {"array": ["1", [8]]}] }],[],""], 
"0": [ "stream<ap_fixed<24, 4, 5, 3, 0> >", {"hls_type": {"stream": [[[[],"2"]],"3"]}}], 
"2": [ "ap_fixed<24, 4, 5, 3, 0>", {"hls_type": {"ap_fixed": [[[[], {"scalar": { "int": 24}}],[[], {"scalar": { "int": 4}}],[[], {"scalar": { "4": 5}}],[[], {"scalar": { "5": 3}}],[[], {"scalar": { "int": 0}}]],""]}}], 
"4": [ "sc_q_mode", {"enum": [[],[],[{"SC_RND":  {"scalar": "__integer__"}},{"SC_RND_ZERO":  {"scalar": "__integer__"}},{"SC_RND_MIN_INF":  {"scalar": "__integer__"}},{"SC_RND_INF":  {"scalar": "__integer__"}},{"SC_RND_CONV":  {"scalar": "__integer__"}},{"SC_TRN":  {"scalar": "__integer__"}},{"SC_TRN_ZERO":  {"scalar": "__integer__"}}],""]}], 
"1": [ "float24_t", {"typedef": [[[],"2"],""]}], 
"5": [ "sc_o_mode", {"enum": [[],[],[{"SC_SAT":  {"scalar": "__integer__"}},{"SC_SAT_ZERO":  {"scalar": "__integer__"}},{"SC_SAT_SYM":  {"scalar": "__integer__"}},{"SC_WRAP":  {"scalar": "__integer__"}},{"SC_WRAP_SM":  {"scalar": "__integer__"}}],""]}],
"3": ["hls", ""]
}}
