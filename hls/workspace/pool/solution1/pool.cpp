#include <hls_video.h>
#include "/home/sergiu/git/lic/hls/workspace/pool/headers/defines.h"

#ifndef __SYNTHESIS__
#include <stdio.h>
#endif


/*
void pool(float output[P_SIZE * P_SIZE * P_CHANNELS], float image[A_SIZE * A_SIZE * A_CHANNELS])
{

	float max;
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

void pool(hls::stream<float>& out, hls::stream<float>& in)
{

	int i,j,k;
	float read;
	hls::LineBuffer<BUFFER_SIZE,1,float> pool_buff;
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

void pool(hls::stream<float>& out, hls::stream<float>& in)
{

	int i,j,k,l,m;
	float read;
	hls::LineBuffer<BUFFER_SIZE,1,float> pool_buff;

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
	while(!in.empty())
		in>>read;

}


