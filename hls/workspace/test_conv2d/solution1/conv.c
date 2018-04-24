
#include <stdio.h>
#include "/home/sergiu/git/lic/hls/workspace/test_conv2d/headers/weights.h"
#include "/home/sergiu/git/lic/hls/workspace/test_conv2d/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/test_conv2d/headers/activations.h"


void conv_layer1(float output[A1_SIZE][A1_SIZE][A1_CHANNELS], float image[IMAGE_SIZE][IMAGE_SIZE][IMAGE_CHANNELS], float weight[CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS][CONV1_FILTERS], float bias[CONV1_BIAS_SIZE])
{
	int i,j,k,filter;
	float sum;
	int row_offset, col_offset, channel_offset;

	// for each filter


	for(filter = 0; filter < CONV1_FILTERS; filter++)
	{
		// Pin point the the top left corner matrix that is TBC
		for(i = 0; i < (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1); i += CONV1_STRIDE)
			for(j = 0; j < (IMAGE_SIZE - CONV1_KERNEL_SIZE + 1); j += CONV1_STRIDE)
			{
				//Start the convolution using the determined i & j
				sum = 0;
				for(row_offset = 0; row_offset <CONV1_KERNEL_SIZE; row_offset++)

					for(col_offset = 0; col_offset <CONV1_KERNEL_SIZE; col_offset++)
						for(channel_offset = 0; channel_offset < CONV1_CHANNELS; channel_offset++)
							sum += image[i + row_offset][j + col_offset][channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[i/CONV1_STRIDE][j/CONV1_STRIDE][filter] = relu(sum + bias[filter]);
			}
	}
}

void conv_layer2(float output[A2_SIZE][A2_SIZE][A2_CHANNELS], float image[P1_SIZE][P1_SIZE][P1_CHANNELS], float weight[CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS][CONV2_FILTERS], float bias[CONV2_BIAS_SIZE])
{
	int i,j,k,filter;
	float sum;
	int row_offset, col_offset, channel_offset;

	// for each filter


	for(filter = 0; filter < CONV2_FILTERS; filter++)
	{
		// Pin point the the top left corner matrix that is TBC
		for(i = 0; i < (P1_SIZE - CONV2_KERNEL_SIZE + 1); i += CONV2_STRIDE)
			for(j = 0; j < (P1_SIZE - CONV2_KERNEL_SIZE + 1); j += CONV2_STRIDE)
			{
				//Start the convolution using the determined i & j
				sum = 0;
				for(row_offset = 0; row_offset <CONV2_KERNEL_SIZE; row_offset++)

					for(col_offset = 0; col_offset <CONV2_KERNEL_SIZE; col_offset++)
						for(channel_offset = 0; channel_offset < CONV2_CHANNELS; channel_offset++)
							sum += image[i + row_offset][j + col_offset][channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[i/CONV2_STRIDE][j/CONV2_STRIDE][filter] = relu(sum + bias[filter]);
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
	int h = 13, w = 13, c = 16;
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
