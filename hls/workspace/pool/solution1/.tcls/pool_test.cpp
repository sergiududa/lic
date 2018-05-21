#include <stdio.h>
#include <stdlib.h>
#include <hls_video.h>
#include "/home/sergiu/git/lic/hls/workspace/pool/headers/defines.h"

#define eps 0.00002

void pool(hls::stream<float>& out, hls::stream<float>& in);

int main()
{
	float pool_out[P_SIZE * P_SIZE * P_CHANNELS];
	float pool_ref[P_SIZE][P_SIZE][P_CHANNELS];
	float image[A_SIZE * A_SIZE * A_CHANNELS];

	int i,j,k;
	int correct_values = 0, total_values = 0;
	hls::stream<float> out("output_stream");
	hls::stream<float> in("input_stream");

	FILE* conv_content = fopen("../../../debug/conv_py.out","r");
	if(conv_content == NULL)
	{
		printf("Couldn't open ../../../debug/conv_py.out");
		exit(1);
	}

	FILE* pool_content = fopen("../../../debug/pool_py.out","r");
	if(pool_content == NULL)
	{
		printf("Couldn't open ../../../debug/pool_py.out");
		exit(1);
	}

	for(k = 0; k < A_CHANNELS; k++)
		for(i = 0; i < A_SIZE; i++)
			for(j = 0; j < A_SIZE; j++)
				fscanf(conv_content,"%f",&image[i * A_SIZE * A_CHANNELS + j * A_CHANNELS + k]);
	for(k = 0; k < P_CHANNELS; k++)
		for(i = 0; i < P_SIZE; i++)
			for(j = 0; j < P_SIZE; j++)
				fscanf(pool_content,"%f",&pool_ref[i][j][k]);

	/// Send stream
	for(i = 0 ; i < A_SIZE * A_SIZE * A_CHANNELS; i++)
			in<<image[i];

	pool(out, in);

	/// Receive stream
	for(i = 0 ; i < P_SIZE * P_SIZE * P_CHANNELS; i++)
			out>>pool_out[i];

	printf("Checking POOL  ...\n");

	for(k = 0; k < P_CHANNELS; k++)
		for(i = 0; i < P_SIZE; i++)
			for(j = 0; j < P_SIZE; j++)
			{
				total_values++;
				if(pool_out[i * P_SIZE * P_CHANNELS + j * P_CHANNELS + k] - pool_ref[i][j][k] > eps || pool_ref[i][j][k] - pool_out[i * P_SIZE * P_CHANNELS + j * P_CHANNELS + k] > eps)
				{
					if(correct_values + 1 == total_values)
						printf("Missmatch in POOL check\n");
				}
				else
					correct_values++;
			}
	printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

	return 0;
}

