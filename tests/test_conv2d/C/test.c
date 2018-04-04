#include <stdio.h>
#include <stdlib.h>
#include "conv2D.h"

float identity(float a)
{return a;}

int main()
{
	float*** output;
	float*** image;
	int h, w, c;
	float**** weight;
	int number_of_filters, f, stride, padding;
	float* bias;
	int oh,ow,oc;

	// Openning file strem
	FILE* parameters_in = fopen("param.in","r");
	if (parameters_in == NULL)
	{
		printf("FILE parameters.in NOT FOUND");
		exit(1);
	}

	FILE* bias_in = fopen("bias.in","r");
	if (bias_in == NULL)
	{
		printf("FILE bias.in NOT FOUND");
		exit(1);
	}

	FILE* weights_in = fopen("weights.in","r");
	if (weights_in == NULL)
	{
		printf("FILE weights.in NOT FOUND");
		exit(1);
	}

	FILE* image_in = fopen("image.in","r");
	if (image_in == NULL)
	{
		printf("FILE image.in NOT FOUND");
		exit(1);
	}
	// image parameters
	fscanf(parameters_in,"%d",&h);
	fscanf(parameters_in,"%d",&w);
	fscanf(parameters_in,"%d",&c);

	// filter parameters
	fscanf(parameters_in,"%d",&f);
	fscanf(parameters_in,"%d",&number_of_filters);

	stride = 2;
	padding = 1;

	/// Mem alloc **This shall be fun...**

	// image
	image = (float***)malloc(h * sizeof(float**));
	for(int i = 0; i < h; i++)
	{
		image[i] = (float**)malloc(w * sizeof(float*));
		for(int j = 0 ; j < w; j++)
			image[i][j] = (float*)malloc(c * sizeof(float));
	}

	// weight

	weight = (float****)malloc(f * sizeof(float***));
	for(int i = 0; i <f ; i++)
	{
		weight[i] = (float***)malloc(f * sizeof(float**));
		for(int j = 0; j < f ; j++)
			{
				weight[i][j] = (float**)malloc(c * sizeof(float*));
				for(int k = 0; k < c ; k++)
					weight[i][j][k] = (float*)malloc(number_of_filters * sizeof(float));
			}
	}

	// output
	oh = (h-f)/stride + 1;
	ow = (w-f)/stride + 1;
	oc = number_of_filters;

	output = (float***)malloc(oh * sizeof(float**));
	for(int i = 0; i < oh; i++)
	{
		output[i] = (float**)malloc(ow * sizeof(float*));
		for(int j = 0 ; j < ow; j++)
			output[i][j] = (float*)malloc(oc * sizeof(float));
	}

	bias = (float*)malloc(number_of_filters * sizeof(float));
	//READING DATA
		
	for(int k = 0 ; k < c; k++)
		for(int i = 0; i <h; i++)
			for(int j = 0 ; j < w; j++)
				fscanf(image_in,"%f",&image[i][j][k]);
			
	for(int l = 0 ; l < number_of_filters; l++)
		for(int k = 0 ; k < c; k++)
			for(int i = 0; i < f; i++)
				for(int j = 0 ; j < f; j++)
					fscanf(weights_in,"%f",&weight[i][j][k][l]);

	for(int i = 0; i < number_of_filters; i++)
		fscanf(bias_in,"%f", &bias[i]);

	//Test function

	conv2d(output, image, h, w, c, weight, number_of_filters, f, stride, padding, bias, identity);

	// Print output

	for(int k = 0 ; k < oc; k++)		
	{	for(int i = 0; i < oh; i++)
		{
			for(int j = 0 ; j < ow; j++)
				printf("%f ", output[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}

/*
	for(int k = 0 ; k < c; k++)		
	{	for(int i = 0; i < h; i++)
		{
			for(int j = 0 ; j < w; j++)
				printf("%f ", image[i][j][k]);
			printf("\n");
		}
		printf("\n");
	}
	// print weights

	for(int l = 0 ; l < number_of_filters; l++)
	{
		printf("\n####################\nFilter 1: \n");
		for(int k = 0 ; k < c; k++)
		{
			for(int i = 0; i < f; i++)
			{
				for(int j = 0 ; j < f; j++)
					printf("%f ", weight[i][j][k][l]);
				printf("\n");
			}
			printf("\n");
		}		
	}	*/
	return 0;
}
