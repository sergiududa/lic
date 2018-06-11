#ifndef __ACTIVATIONS_H
#define __ACTIVATIONS_H


#include "ap_fixed.h"

#define FLOAT_WIDTH		24
#define INT_WIDTH	4

typedef ap_fixed<FLOAT_WIDTH, INT_WIDTH> float24_t;

float24_t relu(float24_t a)
{
	return a >(float24_t) 0 ? a : (float24_t)0;
}

#endif
