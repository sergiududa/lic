#include <stdio.h>
#include <stdlib.h>
#include "/home/sergiu/git/lic/hls/workspace/flatten/headers/defines.h"

#define eps 0.00002

void flatten(float output[FLATTEN_SIZE], float input[P_SIZE][P_SIZE][P_CHANNELS]);

int main()
{
	float pool[P_SIZE][P_SIZE][P_CHANNELS];
	float flatten_out[FLATTEN_SIZE];
	float flatten_ref[FLATTEN_SIZE];

	int i,j,k;
	int correct_values = 0, total_values = 0;

    FILE* pool_content = fopen("../../../debug/pool_py.out","r");
    if(pool_content == NULL)
    {
        printf("Couldn't open ../../../debug/pool_py.out");
        exit(1);
    }

    FILE* flatten_content = fopen("../../../debug/flatten_py.out","r");
  	if(flatten_content == NULL)
	{
  		printf("Couldn't open ../../../debug/flatten_py.out");
  	    exit(1);
	}

  	for(k = 0; k < P_CHANNELS; k++)
  		for(i = 0; i < P_SIZE; i++)
  			for(j = 0; j < P_SIZE; j++)
  		    	fscanf(pool_content,"%f",&pool[i][j][k]);

  	for(i = 0; i < FLATTEN_SIZE; i++)
  		fscanf(flatten_content,"%f",&flatten_ref[i]);

  	flatten(flatten_out, pool);

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
}
