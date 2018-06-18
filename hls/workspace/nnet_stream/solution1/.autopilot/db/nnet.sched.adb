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
						<id>43</id>
						<name>conv1_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>311</lineNumber>
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
										<second>311</second>
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
					<item>75</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>46</id>
						<name>conv2_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>312</lineNumber>
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
										<second>312</second>
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
					<item>76</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>49</id>
						<name>pool1_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>313</lineNumber>
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
										<second>313</second>
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
					<item>77</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>52</id>
						<name>pool2_out_V_V</name>
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
						<originalName>pool2_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>78</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_6">
				<Value>
					<Obj>
						<type>0</type>
						<id>55</id>
						<name>fc1_out_V_V</name>
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
						<originalName>fc1_out.V.V</originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>16</bitwidth>
				</Value>
				<oprand_edges>
					<count>1</count>
					<item_version>0</item_version>
					<item>79</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_7">
				<Value>
					<Obj>
						<type>0</type>
						<id>58</id>
						<name>fc2_out_V_V</name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>316</lineNumber>
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
										<second>316</second>
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
					<item>80</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_8">
				<Value>
					<Obj>
						<type>0</type>
						<id>61</id>
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
					<item>81</item>
				</oprand_edges>
				<opcode>alloca</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_9">
				<Value>
					<Obj>
						<type>0</type>
						<id>64</id>
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
					<item>83</item>
					<item>84</item>
					<item>113</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_10">
				<Value>
					<Obj>
						<type>0</type>
						<id>65</id>
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
					<count>5</count>
					<item_version>0</item_version>
					<item>86</item>
					<item>87</item>
					<item>88</item>
					<item>439</item>
					<item>440</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_11">
				<Value>
					<Obj>
						<type>0</type>
						<id>66</id>
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
					<count>5</count>
					<item_version>0</item_version>
					<item>90</item>
					<item>91</item>
					<item>92</item>
					<item>438</item>
					<item>441</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_12">
				<Value>
					<Obj>
						<type>0</type>
						<id>67</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>325</lineNumber>
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
										<second>325</second>
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
					<item>94</item>
					<item>95</item>
					<item>96</item>
					<item>114</item>
					<item>115</item>
					<item>116</item>
					<item>117</item>
					<item>118</item>
					<item>119</item>
					<item>120</item>
					<item>121</item>
					<item>122</item>
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
					<item>437</item>
					<item>442</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_13">
				<Value>
					<Obj>
						<type>0</type>
						<id>68</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>326</lineNumber>
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
										<second>326</second>
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
					<item>98</item>
					<item>99</item>
					<item>100</item>
					<item>436</item>
					<item>443</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_14">
				<Value>
					<Obj>
						<type>0</type>
						<id>69</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>328</lineNumber>
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
										<second>328</second>
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
					<item>102</item>
					<item>103</item>
					<item>104</item>
					<item>147</item>
					<item>435</item>
					<item>444</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_15">
				<Value>
					<Obj>
						<type>0</type>
						<id>70</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>329</lineNumber>
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
										<second>329</second>
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
					<item>106</item>
					<item>107</item>
					<item>108</item>
					<item>148</item>
					<item>432</item>
					<item>434</item>
					<item>445</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_16">
				<Value>
					<Obj>
						<type>0</type>
						<id>71</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>330</lineNumber>
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
										<second>330</second>
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
					<item>110</item>
					<item>111</item>
					<item>112</item>
					<item>149</item>
					<item>431</item>
					<item>433</item>
					<item>446</item>
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_17">
				<Value>
					<Obj>
						<type>0</type>
						<id>72</id>
						<name></name>
						<fileName>nnet_stream/solution1/nnet.cpp</fileName>
						<fileDirectory>/home/sergiu/git/lic/hls/workspace</fileDirectory>
						<lineNumber>331</lineNumber>
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
										<second>331</second>
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
						<id>74</id>
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
						<id>82</id>
						<name>Loop_1_proc137</name>
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
				<content>&lt;constant:Loop_1_proc137&gt;</content>
			</item>
			<item class_id_reference="16" object_id="_20">
				<Value>
					<Obj>
						<type>2</type>
						<id>85</id>
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
						<id>89</id>
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
						<id>93</id>
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
						<id>97</id>
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
						<id>101</id>
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
						<id>105</id>
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
						<id>109</id>
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
					<id>73</id>
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
					<item>43</item>
					<item>46</item>
					<item>49</item>
					<item>52</item>
					<item>55</item>
					<item>58</item>
					<item>61</item>
					<item>64</item>
					<item>65</item>
					<item>66</item>
					<item>67</item>
					<item>68</item>
					<item>69</item>
					<item>70</item>
					<item>71</item>
					<item>72</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="19" tracking_level="0" version="0">
			<count>83</count>
			<item_version>0</item_version>
			<item class_id="20" tracking_level="1" version="0" object_id="_28">
				<id>75</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>43</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_29">
				<id>76</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>46</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_30">
				<id>77</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>49</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_31">
				<id>78</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>52</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_32">
				<id>79</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>55</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_33">
				<id>80</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>58</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_34">
				<id>81</id>
				<edge_type>1</edge_type>
				<source_obj>74</source_obj>
				<sink_obj>61</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_35">
				<id>83</id>
				<edge_type>1</edge_type>
				<source_obj>82</source_obj>
				<sink_obj>64</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_36">
				<id>84</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>64</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_37">
				<id>86</id>
				<edge_type>1</edge_type>
				<source_obj>85</source_obj>
				<sink_obj>65</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_38">
				<id>87</id>
				<edge_type>1</edge_type>
				<source_obj>43</source_obj>
				<sink_obj>65</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_39">
				<id>88</id>
				<edge_type>1</edge_type>
				<source_obj>61</source_obj>
				<sink_obj>65</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_40">
				<id>90</id>
				<edge_type>1</edge_type>
				<source_obj>89</source_obj>
				<sink_obj>66</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_41">
				<id>91</id>
				<edge_type>1</edge_type>
				<source_obj>49</source_obj>
				<sink_obj>66</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_42">
				<id>92</id>
				<edge_type>1</edge_type>
				<source_obj>43</source_obj>
				<sink_obj>66</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_43">
				<id>94</id>
				<edge_type>1</edge_type>
				<source_obj>93</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_44">
				<id>95</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_45">
				<id>96</id>
				<edge_type>1</edge_type>
				<source_obj>49</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_46">
				<id>98</id>
				<edge_type>1</edge_type>
				<source_obj>97</source_obj>
				<sink_obj>68</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_47">
				<id>99</id>
				<edge_type>1</edge_type>
				<source_obj>52</source_obj>
				<sink_obj>68</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_48">
				<id>100</id>
				<edge_type>1</edge_type>
				<source_obj>46</source_obj>
				<sink_obj>68</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_49">
				<id>102</id>
				<edge_type>1</edge_type>
				<source_obj>101</source_obj>
				<sink_obj>69</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_50">
				<id>103</id>
				<edge_type>1</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>69</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_51">
				<id>104</id>
				<edge_type>1</edge_type>
				<source_obj>52</source_obj>
				<sink_obj>69</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_52">
				<id>106</id>
				<edge_type>1</edge_type>
				<source_obj>105</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_53">
				<id>107</id>
				<edge_type>1</edge_type>
				<source_obj>58</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_54">
				<id>108</id>
				<edge_type>1</edge_type>
				<source_obj>55</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_55">
				<id>110</id>
				<edge_type>1</edge_type>
				<source_obj>109</source_obj>
				<sink_obj>71</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_56">
				<id>111</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>71</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_57">
				<id>112</id>
				<edge_type>1</edge_type>
				<source_obj>58</source_obj>
				<sink_obj>71</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_58">
				<id>113</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>64</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_59">
				<id>114</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_60">
				<id>115</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_61">
				<id>116</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_62">
				<id>117</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_63">
				<id>118</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_64">
				<id>119</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_65">
				<id>120</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_66">
				<id>121</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_67">
				<id>122</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_68">
				<id>123</id>
				<edge_type>1</edge_type>
				<source_obj>12</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_69">
				<id>124</id>
				<edge_type>1</edge_type>
				<source_obj>13</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_70">
				<id>125</id>
				<edge_type>1</edge_type>
				<source_obj>14</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_71">
				<id>126</id>
				<edge_type>1</edge_type>
				<source_obj>15</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_72">
				<id>127</id>
				<edge_type>1</edge_type>
				<source_obj>16</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_73">
				<id>128</id>
				<edge_type>1</edge_type>
				<source_obj>17</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_74">
				<id>129</id>
				<edge_type>1</edge_type>
				<source_obj>18</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_75">
				<id>130</id>
				<edge_type>1</edge_type>
				<source_obj>19</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_76">
				<id>131</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_77">
				<id>132</id>
				<edge_type>1</edge_type>
				<source_obj>21</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_78">
				<id>133</id>
				<edge_type>1</edge_type>
				<source_obj>22</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_79">
				<id>134</id>
				<edge_type>1</edge_type>
				<source_obj>23</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_80">
				<id>135</id>
				<edge_type>1</edge_type>
				<source_obj>24</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_81">
				<id>136</id>
				<edge_type>1</edge_type>
				<source_obj>25</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_82">
				<id>137</id>
				<edge_type>1</edge_type>
				<source_obj>26</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_83">
				<id>138</id>
				<edge_type>1</edge_type>
				<source_obj>27</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_84">
				<id>139</id>
				<edge_type>1</edge_type>
				<source_obj>28</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_85">
				<id>140</id>
				<edge_type>1</edge_type>
				<source_obj>29</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_86">
				<id>141</id>
				<edge_type>1</edge_type>
				<source_obj>30</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_87">
				<id>142</id>
				<edge_type>1</edge_type>
				<source_obj>31</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_88">
				<id>143</id>
				<edge_type>1</edge_type>
				<source_obj>32</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_89">
				<id>144</id>
				<edge_type>1</edge_type>
				<source_obj>33</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_90">
				<id>145</id>
				<edge_type>1</edge_type>
				<source_obj>34</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_91">
				<id>146</id>
				<edge_type>1</edge_type>
				<source_obj>35</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_92">
				<id>147</id>
				<edge_type>1</edge_type>
				<source_obj>36</source_obj>
				<sink_obj>69</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_93">
				<id>148</id>
				<edge_type>1</edge_type>
				<source_obj>37</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_94">
				<id>149</id>
				<edge_type>1</edge_type>
				<source_obj>38</source_obj>
				<sink_obj>71</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_95">
				<id>431</id>
				<edge_type>4</edge_type>
				<source_obj>70</source_obj>
				<sink_obj>71</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_96">
				<id>432</id>
				<edge_type>4</edge_type>
				<source_obj>69</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_97">
				<id>433</id>
				<edge_type>4</edge_type>
				<source_obj>70</source_obj>
				<sink_obj>71</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_98">
				<id>434</id>
				<edge_type>4</edge_type>
				<source_obj>69</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_99">
				<id>435</id>
				<edge_type>4</edge_type>
				<source_obj>68</source_obj>
				<sink_obj>69</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_100">
				<id>436</id>
				<edge_type>4</edge_type>
				<source_obj>67</source_obj>
				<sink_obj>68</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_101">
				<id>437</id>
				<edge_type>4</edge_type>
				<source_obj>66</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_102">
				<id>438</id>
				<edge_type>4</edge_type>
				<source_obj>65</source_obj>
				<sink_obj>66</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_103">
				<id>439</id>
				<edge_type>4</edge_type>
				<source_obj>64</source_obj>
				<sink_obj>65</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_104">
				<id>440</id>
				<edge_type>4</edge_type>
				<source_obj>64</source_obj>
				<sink_obj>65</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_105">
				<id>441</id>
				<edge_type>4</edge_type>
				<source_obj>65</source_obj>
				<sink_obj>66</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_106">
				<id>442</id>
				<edge_type>4</edge_type>
				<source_obj>66</source_obj>
				<sink_obj>67</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_107">
				<id>443</id>
				<edge_type>4</edge_type>
				<source_obj>67</source_obj>
				<sink_obj>68</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_108">
				<id>444</id>
				<edge_type>4</edge_type>
				<source_obj>68</source_obj>
				<sink_obj>69</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_109">
				<id>445</id>
				<edge_type>4</edge_type>
				<source_obj>69</source_obj>
				<sink_obj>70</sink_obj>
			</item>
			<item class_id_reference="20" object_id="_110">
				<id>446</id>
				<edge_type>4</edge_type>
				<source_obj>70</source_obj>
				<sink_obj>71</sink_obj>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="21" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="22" tracking_level="1" version="0" object_id="_111">
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
				<item>73</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>70532</mMinLatency>
			<mMaxLatency>-1</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="23" tracking_level="1" version="0" object_id="_112">
				<port_list class_id="24" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="25" tracking_level="0" version="0">
					<count>8</count>
					<item_version>0</item_version>
					<item class_id="26" tracking_level="1" version="0" object_id="_113">
						<type>0</type>
						<name>Loop_1_proc137_U0</name>
						<ssdmobj_id>64</ssdmobj_id>
						<pins class_id="27" tracking_level="0" version="0">
							<count>2</count>
							<item_version>0</item_version>
							<item class_id="28" tracking_level="1" version="0" object_id="_114">
								<port class_id="29" tracking_level="1" version="0" object_id="_115">
									<name>image_in_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id="30" tracking_level="1" version="0" object_id="_116">
									<type>0</type>
									<name>Loop_1_proc137_U0</name>
									<ssdmobj_id>64</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_117">
								<port class_id_reference="29" object_id="_118">
									<name>image_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_116"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_119">
						<type>0</type>
						<name>conv_layer1_U0</name>
						<ssdmobj_id>65</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_120">
								<port class_id_reference="29" object_id="_121">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_122">
									<type>0</type>
									<name>conv_layer1_U0</name>
									<ssdmobj_id>65</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_123">
								<port class_id_reference="29" object_id="_124">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_122"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_125">
						<type>0</type>
						<name>pool_layer1_U0</name>
						<ssdmobj_id>66</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_126">
								<port class_id_reference="29" object_id="_127">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_128">
									<type>0</type>
									<name>pool_layer1_U0</name>
									<ssdmobj_id>66</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_129">
								<port class_id_reference="29" object_id="_130">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_128"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_131">
						<type>0</type>
						<name>conv_layer2_U0</name>
						<ssdmobj_id>67</ssdmobj_id>
						<pins>
							<count>35</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_132">
								<port class_id_reference="29" object_id="_133">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_134">
									<type>0</type>
									<name>conv_layer2_U0</name>
									<ssdmobj_id>67</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_135">
								<port class_id_reference="29" object_id="_136">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_137">
								<port class_id_reference="29" object_id="_138">
									<name>conv_layer2_weights_63</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_139">
								<port class_id_reference="29" object_id="_140">
									<name>conv_layer2_weights_61</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_141">
								<port class_id_reference="29" object_id="_142">
									<name>conv_layer2_weights_59</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_143">
								<port class_id_reference="29" object_id="_144">
									<name>conv_layer2_weights_57</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_145">
								<port class_id_reference="29" object_id="_146">
									<name>conv_layer2_weights_55</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_147">
								<port class_id_reference="29" object_id="_148">
									<name>conv_layer2_weights_53</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_149">
								<port class_id_reference="29" object_id="_150">
									<name>conv_layer2_weights_51</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_151">
								<port class_id_reference="29" object_id="_152">
									<name>conv_layer2_weights_49</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_153">
								<port class_id_reference="29" object_id="_154">
									<name>conv_layer2_weights_47</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_155">
								<port class_id_reference="29" object_id="_156">
									<name>conv_layer2_weights_45</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_157">
								<port class_id_reference="29" object_id="_158">
									<name>conv_layer2_weights_43</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_159">
								<port class_id_reference="29" object_id="_160">
									<name>conv_layer2_weights_41</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_161">
								<port class_id_reference="29" object_id="_162">
									<name>conv_layer2_weights_39</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_163">
								<port class_id_reference="29" object_id="_164">
									<name>conv_layer2_weights_37</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_165">
								<port class_id_reference="29" object_id="_166">
									<name>conv_layer2_weights_35</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_167">
								<port class_id_reference="29" object_id="_168">
									<name>conv_layer2_weights_33</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_169">
								<port class_id_reference="29" object_id="_170">
									<name>conv_layer2_weights_31</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_171">
								<port class_id_reference="29" object_id="_172">
									<name>conv_layer2_weights_29</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_173">
								<port class_id_reference="29" object_id="_174">
									<name>conv_layer2_weights_27</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_175">
								<port class_id_reference="29" object_id="_176">
									<name>conv_layer2_weights_25</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_177">
								<port class_id_reference="29" object_id="_178">
									<name>conv_layer2_weights_23</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_179">
								<port class_id_reference="29" object_id="_180">
									<name>conv_layer2_weights_21</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_181">
								<port class_id_reference="29" object_id="_182">
									<name>conv_layer2_weights_19</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_183">
								<port class_id_reference="29" object_id="_184">
									<name>conv_layer2_weights_17</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_185">
								<port class_id_reference="29" object_id="_186">
									<name>conv_layer2_weights_15</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_187">
								<port class_id_reference="29" object_id="_188">
									<name>conv_layer2_weights_13</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_189">
								<port class_id_reference="29" object_id="_190">
									<name>conv_layer2_weights_11</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_191">
								<port class_id_reference="29" object_id="_192">
									<name>conv_layer2_weights_9</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_193">
								<port class_id_reference="29" object_id="_194">
									<name>conv_layer2_weights_7</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_195">
								<port class_id_reference="29" object_id="_196">
									<name>conv_layer2_weights_5</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_197">
								<port class_id_reference="29" object_id="_198">
									<name>conv_layer2_weights_3</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_199">
								<port class_id_reference="29" object_id="_200">
									<name>conv_layer2_weights_1</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
							<item class_id_reference="28" object_id="_201">
								<port class_id_reference="29" object_id="_202">
									<name>conv_layer2_bias_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_134"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_203">
						<type>0</type>
						<name>pool_layer2_U0</name>
						<ssdmobj_id>68</ssdmobj_id>
						<pins>
							<count>2</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_204">
								<port class_id_reference="29" object_id="_205">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_206">
									<type>0</type>
									<name>pool_layer2_U0</name>
									<ssdmobj_id>68</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_207">
								<port class_id_reference="29" object_id="_208">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_206"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_209">
						<type>0</type>
						<name>fc_layer1_U0</name>
						<ssdmobj_id>69</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_210">
								<port class_id_reference="29" object_id="_211">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_212">
									<type>0</type>
									<name>fc_layer1_U0</name>
									<ssdmobj_id>69</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_213">
								<port class_id_reference="29" object_id="_214">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_212"></inst>
							</item>
							<item class_id_reference="28" object_id="_215">
								<port class_id_reference="29" object_id="_216">
									<name>fc_layer1_weights_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_212"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_217">
						<type>0</type>
						<name>fc_layer2_U0</name>
						<ssdmobj_id>70</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_218">
								<port class_id_reference="29" object_id="_219">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_220">
									<type>0</type>
									<name>fc_layer2_U0</name>
									<ssdmobj_id>70</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_221">
								<port class_id_reference="29" object_id="_222">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_220"></inst>
							</item>
							<item class_id_reference="28" object_id="_223">
								<port class_id_reference="29" object_id="_224">
									<name>fc_layer2_weights_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_220"></inst>
							</item>
						</pins>
					</item>
					<item class_id_reference="26" object_id="_225">
						<type>0</type>
						<name>fc_layer3_U0</name>
						<ssdmobj_id>71</ssdmobj_id>
						<pins>
							<count>3</count>
							<item_version>0</item_version>
							<item class_id_reference="28" object_id="_226">
								<port class_id_reference="29" object_id="_227">
									<name>out_V_V</name>
									<dir>0</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="30" object_id="_228">
									<type>0</type>
									<name>fc_layer3_U0</name>
									<ssdmobj_id>71</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="28" object_id="_229">
								<port class_id_reference="29" object_id="_230">
									<name>in_V_V</name>
									<dir>0</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_228"></inst>
							</item>
							<item class_id_reference="28" object_id="_231">
								<port class_id_reference="29" object_id="_232">
									<name>fc_layer3_weights_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="30" object_id_reference="_228"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="31" tracking_level="0" version="0">
					<count>7</count>
					<item_version>0</item_version>
					<item class_id="32" tracking_level="1" version="0" object_id="_233">
						<type>1</type>
						<name>image_in_V_V</name>
						<ssdmobj_id>61</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_234">
							<port class_id_reference="29" object_id="_235">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_116"></inst>
						</source>
						<sink class_id_reference="28" object_id="_236">
							<port class_id_reference="29" object_id="_237">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_122"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_238">
						<type>1</type>
						<name>conv1_out_V_V</name>
						<ssdmobj_id>43</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_239">
							<port class_id_reference="29" object_id="_240">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_122"></inst>
						</source>
						<sink class_id_reference="28" object_id="_241">
							<port class_id_reference="29" object_id="_242">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_128"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_243">
						<type>1</type>
						<name>pool1_out_V_V</name>
						<ssdmobj_id>49</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_244">
							<port class_id_reference="29" object_id="_245">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_128"></inst>
						</source>
						<sink class_id_reference="28" object_id="_246">
							<port class_id_reference="29" object_id="_247">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_248">
						<type>1</type>
						<name>conv2_out_V_V</name>
						<ssdmobj_id>46</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_249">
							<port class_id_reference="29" object_id="_250">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_134"></inst>
						</source>
						<sink class_id_reference="28" object_id="_251">
							<port class_id_reference="29" object_id="_252">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_206"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_253">
						<type>1</type>
						<name>pool2_out_V_V</name>
						<ssdmobj_id>52</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_254">
							<port class_id_reference="29" object_id="_255">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_206"></inst>
						</source>
						<sink class_id_reference="28" object_id="_256">
							<port class_id_reference="29" object_id="_257">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_212"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_258">
						<type>1</type>
						<name>fc1_out_V_V</name>
						<ssdmobj_id>55</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_259">
							<port class_id_reference="29" object_id="_260">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_212"></inst>
						</source>
						<sink class_id_reference="28" object_id="_261">
							<port class_id_reference="29" object_id="_262">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_220"></inst>
						</sink>
					</item>
					<item class_id_reference="32" object_id="_263">
						<type>1</type>
						<name>fc2_out_V_V</name>
						<ssdmobj_id>58</ssdmobj_id>
						<ctype>0</ctype>
						<depth>1</depth>
						<bitwidth>16</bitwidth>
						<source class_id_reference="28" object_id="_264">
							<port class_id_reference="29" object_id="_265">
								<name>in</name>
								<dir>3</dir>
								<type>0</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_220"></inst>
						</source>
						<sink class_id_reference="28" object_id="_266">
							<port class_id_reference="29" object_id="_267">
								<name>out</name>
								<dir>3</dir>
								<type>1</type>
							</port>
							<inst class_id_reference="30" object_id_reference="_228"></inst>
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
			<first>43</first>
			<second class_id="38" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>46</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>49</first>
			<second>
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>52</first>
			<second>
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
				<second>1</second>
			</second>
		</item>
		<item>
			<first>65</first>
			<second>
				<first>2</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>66</first>
			<second>
				<first>4</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>67</first>
			<second>
				<first>6</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>68</first>
			<second>
				<first>8</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>69</first>
			<second>
				<first>10</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>70</first>
			<second>
				<first>12</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>71</first>
			<second>
				<first>14</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>72</first>
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
			<first>73</first>
			<second class_id="41" tracking_level="0" version="0">
				<first>0</first>
				<second>15</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="42" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="43" tracking_level="1" version="0" object_id="_268">
			<region_name>nnet</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>73</item>
			</basic_blocks>
			<nodes>
				<count>34</count>
				<item_version>0</item_version>
				<item>39</item>
				<item>40</item>
				<item>41</item>
				<item>42</item>
				<item>43</item>
				<item>44</item>
				<item>45</item>
				<item>46</item>
				<item>47</item>
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

