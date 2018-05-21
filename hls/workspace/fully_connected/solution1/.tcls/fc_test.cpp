#include <stdio.h>
#include <stdlib.h>
#include "/home/sergiu/git/lic/hls/workspace/fully_connected/headers/defines.h"
#include "/home/sergiu/git/lic/hls/workspace/fully_connected/headers/weights.h"
#include <hls_video.h>

#define eps 0.00002

void fc(hls::stream<float> &out, hls::stream<float> &in, float weight[FC_WEIGHTS_H][FC_WEIGHTS_W], float bias[FC_BIAS_SIZE]);

int main()
{

	float input[FLATTEN_SIZE];
	float fc_out[FC_ACT_SIZE];
	float fc_ref[FC_ACT_SIZE];

	int i;
	int correct_values = 0, total_values = 0;

	hls::stream<float> out;
	hls::stream<float> in;

	FILE* flatten_content = fopen("../../../debug/flatten_py.out","r");
	if(flatten_content == NULL)
	{
		printf("Couldn't open ../../../debug/flatten_py.out");
		exit(1);
	}

	FILE* fc_content = fopen("../../../debug/fc_py.out","r");
	if(fc_content == NULL)
	{
		printf("Couldn't open ../../../debug/fc_py.out");
		exit(1);
	}


    for(i = 0; i < FLATTEN_SIZE; i++)
    	fscanf(flatten_content,"%f",&input[i]);

    for(i = 0; i < FC_ACT_SIZE; i++)
    	fscanf(fc_content,"%f",&fc_ref[i]);

    for(i = 0; i < FLATTEN_SIZE; i++)
    	in<<input[i];

	fc(out, in, fc_weights, fc_bias);

    for(i = 0; i < FC_ACT_SIZE; i++)
    	out>>fc_out[i];
    printf("Checking FC Layer ...\n");

    for(i = 0; i < FC_ACT_SIZE; i++)
    {
    	total_values++;
    	if(fc_out[i] - fc_ref[i] > eps || fc_ref[i] - fc_out[i] > eps)
    	{
    		if(correct_values + 1 == total_values)
    			printf("Missmatch in FC check\n");
    	}
    	else
    		correct_values++;
    	}
   	printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);
	return 0;
}
