#include "/home/sergiu/git/lic/hls/workspace/flatten/headers/defines.h"

void flatten(float output[FLATTEN_SIZE], float input[P_SIZE][P_SIZE][P_CHANNELS])
{
    int i,j,k;
		for(i = 0; i < P_SIZE; i++)
			for(j = 0; j < P_SIZE; j++)
                for(k = 0; k < P_CHANNELS;k++)
                    output[i * P_SIZE * P_CHANNELS + j * P_CHANNELS + k] = input[i][j][k];
}
