#include "headers/defines.h"
#include "headers/activations.h"


void conv(float output[A_SIZE * A_SIZE * A_CHANNELS], float image[IMAGE_SIZE *IMAGE_SIZE * IMAGE_CHANNELS], float weight[CONV_KERNEL_SIZE][CONV_KERNEL_SIZE][CONV_CHANNELS][CONV_FILTERS], float bias[CONV_BIAS_SIZE])
{
	int i,j,k,filter, index = 0;
	float sum;
	int row_offset, col_offset, channel_offset;

	// for each filter


	
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
							sum += image[((i + row_offset)* CONV_KERNEL_SIZE * CONV_CHANNELS) + ((j + col_offset) * CONV_CHANNELS) + channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[index++] = relu(sum + bias[filter]);
			}
}
