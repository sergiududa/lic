<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>nnet</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>fc3_out_V_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName>fc3_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>3</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>16</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_2">
				<Value>
					<Obj>
						<type>0</type>
						<id>52</id>
						<name>conv1_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>303</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item class_id="10" tracking_level="0" version="0">
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second class_id="11" tracking_level="0" version="0">
									<count>1</count>
									<item_version>0</item_version>
									<item class_id="12" tracking_level="0" version="0">
										<first class_id="13" tracking_level="0" version="0">
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>303</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>conv1_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>84</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>55</id>
						<name>conv2_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>304</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>304</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>conv2_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>85</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>58</id>
						<name>pool1_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>305</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>305</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>pool1_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>86</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>61</id>
						<name>pool2_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>306</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>306</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>pool2_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>87</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>64</id>
						<name>fc1_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>307</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>307</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fc1_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>88</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>67</id>
						<name>fc2_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>308</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>308</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName>fc2_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>89</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>70</id>
						<name>image_in_V_V</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>90</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>73</id>
						<name></name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>3</count>
					<item_version>0</item_version>
					<item>92</item>
					<item>93</item>
					<item>122</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_10">
				<Value>
					<Obj>
						<type>0</type>
						<id>74</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>314</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>314</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>95</item>
					<item>96</item>
					<item>97</item>
					<item>457</item>
					<item>458</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_11">
				<Value>
					<Obj>
						<type>0</type>
						<id>75</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>315</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>315</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>99</item>
					<item>100</item>
					<item>101</item>
					<item>456</item>
					<item>459</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_12">
				<Value>
					<Obj>
						<type>0</type>
						<id>76</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>317</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>317</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>38</count>
					<item_version>0</item_version>
					<item>103</item>
					<item>104</item>
					<item>105</item>
					<item>123</item>
					<item>124</item>
					<item>125</item>
					<item>126</item>
					<item>127</item>
					<item>128</item>
					<item>129</item>
					<item>130</item>
					<item>131</item>
					<item>132</item>
					<item>133</item>
					<item>134</item>
					<item>135</item>
					<item>136</item>
					<item>137</item>
					<item>138</item>
					<item>139</item>
					<item>140</item>
					<item>141</item>
					<item>142</item>
					<item>143</item>
					<item>144</item>
					<item>145</item>
					<item>146</item>
					<item>147</item>
					<item>148</item>
					<item>149</item>
					<item>150</item>
					<item>151</item>
					<item>152</item>
					<item>153</item>
					<item>154</item>
					<item>155</item>
					<item>455</item>
					<item>460</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_13">
				<Value>
					<Obj>
						<type>0</type>
						<id>77</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>318</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>318</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>5</count>
					<item_version>0</item_version>
					<item>107</item>
					<item>108</item>
					<item>109</item>
					<item>454</item>
					<item>461</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_14">
				<Value>
					<Obj>
						<type>0</type>
						<id>78</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>320</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>320</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>6</count>
					<item_version>0</item_version>
					<item>111</item>
					<item>112</item>
					<item>113</item>
					<item>156</item>
					<item>453</item>
					<item>462</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_15">
				<Value>
					<Obj>
						<type>0</type>
						<id>79</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>321</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>321</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>7</count>
					<item_version>0</item_version>
					<item>115</item>
					<item>116</item>
					<item>117</item>
					<item>157</item>
					<item>450</item>
					<item>452</item>
					<item>463</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_16">
				<Value>
					<Obj>
						<type>0</type>
						<id>80</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>322</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>322</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>16</count>
					<item_version>0</item_version>
					<item>119</item>
					<item>120</item>
					<item>121</item>
					<item>158</item>
					<item>159</item>
					<item>160</item>
					<item>161</item>
					<item>162</item>
					<item>163</item>
					<item>164</item>
					<item>165</item>
					<item>166</item>
					<item>167</item>
					<item>449</item>
					<item>451</item>
					<item>464</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_17">
				<Value>
					<Obj>
						<type>0</type>
						<id>81</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>323</lineNumber>
						<contextFuncName>nnet</contextFuncName>
						<inlineStackInfo>
							<count>1</count>
							<item_version>0</item_version>
							<item>
								<first>/home/sergiu/git/lic/hls/workspace</first>
								<second>
									<count>1</count>
									<item_version>0</item_version>
									<item>
										<first>
											<first>nnet_stream/solution1/nnet.cpp</first>
											<second>nnet</second>
										</first>
										<second>323</second>
									</item>
								</second>
							</item>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<oprand_edges>
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
				<m_Display>0</m_Display>
			</item>
		</nodes>
		<consts class_id="15" tracking_level="0" version="0">
			<count>9</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_18">
				<Value>
					<Obj>
						<type>2</type>
						<id>83</id>
						<name>empty</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>64</bitwidth>
				</Value>
				<const_type>0</const_type>
				<content>1</content>
			</item>
			<item class_id_reference="16" object_id="_19">
				<Value>
					<Obj>
						<type>2</type>
						<id>91</id>
						<name>Loop_1_proc138</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:Loop_1_proc138&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_20">
				<Value>
					<Obj>
						<type>2</type>
						<id>94</id>
						<name>conv_layer1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:conv_layer1&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_21">
				<Value>
					<Obj>
						<type>2</type>
						<id>98</id>
						<name>pool_layer1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pool_layer1&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_22">
				<Value>
					<Obj>
						<type>2</type>
						<id>102</id>
						<name>conv_layer2</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:conv_layer2&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_23">
				<Value>
					<Obj>
						<type>2</type>
						<id>106</id>
						<name>pool_layer2</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:pool_layer2&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_24">
				<Value>
					<Obj>
						<type>2</type>
						<id>110</id>
						<name>fc_layer1</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fc_layer1&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_25">
				<Value>
					<Obj>
						<type>2</type>
						<id>114</id>
						<name>fc_layer2</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fc_layer2&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_26">
				<Value>
					<Obj>
						<type>2</type>
						<id>118</id>
						<name>fc_layer3</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo>
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>0</bitwidth>
				</Value>
				<const_type>6</const_type>
				<content>&lt;constant:fc_layer3&gt;</content>
			</item>
		</consts>
		<blocks class_id="17" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="18" tracking_level="1" version="0" object_id="_27">
				<Obj>
					<type>3</type>
					<id>82</id>
					<name>nnet</name>
					<fileName></fileName>
					<fileDirectory></fileDirectory>
					<lineNumber>0</lineNumber>
					<contextFuncName></contextFuncName>
					<inlineStackInfo>
						<count>0</count>
						<item_version>0</item_version>
					</inlineStackInfo>
					<originalName></originalName>
					<rtlName></rtlName>
					<coreName></coreName>
				</Obj>
				<node_objs>
					<count>16</count>
					<item_version>0</item_version>
					<item>52</item>
					<item>55</item>
					<item>58</item>
					<item>61</item>
					<item>64</item>
					<item>67</item>
					<item>70</item>
					<item>73</item>
					<item>74</item>
					<item>75</item>
					<item>76</item>
					<item>77</item>
					<item>78</item>
					<item>79</item>
					<item>80</item>
					<item>81</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>92</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_28">
				<id>84</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_29">
				<id>85</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>55</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_30">
				<id>86</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>58</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_31">
				<id>87</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>61</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_32">
				<id>88</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>64</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_33">
				<id>89</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_34">
				<id>90</id>
				<edge_type>1</edge_type>
				<source_obj>83</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_35">
				<id>92</id>
				<edge_type>1</edge_type>
				<source_obj>91</source_obj>
				<sink_obj>73</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_36">
				<id>93</id>
				<edge_type>1</edge_type>
				<source_obj>70</source_obj>
				<sink_obj>73</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_37">
				<id>95</id>
				<edge_type>1</edge_type>
				<source_obj>94</source_obj>
				<sink_obj>74</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_38">
				<id>96</id>
				<edge_type>1</edge_type>
				<source_obj>52</source_obj>
				<sink_obj>74</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_39">
				<id>97</id>
				<edge_type>1</edge_type>
				<source_obj>70</source_obj>
				<sink_obj>74</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_40">
				<id>99</id>
				<edge_type>1</edge_type>
				<source_obj>98</source_obj>
				<sink_obj>75</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_41">
				<id>100</id>
				<edge_type>1</edge_type>
				<source_obj>58</source_obj>
				<sink_obj>75</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_42">
				<id>101</id>
				<edge_type>1</edge_type>
				<source_obj>52</source_obj>
				<sink_obj>75</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_43">
				<id>103</id>
				<edge_type>1</edge_type>
				<source_obj>102</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_44">
				<id>104</id>
				<edge_type>1</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_45">
				<id>105</id>
				<edge_type>1</edge_type>
				<source_obj>58</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_46">
				<id>107</id>
				<edge_type>1</edge_type>
				<source_obj>106</source_obj>
				<sink_obj>77</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_47">
				<id>108</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>77</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_48">
				<id>109</id>
				<edge_type>1</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>77</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_49">
				<id>111</id>
				<edge_type>1</edge_type>
				<source_obj>110</source_obj>
				<sink_obj>78</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_50">
				<id>112</id>
				<edge_type>1</edge_type>
				<source_obj>64</source_obj>
				<sink_obj>78</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_51">
				<id>113</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>78</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_52">
				<id>115</id>
				<edge_type>1</edge_type>
				<source_obj>114</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_53">
				<id>116</id>
				<edge_type>1</edge_type>
				<source_obj>67</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_54">
				<id>117</id>
				<edge_type>1</edge_type>
				<source_obj>64</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_55">
				<id>119</id>
				<edge_type>1</edge_type>
				<source_obj>118</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_56">
				<id>120</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_57">
				<id>121</id>
				<edge_type>1</edge_type>
				<source_obj>67</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_58">
				<id>122</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>73</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_59">
				<id>123</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_60">
				<id>124</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_61">
				<id>125</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_62">
				<id>126</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_63">
				<id>127</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_64">
				<id>128</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_65">
				<id>129</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_66">
				<id>130</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_67">
				<id>131</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_68">
				<id>132</id>
				<edge_type>1</edge_type>
				<source_obj>12</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_69">
				<id>133</id>
				<edge_type>1</edge_type>
				<source_obj>13</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_70">
				<id>134</id>
				<edge_type>1</edge_type>
				<source_obj>14</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_71">
				<id>135</id>
				<edge_type>1</edge_type>
				<source_obj>15</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_72">
				<id>136</id>
				<edge_type>1</edge_type>
				<source_obj>16</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_73">
				<id>137</id>
				<edge_type>1</edge_type>
				<source_obj>17</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_74">
				<id>138</id>
				<edge_type>1</edge_type>
				<source_obj>18</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_75">
				<id>139</id>
				<edge_type>1</edge_type>
				<source_obj>19</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_76">
				<id>140</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_77">
				<id>141</id>
				<edge_type>1</edge_type>
				<source_obj>21</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_78">
				<id>142</id>
				<edge_type>1</edge_type>
				<source_obj>22</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_79">
				<id>143</id>
				<edge_type>1</edge_type>
				<source_obj>23</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_80">
				<id>144</id>
				<edge_type>1</edge_type>
				<source_obj>24</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_81">
				<id>145</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_82">
				<id>146</id>
				<edge_type>1</edge_type>
				<source_obj>26</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_83">
				<id>147</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_84">
				<id>148</id>
				<edge_type>1</edge_type>
				<source_obj>28</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_85">
				<id>149</id>
				<edge_type>1</edge_type>
				<source_obj>29</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_86">
				<id>150</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_87">
				<id>151</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_88">
				<id>152</id>
				<edge_type>1</edge_type>
				<source_obj>32</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_89">
				<id>153</id>
				<edge_type>1</edge_type>
				<source_obj>33</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_90">
				<id>154</id>
				<edge_type>1</edge_type>
				<source_obj>34</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_91">
				<id>155</id>
				<edge_type>1</edge_type>
				<source_obj>35</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_92">
				<id>156</id>
				<edge_type>1</edge_type>
				<source_obj>36</source_obj>
				<sink_obj>78</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_93">
				<id>157</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_94">
				<id>158</id>
				<edge_type>1</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_95">
				<id>159</id>
				<edge_type>1</edge_type>
				<source_obj>39</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_96">
				<id>160</id>
				<edge_type>1</edge_type>
				<source_obj>40</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_97">
				<id>161</id>
				<edge_type>1</edge_type>
				<source_obj>41</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_98">
				<id>162</id>
				<edge_type>1</edge_type>
				<source_obj>42</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_99">
				<id>163</id>
				<edge_type>1</edge_type>
				<source_obj>43</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_100">
				<id>164</id>
				<edge_type>1</edge_type>
				<source_obj>44</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_101">
				<id>165</id>
				<edge_type>1</edge_type>
				<source_obj>45</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_102">
				<id>166</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_103">
				<id>167</id>
				<edge_type>1</edge_type>
				<source_obj>47</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_104">
				<id>449</id>
				<edge_type>4</edge_type>
				<source_obj>79</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_105">
				<id>450</id>
				<edge_type>4</edge_type>
				<source_obj>78</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_106">
				<id>451</id>
				<edge_type>4</edge_type>
				<source_obj>79</source_obj>
				<sink_obj>80</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_107">
				<id>452</id>
				<edge_type>4</edge_type>
				<source_obj>78</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_108">
				<id>453</id>
				<edge_type>4</edge_type>
				<source_obj>77</source_obj>
				<sink_obj>78</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_109">
				<id>454</id>
				<edge_type>4</edge_type>
				<source_obj>76</source_obj>
				<sink_obj>77</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_110">
				<id>455</id>
				<edge_type>4</edge_type>
				<source_obj>75</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_111">
				<id>456</id>
				<edge_type>4</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>75</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_112">
				<id>457</id>
				<edge_type>4</edge_type>
				<source_obj>73</source_obj>
				<sink_obj>74</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_113">
				<id>458</id>
				<edge_type>4</edge_type>
				<source_obj>73</source_obj>
				<sink_obj>74</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_114">
				<id>459</id>
				<edge_type>4</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>75</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_115">
				<id>460</id>
				<edge_type>4</edge_type>
				<source_obj>75</source_obj>
				<sink_obj>76</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_116">
				<id>461</id>
				<edge_type>4</edge_type>
				<source_obj>76</source_obj>
				<sink_obj>77</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_117">
				<id>462</id>
				<edge_type>4</edge_type>
				<source_obj>77</source_obj>
				<sink_obj>78</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_118">
				<id>463</id>
				<edge_type>4</edge_type>
				<source_obj>78</source_obj>
				<sink_obj>79</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_119">
				<id>464</id>
				<edge_type>4</edge_type>
				<source_obj>79</source_obj>
				<sink_obj>80</sink_obj>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_120">
			<mId>1</mId>
			<mTag>nnet</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>82</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>70532</mMinLatency>
			<mMaxLatency>-1</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="23" tracking_level="1" version="0" object_id="_121">
				<port_list class_id="24" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="25" tracking_level="0" version="0">
					<count>8</count>
					<item_version>0</item_version>
					<item class_id="26" tracking_level="1" version="0" object_id="_122">
						<type>0</type>
						<name>Loop_1_proc138_U0</name>
						<ssdmobj_id>73</ssdmobj_id>
						<pins class_id="27" tracking_level="0" version="0">
							<count>2</count>
							<item_version>0</item_version>
							<item class_id="28" tracking_level="1" version="0" object_id="_123">
								<port class_id="29" tracking_level="1" version="0" object_id="_124">
									<name>image_in_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id="30" tracking_level="1" version="0" object_id="_125">
									<type>0</type>
									<name>Loop_1_proc138_U0</name>
									<ssdmobj_id>73</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_126">
								<port class_id_reference="29" object_id="_127">
									<name>image_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_125"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_128">
						<type>0</type>
						<name>conv_layer1_U0</name>
						<ssdmobj_id>74</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_129">
								<port class_id_reference="29" object_id="_130">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_131">
									<type>0</type>
									<name>conv_layer1_U0</name>
									<ssdmobj_id>74</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_132">
								<port class_id_reference="29" object_id="_133">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_131"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_134">
						<type>0</type>
						<name>pool_layer1_U0</name>
						<ssdmobj_id>75</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_135">
								<port class_id_reference="29" object_id="_136">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_137">
									<type>0</type>
									<name>pool_layer1_U0</name>
									<ssdmobj_id>75</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_138">
								<port class_id_reference="29" object_id="_139">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_137"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_140">
						<type>0</type>
						<name>conv_layer2_U0</name>
						<ssdmobj_id>76</ssdmobj_id>
						<pins>
							<count>35</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_141">
								<port class_id_reference="29" object_id="_142">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_143">
									<type>0</type>
									<name>conv_layer2_U0</name>
									<ssdmobj_id>76</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_144">
								<port class_id_reference="29" object_id="_145">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_146">
								<port class_id_reference="29" object_id="_147">
									<name>conv_layer2_weights_63</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_148">
								<port class_id_reference="29" object_id="_149">
									<name>conv_layer2_weights_61</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_150">
								<port class_id_reference="29" object_id="_151">
									<name>conv_layer2_weights_59</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_152">
								<port class_id_reference="29" object_id="_153">
									<name>conv_layer2_weights_57</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_154">
								<port class_id_reference="29" object_id="_155">
									<name>conv_layer2_weights_55</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_156">
								<port class_id_reference="29" object_id="_157">
									<name>conv_layer2_weights_53</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_158">
								<port class_id_reference="29" object_id="_159">
									<name>conv_layer2_weights_51</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_160">
								<port class_id_reference="29" object_id="_161">
									<name>conv_layer2_weights_49</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_162">
								<port class_id_reference="29" object_id="_163">
									<name>conv_layer2_weights_47</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_164">
								<port class_id_reference="29" object_id="_165">
									<name>conv_layer2_weights_45</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_166">
								<port class_id_reference="29" object_id="_167">
									<name>conv_layer2_weights_43</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_168">
								<port class_id_reference="29" object_id="_169">
									<name>conv_layer2_weights_41</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_170">
								<port class_id_reference="29" object_id="_171">
									<name>conv_layer2_weights_39</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_172">
								<port class_id_reference="29" object_id="_173">
									<name>conv_layer2_weights_37</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_174">
								<port class_id_reference="29" object_id="_175">
									<name>conv_layer2_weights_35</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_176">
								<port class_id_reference="29" object_id="_177">
									<name>conv_layer2_weights_33</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_178">
								<port class_id_reference="29" object_id="_179">
									<name>conv_layer2_weights_31</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_180">
								<port class_id_reference="29" object_id="_181">
									<name>conv_layer2_weights_29</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_182">
								<port class_id_reference="29" object_id="_183">
									<name>conv_layer2_weights_27</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_184">
								<port class_id_reference="29" object_id="_185">
									<name>conv_layer2_weights_25</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_186">
								<port class_id_reference="29" object_id="_187">
									<name>conv_layer2_weights_23</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_188">
								<port class_id_reference="29" object_id="_189">
									<name>conv_layer2_weights_21</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_190">
								<port class_id_reference="29" object_id="_191">
									<name>conv_layer2_weights_19</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_192">
								<port class_id_reference="29" object_id="_193">
									<name>conv_layer2_weights_17</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_194">
								<port class_id_reference="29" object_id="_195">
									<name>conv_layer2_weights_15</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_196">
								<port class_id_reference="29" object_id="_197">
									<name>conv_layer2_weights_13</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_198">
								<port class_id_reference="29" object_id="_199">
									<name>conv_layer2_weights_11</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_200">
								<port class_id_reference="29" object_id="_201">
									<name>conv_layer2_weights_9</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_202">
								<port class_id_reference="29" object_id="_203">
									<name>conv_layer2_weights_7</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_204">
								<port class_id_reference="29" object_id="_205">
									<name>conv_layer2_weights_5</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_206">
								<port class_id_reference="29" object_id="_207">
									<name>conv_layer2_weights_3</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_208">
								<port class_id_reference="29" object_id="_209">
									<name>conv_layer2_weights_1</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
							<item class_id_reference="28" object_id="_210">
								<port class_id_reference="29" object_id="_211">
									<name>conv_layer2_bias_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_143"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_212">
						<type>0</type>
						<name>pool_layer2_U0</name>
						<ssdmobj_id>77</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_213">
								<port class_id_reference="29" object_id="_214">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_215">
									<type>0</type>
									<name>pool_layer2_U0</name>
									<ssdmobj_id>77</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_216">
								<port class_id_reference="29" object_id="_217">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_215"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_218">
						<type>0</type>
						<name>fc_layer1_U0</name>
						<ssdmobj_id>78</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_219">
								<port class_id_reference="29" object_id="_220">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_221">
									<type>0</type>
									<name>fc_layer1_U0</name>
									<ssdmobj_id>78</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_222">
								<port class_id_reference="29" object_id="_223">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_221"></inst>
							</item>
							<item class_id_reference="28" object_id="_224">
								<port class_id_reference="29" object_id="_225">
									<name>fc_layer1_weights_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_221"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_226">
						<type>0</type>
						<name>fc_layer2_U0</name>
						<ssdmobj_id>79</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_227">
								<port class_id_reference="29" object_id="_228">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_229">
									<type>0</type>
									<name>fc_layer2_U0</name>
									<ssdmobj_id>79</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_230">
								<port class_id_reference="29" object_id="_231">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_229"></inst>
							</item>
							<item class_id_reference="28" object_id="_232">
								<port class_id_reference="29" object_id="_233">
									<name>fc_layer2_weights_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_229"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_234">
						<type>0</type>
						<name>fc_layer3_U0</name>
						<ssdmobj_id>80</ssdmobj_id>
						<pins>
							<count>12</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_235">
								<port class_id_reference="29" object_id="_236">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_237">
									<type>0</type>
									<name>fc_layer3_U0</name>
									<ssdmobj_id>80</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_238">
								<port class_id_reference="29" object_id="_239">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_240">
								<port class_id_reference="29" object_id="_241">
									<name>fc_layer3_weights_V_10</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_242">
								<port class_id_reference="29" object_id="_243">
									<name>fc_layer3_weights_V_1</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_244">
								<port class_id_reference="29" object_id="_245">
									<name>fc_layer3_weights_V_2</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_246">
								<port class_id_reference="29" object_id="_247">
									<name>fc_layer3_weights_V_3</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_248">
								<port class_id_reference="29" object_id="_249">
									<name>fc_layer3_weights_V_4</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_250">
								<port class_id_reference="29" object_id="_251">
									<name>fc_layer3_weights_V_5</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_252">
								<port class_id_reference="29" object_id="_253">
									<name>fc_layer3_weights_V_6</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_254">
								<port class_id_reference="29" object_id="_255">
									<name>fc_layer3_weights_V_7</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_256">
								<port class_id_reference="29" object_id="_257">
									<name>fc_layer3_weights_V_8</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
							<item class_id_reference="28" object_id="_258">
								<port class_id_reference="29" object_id="_259">
									<name>fc_layer3_weights_V_9</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_237"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="31" tracking_level="0" version="0">
					<count>7</count>
					<item_version>0</item_version>
					<item class_id="32" tracking_level="1" version="0" object_id="_260">
						<type>1</type>
						<name>image_in_V_V</name>
						<ssdmobj_id>70</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_261">
							<port class_id_reference="29" object_id="_262">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_125"></inst>
						</source>
						<sink class_id_reference="28" object_id="_263">
							<port class_id_reference="29" object_id="_264">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_131"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_265">
						<type>1</type>
						<name>conv1_out_V_V</name>
						<ssdmobj_id>52</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_266">
							<port class_id_reference="29" object_id="_267">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_131"></inst>
						</source>
						<sink class_id_reference="28" object_id="_268">
							<port class_id_reference="29" object_id="_269">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_137"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_270">
						<type>1</type>
						<name>pool1_out_V_V</name>
						<ssdmobj_id>58</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_271">
							<port class_id_reference="29" object_id="_272">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_137"></inst>
						</source>
						<sink class_id_reference="28" object_id="_273">
							<port class_id_reference="29" object_id="_274">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_143"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_275">
						<type>1</type>
						<name>conv2_out_V_V</name>
						<ssdmobj_id>55</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_276">
							<port class_id_reference="29" object_id="_277">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_143"></inst>
						</source>
						<sink class_id_reference="28" object_id="_278">
							<port class_id_reference="29" object_id="_279">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_215"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_280">
						<type>1</type>
						<name>pool2_out_V_V</name>
						<ssdmobj_id>61</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_281">
							<port class_id_reference="29" object_id="_282">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_215"></inst>
						</source>
						<sink class_id_reference="28" object_id="_283">
							<port class_id_reference="29" object_id="_284">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_221"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_285">
						<type>1</type>
						<name>fc1_out_V_V</name>
						<ssdmobj_id>64</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_286">
							<port class_id_reference="29" object_id="_287">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_221"></inst>
						</source>
						<sink class_id_reference="28" object_id="_288">
							<port class_id_reference="29" object_id="_289">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_229"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_290">
						<type>1</type>
						<name>fc2_out_V_V</name>
						<ssdmobj_id>67</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_291">
							<port class_id_reference="29" object_id="_292">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_229"></inst>
						</source>
						<sink class_id_reference="28" object_id="_293">
							<port class_id_reference="29" object_id="_294">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_237"></inst>
						</sink>
					</item>
				</channel_list>
				<net_list class_id="33" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</net_list>
			</mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="-1"></fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="36" tracking_level="0" version="0">
		<count>16</count>
		<item_version>0</item_version>
		<item class_id="37" tracking_level="0" version="0">
			<first>52</first>
			<second class_id="38" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>55</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>58</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>61</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>64</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>67</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>70</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>73</first>
			<second>
				<first>0</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>74</first>
			<second>
				<first>2</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>75</first>
			<second>
				<first>4</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>76</first>
			<second>
				<first>6</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>77</first>
			<second>
				<first>8</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>78</first>
			<second>
				<first>10</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>79</first>
			<second>
				<first>12</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>80</first>
			<second>
				<first>14</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>81</first>
			<second>
				<first>15</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="39" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="40" tracking_level="0" version="0">
			<first>82</first>
			<second class_id="41" tracking_level="0" version="0">
				<first>0</first>
				<second>15</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="42" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="43" tracking_level="1" version="0" object_id="_295">
			<region_name>nnet</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>82</item>
			</basic_blocks>
			<nodes>
				<count>34</count>
				<item_version>0</item_version>
				<item>48</item>
				<item>49</item>
				<item>50</item>
				<item>51</item>
				<item>52</item>
				<item>53</item>
				<item>54</item>
				<item>55</item>
				<item>56</item>
				<item>57</item>
				<item>58</item>
				<item>59</item>
				<item>60</item>
				<item>61</item>
				<item>62</item>
				<item>63</item>
				<item>64</item>
				<item>65</item>
				<item>66</item>
				<item>67</item>
				<item>68</item>
				<item>69</item>
				<item>70</item>
				<item>71</item>
				<item>72</item>
				<item>73</item>
				<item>74</item>
				<item>75</item>
				<item>76</item>
				<item>77</item>
				<item>78</item>
				<item>79</item>
				<item>80</item>
				<item>81</item>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>16</region_type>
			<interval>0</interval>
			<pipe_depth>0</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="44" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="45" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="46" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="47" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_port_io_nodes>
	<port2core class_id="48" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</port2core>
	<node2core>
		<count>0</count>
		<item_version>0</item_version>
	</node2core>
</syndb>
</boost_serialization>

