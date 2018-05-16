#include <stdio.h>
#include <stdlib.h>
#include "headers/defines.h"
#include "headers/weights.h"

#define eps 0.00002

#include "headers/activations.h"


void conv(float output[A_SIZE * A_SIZE * A_CHANNELS], float image[IMAGE_SIZE * IMAGE_SIZE * IMAGE_CHANNELS], float weight[CONV_KERNEL_SIZE][CONV_KERNEL_SIZE][CONV_CHANNELS][CONV_FILTERS], float bias[CONV_BIAS_SIZE])
{
	int i,j,k,filter, contor = 0;
	float sum;
	int row_offset, col_offset, channel_offset;

	// Pin point the the top left corner matrix that is TBC
	for(i = 0; i < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1); i += CONV_STRIDE)
		for(j = 0; j < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1); j += CONV_STRIDE)
			for(filter = 0; filter < CONV_FILTERS; filter++)
			{
				//Start the convolution using the determined i & j
				sum = 0;
				for(row_offset = 0; row_offset <CONV_KERNEL_SIZE; row_offset++)

					for(col_offset = 0; col_offset <CONV_KERNEL_SIZE; col_offset++)
						for(channel_offset = 0; channel_offset < CONV_CHANNELS; channel_offset++)
							sum += image[(i + row_offset)*IMAGE_SIZE * IMAGE_CHANNELS + (j + col_offset) * IMAGE_CHANNELS + channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[contor++] = relu(sum + bias[filter]);
			}
	
}

int main()
{
	float conv_out[A_SIZE * A_SIZE * A_CHANNELS];
	float conv_ref[A_SIZE][A_SIZE][A_CHANNELS];

	int i,j,k;

	conv(conv_out,image, conv_weights, conv_bias);

	FILE* conv_content = fopen("debug/conv_py.out","r");
		    if(conv_content == NULL)
		    {
		        printf("Couldn't open ../../../debug/conv_py.out");
		        exit(1);
		    }

	for(k = 0; k < A_CHANNELS; k++)
		for(i = 0; i < A_SIZE; i++)
			for(j = 0; j < A_SIZE; j++)
				fscanf(conv_content,"%f",&conv_ref[i][j][k]);
	int correct_values = 0, total_values = 0;

	printf("Checking CONV Layer ...\n");

	for(k = 0; k < A_CHANNELS; k++)
		for(i = 0; i < A_SIZE; i++)
			for(j = 0; j < A_SIZE; j++)
			{
				total_values++;
				if(conv_out[i* A_SIZE* A_CHANNELS + j*A_CHANNELS + k] - conv_ref[i][j][k] > eps || conv_ref[i][j][k] - conv_out[i* A_SIZE* A_CHANNELS + j*A_CHANNELS + k] > eps)
				{
					if(correct_values + 1 == total_values)
						printf("Missmatch in CONV1 check\n");
				}
				else
					correct_values++;
			}
	printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

	return 0;
}
