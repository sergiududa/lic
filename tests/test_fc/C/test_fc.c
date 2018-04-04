#include <stdio.h>
#include <stdlib.h>
#include "fc.h"
#include "activations.h"

int main()
{
	float** weight;
	float* bias;
	float* output;
	float* input;
	int n,m;

	FILE* input_file = fopen("input.out", "r");
	FILE* weight_file = fopen("fc1_weights.out", "r");
	FILE* bias_file = fopen("fc1_bias.out", "r");
	FILE* output_file = fopen("output.out", "r");
	FILE* param_file = fopen("param.in", "r");

	// Check files

	if (param_file == NULL)
	{
		printf("parameters file NOT found!\n");
		exit(1);
	}
	else
		printf("Opening param_fileters file...\n");
	
	
	if (weight_file == NULL)
	{
		printf("weights file NOT found!\n");
		exit(1);
	}
	else
		printf("Opening Weights file...\n");
	

	if (bias_file == NULL)
	{
		printf("bias file NOT found!\n");
		exit(1);
	}

	else
		printf("Opening Bias file...\n");


	if (input_file == NULL)
	{
		printf("Input file NOT found!\n");
		exit(1);
	}
	else
		printf("Opening input file...\n");

	if (output_file == NULL)
	{
		printf("Output file NOT found!\n");
		exit(1);
	}
	else
		printf("Opening output file...\n");
	
	printf("DONE!\n");


	fscanf(param_file,"%d", &n);
	fscanf(param_file,"%d", &m);



	/// Memory alloc

	weight = (float**)malloc(n*sizeof(float*));
	for(int i = 0; i < n; i++)
		weight[i] = (float*)malloc(m*sizeof(float));
	
	bias = (float*)malloc(m*sizeof(float));
	output = (float*)malloc(m*sizeof(float));
	input = (float*)malloc(n*sizeof(float));

	/// READ

	fscanf(param_file,"%d", &n);
	fscanf(param_file,"%d", &m);

	for(int i = 0; i < n; i++)
		fscanf(input_file,"%f",&input[i]);

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
		fscanf(weight_file,"%f",&weight[i][j]);

	for(int i = 0; i < n; i++)
		fscanf(bias_file,"%f",&bias[i]);

	/// Test function

	fc(output, input, m, n, weight, bias, relu);

	for(int i = 0; i < m; i++)
		printf("%f ",output[i]);
	return 0;
}