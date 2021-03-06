#include "/home/sergiu/git/lic/hls/workspace/nnet/headers/weights.h"
#include "/home/sergiu/git/lic/hls/workspace/nnet/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/nnet/headers/activations.h"
#include "ap_fixed.h"

#define WIDTH		24
#define INT_WIDTH	4

typedef ap_fixed<WIDTH, INT_WIDTH> float24_t;

void conv_layer1(float24_t output[A1_SIZE][A1_SIZE][A1_CHANNELS], float24_t image[IMAGE_SIZE][IMAGE_SIZE][IMAGE_CHANNELS], float24_t weight[CONV1_KERNEL_SIZE][CONV1_KERNEL_SIZE][CONV1_CHANNELS][CONV1_FILTERS], float24_t bias[CONV1_BIAS_SIZE])
{
	int i,j,k,filter;
	float24_t sum;
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

void conv_layer2(float24_t output[A2_SIZE][A2_SIZE][A2_CHANNELS], float24_t image[P1_SIZE][P1_SIZE][P1_CHANNELS], float24_t weight[CONV2_KERNEL_SIZE][CONV2_KERNEL_SIZE][CONV2_CHANNELS][CONV2_FILTERS], float24_t bias[CONV2_BIAS_SIZE])
{
	int i,j,k,filter;
	float24_t sum;
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

void pool_layer1(float24_t output[P1_SIZE][P1_SIZE][P1_CHANNELS], float24_t image[A1_SIZE][A1_SIZE][A1_CHANNELS])
{

	float24_t max;
	for(int channel = 0; channel < A1_CHANNELS; channel++)
		for(int i = 0; i < A1_SIZE -P1_KERNEL_SIZE + 1; i += P1_STRIDE)
			for(int j = 0; j < A1_SIZE - P1_KERNEL_SIZE + 1; j += P1_STRIDE)
			{
				max = image[i][j][channel];
				for(int k = 0; k < P1_KERNEL_SIZE; k++)
					for(int l = 0; l <  P1_KERNEL_SIZE; l++)
						max = image[k + i][l + j][channel] > max ? image[k + i][l + j][channel] : max;
				output[i/P1_STRIDE][j/P1_STRIDE][channel] = max;
			}

}

void pool_layer2(float24_t output[P2_SIZE][P2_SIZE][P2_CHANNELS], float24_t image[A2_SIZE][A2_SIZE][A2_CHANNELS])
{

	float24_t max;
	for(int channel = 0; channel < A2_CHANNELS; channel++)
		for(int i = 0; i < A2_SIZE -P2_KERNEL_SIZE + 1; i += P2_STRIDE)
			for(int j = 0; j < A2_SIZE - P2_KERNEL_SIZE + 1; j += P2_STRIDE)
			{
				max = image[i][j][channel];
				for(int k = 0; k < P2_KERNEL_SIZE; k++)
					for(int l = 0; l <  P2_KERNEL_SIZE; l++)
						max = image[k + i][l + j][channel] > max ? image[k + i][l + j][channel] : max;
				output[i/P2_STRIDE][j/P2_STRIDE][channel] = max;
			}

}

void flatten(float24_t output[FLATTEN_SIZE], float24_t input[P2_SIZE][P2_SIZE][P2_CHANNELS])
{

    int i,j,k;
		for(i = 0; i < P2_SIZE; i++)
			for(j = 0; j < P2_SIZE; j++)
                for(k = 0; k < P2_CHANNELS;k++)
                    output[i * P2_SIZE * P2_CHANNELS + j * P2_CHANNELS + k] = input[i][j][k];
}

void fc_layer1(float24_t output[FC1_ACT_SIZE], float24_t input[FLATTEN_SIZE], float24_t weight[FC1_WEIGHTS_H][FC1_WEIGHTS_W], float24_t bias[FC1_BIAS_SIZE])
{

	for(int i = 0; i < FC1_WEIGHTS_W; i++)
	{
		output[i] = 0;
		for(int j = 0; j < FC1_WEIGHTS_H; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}

void fc_layer2(float24_t output[FC2_ACT_SIZE], float24_t input[FC1_ACT_SIZE], float24_t weight[FC2_WEIGHTS_H][FC2_WEIGHTS_W], float24_t bias[FC2_BIAS_SIZE])
{

	for(int i = 0; i < FC2_WEIGHTS_W; i++)
	{
		output[i] = 0;
		for(int j = 0; j < FC2_WEIGHTS_H; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}

void fc_layer3(float24_t output[FC3_ACT_SIZE], float24_t input[FC2_ACT_SIZE], float24_t weight[FC3_WEIGHTS_H][FC3_WEIGHTS_W], float24_t bias[FC3_BIAS_SIZE])
{

	for(int i = 0; i < FC3_WEIGHTS_W; i++)
	{
		output[i] = 0;
		for(int j = 0; j < FC3_WEIGHTS_H; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}

void nnet(float24_t conv_layer1_out[A1_SIZE][A1_SIZE][A1_CHANNELS], float24_t conv_layer2_out[A2_SIZE][A2_SIZE][A2_CHANNELS], float24_t pool_layer1_out[P1_SIZE][P1_SIZE][P1_CHANNELS], float24_t pool_layer2_out[P2_SIZE][P2_SIZE][P2_CHANNELS], float24_t flatten_out[FLATTEN_SIZE], float24_t fc_layer1_out[FC1_ACT_SIZE], float24_t fc_layer2_out[FC2_ACT_SIZE], float24_t fc_layer3_out[FC3_ACT_SIZE])
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
