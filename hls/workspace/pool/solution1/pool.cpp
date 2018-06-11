#include <hls_video.h>
#include "/home/sergiu/git/lic/hls/workspace/pool/headers/defines.h"

#ifndef __SYNTHESIS__
#include <stdio.h>
#endif


#include "ap_fixed.h"

#define EXP_WIDTH	28
#define INT_WIDTH	10

typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;


/*
void pool(float24_t output[P_SIZE * P_SIZE * P_CHANNELS], float24_t image[A_SIZE * A_SIZE * A_CHANNELS])
{

	float24_t max;
	int contor = 0;

	for(int i = 0; i < A_SIZE -P_KERNEL_SIZE + 1; i += P_STRIDE)
		for(int j = 0; j < A_SIZE - P_KERNEL_SIZE + 1; j += P_STRIDE)
			for(int channel = 0; channel < A_CHANNELS; channel++)
			{
				max = image[i * A_SIZE * A_CHANNELS + j * A_CHANNELS + channel];
				for(int k = 0; k < P_KERNEL_SIZE; k++)
					for(int l = 0; l <  P_KERNEL_SIZE; l++)
						max = image[(k + i) * A_SIZE * A_CHANNELS + (l + j) * A_CHANNELS + channel] > max ? image[(k + i) * A_SIZE * A_CHANNELS + (l + j) * A_CHANNELS + channel] : max;
				output[contor++] = max;
			}

}
*/

/*
#define BUFFER_SIZE (P_SIZE*P_CHANNELS)

void pool(hls::stream<float24_t>& out, hls::stream<float24_t>& in)
{

	int i,j,k;
	float24_t read;
	hls::LineBuffer<BUFFER_SIZE,1,float24_t> pool_buff;
	for(i = 0 ; i < A_SIZE; i++)
		for(j = 0 ; j < A_SIZE; j++)
			for(k = 0 ; k < A_CHANNELS; k++)
			{
				in>>read;
				if(i/P_STRIDE < P_SIZE && j/P_STRIDE < P_SIZE)
				{
					if(i % P_STRIDE == 0 && j % P_STRIDE == 0)
						pool_buff.val[(j / P_STRIDE)*P_CHANNELS + k][0] = read;
					else
						pool_buff.val[(j / P_STRIDE)*P_CHANNELS + k][0] = read > pool_buff.val[(j / P_STRIDE)*P_CHANNELS + k][0] ? read : pool_buff.val[(j / P_STRIDE)*P_CHANNELS + k][0];

					if(i % P_KERNEL_SIZE == (P_KERNEL_SIZE - 1) && j % P_KERNEL_SIZE == (P_KERNEL_SIZE - 1))
						out<<pool_buff.val[j / P_STRIDE + k][0];
				}

			}


}
*/
#define BUFFER_SIZE (P_SIZE*P_CHANNELS)



void pool(hls::stream<float24_t>& out, hls::stream<float24_t>& in)
{

	int i,j,k,l,m;
	float24_t read;
	hls::LineBuffer<BUFFER_SIZE,1,float24_t> pool_buff;

	for(i = 0 ; i < P_SIZE; i++)
		for(l = 0; l < P_KERNEL_SIZE; l++)
		{	for(j = 0 ; j < P_SIZE; j++)
				for(m = 0; m < P_KERNEL_SIZE; m++)
					for(k = 0 ; k < P_CHANNELS; k++)
					{
						in>>read;
						if(l == 0 && m == 0)
							pool_buff.val[j*P_CHANNELS + k][0] = read;

						else
							pool_buff.val[j*P_CHANNELS + k][0] = pool_buff.val[j*P_CHANNELS + k][0] > read? pool_buff.val[j*P_CHANNELS + k][0] : read;


						if(l == (P_KERNEL_SIZE - 1) && m == (P_KERNEL_SIZE - 1))
							out<<pool_buff.val[j*P_CHANNELS + k][0];
					}
		for(int skip = P_SIZE * P_STRIDE ; skip < A_SIZE; skip++)
			for(int channel = 0; channel < P_CHANNELS; channel++)
					in>>read;
	}


	for(int skip_row = P_SIZE * P_STRIDE ; skip_row < A_SIZE; skip_row++)
		for(int skip_col = 0 ; skip_col < A_SIZE; skip_col++)
			for(int skip_channel = 0 ; skip_channel < A_CHANNELS; skip_channel++)
				in>>read;
	int count = 0;
	while(!in.empty())
		{
			in>>read;
			count++;
		}
#ifndef __SYNTHESIS__
	printf("%d ",count);
#endif

}


