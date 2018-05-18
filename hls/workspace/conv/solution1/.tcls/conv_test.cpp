#include <stdio.h>
#include <stdlib.h>
#include "/home/sergiu/git/lic/hls/workspace/conv/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/conv/headers/weights.h"
#include <hls_video.h>

#define eps 0.00002

//void conv(float output[A_SIZE * A_SIZE * A_CHANNELS], float image[IMAGE_SIZE * IMAGE_SIZE * IMAGE_CHANNELS], float weight[CONV_KERNEL_SIZE][CONV_KERNEL_SIZE][CONV_CHANNELS][CONV_FILTERS], float bias[CONV_BIAS_SIZE]);
void conv(hls::stream<float> &out, hls::stream<float> &in, float weight[CONV_KERNEL_SIZE][CONV_KERNEL_SIZE][CONV_CHANNELS][CONV_FILTERS], float bias[CONV_BIAS_SIZE]);

int main()
{
	float conv_out[A_SIZE * A_SIZE * A_CHANNELS];
	float conv_ref[A_SIZE][A_SIZE][A_CHANNELS];

	int i,j,k;
	hls::stream<float> out("output_stream");
	hls::stream<float> in("input_stream");


	for(i = 0 ; i < IMAGE_SIZE * IMAGE_SIZE; i++)
		in<<image[i];
	conv(out,in, conv_weights, conv_bias);

	for(i = 0 ; i < A_SIZE * A_SIZE * A_CHANNELS; i++)
		out>>conv_out[i];

	FILE* conv_content = fopen("../../../debug/conv_py.out","r");
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
