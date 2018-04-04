#include <stdio.h>
#include <stdlib.h>
#include "pool.h"

float identity(float a)
{return a;}

int main()
{
	float*** output;
	float*** image;
	int h, w, c;
	int  f, stride, padding;
	int oh,ow,oc;

	// Openning file strem
	FILE* parameters_in = fopen("param.in","r");
	if (parameters_in == NULL)
	{
		printf("FILE parameters.in NOT FOUND");
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

	
	// output
	oh = (h-f)/stride + 1;
	ow = (w-f)/stride + 1;
	oc = c;

	output = (float***)malloc(oh * sizeof(float**));
	for(int i = 0; i < oh; i++)
	{
		output[i] = (float**)malloc(ow * sizeof(float*));
		for(int j = 0 ; j < ow; j++)
			output[i][j] = (float*)malloc(oc * sizeof(float));
	}

	//READING DATA
		
	for(int k = 0 ; k < c; k++)
		for(int i = 0; i <h; i++)
			for(int j = 0 ; j < w; j++)
				fscanf(image_in,"%f",&image[i][j][k]);
			

	//Test function

	maxpool(output, image, h, w, c, f, stride, padding);

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
*/		
	return 0;
}
