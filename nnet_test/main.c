#include <stdio.h>
#include <stdlib.h>
#include "headers/activations.h"
#include "headers/fc.h"
#include "headers/conv2d.h"
#include "headers/pool.h"

#define IMAGE_SIZE 			32
#define IMAGE_CHANNELS		1

#define CONV1_KERNEL_SIZE 	4
#define CONV1_CHANNELS 		1
#define CONV1_FILTERS 		8
#define CONV1_BIAS_SIZE 	8
#define CONV1_STRIDE 		1

#define CONV2_KERNEL_SIZE 	2
#define CONV2_CHANNELS 		8
#define CONV2_FILTERS 		16
#define CONV2_BIAS_SIZE		16
#define CONV2_STRIDE 		1

#define A1_SIZE				29
#define A1_CHANNELS			8				


#define P1_SIZE				14
#define P1_CHANNELS			8
#define P1_KERNEL_SIZE		2
#define P1_STRIDE			2

#define A2_SIZE				13
#define A2_CHANNELS			16

#define P2_SIZE				6
#define P2_CHANNELS			16
#define P2_KERNEL_SIZE		2
#define P2_STRIDE			2

#define FLATTEN_SIZE		96

#define FC1_WEIGHTS_H		96
#define FC1_WEIGHTS_W		120
#define FC1_BIAS_SIZE		120

#define FC2_WEIGHTS_H		120
#define FC2_WEIGHTS_W		84
#define FC2_BIAS_SIZE		84

#define FC3_WEIGHTS_H		84
#define FC3_WEIGHTS_W		10
#define FC3_BIAS_SIZE		10

#define FC1_ACT_SIZE		120
#define FC2_ACT_SIZE		84
#define FC3_ACT_SIZE		10



int main()
{
	float*** 	image;
	float**** 	conv_layer1_weights; 	 
	float*		conv_layer1_bias;    	 
	float***	conv_layer1_activation;	 
	float***	pool_layer1_out;     	 
-	
	float**** 	conv_layer2_weights; 	 
	float*		conv_layer2_bias;   	 
	float***	conv_layer2_activation;  
	float***	pool_layer2_out;    	 
	
	float*		flatten_layer;
	
	float**		fc_layer1_weights;
	float*		fc_layer1_bias
	float*		fc_layer1_activation;

	float**		fc_layer2_weights;
	float*		fc_layer2_bias
	float*		fc_layer2_activation;
	
	float**		fc_layer3_weights;
	float*		fc_layer3_bias
	float*		fc_layer3_activation;

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
					fscanf(/***PLACEHOLDER***/,"%f",&conv_layer1_weights[i][j][k][l]);

	/////////////////////////////
	/// Reading CONV2 Weights ///
	/////////////////////////////

	for(int l = 0 ; l < CONV2_FILTERS; l++)
		for(int k = 0 ; k < CONV2_CHANNELS; k++)
			for(int i = 0; i < CONV2_KERNEL_SIZE; i++)
				for(int j = 0 ; j < CONV2_KERNEL_SIZE; j++)
					fscanf(/***PLACEHOLDER***/,"%f",&conv_layer2_weights[i][j][k][l]);

	//////////////////////////
	/// Reading CONV1 BIAS ///
	//////////////////////////

	for(int i = 0; i < CONV1_BIAS_SIZE; i++)
		fscanf(/***PLACEHOLDER***/,"%f",&conv_layer1_bias[i]);

	//////////////////////////
	/// Reading CONV2 BIAS ///
	//////////////////////////

	for(int i = 0; i < CONV2_BIAS_SIZE; i++)
		fscanf(/***PLACEHOLDER***/,"%f",&conv_layer2_bias[i]);


	///////////////////////////
	/// Reading FC1 Weights ///
	///////////////////////////
	
	for(int i = 0; i < FC1_WEIGHTS_H; i++)
		for(int j = 0; j < FC1_WEIGHTS_W; j++)
			fscanf(/*PLACEHOLDER*/,"%f", &fc_layer1_weights[i][j]);

	///////////////////////////
	/// Reading FC2 Weights ///
	///////////////////////////
	
	for(int i = 0; i < FC2_WEIGHTS_H; i++)
		for(int j = 0; j < FC2_WEIGHTS_W; j++)
			fscanf(/*PLACEHOLDER*/,"%f", &fc_layer2_weights[i][j]);

	///////////////////////////
	/// Reading FC3 Weights ///
	///////////////////////////
	
	for(int i = 0; i < FC3_WEIGHTS_H; i++)
		for(int j = 0; j < FC3_WEIGHTS_W; j++)
			fscanf(/*PLACEHOLDER*/,"%f", &fc_layer3_weights[i][j]);

	//////////////////////////
	/// Reading FC BIASES ///
	//////////////////////////
	
	for(int i = 0; i < FC1_BIAS_SIZE; i++)
		fscanf(/*PLACEHOLDER*/,"%f", &fc_layer1_bias[i]);

	for(int i = 0; i < FC2_BIAS_SIZE; i++)
		fscanf(/*PLACEHOLDER*/,"%f", &fc_layer2_bias[i]);

	for(int i = 0; i < FC3_BIAS_SIZE; i++)
		fscanf(/*PLACEHOLDER*/,"%f", &fc_layer3_bias[i]);


	/////////////////////
	/// Reading IMAGE ///
	/////////////////////

	for(int k = 0 ; k < IMAGE_CHANNELS; k++)
		for(int i = 0; i < IMAGE_SIZE; i++)
			for(int j = 0 ; j < IMAGE_SIZE; j++)
				fscanf(/*PLACEHOLDER*/,"%f",&image[i][j][k]);


	/*************************************************************************/
	// ========================= NEURAL NETWORK =============================// 
	/*************************************************************************/

	////////////////////
	/// CONV LAYER 1 ///
	////////////////////

	conv2d(conv_layer1_activation, image, IMAGE_SIZE, IMAGE_SIZE, IMAGE_CHANNELS, conv_layer1_weights, CONV1_FILTERS, CONV1_KERNEL_SIZE, CONV1_STRIDE, 0, conv_layer1_bias, relu);
	maxpool(pool_layer1_out, conv_layer1_activation, A1_SIZE, A1_SIZE, A1_CHANNELS, P1_KERNEL_SIZE, P1_STRIDE, 0)
	
	////////////////////
	/// CONV LAYER 2 ///
	////////////////////

	conv2d(conv_layer2_activation, pool_layer1_out, P1_SIZE, P1_SIZE, P1_CHANNELS, conv_layer2_weights, CONV2_FILTERS, CONV2_KERNEL_SIZE, CONV2_STRIDE, 0, conv_layer2_bias, relu);
	maxpool(pool_layer2_out, conv_layer2_activation, A2_SIZE, A2_SIZE, A2_CHANNELS, P2_KERNEL_SIZE, P2_STRIDE, 0)

	// FLATTEN
	flatten(flatten_layer, pool_layer2_out, P2_SIZE, P2_SIZE, P2_CHANNELS)


	//////////////////////////////
	/// FULLY CONNECTED LAYERS ///
	//////////////////////////////

	fc(fc_layer1_activation, flatten_layer, FC1_ACT_SIZE, FLATTEN_SIZE, fc_layer1_weights, fc_layer1_bias, relu);
	fc(fc_layer2_activation, fc_layer1_activation, FC2_ACT_SIZE, FC1_ACT_SIZE, fc_layer2_weights, fc_layer2_bias, relu);
	fc(fc_layer3_activation, fc_layer2_activation, FC3_ACT_SIZE, FC2_ACT_SIZE, fc_layer3_weights, fc_layer3_bias, relu);

	
	return 0;
}
