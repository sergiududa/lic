#include <stdio.h>
#include <stdlib.h>
#include "headers/activations.h"
#include "headers/fc.h"
#include "headers/conv2d.h"
#include "headers/pool.h"
#include "headers/defines.h"



int main()
{
	float*** 	image;
	float**** 	conv_layer1_weights;
	float*		conv_layer1_bias;
	float***	conv_layer1_activation;
	float***	pool_layer1_out;

	float**** 	conv_layer2_weights;
	float*		conv_layer2_bias;
	float***	conv_layer2_activation;
	float***	pool_layer2_out;

	float*		flatten_layer;

	float**		fc_layer1_weights;
	float*		fc_layer1_bias;
	float*		fc_layer1_activation;

	float**		fc_layer2_weights;
	float*		fc_layer2_bias;
	float*		fc_layer2_activation;

	float**		fc_layer3_weights;
	float*		fc_layer3_bias;
	float*		fc_layer3_activation;

	/*****************************************************************/
	// ======================= Opening Files ========================//
	/*****************************************************************/


    //////////////////////
    /// Auxiliar Files ///
    //////////////////////

    FILE* out_conv = fopen("conv1.out","w");
    if(out_conv == NULL)
    {
        printf("Couldn't open conv1.out");
        exit(1);
    }


    FILE* out_pool = fopen("pool1.out","w");
    if(out_pool == NULL)
    {
        printf("Couldn't open pool1.out");
        exit(1);
    }


    FILE* out_flatten = fopen("flatten.out","w");
    if(out_flatten == NULL)
    {
        printf("Couldn't open flatten.out");
        exit(1);
    }

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

	//////////////////
	/// Image File ///
	//////////////////

	FILE* image_file = fopen("input_files/image.in","r");
	if(image_file == NULL)
	{
		printf("Cannot open input_files/image.out\n");
		exit(1);
	}

    printf("OPENING FILES: DONE\n");

	/*****************************************************************/
	// ========================= malloc =============================//
	/*****************************************************************/

	///////////////////////
	/// IMAGE ALLOC MEM ///
	///////////////////////

	image = (float***)malloc(IMAGE_SIZE * sizeof(float**));
	for(int i = 0 ; i < IMAGE_SIZE; i++)
	{
		image[i] = (float**)malloc(IMAGE_SIZE * sizeof(float*));
		for(int j = 0; j < IMAGE_SIZE; j++)
			image[i][j] = (float*)malloc(IMAGE_CHANNELS * sizeof(float));
	}


	///////////////////////////
	/// CONV1 Weights ALLOC ///
	///////////////////////////

	conv_layer1_weights = (float****)malloc(CONV1_KERNEL_SIZE * sizeof(float***));
	for(int i = 0; i < CONV1_KERNEL_SIZE; i++)
	{
		conv_layer1_weights[i] = (float***)malloc(CONV1_KERNEL_SIZE * sizeof(float**));
		for(int j = 0; j < CONV1_KERNEL_SIZE; j++)
		{
			conv_layer1_weights[i][j] = (float**)malloc(CONV1_CHANNELS * sizeof(float*));
			for(int k = 0; k < CONV1_CHANNELS; k++)
				conv_layer1_weights[i][j][k] = (float*)malloc(CONV1_FILTERS * sizeof(float));
		}
	}

	////////////////////////
	/// CONV1 BIAS ALLOC ///
	////////////////////////

	conv_layer1_bias = (float*)malloc(CONV1_BIAS_SIZE * sizeof(float));

	///////////////////////////
	/// CONV2 Weights ALLOC ///
	///////////////////////////

	conv_layer2_weights = (float****)malloc(CONV2_KERNEL_SIZE * sizeof(float***));
	for(int i = 0; i < CONV2_KERNEL_SIZE; i++)
	{
		conv_layer2_weights[i] = (float***)malloc(CONV2_KERNEL_SIZE * sizeof(float**));
		for(int j = 0; j < CONV2_KERNEL_SIZE; j++)
		{
			conv_layer2_weights[i][j] = (float**)malloc(CONV2_CHANNELS * sizeof(float*));
			for(int k = 0; k < CONV2_CHANNELS; k++)
				conv_layer2_weights[i][j][k] = (float*)malloc(CONV2_FILTERS * sizeof(float));
		}
	}

	////////////////////////
	/// CONV2 BIAS ALLOC ///
	////////////////////////

	conv_layer2_bias = (float*)malloc(CONV2_BIAS_SIZE * sizeof(float));

	/////////////////////////
	/// Layer1 Activation ///
	/////////////////////////

	conv_layer1_activation = (float***)malloc(A1_SIZE * sizeof(float**));
	for(int i = 0; i < A1_SIZE; i++)
	{
		conv_layer1_activation[i] = (float**)malloc(A1_SIZE * sizeof(float*));
		for(int j = 0; j < A1_SIZE; j++)
			conv_layer1_activation[i][j] = (float*)malloc(A1_CHANNELS * sizeof(float));
	}

	//////////////////////
	/// Layer1 Pooling ///
	//////////////////////

	pool_layer1_out = (float***)malloc(P1_SIZE * sizeof(float**));
	for(int i = 0; i < P1_SIZE; i++)
	{
		pool_layer1_out[i] = (float**)malloc(P1_SIZE * sizeof(float*));
		for(int j = 0; j <P1_SIZE; j++)
			pool_layer1_out[i][j] = (float*)malloc(P1_CHANNELS * sizeof(float));
	}

	/////////////////////////
	/// Layer2 Activation ///
	/////////////////////////

	conv_layer2_activation = (float***)malloc(A2_SIZE * sizeof(float**));
	for(int i = 0; i < A2_SIZE; i++)
	{
		conv_layer2_activation[i] = (float**)malloc(A2_SIZE * sizeof(float*));
		for(int j = 0; j < A2_SIZE; j++)
			conv_layer2_activation[i][j] = (float*)malloc(A2_CHANNELS * sizeof(float));
	}

	//////////////////////
	/// Layer2 Pooling ///
	//////////////////////

	pool_layer2_out = (float***)malloc(P2_SIZE * sizeof(float**));
	for(int i = 0; i < P2_SIZE; i++)
	{
		pool_layer2_out[i] = (float**)malloc(P2_SIZE * sizeof(float*));
		for(int j = 0; j <P2_SIZE; j++)
			pool_layer2_out[i][j] = (float*)malloc(P2_CHANNELS * sizeof(float));
	}


	/////////////////////
	/// FLATTEN ALLOC ///
	/////////////////////

	flatten_layer = (float*)malloc(FLATTEN_SIZE * sizeof(float));

	//////////////////////////////////////
	/// FULLY CONNECTED LAYER1 WEIGHTS ///
	//////////////////////////////////////

	fc_layer1_weights = (float**)malloc(FC1_WEIGHTS_H * sizeof(float*));
	for(int i = 0 ; i < FC1_WEIGHTS_H; i++)
		fc_layer1_weights[i] = (float*)malloc(FC1_WEIGHTS_W * sizeof(float));

	//////////////////////////////////////
	/// FULLY CONNECTED LAYER2 WEIGHTS ///
	//////////////////////////////////////

	fc_layer2_weights = (float**)malloc(FC2_WEIGHTS_H * sizeof(float*));
	for(int i = 0 ; i < FC2_WEIGHTS_H; i++)
		fc_layer2_weights[i] = (float*)malloc(FC2_WEIGHTS_W * sizeof(float));

	//////////////////////////////////////
	/// FULLY CONNECTED LAYER3 WEIGHTS ///
	//////////////////////////////////////

	fc_layer3_weights = (float**)malloc(FC3_WEIGHTS_H * sizeof(float*));
	for(int i = 0 ; i < FC3_WEIGHTS_H; i++)
		fc_layer3_weights[i] = (float*)malloc(FC3_WEIGHTS_W * sizeof(float));

	/////////////////////////////
	/// FULLY CONECTED BIASES ///
	/////////////////////////////

	fc_layer1_bias = (float*)malloc(FC1_BIAS_SIZE * sizeof(float));
	fc_layer2_bias = (float*)malloc(FC2_BIAS_SIZE * sizeof(float));
	fc_layer3_bias = (float*)malloc(FC3_BIAS_SIZE * sizeof(float));


	//////////////////////////////////////////
	/// FULLY CONNECTED LAYERS ACTIVATIONS ///
	//////////////////////////////////////////

	fc_layer1_activation = (float*)malloc(FC1_ACT_SIZE * sizeof(float));
	fc_layer2_activation = (float*)malloc(FC2_ACT_SIZE * sizeof(float));
	fc_layer3_activation = (float*)malloc(FC3_ACT_SIZE * sizeof(float));


    printf("MEMALLOC: DONE\n");

	/***********************************************************************/
	// ========================= Reading DATA =============================//
	/***********************************************************************/

	/////////////////////////////
	/// Reading CONV1 Weights ///
	/////////////////////////////

	for(int l = 0 ; l < CONV1_FILTERS; l++)
		for(int k = 0 ; k < CONV1_CHANNELS; k++)
			for(int i = 0; i < CONV1_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV1_KERNEL_SIZE; j++)
					fscanf(conv1_weights_file,"%f",&conv_layer1_weights[i][j][k][l]);

	/////////////////////////////
	/// Reading CONV2 Weights ///
	/////////////////////////////

	for(int l = 0 ; l < CONV2_FILTERS; l++)
		for(int k = 0 ; k < CONV2_CHANNELS; k++)
			for(int i = 0; i < CONV2_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV2_KERNEL_SIZE; j++)
					fscanf(conv2_weights_file,"%f",&conv_layer2_weights[i][j][k][l]);

	//////////////////////////
	/// Reading CONV1 BIAS ///
	//////////////////////////

	for(int i = 0; i < CONV1_BIAS_SIZE; i++)
		fscanf(conv1_biases_file,"%f",&conv_layer1_bias[i]);

	//////////////////////////
	/// Reading CONV2 BIAS ///
	//////////////////////////

	for(int i = 0; i < CONV2_BIAS_SIZE; i++)
		fscanf(conv2_biases_file,"%f",&conv_layer2_bias[i]);


	///////////////////////////
	/// Reading FC1 Weights ///
	///////////////////////////

	for(int i = 0; i < FC1_WEIGHTS_H; i++)
		for(int j = 0; j < FC1_WEIGHTS_W; j++)
			fscanf(fc1_weights_file,"%f", &fc_layer1_weights[i][j]);

	///////////////////////////
	/// Reading FC2 Weights ///
	///////////////////////////

	for(int i = 0; i < FC2_WEIGHTS_H; i++)
		for(int j = 0; j < FC2_WEIGHTS_W; j++)
			fscanf(fc2_weights_file,"%f", &fc_layer2_weights[i][j]);

	///////////////////////////
	/// Reading FC3 Weights ///
	///////////////////////////

	for(int i = 0; i < FC3_WEIGHTS_H; i++)
		for(int j = 0; j < FC3_WEIGHTS_W; j++)
			fscanf(fc3_weights_file,"%f", &fc_layer3_weights[i][j]);

	//////////////////////////
	/// Reading FC BIASES ///
	//////////////////////////

	for(int i = 0; i < FC1_BIAS_SIZE; i++)
		fscanf(fc1_biases_file,"%f", &fc_layer1_bias[i]);

	for(int i = 0; i < FC2_BIAS_SIZE; i++)
		fscanf(fc2_biases_file,"%f", &fc_layer2_bias[i]);

	for(int i = 0; i < FC3_BIAS_SIZE; i++)
		fscanf(fc3_biases_file,"%f", &fc_layer3_bias[i]);


	/////////////////////
	/// Reading IMAGE ///
	/////////////////////

	for(int k = 0 ; k < IMAGE_CHANNELS; k++)
		for(int i = 0; i < IMAGE_SIZE; i++)
			for(int j = 0 ; j < IMAGE_SIZE; j++)
				fscanf(image_file,"%f",&image[i][j][k]);

    printf("READING DATA: DONE\n");


	/*************************************************************************/
	// ========================= NEURAL NETWORK =============================//
	/*************************************************************************/

	////////////////////
	/// CONV LAYER 1 ///
	////////////////////

	conv2d(conv_layer1_activation, image, IMAGE_SIZE, IMAGE_SIZE, IMAGE_CHANNELS, conv_layer1_weights, CONV1_FILTERS, CONV1_KERNEL_SIZE, CONV1_STRIDE, 0, conv_layer1_bias, relu);
	maxpool(pool_layer1_out, conv_layer1_activation, A1_SIZE, A1_SIZE, A1_CHANNELS, P1_KERNEL_SIZE, P1_STRIDE, 0);

	////////////////////
	/// CONV LAYER 2 ///
	////////////////////

	conv2d(conv_layer2_activation, pool_layer1_out, P1_SIZE, P1_SIZE, P1_CHANNELS, conv_layer2_weights, CONV2_FILTERS, CONV2_KERNEL_SIZE, CONV2_STRIDE, 0, conv_layer2_bias, relu );
	maxpool(pool_layer2_out, conv_layer2_activation, A2_SIZE, A2_SIZE, A2_CHANNELS, P2_KERNEL_SIZE, P2_STRIDE, 0);

	// FLATTEN //
	flatten(flatten_layer, pool_layer2_out, P2_SIZE, P2_SIZE, P2_CHANNELS);

	//////////////////////////////
	/// FULLY CONNECTED LAYERS ///
	//////////////////////////////
/*
	fc(fc_layer1_activation, flatten_layer, FC1_ACT_SIZE, FLATTEN_SIZE, fc_layer1_weights, fc_layer1_bias, relu);
	fc(fc_layer2_activation, fc_layer1_activation, FC2_ACT_SIZE, FC1_ACT_SIZE, fc_layer2_weights, fc_layer2_bias, relu);
	fc(fc_layer3_activation, fc_layer2_activation, FC3_ACT_SIZE, FC2_ACT_SIZE, fc_layer3_weights, fc_layer3_bias, relu);
*/
	/// Print ///

    /*
    for(int i = 0; i < FC3_ACT_SIZE; i++)
        printf("%f ", fc_layer3_activation[i]);

    */

    FILE* debug = fopen("debug_c.out","w");

    for(int k = 0; k < FLATTEN_SIZE; k++)
    {
                fprintf(debug,"%f\n", flatten_layer[k]);
    }

/*

    for(int k = 0; k < A1_CHANNELS; k++)
    {
        for(int i = 0; i < A1_SIZE; i++)
        {
            for(int j = 0; j < A1_SIZE; j++)
                fprintf(debug,"%f\n", conv_layer1_activation[i][j][k]);
        }
    }
 */   return 0;
}
