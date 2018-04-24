
#include <stdio.h>
#include <../../../headers/weights.h>
float relu(float a)
{
	return a > 0 ? a : 0;
}

void conv_layer1(float output[29][29][8], float image[32][32][1], float weight[4][4][1][8], float bias[8])
{
	int i,j,k,filter;
	float sum;
	int h = 32, w = 32, c = 1;
	int number_of_filters = 8, f = 4;
	int stride = 1;
	int row_offset, col_offset, channel_offset;

	// for each filter


	for(filter = 0; filter < number_of_filters; filter++)
	{
		// Pin point the the top left corner matrix that is TBC
		for(i = 0; i < (h - f + 1); i += stride)
			for(j = 0; j < (w - f + 1); j += stride)
			{
				//Start the convolution using the determined i & j
				sum = 0;
				for(row_offset = 0; row_offset <f; row_offset++)

					for(col_offset = 0; col_offset <f; col_offset++)
						for(channel_offset = 0; channel_offset < c; channel_offset++)
							sum += image[i + row_offset][j + col_offset][channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[i/stride][j/stride][filter] = relu(sum + bias[filter]);
			}
	}
}

void conv_layer2(float output[13][13][16], float image[14][14][8], float weight[2][2][8][16], float bias[16])
{
	int i,j,k,filter;
	float sum;
	int h = 14, w = 14, c = 8;
	int number_of_filters = 16, f = 2;
	int stride = 1;
	int row_offset, col_offset, channel_offset;

	// for each filter


	for(filter = 0; filter < number_of_filters; filter++)
	{
		// Pin point the the top left corner matrix that is TBC
		for(i = 0; i < (h - f + 1); i += stride)
			for(j = 0; j < (w - f + 1); j += stride)
			{
				//Start the convolution using the determined i & j
				sum = 0;
				for(row_offset = 0; row_offset <f; row_offset++)

					for(col_offset = 0; col_offset <f; col_offset++)
						for(channel_offset = 0; channel_offset < c; channel_offset++)
							sum += image[i + row_offset][j + col_offset][channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[i/stride][j/stride][filter] = relu(sum + bias[filter]);
			}
	}
}

void pool_layer1(float output[14][14][8], float image[29][29][8])
{

	float max;
	int stride = 2;
	int f = 2;
	int h = 29, w = 29, c = 8;
	for(int channel = 0; channel < c; channel++)
		for(int i = 0; i < w -f + 1; i += stride)
			for(int j = 0; j < h - f + 1; j += stride)
			{
				max = image[i][j][channel];
				for(int k = 0; k < f; k++)
					for(int l = 0; l <  f; l++)
						max = image[k + i][l + j][channel] > max ? image[k + i][l + j][channel] : max;
				output[i/stride][j/stride][channel] = max;
			}

}

void pool_layer2(float output[6][6][16], float image[13][13][16])
{

	float max;
	int stride = 2;
	int f = 2;
	int h = 6, w = 6, c = 16;
	for(int channel = 0; channel < c; channel++)
		for(int i = 0; i < w -f + 1; i += stride)
			for(int j = 0; j < h - f + 1; j += stride)
			{
				max = image[i][j][channel];
				for(int k = 0; k < f; k++)
					for(int l = 0; l < f; l++)
						max = image[k + i][l + j][channel] > max ? image[k + i][l + j][channel] : max;
			output[i/stride][j/stride][channel] = max;
			}

}

void flatten(float* output, float input[6][6][16])
{
	int input_hight = 6, input_width = 6, number_of_channels = 16;
    int i,j,k;
		for(i = 0; i < input_hight; i++)
			for(j = 0; j < input_width; j++)
                for(k = 0; k < number_of_channels;k++)
                    output[i * input_width * number_of_channels + j * number_of_channels + k] = input[i][j][k];
}

void fc_layer1(float output[120], float input[576], float weight[576][120], float bias[120])
{

	int output_size =120,  input_size = 576;
	for(int i = 0; i < output_size; i++)
	{
		output[i] = 0;
		for(int j = 0; j < input_size; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}

void fc_layer2(float output[84], float input[120], float weight[120][84], float bias[84])
{

	int output_size = 84,  input_size = 120;
	for(int i = 0; i < output_size; i++)
	{
		output[i] = 0;
		for(int j = 0; j < input_size; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}

void fc_layer3(float output[10], float input[84], float weight[84][10], float bias[10])
{

	int output_size = 10,  input_size = 84;
	for(int i = 0; i < output_size; i++)
	{
		output[i] = 0;
		for(int j = 0; j < input_size; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}

void nnet(float conv_layer1_out[29][29][8], float conv_layer2_out[13][13][16], float pool_layer1_out[14][14][8], float pool_layer2_out[6][6][16], float flatten_out[576], float fc_layer1_out[120], float fc_layer2_out[84], float fc_layer3_out[10])
{

	conv_layer1(conv_layer1_out, image, conv_layer1_weights, conv_layer1_bias);
	pool_layer1(pool_layer1_out, conv_layer1_out);


	conv_layer2(conv_layer2_out, pool_layer1_out, conv_layer2_weights, conv_layer2_bias);
	pool_layer2(pool_layer2_out, conv_layer2_out);

	flatten(flatten_out, pool_layer2_out);

	fc_layer1(fc_layer1_out, flatten_out, fc_layer1_weights, fc_layer1_bias);
	fc_layer2(fc_layer2_out, fc_layer1_out, fc_layer2_weights, fc_layer2_bias);
	fc_layer3(fc_layer3_out, fc_layer2_out, fc_layer3_weights, fc_layer3_bias);
}
