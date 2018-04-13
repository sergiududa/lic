#include <stdio.h>
#define A_SIZE 			2
#define A_CHANNELS		30
#define SIZE 			6728
#define CHANNEL_SIZE 	841

int main()
{
	FILE* debug_py = fopen("../nnet_test/python/debug_py.out","r");
	FILE* debug_c = fopen("../nnet_test/test_nnet/debug_c.out","r");

	int counter = 0;
	int channels[A_CHANNELS] = {0};
	float c[A_SIZE][A_SIZE][A_CHANNELS];
	float py[A_SIZE][A_SIZE][A_CHANNELS];
	float eps= 0.01;

	for(int k = 0; k < A_CHANNELS; k++)
		for(int i = 0; i < A_SIZE; i++)
			for(int j = 0; j < A_SIZE; j++)
			{
				fscanf(debug_c, "%f", &c[i][j][k]);
				fscanf(debug_py,"%f",&py[i][j][k]);
				if(c[i][j][k] - py[i][j][k] > eps || py[i][j][k] - c[i][j][k] > eps)
				{
					printf("Expected %f, Got %f \n",py[i][j][k],c[i][j][k]);
					counter++;
					channels[k]++;
				}
			}
	for(int i = 0; i < A_CHANNELS; i++)
		printf("%d ", channels[i]);
	printf("Total errors: %d\n", counter);
	
	return 0;
}

