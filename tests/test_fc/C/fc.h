#ifndef __FC_H
#define __FC_H

void fc(float* output, float* input, int output_size, int input_size, float** weight, float* bias, float (*activation_function)(float))
{

	/**
		Z = input * weights + bias
		output = activation_function(Z)l

		input 	-- vector of size input_size
		output  -- vector of size output_size
		weights -- matrix of size input_size X output_size
		bias    -- vector of size input_size
	*/

	for(int i = 0; i < output_size; i++)
	{
		output[i] = 0;
		for(int j = 0; j < input_size; j++)
			output[i] += weight[j][i] * input[j];
		output[i] += bias[i];
		output[i] = activation_function(output[i]);
	}

}

void flatten(float* output, float*** input, int input_hight, int input_width, int number_of_channels)
{
	for(int k = 0; k < number_of_channels; k++)
		for(int i = 0; i < input_hight; i++)
			for(int j = 0; j < input_width; j++)
				output[k * input_width * input_hight + i * input_width + j] = input[i][j][k];
}

#endif