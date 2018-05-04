<?xml version="1.0" encoding="UTF-8" standalone="yes" ?>
<!DOCTYPE boost_serialization>
<boost_serialization signature="serialization::archive" version="15">
<syndb class_id="0" tracking_level="0" version="0">
	<userIPLatency>-1</userIPLatency>
	<userIPName></userIPName>
	<cdfg class_id="1" tracking_level="1" version="0" object_id="_0">
		<name>dataflow_in_loop_con</name>
		<ret_bitwidth>0</ret_bitwidth>
		<ports class_id="2" tracking_level="0" version="0">
			<count>2</count>
			<item_version>0</item_version>
			<item class_id="3" tracking_level="1" version="0" object_id="_1">
				<Value class_id="4" tracking_level="0" version="0">
					<Obj class_id="5" tracking_level="0" version="0">
						<type>1</type>
						<id>1</id>
						<name>filter_0_i_i</name>
						<fileName></fileName>
						<fileDirectory></fileDirectory>
						<lineNumber>0</lineNumber>
						<contextFuncName></contextFuncName>
						<inlineStackInfo class_id="6" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</inlineStackInfo>
						<originalName></originalName>
						<rtlName></rtlName>
						<coreName></coreName>
					</Obj>
					<bitwidth>4</bitwidth>
				</Value>
				<direction>0</direction>
				<if_type>0</if_type>
				<array_size>0</array_size>
				<bit_vecs class_id="7" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
			<item class_id_reference="3" object_id="_2">
				<Value>
					<Obj>
						<type>1</type>
						<id>2</id>
						<name>output_V</name>
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
						<coreName>RAM</coreName>
					</Obj>
					<bitwidth>24</bitwidth>
				</Value>
				<direction>1</direction>
				<if_type>1</if_type>
				<array_size>6728</array_size>
				<bit_vecs>
					<count>0</count>
					<item_version>0</item_version>
				</bit_vecs>
			</item>
		</ports>
		<nodes class_id="8" tracking_level="0" version="0">
			<count>3</count>
			<item_version>0</item_version>
			<item class_id="9" tracking_level="1" version="0" object_id="_3">
				<Value>
					<Obj>
						<type>0</type>
						<id>22</id>
						<name>filter_0_i_i_read</name>
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
					<bitwidth>4</bitwidth>
				</Value>
				<oprand_edges>
					<count>2</count>
					<item_version>0</item_version>
					<item>27</item>
					<item>28</item>
				</oprand_edges>
				<opcode>read</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_4">
				<Value>
					<Obj>
						<type>0</type>
						<id>23</id>
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
					<count>21</count>
					<item_version>0</item_version>
					<item>30</item>
					<item>31</item>
					<item>32</item>
					<item>33</item>
					<item>34</item>
					<item>35</item>
					<item>36</item>
					<item>37</item>
					<item>38</item>
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
				</oprand_edges>
				<opcode>call</opcode>
				<m_Display>0</m_Display>
			</item>
			<item class_id_reference="9" object_id="_5">
				<Value>
					<Obj>
						<type>0</type>
						<id>24</id>
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
					<count>0</count>
					<item_version>0</item_version>
				</oprand_edges>
				<opcode>ret</opcode>
				<m_Display>0</m_Display>
			</item>
		</nodes>
		<consts class_id="11" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="12" tracking_level="1" version="0" object_id="_6">
				<Value>
					<Obj>
						<type>2</type>
						<id>29</id>
						<name>conv_layer1_label8_p</name>
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
				<content>&lt;constant:conv_layer1_label8_p&gt;</content>
			</item>
		</consts>
		<blocks class_id="13" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="14" tracking_level="1" version="0" object_id="_7">
				<Obj>
					<type>3</type>
					<id>25</id>
					<name>dataflow_in_loop_con</name>
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
					<count>3</count>
					<item_version>0</item_version>
					<item>22</item>
					<item>23</item>
					<item>24</item>
				</node_objs>
			</item>
		</blocks>
		<edges class_id="15" tracking_level="0" version="0">
			<count>22</count>
			<item_version>0</item_version>
			<item class_id="16" tracking_level="1" version="0" object_id="_8">
				<id>28</id>
				<edge_type>1</edge_type>
				<source_obj>1</source_obj>
				<sink_obj>22</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_9">
				<id>30</id>
				<edge_type>1</edge_type>
				<source_obj>29</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_10">
				<id>31</id>
				<edge_type>1</edge_type>
				<source_obj>22</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_11">
				<id>32</id>
				<edge_type>1</edge_type>
				<source_obj>2</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_12">
				<id>33</id>
				<edge_type>1</edge_type>
				<source_obj>3</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_13">
				<id>34</id>
				<edge_type>1</edge_type>
				<source_obj>4</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_14">
				<id>35</id>
				<edge_type>1</edge_type>
				<source_obj>5</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_15">
				<id>36</id>
				<edge_type>1</edge_type>
				<source_obj>6</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_16">
				<id>37</id>
				<edge_type>1</edge_type>
				<source_obj>7</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_17">
				<id>38</id>
				<edge_type>1</edge_type>
				<source_obj>8</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_18">
				<id>39</id>
				<edge_type>1</edge_type>
				<source_obj>9</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_19">
				<id>40</id>
				<edge_type>1</edge_type>
				<source_obj>10</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_20">
				<id>41</id>
				<edge_type>1</edge_type>
				<source_obj>11</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_21">
				<id>42</id>
				<edge_type>1</edge_type>
				<source_obj>12</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_22">
				<id>43</id>
				<edge_type>1</edge_type>
				<source_obj>13</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_23">
				<id>44</id>
				<edge_type>1</edge_type>
				<source_obj>14</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_24">
				<id>45</id>
				<edge_type>1</edge_type>
				<source_obj>15</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_25">
				<id>46</id>
				<edge_type>1</edge_type>
				<source_obj>16</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_26">
				<id>47</id>
				<edge_type>1</edge_type>
				<source_obj>17</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_27">
				<id>48</id>
				<edge_type>1</edge_type>
				<source_obj>18</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_28">
				<id>49</id>
				<edge_type>1</edge_type>
				<source_obj>19</source_obj>
				<sink_obj>23</sink_obj>
			</item>
			<item class_id_reference="16" object_id="_29">
				<id>50</id>
				<edge_type>1</edge_type>
				<source_obj>20</source_obj>
				<sink_obj>23</sink_obj>
			</item>
		</edges>
	</cdfg>
	<cdfg_regions class_id="17" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="18" tracking_level="1" version="0" object_id="_30">
			<mId>1</mId>
			<mTag>dataflow_in_loop_con</mTag>
			<mType>0</mType>
			<sub_regions>
				<count>0</count>
				<item_version>0</item_version>
			</sub_regions>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>25</item>
			</basic_blocks>
			<mII>-1</mII>
			<mDepth>-1</mDepth>
			<mMinTripCount>-1</mMinTripCount>
			<mMaxTripCount>-1</mMaxTripCount>
			<mMinLatency>854</mMinLatency>
			<mMaxLatency>-1</mMaxLatency>
			<mIsDfPipe>1</mIsDfPipe>
			<mDfPipe class_id="19" tracking_level="1" version="0" object_id="_31">
				<port_list class_id="20" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</port_list>
				<process_list class_id="21" tracking_level="0" version="0">
					<count>1</count>
					<item_version>0</item_version>
					<item class_id="22" tracking_level="1" version="0" object_id="_32">
						<type>0</type>
						<name>conv_layer1_label8_p_U0</name>
						<ssdmobj_id>23</ssdmobj_id>
						<pins class_id="23" tracking_level="0" version="0">
							<count>20</count>
							<item_version>0</item_version>
							<item class_id="24" tracking_level="1" version="0" object_id="_33">
								<port class_id="25" tracking_level="1" version="0" object_id="_34">
									<name>filter_0_i_i</name>
									<dir>3</dir>
									<type>0</type>
								</port>
								<inst class_id="26" tracking_level="1" version="0" object_id="_35">
									<type>0</type>
									<name>conv_layer1_label8_p_U0</name>
									<ssdmobj_id>23</ssdmobj_id>
								</inst>
							</item>
							<item class_id_reference="24" object_id="_36">
								<port class_id_reference="25" object_id="_37">
									<name>output_V</name>
									<dir>2</dir>
									<type>1</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_38">
								<port class_id_reference="25" object_id="_39">
									<name>conv_layer1_weights_31</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_40">
								<port class_id_reference="25" object_id="_41">
									<name>conv_layer1_weights_29</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_42">
								<port class_id_reference="25" object_id="_43">
									<name>conv_layer1_weights_27</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_44">
								<port class_id_reference="25" object_id="_45">
									<name>conv_layer1_weights_25</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_46">
								<port class_id_reference="25" object_id="_47">
									<name>conv_layer1_weights_23</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_48">
								<port class_id_reference="25" object_id="_49">
									<name>conv_layer1_weights_21</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_50">
								<port class_id_reference="25" object_id="_51">
									<name>conv_layer1_weights_19</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_52">
								<port class_id_reference="25" object_id="_53">
									<name>conv_layer1_weights_17</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_54">
								<port class_id_reference="25" object_id="_55">
									<name>conv_layer1_weights_15</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_56">
								<port class_id_reference="25" object_id="_57">
									<name>conv_layer1_weights_13</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_58">
								<port class_id_reference="25" object_id="_59">
									<name>conv_layer1_weights_11</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_60">
								<port class_id_reference="25" object_id="_61">
									<name>conv_layer1_weights_9</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_62">
								<port class_id_reference="25" object_id="_63">
									<name>conv_layer1_weights_7</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_64">
								<port class_id_reference="25" object_id="_65">
									<name>conv_layer1_weights_5</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_66">
								<port class_id_reference="25" object_id="_67">
									<name>conv_layer1_weights_3</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_68">
								<port class_id_reference="25" object_id="_69">
									<name>conv_layer1_weights_1</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_70">
								<port class_id_reference="25" object_id="_71">
									<name>conv_layer1_bias_V</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
							<item class_id_reference="24" object_id="_72">
								<port class_id_reference="25" object_id="_73">
									<name>image_V_0</name>
									<dir>2</dir>
									<type>0</type>
								</port>
								<inst class_id_reference="26" object_id_reference="_35"></inst>
							</item>
						</pins>
					</item>
				</process_list>
				<channel_list class_id="27" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</channel_list>
				<net_list class_id="28" tracking_level="0" version="0">
					<count>0</count>
					<item_version>0</item_version>
				</net_list>
			</mDfPipe>
		</item>
	</cdfg_regions>
	<fsm class_id="29" tracking_level="1" version="0" object_id="_74">
		<states class_id="30" tracking_level="0" version="0">
			<count>2</count>
			<item_version>0</item_version>
			<item class_id="31" tracking_level="1" version="0" object_id="_75">
				<id>1</id>
				<operations class_id="32" tracking_level="0" version="0">
					<count>2</count>
					<item_version>0</item_version>
					<item class_id="33" tracking_level="1" version="0" object_id="_76">
						<id>22</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="33" object_id="_77">
						<id>23</id>
						<stage>2</stage>
						<latency>2</latency>
					</item>
				</operations>
			</item>
			<item class_id_reference="31" object_id="_78">
				<id>2</id>
				<operations>
					<count>3</count>
					<item_version>0</item_version>
					<item class_id_reference="33" object_id="_79">
						<id>21</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
					<item class_id_reference="33" object_id="_80">
						<id>23</id>
						<stage>1</stage>
						<latency>2</latency>
					</item>
					<item class_id_reference="33" object_id="_81">
						<id>24</id>
						<stage>1</stage>
						<latency>1</latency>
					</item>
				</operations>
			</item>
		</states>
		<transitions class_id="34" tracking_level="0" version="0">
			<count>1</count>
			<item_version>0</item_version>
			<item class_id="35" tracking_level="1" version="0" object_id="_82">
				<inState>1</inState>
				<outState>2</outState>
				<condition class_id="36" tracking_level="0" version="0">
					<id>0</id>
					<sop class_id="37" tracking_level="0" version="0">
						<count>1</count>
						<item_version>0</item_version>
						<item class_id="38" tracking_level="0" version="0">
							<count>0</count>
							<item_version>0</item_version>
						</item>
					</sop>
				</condition>
			</item>
		</transitions>
	</fsm>
	<res class_id="-1"></res>
	<node_label_latency class_id="40" tracking_level="0" version="0">
		<count>3</count>
		<item_version>0</item_version>
		<item class_id="41" tracking_level="0" version="0">
			<first>22</first>
			<second class_id="42" tracking_level="0" version="0">
				<first>0</first>
				<second>0</second>
			</second>
		</item>
		<item>
			<first>23</first>
			<second>
				<first>0</first>
				<second>1</second>
			</second>
		</item>
		<item>
			<first>24</first>
			<second>
				<first>1</first>
				<second>0</second>
			</second>
		</item>
	</node_label_latency>
	<bblk_ent_exit class_id="43" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="44" tracking_level="0" version="0">
			<first>25</first>
			<second class_id="45" tracking_level="0" version="0">
				<first>0</first>
				<second>1</second>
			</second>
		</item>
	</bblk_ent_exit>
	<regions class_id="46" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="47" tracking_level="1" version="0" object_id="_83">
			<region_name>dataflow_in_loop_con</region_name>
			<basic_blocks>
				<count>1</count>
				<item_version>0</item_version>
				<item>25</item>
			</basic_blocks>
			<nodes>
				<count>4</count>
				<item_version>0</item_version>
				<item>21</item>
				<item>22</item>
				<item>23</item>
				<item>24</item>
			</nodes>
			<anchor_node>-1</anchor_node>
			<region_type>16</region_type>
			<interval>0</interval>
			<pipe_depth>0</pipe_depth>
		</item>
	</regions>
	<dp_fu_nodes class_id="48" tracking_level="0" version="0">
		<count>2</count>
		<item_version>0</item_version>
		<item class_id="49" tracking_level="0" version="0">
			<first>50</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>22</item>
			</second>
		</item>
		<item>
			<first>56</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>23</item>
				<item>23</item>
			</second>
		</item>
	</dp_fu_nodes>
	<dp_fu_nodes_expression class_id="51" tracking_level="0" version="0">
		<count>0</count>
		<item_version>0</item_version>
	</dp_fu_nodes_expression>
	<dp_fu_nodes_module>
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="52" tracking_level="0" version="0">
			<first>grp_conv_layer1_label8_p_fu_56</first>
			<second>
				<count>2</count>
				<item_version>0</item_version>
				<item>23</item>
				<item>23</item>
			</second>
		</item>
	</dp_fu_nodes_module>
	<dp_fu_nodes_io>
		<count>1</count>
		<item_version>0</item_version>
		<item>
			<first>filter_0_i_i_read_read_fu_50</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>22</item>
			</second>
		</item>
	</dp_fu_nodes_io>
	<return_ports>
		<count>0</count>
		<item_version>0</item_version>
	</return_ports>
	<dp_mem_port_nodes class_id="53" tracking_level="0" version="0">
		<count>18</count>
		<item_version>0</item_version>
		<item class_id="54" tracking_level="0" version="0">
			<first class_id="55" tracking_level="0" version="0">
				<first>conv_layer1_bias_V</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_1</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_11</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_13</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_15</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_17</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_19</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_21</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_23</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_25</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_27</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_29</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_3</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_31</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_5</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_7</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>conv_layer1_weights_9</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
		<item>
			<first>
				<first>image_V_0</first>
				<second>100</second>
			</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>23</item>
			</second>
		</item>
	</dp_mem_port_nodes>
	<dp_reg_nodes>
		<count>1</count>
		<item_version>0</item_version>
		<item>
			<first>100</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>22</item>
			</second>
		</item>
	</dp_reg_nodes>
	<dp_regname_nodes>
		<count>1</count>
		<item_version>0</item_version>
		<item>
			<first>filter_0_i_i_read_reg_100</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>22</item>
			</second>
		</item>
	</dp_regname_nodes>
	<dp_reg_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_reg_phi>
	<dp_regname_phi>
		<count>0</count>
		<item_version>0</item_version>
	</dp_regname_phi>
	<dp_port_io_nodes class_id="56" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="57" tracking_level="0" version="0">
			<first>filter_0_i_i</first>
			<second>
				<count>1</count>
				<item_version>0</item_version>
				<item>
					<first>read</first>
					<second>
						<count>1</count>
						<item_version>0</item_version>
						<item>22</item>
					</second>
				</item>
			</second>
		</item>
	</dp_port_io_nodes>
	<port2core class_id="58" tracking_level="0" version="0">
		<count>1</count>
		<item_version>0</item_version>
		<item class_id="59" tracking_level="0" version="0">
			<first>2</first>
			<second>RAM</second>
		</item>
	</port2core>
	<node2core>
		<count>0</count>
		<item_version>0</item_version>
	</node2core>
</syndb>
</boost_serialization>

