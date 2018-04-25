#include "/home/sergiu/git/lic/hls/workspace/pool/headers/defines.h"

void pool(float output[P_SIZE][P_SIZE][P_CHANNELS], float image[A_SIZE][A_SIZE][A_CHANNELS])
{

	float max;
	for(int channel = 0; channel < A_CHANNELS; channel++)
		for(int i = 0; i < A_SIZE -P_KERNEL_SIZE + 1; i += P_STRIDE)
			for(int j = 0; j < A_SIZE - P_KERNEL_SIZE + 1; j += P_STRIDE)
			{
				max = image[i][j][channel];
				for(int k = 0; k < P_KERNEL_SIZE; k++)
					for(int l = 0; l <  P_KERNEL_SIZE; l++)
						max = image[k + i][l + j][channel] > max ? image[k + i][l + j][channel] : max;
				output[i/P_STRIDE][j/P_STRIDE][channel] = max;
			}

}
