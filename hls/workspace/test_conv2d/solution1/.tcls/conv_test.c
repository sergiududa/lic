#include <stdio.h>
#include <stdlib.h>

#define eps 0.00002

void nnet(float conv_layer1_out[29][29][8], float conv_layer2_out[13][13][16], float pool_layer1_out[14][14][8], float pool_layer2_out[6][6][16], float flatten_out[576], float fc_layer1_out[120], float fc_layer2_out[84], float fc_layer3_out[10]);

int main()
{
	float conv_layer1_out[29][29][8];
	float conv_layer2_out[13][13][16];
	float pool_layer1_out[14][14][8];
	float pool_layer2_out[6][6][16];

	float flatten_out[576];
	float fc_layer1_out[120];
	float fc_layer2_out[84];
	float fc_layer3_out[10];

	float conv_layer1_ref[29][29][8];
	float conv_layer2_ref[13][13][16];
	float pool_layer1_ref[14][14][8];
	float pool_layer2_ref[6][6][16];

	float flatten_ref[576];
	float fc_layer1_ref[120];
	float fc_layer2_ref[84];
	float fc_layer3_ref[10];


	int i,j,k;

	nnet(conv_layer1_out,conv_layer2_out,pool_layer1_out,pool_layer2_out,flatten_out,fc_layer1_out,fc_layer2_out,fc_layer3_out);


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

	    for(k = 0; k < 8; k++)
	    	for(i = 0; i < 29; i++)
	    		for(j = 0; j < 29; j++)
	    			fscanf(conv_layer1_content,"%f",&conv_layer1_ref[i][j][k]);

	    for(k = 0; k < 16; k++)
	    	for(i = 0; i < 13; i++)
	    	    for(j = 0; j < 13; j++)
	    	    	fscanf(conv_layer2_content,"%f",&conv_layer2_ref[i][j][k]);

	    for(k = 0; k < 8; k++)
	    	for(i = 0; i < 14; i++)
	    	    for(j = 0; j < 14; j++)
	    	    	fscanf(pool_layer1_content,"%f",&pool_layer1_ref[i][j][k]);
	    for(k = 0; k < 16; k++)
	    	for(i = 0; i < 6; i++)
	    		for(j = 0; j < 6; j++)
	    			fscanf(pool_layer2_content,"%f",&pool_layer2_ref[i][j][k]);

	    for(i = 0; i < 576; i++)
	    	fscanf(flatten_content,"%f",&flatten_ref[i]);

	    for(i = 0; i < 120; i++)
	    	fscanf(fc_layer1_content,"%f",&fc_layer1_ref[i]);
	    for(i = 0; i < 84; i++)
	    	fscanf(fc_layer2_content,"%f",&fc_layer2_ref[i]);
	    for(i = 0; i < 10; i++)
	    	fscanf(fc_layer3_content,"%f",&fc_layer3_ref[i]);

	    /// Checking
		int correct_values = 0, total_values = 0;

		printf("Checking CONV Layer 1 ...\n");

	    for(k = 0; k < 8; k++)
	    	for(i = 0; i < 29; i++)
	    		for(j = 0; j < 29; j++)
	    		{
	    			total_values++;
	    			if(conv_layer1_out[i][j][k] - conv_layer1_ref[i][j][k] > eps || conv_layer1_ref[i][j][k] - conv_layer1_out[i][j][k] > eps)
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

		for(k = 0; k < 8; k++)
			for(i = 0; i < 14; i++)
				for(j = 0; j < 14; j++)
				{
					total_values++;
					if(pool_layer1_out[i][j][k] - pool_layer1_ref[i][j][k] > eps || pool_layer1_ref[i][j][k] - pool_layer1_out[i][j][k] > eps)
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

	    for(k = 0; k < 16; k++)
	    	for(i = 0; i < 13; i++)
	    	    for(j = 0; j < 13; j++)
	    		{
	    			total_values++;
	    			if(conv_layer2_out[i][j][k] - conv_layer2_ref[i][j][k] > eps || conv_layer2_ref[i][j][k] - conv_layer2_out[i][j][k] > eps)
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

		for(k = 0; k < 16; k++)
			for(i = 0; i < 6; i++)
				for(j = 0; j < 6; j++)
				{
					total_values++;
					if(pool_layer2_out[i][j][k] - pool_layer2_ref[i][j][k] > eps || pool_layer2_ref[i][j][k] - pool_layer2_out[i][j][k] > eps)
					{
						if(correct_values + 1 == total_values)
							printf("Missmatch in POOL2 check\n");
					}
					else
						correct_values++;
				}
		printf("DONE: %d out of %d are correct\n\n", correct_values, total_values);

		correct_values = 0;
		total_values = 0;

		printf("Checking FLATTEN Layer ...\n");

		for(i = 0; i < 576; i++)
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

		correct_values = 0;
		total_values = 0;

		printf("Checking FC Layer 1 ...\n");

		for(i = 0; i < 120; i++)
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

		for(i = 0; i < 84; i++)
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

		for(i = 0; i < 10; i++)
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
