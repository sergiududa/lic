#include <stdio.h>
#include <stdlib.h>
#include <../../../headers/weights.h>

#define eps 0.00002

void conv2d(float output[29][29][8], float image[32][32][1], float weight[4][4][1][8], float bias[8]);


int main()
{
	float output[29][29][8];
	float output_ref[29][29][8];
	FILE* f = fopen("../../../debug/conv_layer1_py.out","r");
	if(f == NULL)
	{
		printf("Nu avem fisier");
		exit(1);
	}

	conv2d(output, image, conv_layer1_weights, conv_layer1_bias);

	// Read from file
	int i,j,k;

	for(k = 0; k < 8; k++)
		for(i = 0; i < 29; i++)
			for(j = 0; j < 29; j++)
				fscanf(f,"%f",&output_ref[i][j][k]);

	int correct_values = 0, total_values = 0;

	for(k = 0; k < 8; k++)
		for(i = 0; i < 29; i++)
			for(j = 0; j < 29; j++)
			{
				total_values++;
				if(output[i][j][k] - output_ref[i][j][k] > eps || output_ref[i][j][k] - output[i][j][k] > eps)
				{
				    if(correct_values + 1 == total_values)
				    	printf("Missmatch in CONV1 check\n");
				}
				else
				correct_values++;
			}
	printf("DONE: %d out of %d are correct\n", correct_values, total_values);

	printf("Verification Done");
	return 0;
}


