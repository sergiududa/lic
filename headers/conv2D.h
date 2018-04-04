#ifndef __CONV_H
#define __CONV_H

void conv2d(float*** output, float*** image, int h, int w, int c, float**** weight,int number_of_filters, int f, int stride, int padding,  float* bias, float (*activation_function)(float))
{
/***
	Image format:			image[h][w][c];
	Output format:			outout[(h-f)/stride + 1][(2-f)/stride + 1][number_of_filters]
	Filter format:			weight[f][f][c][number_of_filters];
	bias format: 			bias[numer_of_filters]
	Padding:				1 -> SAME convolution; 0 -> VALID convolution ** For the moment just valid convs**
	Activation function: 	function from activations.h

*/

/**
	TODO: Padding for SAME and VALID convolutions
		  Check for CONV optimizations 
		  		- SUGGESTION: optimize for own case stride = 1
*/

	int i,j,k,filter;
	float sum;

	// for each filter 
	for(filter = 0; filter < number_of_filters; filter++)
	{
		// Pin point the the top left corner matrix that is TBC
		for(i = 0; i < (h - f + 1); i += stride)
			for(j = 0; j < (w - f + 1); j += stride)
			{ 
				//Start the convolution using the determined i & j
				sum = 0;
				for(int row_offset = 0; row_offset <f; row_offset++)
					for(int col_offset = 0; col_offset <f; col_offset++)
						for(int channel_offset = 0; channel_offset < c; channel_offset++)
							sum += image[i + row_offset][j + col_offset][channel_offset] * weight[row_offset][col_offset][channel_offset][filter];
				output[i/stride][j/stride][filter] = activation_function(sum + bias[filter]);					
			}
	}
}

#endif