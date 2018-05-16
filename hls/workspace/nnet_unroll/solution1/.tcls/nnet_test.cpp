#include <stdio.h>
#include <stdlib.h>
#include "/home/sergiu/git/lic/hls/workspace/nnet/headers/defines.h"
#include "ap_fixed.h"

#define WIDTH		24
#define INT_WIDTH	4
#define eps 0.002

typedef ap_fixed<WIDTH, INT_WIDTH> float24_t;


void nnet(float24_t conv_layer1_out[A1_SIZE * A1_SIZE * A1_CHANNELS], float24_t conv_layer2_out[A2_SIZE * A2_SIZE * A2_CHANNELS], float24_t pool_layer1_out[P1_SIZE * P1_SIZE * P1_CHANNELS], float24_t pool_layer2_out[P2_SIZE * P2_SIZE * P2_CHANNELS], /*float24_t flatten_out[FLATTEN_SIZE],*/ float24_t fc_layer1_out[FC1_ACT_SIZE], float24_t fc_layer2_out[FC2_ACT_SIZE], float24_t fc_layer3_out[FC3_ACT_SIZE]);

int main()
{
	float24_t conv_layer1_out[A1_SIZE * A1_SIZE * A1_CHANNELS];
	float24_t conv_layer2_out[A2_SIZE * A2_SIZE * A2_CHANNELS];
	float24_t pool_layer1_out[P1_SIZE * P1_SIZE * P1_CHANNELS];
	float24_t pool_layer2_out[P2_SIZE * P2_SIZE * P2_CHANNELS];

	//float24_t flatten_out[FLATTEN_SIZE];

	float24_t fc_layer1_out[FC1_ACT_SIZE];
	float24_t fc_layer2_out[FC2_ACT_SIZE];
	float24_t fc_layer3_out[FC3_ACT_SIZE];

	float24_t conv_layer1_ref[A1_SIZE][A1_SIZE][A1_CHANNELS];
	float24_t conv_layer2_ref[A2_SIZE][A2_SIZE][A2_CHANNELS];
	float24_t pool_layer1_ref[P1_SIZE][P1_SIZE][P1_CHANNELS];
	float24_t pool_layer2_ref[P2_SIZE][P2_SIZE][P2_CHANNELS];

	//float24_t flatten_ref[FLATTEN_SIZE];

	float24_t fc_layer1_ref[FC1_ACT_SIZE];
	float24_t fc_layer2_ref[FC2_ACT_SIZE];
	float24_t fc_layer3_ref[FC3_ACT_SIZE];
	float placeholder;

	int i,j,k;

	nnet(conv_layer1_out,conv_layer2_out,pool_layer1_out,pool_layer2_out,/*flatten_out,*/fc_layer1_out,fc_layer2_out,fc_layer3_out);


	FILE* conv_layer1_content = fopen("../../../debug/conv_layer1_py.out","r");
	    if(conv_layer1_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/conv_layer1_py.out");
	        exit(1);
	    }


	    FILE* pool_layer1_content = fopen("../../../debug/pool_layer1_py.out","r");
	    if(pool_layer1_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/pool_layer1_py.out");
	        exit(1);
	    }


	    FILE* conv_layer2_content = fopen("../../../debug/conv_layer2_py.out","r");
	    if(conv_layer2_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/conv_layer2_py.out");
	        exit(1);
	    }


	    FILE* pool_layer2_content = fopen("../../../debug/pool_layer2_py.out","r");
	    if(pool_layer2_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/pool_layer2_py.out");
	        exit(1);
	    }

	    FILE* flatten_content = fopen("../../../debug/flatten_py.out","r");
	    if(flatten_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/flatten_py.out");
	        exit(1);
	    }

	    FILE* fc_layer1_content = fopen("../../../debug/fc_layer1_py.out","r");
	    if(fc_layer1_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/fc_layer1_py.out");
	        exit(1);
	    }


	    FILE* fc_layer2_content = fopen("../../../debug/fc_layer2_py.out","r");
	    if(fc_layer2_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/fc_layer2_py.out");
	        exit(1);
	    }


	    FILE* fc_layer3_content = fopen("../../../debug/fc_layer3_py.out","r");
	    if(fc_layer3_content == NULL)
	    {
	        printf("Couldn't open ../../../debug/fc_layer3_py.out");
	        exit(1);
	    }

	    for(k = 0; k < A1_CHANNELS; k++)
	    	for(i = 0; i < A1_SIZE; i++)
	    		for(j = 0; j < A1_SIZE; j++)
	    			{
	    				fscanf(conv_layer1_content,"%f",&placeholder);
	    				conv_layer1_ref[i][j][k] = (float24_t)placeholder;
	    			}

	    for(k = 0; k < A2_CHANNELS; k++)
	    	for(i = 0; i < A2_SIZE; i++)
	    	    for(j = 0; j < A2_SIZE; j++)
	    	    {
	    	    	fscanf(conv_layer2_content,"%f",&placeholder);
	    	    	conv_layer2_ref[i][j][k] = (float24_t)placeholder;
	    	    }

	    for(k = 0; k < P1_CHANNELS; k++)
	    	for(i = 0; i < P1_SIZE; i++)
	    	    for(j = 0; j < P1_SIZE; j++)
	    	    {
	    	    	fscanf(pool_layer1_content,"%f",&placeholder);
	    	    	pool_layer1_ref[i][j][k] = (float24_t)placeholder;
	    	    }

	    for(k = 0; k < P2_CHANNELS; k++)
	    	for(i = 0; i < P2_SIZE; i++)
	    		for(j = 0; j < P2_SIZE; j++)
	    	    {
	    	    	fscanf(pool_layer2_content,"%f",&placeholder);
	    	    	pool_layer2_ref[i][j][k] = (float24_t)placeholder;
	    	    }

	    /*
	    for(i = 0; i < FLATTEN_SIZE; i++)
	    	{
	    		fscanf(flatten_content,"%f",&placeholder);
	    		flatten_ref[i] = (float24_t)placeholder;
	    	}
	    */
	    for(i = 0; i < FC1_ACT_SIZE; i++)
	    	{
	    		fscanf(fc_layer1_content,"%f",&placeholder);
	    		fc_layer1_ref[i] = (float24_t)placeholder;
	    	}
	    for(i = 0; i < FC2_ACT_SIZE; i++)
	    {
	    	fscanf(fc_layer2_content,"%f",&placeholder);
	    	fc_layer2_ref[i] = (float24_t)placeholder;
	    }

	    for(i = 0; i < FC3_ACT_SIZE; i++)
	    {
	    	fscanf(fc_layer3_content,"%f",&placeholder);
	    	fc_layer3_ref[i] = (float24_t)placeholder;
	    }

	    /// Checking
		int correct_values = 0, total_values = 0;

		printf("Checking CONV Layer 1 ...\n");

	    for(k = 0; k < A1_CHANNELS; k++)
	    	for(i = 0; i < A1_SIZE; i++)
	    		for(j = 0; j < A1_SIZE; j++)
	    		{
	    			total_values++;
	    			if(conv_layer1_out[i * A1_SIZE * A1_CHANNELS + j * A1_CHANNELS + k] - conv_layer1_ref[i][j][k] > eps || conv_layer1_ref[i][j][k] - conv_layer1_out[i * A1_SIZE * A1_CHANNELS + j * A1_CHANNELS + k] > eps)
	    			{
	    				if(correct_values + 1 == total_values)
	    					printf("Missmatch in CONV1 check\n");
	    			}
	    			else
	    				correct_values++;
	    		}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

		correct_values = 0;
		total_values = 0;

		printf("Checking POOL Layer 1 ...\n");

		for(k = 0; k < P1_CHANNELS; k++)
			for(i = 0; i < P1_SIZE; i++)
				for(j = 0; j < P1_SIZE; j++)
				{
					total_values++;
					if(pool_layer1_out[i * P1_SIZE * P1_CHANNELS + j * P1_CHANNELS + k] - pool_layer1_ref[i][j][k] > eps || pool_layer1_ref[i][j][k] - pool_layer1_out[i * P1_SIZE * P1_CHANNELS + j * P1_CHANNELS + k] > eps)
					{
						if(correct_values + 1 == total_values)
							printf("Missmatch in POOL1 check\n");
					}
					else
						correct_values++;
				}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

		correct_values = 0;
		total_values = 0;

	    printf("Checking CONV Layer 2 ...\n");

	    for(k = 0; k < A2_CHANNELS; k++)
	    	for(i = 0; i < A2_SIZE; i++)
	    	    for(j = 0; j < A2_SIZE; j++)
	    		{
	    			total_values++;
	    			if(conv_layer2_out[i * A2_SIZE * A2_CHANNELS + j * A2_CHANNELS + k] - conv_layer2_ref[i][j][k] > eps || conv_layer2_ref[i][j][k] - conv_layer2_out[i * A2_SIZE * A2_CHANNELS + j * A2_CHANNELS + k] > eps)
	    			{
	    				if(correct_values + 1 == total_values)
	    					printf("Missmatch in CONV2 check\n");
	    			}
	    			else
	    				correct_values++;
	    		}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

		correct_values = 0;
		total_values = 0;


		printf("Checking POOL Layer 2 ...\n");

		for(k = 0; k < P2_CHANNELS; k++)
			for(i = 0; i < P2_SIZE; i++)
				for(j = 0; j < P2_SIZE; j++)
				{
					total_values++;
					if(pool_layer2_out[i * P2_SIZE * P2_CHANNELS + j * P2_CHANNELS + k] - pool_layer2_ref[i][j][k] > eps || pool_layer2_ref[i][j][k] - pool_layer2_out[i * P2_SIZE * P2_CHANNELS + j * P2_CHANNELS + k] > eps)
					{
						if(correct_values + 1 == total_values)
							printf("Missmatch in POOL2 check\n");
					}
					else
						correct_values++;
				}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

		/*
		correct_values = 0;
		total_values = 0;

		printf("Checking FLATTEN Layer ...\n");

		for(i = 0; i < FLATTEN_SIZE; i++)
		{
			total_values++;
			if(flatten_out[i] - flatten_ref[i] > eps || flatten_ref[i] - flatten_out[i] > eps)
			{
				if(correct_values + 1 == total_values)
					printf("Missmatch in FLATTEN check\n");
			}
			else
				correct_values++;
		}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);
		*/

		correct_values = 0;
		total_values = 0;

		printf("Checking FC Layer 1 ...\n");

		for(i = 0; i < FC1_ACT_SIZE; i++)
		{
			total_values++;
			if(fc_layer1_out[i] - fc_layer1_ref[i] > eps || fc_layer1_ref[i] - fc_layer1_out[i] > eps)
			{
				if(correct_values + 1 == total_values)
					printf("Missmatch in FC1 check\n");
			}
			else
				correct_values++;
		}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

		correct_values = 0;
		total_values = 0;

		printf("Checking FC Layer 2 ...\n");

		for(i = 0; i < FC2_ACT_SIZE; i++)
		{
			total_values++;
			if(fc_layer2_out[i] - fc_layer2_ref[i] > eps || fc_layer2_ref[i] - fc_layer2_out[i] > eps)
			{
				if(correct_values + 1 == total_values)
					printf("Missmatch in FC2 check\n");
			}
			else
				correct_values++;
		}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

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
