#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "defines.h"

int main(int argc, char **argv)
{

    FILE* out = fopen("weights.h","w");

    int file_type;
    int n,m,p,q;
    printf("%d", argc);
    for(int i = 1; i < argc; i++)
    {

    FILE* input_file = fopen(argv[i],"r");
    if(input_file == NULL)
    {
        printf("File not found");
        exit(1);
    }
    ////////////
    /// BIAS ///
    ////////////

    if(strcmp(argv[i],"conv1_biases.out"))
    {
        n = CONV1_BIAS_SIZE;
        m = 1;
        p = 1;
        q = 1;
        fprintf(out,"float conv_layer1_bias[%d] = { ",n);

    }
    if(strcmp(argv[i],"conv2_biases.out"))
    {
        n = CONV2_BIAS_SIZE;
        m = 1;
        p = 1;
        q = 1;
        fprintf(out,"float conv_layer2_bias[%d] = { ",n);
    }

    if(strcmp(argv[i],"fc1_bias.out"))
    {
        n = FC1_BIAS_SIZE;
        m = 1;
        p = 1;
        q = 1;
        fprintf(out,"float fc_layer1_bias[%d] = { ",n);
    }
    if(strcmp(argv[i],"fc2_bias.out"))
    {
        n = FC2_BIAS_SIZE;
        m = 1;
        p = 1;
        q = 1;
        fprintf(out,"float fc_layer2_bias[%d] = { ",n);
    }
    if(strcmp(argv[i],"fc3_bias.out"))
    {
        n = FC3_BIAS_SIZE;
        m = 1;
        p = 1;
        q = 1;
        fprintf(out,"float fc_layer3_bias[%d] = { ",n);
    }

    ///////////////
    /// Weights ///
    ///////////////


    if(strcmp(argv[i],"conv1_weights.out"))
    {
        file_type = 2;

        n = CONV1_KERNEL_SIZE;
        m = CONV1_KERNEL_SIZE;
        p = CONV1_CHANNELS;
        q = CONV1_FILTERS;

        fprintf(out,"float conv_layer1_weights[%d][%d][%d][%d] = { ",n,m,p,q);

    }
    if(strcmp(argv[i],"conv2_weights.out"))
    {
        file_type = 2;

        n = CONV2_KERNEL_SIZE;
        m = CONV2_KERNEL_SIZE;
        p = CONV2_CHANNELS;
        q = CONV2_FILTERS;

        fprintf(out,"float conv_layer2_weights[%d][%d][%d][%d] = { ",n,m,p,q);
    }

    if(strcmp(argv[i],"fc1_weights.out"))
    {
        n = FC1_WEIGHTS_H;
        m = FC1_WEIGHTS_W;
        p = 1;
        q = 1;

        fprintf(out,"float fc_layer1_weights[%d][%d] = { ",n,m);
    }
    if(strcmp(argv[i],"fc2_weights.out"))
    {
        n = FC2_WEIGHTS_H;
        m = FC2_WEIGHTS_W;
        p = 1;
        q = 1;

        fprintf(out,"float fc_layer2_weights[%d][%d] = { ",n,m);
    }
    if(strcmp(argv[i],"fc3_weights.out"))
    {
        n = FC3_WEIGHTS_H;
        m = FC3_WEIGHTS_W;
        p = 1;
        q = 1;

        fprintf(out,"float fc_layer3_weights[%d][%d] = { ",n,m);
    }

    if(strcmp(argv[i],"image.in"))
    {
        n = IMAGE_SIZE;
        m = IMAGE_SIZE;
        p = IMAGE_CHANNELS;
        q = 1;

        fprintf(out,"float image[%d][%d][%d] = { ",n,m,p);
    }

    float placeholder[n][m][p][q];

	for(int l = 0 ; l < q; l++)
		for(int k = 0 ; k < p; k++)
			for(int i = 0; i < n; i++)
				for(int j = 0 ; j < m; j++)
					fscanf(input_file,"%f",&placeholder[i][j][k][l]);

    for(int i = 0; i < n; i++)
        for(int j = 0 ; j < m; j++)
            for(int k = 0 ; k < p; k++)
                for(int l = 0 ; l < q; l++)
                    if( i == l && l == j && j == k && i == 0)
                        fprintf(out,"%f", placeholder[i][j][k][l]);
                    else
                        fprintf(out,", %f",placeholder[i][j][k][l]);
    fprintf(out,"};\n");

    }
    return 0;
}
