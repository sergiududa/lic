#ifndef __POOL_h
#define __POOL_h

void maxpool(float*** output, float*** image, int h, int w, int c, int f, int stride, int padding)
{
	/***
	Image format:			image[h][w][c];
	Output format:			outout[(h-f)/stride + 1][(2-f)/stride + 1][c]
	Filter format:			f X f
	Padding:				1 -> SAME convolution; 0 -> VALID convolution ** For the moment just valid convs**

*/
/**
	TODO: Padding for SAME and VALID convolutions
		  Check for CONV optimizations
		  		- SUGGESTION: optimize for own case stride = 1
*/
float max;
	for(int channel = 0; channel < c; channel++)
		for(int i = 0; i < w -f + 1; i += stride)
			for(int j = 0; j < h - f + 1; j += stride)
			{
				max = image[i][j][channel];
				for(int k = i; k < i + f; k++)
					for(int l = j; l < j + f; l++)
						max = image[k][l][channel] > max ? image[k][l][channel] : max;
			output[i/stride][j/stride][channel] = max;
			}

}

void avgpool(float*** output, float*** image, int h, int w, int c, int f, int stride, int padding)
{
	/***
	Image format:			image[h][w][c];
	Output format:			outout[(h-f)/stride + 1][(2-f)/stride + 1][c]
	Filter format:			f X f
	Padding:				1 -> SAME convolution; 0 -> VALID convolution ** For the moment just valid convs**

*/
/**
	TODO: Padding for SAME and VALID convolutions
		  Check for CONV optimizations
		  		- SUGGESTION: optimize for own case stride = 1
*/
float avg;
	for(int channel = 0; channel < c; channel++)
		for(int i = 0; i < w -f + 1; i += stride)
			for(int j = 0; j < h - f + 1; j += stride)
			{
				avg = 0;
				for(int k = i; k < i + f; k++)
					for(int l = j; l < j + f; l++)
						avg += image[k][l][channel];
			output[i/stride][j/stride][channel] = avg / (f*f);
			}

}

#endif
