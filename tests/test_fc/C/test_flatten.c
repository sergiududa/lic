#include <stdio.h>
#include <stdlib.h>
#include "fc.h"

int main()
{
	float*** input;
	float* output;
	int n,m,c;
	n = 2;
	m = 2;
	c = 2;

	input = (float***)malloc(n * sizeof(float**));
	for(int i = 0; i < n; i++)
	{
		input[i] = (float**)malloc(m * sizeof(float*));
		for(int j = 0; j < m; j++)
			input[i][j] = (float*)malloc(c * sizeof(float));
	}

	output = (float*)malloc(n*m*c * sizeof(float));

	int counter = 0;
	for(int k = 0; k < c; k++)
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				input[i][j][k] = ++counter;

	flatten(output, input, n,m,c);
	for(int i = 0; i < n*m*c; i++)
		printf("%f\n ", output[i]);
	
	
	
	return 0;
}