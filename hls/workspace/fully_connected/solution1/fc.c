#include "/home/sergiu/git/lic/hls/workspace/fully_connected/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/fully_connected/headers/activations.h"

void fc(float output[FC_ACT_SIZE], float input[FLATTEN_SIZE], float weight[FC_WEIGHTS_H][FC_WEIGHTS_W], float bias[FC_BIAS_SIZE])
{

	for(int i = 0; i < FC_WEIGHTS_W; i++)
	{
		output[i] = 0;
		for(int j = 0; j < FC_WEIGHTS_H; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = relu(output[i]);
	}

}
