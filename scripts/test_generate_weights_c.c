#include "weights.h"
#include "../headers/defines.h"
#include <stdio.h>
#include <stdlib.h>


int main()
{

	float conv_layer1_bias_orig[8];
	float conv_layer1_weights_orig[4][4][1][8];
	float conv_layer2_bias_orig[16];
	float conv_layer2_weights_orig[2][2][8][16];
	float fc_layer1_bias_orig[120];
	float fc_layer1_weights_orig[576][120];
	float fc_layer2_bias_orig[84];
	float fc_layer2_weights_orig[120][84];
	float fc_layer3_bias_orig[10];
	float fc_layer3_weights_orig[84][10];
	float image_orig[32][32][1];


	FILE* image_orig_file = fopen("input_files/image.in","r");
	if(image_orig_file == NULL)
	{
		printf("Cannot open input_files/image_orig.out\n");
		exit(1);
	}

    printf("OPENING FILES: DONE\n");


	/////////////////////////
	/// Conv Layers Files ///
	/////////////////////////

	FILE* conv1_weights_file = fopen("input_files/conv1_weights.out","r");
	if(conv1_weights_file == NULL)
	{
		printf("Cannot open input_files/conv1_weights.out\n");
		exit(1);
	}


	FILE* conv1_biases_file = fopen("input_files/conv1_biases.out","r");
	if(conv1_biases_file == NULL)
	{
		printf("Cannot open input_files/conv1_biases.out\n");
		exit(1);
	}


	FILE* conv2_weights_file = fopen("input_files/conv2_weights.out","r");
	if(conv2_weights_file == NULL)
	{
		printf("Cannot open input_files/conv2_weights.out\n");
		exit(1);
	}


	FILE* conv2_biases_file = fopen("input_files/conv2_biases.out","r");
	if(conv2_biases_file == NULL)
	{
		printf("Cannot open input_files/conv2_biases.out\n");
		exit(1);
	}

	//////////////////////
	/// FC Layer Files ///
	//////////////////////

	FILE* fc1_weights_file = fopen("input_files/fc1_weights.out","r");
	if(fc1_weights_file == NULL)
	{
		printf("Cannot open input_files/fc1_weights.out\n");
		exit(1);
	}


	FILE* fc1_biases_file = fopen("input_files/fc1_bias.out","r");
	if(fc1_biases_file == NULL)
	{
		printf("Cannot open input_files/fc1_bias.out\n");
		exit(1);
	}


	FILE* fc2_weights_file = fopen("input_files/fc2_weights.out","r");
	if(fc2_weights_file == NULL)
	{
		printf("Cannot open input_files/fc2_weights.out\n");
		exit(1);
	}


	FILE* fc2_biases_file = fopen("input_files/fc2_bias.out","r");
	if(fc2_biases_file == NULL)
	{
		printf("Cannot open input_files/fc2_bias.out\n");
		exit(1);
	}


	FILE* fc3_weights_file = fopen("input_files/fc3_weights.out","r");
	if(fc3_weights_file == NULL)
	{
		printf("Cannot open input_files/fc3_weights.out\n");
		exit(1);
	}


	FILE* fc3_biases_file = fopen("input_files/fc3_bias.out","r");
	if(fc3_biases_file == NULL)
	{
		printf("Cannot open input_files/fc3_bias.out\n");
		exit(1);
	}



	/////////////////////////////
	/// Reading CONV1 Weights ///
	/////////////////////////////

	for(int l = 0 ; l < CONV1_FILTERS; l++)
		for(int k = 0 ; k < CONV1_CHANNELS; k++)
			for(int i = 0; i < CONV1_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV1_KERNEL_SIZE; j++)
					fscanf(conv1_weights_file,"%f",&conv_layer1_weights_orig[i][j][k][l]);

	/////////////////////////////
	/// Reading CONV2 Weights ///
	/////////////////////////////

	for(int l = 0 ; l < CONV2_FILTERS; l++)
		for(int k = 0 ; k < CONV2_CHANNELS; k++)
			for(int i = 0; i < CONV2_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV2_KERNEL_SIZE; j++)
					fscanf(conv2_weights_file,"%f",&conv_layer2_weights_orig[i][j][k][l]);

	//////////////////////////
	/// Reading CONV1 BIAS ///
	//////////////////////////

	for(int i = 0; i < CONV1_BIAS_SIZE; i++)
		fscanf(conv1_biases_file,"%f",&conv_layer1_bias_orig[i]);

	//////////////////////////
	/// Reading CONV2 BIAS ///
	//////////////////////////

	for(int i = 0; i < CONV2_BIAS_SIZE; i++)
		fscanf(conv2_biases_file,"%f",&conv_layer2_bias_orig[i]);


	///////////////////////////
	/// Reading FC1 Weights ///
	///////////////////////////

	for(int i = 0; i < FC1_WEIGHTS_H; i++)
		for(int j = 0; j < FC1_WEIGHTS_W; j++)
			fscanf(fc1_weights_file,"%f", &fc_layer1_weights_orig[i][j]);

	///////////////////////////
	/// Reading FC2 Weights ///
	///////////////////////////

	for(int i = 0; i < FC2_WEIGHTS_H; i++)
		for(int j = 0; j < FC2_WEIGHTS_W; j++)
			fscanf(fc2_weights_file,"%f", &fc_layer2_weights_orig[i][j]);

	///////////////////////////
	/// Reading FC3 Weights ///
	///////////////////////////

	for(int i = 0; i < FC3_WEIGHTS_H; i++)
		for(int j = 0; j < FC3_WEIGHTS_W; j++)
			fscanf(fc3_weights_file,"%f", &fc_layer3_weights_orig[i][j]);

	//////////////////////////
	/// Reading FC BIASES ///
	//////////////////////////

	for(int i = 0; i < FC1_BIAS_SIZE; i++)
		fscanf(fc1_biases_file,"%f", &fc_layer1_bias_orig[i]);

	for(int i = 0; i < FC2_BIAS_SIZE; i++)
		fscanf(fc2_biases_file,"%f", &fc_layer2_bias_orig[i]);

	for(int i = 0; i < FC3_BIAS_SIZE; i++)
		fscanf(fc3_biases_file,"%f", &fc_layer3_bias_orig[i]);


	/////////////////////
	/// Reading image_orig ///
	/////////////////////

	for(int k = 0 ; k < IMAGE_CHANNELS; k++)
		for(int i = 0; i < IMAGE_SIZE; i++)
			for(int j = 0 ; j < IMAGE_SIZE; j++)
				fscanf(image_orig_file,"%f",&image_orig[i][j][k]);




	///////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////


	for(int l = 0 ; l < CONV1_FILTERS; l++)
		for(int k = 0 ; k < CONV1_CHANNELS; k++)
			for(int i = 0; i < CONV1_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV1_KERNEL_SIZE; j++)
					if(conv_layer1_weights_orig[i][j][k][l] != conv_layer1_weights[i][j][k][l])
					{
						printf("Error in Conv1 Weights %d %d %d %d\n",i,j,k,l);
						exit(1);
					}


	for(int l = 0 ; l < CONV2_FILTERS; l++)
		for(int k = 0 ; k < CONV2_CHANNELS; k++)
			for(int i = 0; i < CONV2_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV2_KERNEL_SIZE; j++)
					if(conv_layer2_weights_orig[i][j][k][l] != conv_layer2_weights[i][j][k][l])
					{
						printf("Error in Conv2 Weights\n");
						exit(1);
					}

	for(int i = 0; i < CONV1_BIAS_SIZE; i++)
		if(conv_layer1_bias_orig[i] != conv_layer1_bias[i])
		{
			printf("Error in Conv1 Biases\n");
			exit(1);
		}

	for(int i = 0; i < CONV2_BIAS_SIZE; i++)
		if(conv_layer2_bias_orig[i] != conv_layer2_bias[i])
		{
			printf("Error in Conv2 Biases\n");
			exit(1);
		}

	///////////////////////////////////////////////////////////////////

	for(int i = 0; i < FC1_WEIGHTS_H; i++)
		for(int j = 0; j < FC1_WEIGHTS_W; j++)
			if(fc_layer1_weights_orig[i][j] != fc_layer1_weights[i][j])
			{
				printf("Error in FC1 Weights\n");
				exit(1);
			}

	for(int i = 0; i < FC2_WEIGHTS_H; i++)
		for(int j = 0; j < FC2_WEIGHTS_W; j++)
			if(fc_layer2_weights_orig[i][j] != fc_layer2_weights[i][j])
			{
				printf("Error in FC2 Weights\n");
				exit(1);
			}

	for(int i = 0; i < FC3_WEIGHTS_H; i++)
		for(int j = 0; j < FC3_WEIGHTS_W; j++)
			if(fc_layer3_weights_orig[i][j] != fc_layer3_weights[i][j])
			{
				printf("Error in FC3 Weights\n");
				exit(1);
			}

	for(int i = 0; i < FC1_BIAS_SIZE; i++)
		if(fc_layer1_bias_orig[i] != fc_layer1_bias[i])
		{
			printf("Error in FC1 Biases\n");
			exit(1);
		}

	for(int i = 0; i < FC2_BIAS_SIZE; i++)
		if(fc_layer2_bias_orig[i] != fc_layer2_bias[i])
		{
			printf("Error in FC2 Biases\n");
			exit(1);
		}

	for(int i = 0; i < FC3_BIAS_SIZE; i++)
		if(fc_layer3_bias_orig[i] != fc_layer3_bias[i])
		{
			printf("Error in FC3 Biases\n");
			exit(1);
		}

	//////////////////////////////////////////////////////////////////////

	
	for(int k = 0 ; k < IMAGE_CHANNELS; k++)
		for(int i = 0; i < IMAGE_SIZE; i++)
			for(int j = 0 ; j < IMAGE_SIZE; j++)
				if(image_orig[i][j][k] != image[i][j][k])
				{
					printf("Error in image Biases\n");
					exit(1);
				}

	return 0;
}