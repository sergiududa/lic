#include "/home/sergiu/git/lic/hls/workspace/conv/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/conv/headers/activations.h"
#include <hls_video.h>

#ifndef __SYNTHESIS__
#include <stdio.h>
#endif

/*
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
*/
#define BUFFER_SIZE (IMAGE_SIZE * (CONV_KERNEL_SIZE -1) + CONV_KERNEL_SIZE) // Poate hardcodam valoarea la un momemnt dat ???

void conv(hls::stream<float> &out, hls::stream<float> &in, float weight[CONV_KERNEL_SIZE][CONV_KERNEL_SIZE][CONV_CHANNELS][CONV_FILTERS], float bias[CONV_BIAS_SIZE])
{
	int i,j,k,filter, contor = 0;
	float sum, placeholder;
	int row_offset, col_offset, channel_offset;
	hls::LineBuffer<BUFFER_SIZE,1,float> conv_buff;

	/// DEBUG

	int attempted_reads1 = 0, reads1 = 0;
	int attempted_reads2 = 0, reads2 = 0;
	int attempted_reads3 = 0, reads3 = 0;

	///END

	/*
	 * Read the initial buffer
	 * */


	for(i = 0; i < BUFFER_SIZE;i++)
	{
		attempted_reads1++;
		if(in.empty() == 1)
		{
			#ifndef __SYNTHESIS__
			printf("\nStreamul e gol in citirea initiala a bufferului, pasul: %d", i);
			#endif
		}
		else
		{
			in>>placeholder;
			conv_buff.shift_up(0);
			conv_buff.insert_top(placeholder,0);
			reads1++;
		}
	}


	for(i = 0; i < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1); i += CONV_STRIDE)
	for(j = 0; j < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1); j += CONV_STRIDE)
	{


	for(filter = 0; filter < CONV_FILTERS; filter++)
	{
		//Insert smart comment here
		sum = 0;
		for(row_offset = 0; row_offset <CONV_KERNEL_SIZE; row_offset++)
			for(col_offset = 0; col_offset <CONV_KERNEL_SIZE; col_offset++)
				for(channel_offset = 0; channel_offset < CONV_CHANNELS; channel_offset++)
					sum += conv_buff.getval(row_offset*IMAGE_SIZE * IMAGE_CHANNELS +  col_offset * IMAGE_CHANNELS + channel_offset, 0) * weight[row_offset][col_offset][channel_offset][filter];
		out<<relu(sum + bias[filter]);
	}

	/// IF this happens we can read stuff
	if(/*(i + CONV_STRIDE < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1)) && */(j + CONV_STRIDE < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1)))
		for(int p = 0 ; p<IMAGE_CHANNELS; p++)
		{
			attempted_reads3++;
			if(in.empty() == 1)
			{
				#ifndef __SYNTHESIS__
				printf("\nStreamul e gol in citirea \" next_item\" a bufferului, pasul: %d", p);
				#endif
			}
			else
			{
				reads3++;
				in>>placeholder;
				conv_buff.shift_up(0);
				conv_buff.insert_top(placeholder,0);
			}
		}
	else
		if((i + CONV_STRIDE < (IMAGE_SIZE - CONV_KERNEL_SIZE + 1)) && (j + CONV_STRIDE >= (IMAGE_SIZE - CONV_KERNEL_SIZE + 1)))
			for(int p = 0 ; p<CONV_KERNEL_SIZE * IMAGE_CHANNELS; p++)
			{
				attempted_reads2++;
				if(in.empty() == 1)
				{
					#ifndef __SYNTHESIS__
					printf("\nStreamul e gol in citirea \"rand nou\" a bufferului, pasul: %d", p);
					#endif
				}
				else
				{
					reads2++;
					in>>placeholder;
					conv_buff.shift_up(0);
					conv_buff.insert_top(placeholder,0);
				}
			}


	}
	#ifndef __SYNTHESIS__
	printf("\n===========");
	printf("\nStatistics:");
	printf("\n===========");

	printf("\nInitial buffer atempted to read %d and succeeded %d", attempted_reads1, reads1);
	printf("\nEndline buffer atempted to read %d and succeeded %d", attempted_reads2, reads2);
	printf("\nNextelm buffer atempted to read %d and succeeded %d", attempted_reads3, reads3);
	#endif

}