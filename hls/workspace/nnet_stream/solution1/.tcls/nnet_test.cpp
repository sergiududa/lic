#include <stdio.h>
#include <stdlib.h>
#include "/home/sergiu/git/lic/hls/workspace/nnet_stream/headers/defines.h"
#include <hls_video.h>


#include "ap_fixed.h"

#define EXP_WIDTH	16
#define INT_WIDTH	4

typedef ap_fixed<EXP_WIDTH, INT_WIDTH> float24_t;


#define eps 0.1

void nnet(hls::stream<float24_t> &fc3_out);

int main()
{

	hls::stream<float24_t> fc3_out("test_fc3_out");

	float24_t fc_layer3_out[FC3_ACT_SIZE];
	float24_t fc_layer3_ref[FC3_ACT_SIZE];

	float24_t placeholder;

	int i,j,k;
	int correct_values, total_values;

	nnet(fc3_out);

	for(i = 0; i < FC3_ACT_SIZE; i++)
		fc3_out>>fc_layer3_out[i];

	FILE* fc_layer3_content = fopen("../../../debug/fc_layer3_py.out","r");
	if(fc_layer3_content == NULL)
	{
		printf("Couldn't open ../../../debug/fc_layer3_py.out");
	    exit(1);
	}

	for(i = 0; i < FC3_ACT_SIZE; i++)
	{
		fscanf(fc_layer3_content,"%f",&placeholder);
	    fc_layer3_ref[i] = (float24_t)placeholder;
	}


	correct_values = 0;
	total_values = 0;

	printf("Checking FC Layer 3 ...\n");


	for(i = 0; i < FC3_ACT_SIZE; i++)
	{
		total_values++;

		if(fc_layer3_out[i] - fc_layer3_ref[i] > eps || fc_layer3_ref[i] - fc_layer3_out[i] > eps)
		{
			if(correct_values + 1 == total_values)
				printf("Missmatch in FC3 check\n");
		}
			else
				correct_values++;

	}

	printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);


	return 0;


}
