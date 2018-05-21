#include "/home/sergiu/git/lic/hls/workspace/fully_connected/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/fully_connected/headers/activations.h"
#include <hls_video.h>


void fc(hls::stream<float> &out, hls::stream<float> &in, float weight[FC_WEIGHTS_H][FC_WEIGHTS_W], float bias[FC_BIAS_SIZE])
{
	float read;
	float output[FC_ACT_SIZE] = {0};
	for(int j = 0; j < FC_WEIGHTS_H; j++)
	{
		in>>read;
		for(int i = 0; i < FC_WEIGHTS_W; i++)
		{
			output[i] += weight[j][i] * read;
		}
	}
	for(int i = 0; i < FC_WEIGHTS_W; i++)
		out<< relu(output[i] + bias[i]);

}
