#include <stdio.h>
#include <stdlib.h>

#define eps 0.0001
int main()
{


    /////////////////////////////////
    /// Opening C-generated files ///
    /////////////////////////////////

    FILE* conv_layer1_c = fopen("debug/conv_layer1_c.out","r");
    if(conv_layer1_c == NULL)
    {
        printf("Couldn't open debug/conv_layer1_c.out");
        exit(1);
    }


    FILE* pool_layer1_c = fopen("debug/pool_layer1_c.out","r");
    if(pool_layer1_c == NULL)
    {
        printf("Couldn't open debug/pool_layer1_c.out");
        exit(1);
    }


    FILE* conv_layer2_c = fopen("debug/conv_layer2_c.out","r");
    if(conv_layer2_c == NULL)
    {
        printf("Couldn't open debug/conv_layer2_c.out");
        exit(1);
    }


    FILE* pool_layer2_c = fopen("debug/pool_layer2_c.out","r");
    if(pool_layer2_c == NULL)
    {
        printf("Couldn't open debug/pool_layer2_c.out");
        exit(1);
    }

    FILE* flatten_c = fopen("debug/flatten_c.out","r");
    if(flatten_c == NULL)
    {
        printf("Couldn't open debug/flatten_c.out");
        exit(1);
    }

    FILE* fc_layer1_c = fopen("debug/fc_layer1_c.out","r");
    if(fc_layer1_c == NULL)
    {
        printf("Couldn't open debug/fc_layer1_c.out");
        exit(1);
    }


    FILE* fc_layer2_c = fopen("debug/fc_layer2_c.out","r");
    if(fc_layer2_c == NULL)
    {
        printf("Couldn't open debug/fc_layer2_c.out");
        exit(1);
    }


    FILE* fc_layer3_c = fopen("debug/fc_layer3_c.out","r");
    if(fc_layer3_c == NULL)
    {
        printf("Couldn't open debug/fc_layer3_c.out");
        exit(1);
    }
    
	

    //////////////////////////////////////
	/// Opening Python-generated files ///
	//////////////////////////////////////
	
	FILE* conv_layer1_py = fopen("debug/conv_layer1_py.out","r");
    if(conv_layer1_py == NULL)
    {
        printf("Couldn't open debug/conv_layer1_py.out");
        exit(1);
    }


    FILE* pool_layer1_py = fopen("debug/pool_layer1_py.out","r");
    if(pool_layer1_py == NULL)
    {
        printf("Couldn't open debug/pool_layer1_py.out");
        exit(1);
    }


    FILE* conv_layer2_py = fopen("debug/conv_layer2_py.out","r");
    if(conv_layer2_py == NULL)
    {
        printf("Couldn't open debug/conv_layer2_py.out");
        exit(1);
    }


    FILE* pool_layer2_py = fopen("debug/pool_layer2_py.out","r");
    if(pool_layer2_py == NULL)
    {
        printf("Couldn't open debug/pool_layer2_py.out");
        exit(1);
    }

    FILE* flatten_py = fopen("debug/flatten_py.out","r");
    if(flatten_py == NULL)
    {
        printf("Couldn't open debug/flatten_py.out");
        exit(1);
    }

    FILE* fc_layer1_py = fopen("debug/fc_layer1_py.out","r");
    if(fc_layer1_py == NULL)
    {
        printf("Couldn't open debug/fc_layer1_py.out");
        exit(1);
    }


    FILE* fc_layer2_py = fopen("debug/fc_layer2_py.out","r");
    if(fc_layer2_py == NULL)
    {
        printf("Couldn't open debug/fc_layer2_py.out");
        exit(1);
    }


    FILE* fc_layer3_py = fopen("debug/fc_layer3_py.out","r");
    if(fc_layer3_py == NULL)
    {
        printf("Couldn't open debug/fc_layer3_py.out");
        exit(1);
    }
	
	int correct_values = 0, total_values = 0;

	float c;
	float py;
	

    printf("Checking CONV Layer 1 ...\n");

	while(fscanf(conv_layer1_c,"%f",&c) == 1)
	{
		fscanf(conv_layer1_py,"%f",&py);
        total_values++;
		if(c - py > eps || py - c > eps)
		{
			printf("ERROR: Missmatch at line %d",correct_values + 1);
			exit(1);
		}	
		else
			correct_values++;
	}

	printf("DONE: %d out of %d are correct\n", correct_values, total_values);


    total_values = 0;
    correct_values = 0;

    printf("Checking POOL Layer 1 ...\n");

    while(fscanf(pool_layer1_c,"%f",&c) == 1)
    {
        fscanf(pool_layer1_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);
	
    
    total_values = 0;
    correct_values = 0;


    printf("Checking CONV Layer 2 ...\n");

    while(fscanf(conv_layer2_c,"%f",&c) == 1)
    {
        fscanf(conv_layer2_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);


    total_values = 0;
    correct_values = 0;

    printf("Checking POOL Layer 2 ...\n");

    while(fscanf(pool_layer2_c,"%f",&c) == 1)
    {
        fscanf(pool_layer2_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);
    
    total_values = 0;
    correct_values = 0;

    printf("Checking FLATTEN ...\n");

    while(fscanf(flatten_c,"%f",&c) == 1)
    {
        fscanf(flatten_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);
    



    total_values = 0;
    correct_values = 0;

    printf("Checking Fully Connected Layer 1 ...\n");

    while(fscanf(fc_layer1_c,"%f",&c) == 1)
    {
        fscanf(fc_layer1_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);
    



    total_values = 0;
    correct_values = 0;

    printf("Checking Fully Connected Layer 2 ...\n");

    while(fscanf(fc_layer2_c,"%f",&c) == 1)
    {
        fscanf(fc_layer2_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);
    

    total_values = 0;
    correct_values = 0;

    printf("Checking Fully Connected Layer 3 ...\n");

    while(fscanf(fc_layer3_c,"%f",&c) == 1)
    {
        fscanf(fc_layer3_py,"%f",&py);
        total_values++;
        if(c - py > eps || py - c > eps)
        {
            printf("ERROR: Missmatch at line %d",correct_values + 1);
            exit(1);
        }   
        else
            correct_values++;
    }

    printf("DONE: %d out of %d are correct\n", correct_values, total_values);
    
    printf("\nNeural Network Fully Checked\n");
	return 0;
}

