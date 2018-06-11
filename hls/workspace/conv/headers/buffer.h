#ifndef _BUFFER_H_
#define _BUFFER_H_
#include "ap_fixed.h"

#define FLOAT_IDTH		24
#define INT_WIDTH	4

typedef ap_fixed<FLOAT_WIDTH, INT_WIDTH> float24_t;

template<int SIZE>
class buffer
{
public:
	buffer();
	void SetValue(float24_t val, int pos);
	void InsertFront(float24_t val);
	void InsertBack(float24_t val);
	float24_t GetValue(int pos);
private:
	float24_t array[SIZE];
};


/////////////////////////////////////////////////
// buffer.cpp
/////////////////////////////////////////////////

template<int SIZE>
buffer<SIZE>::buffer()
{
	for(int i = 0; i < SIZE; i++)
		array[i] = 0;
}


template<int SIZE>
void buffer<SIZE>::SetValue(float24_t val, int pos)
{
	array[pos] = val;
}

template<int SIZE>
void buffer<SIZE>::InsertFront(float24_t val)
{
	int i;
	for(i = SIZE-1; i > 0 ; i--)
		array[i] = array[i - 1];
	array[0] = val;
}


template<int SIZE>
void buffer<SIZE>::InsertBack(float24_t val)
{
	int i;
	for(i = 0; i < SIZE - 1; i++)
		array[i] = array[i + 1];
	array[SIZE - 1] = val;
}


template<int SIZE>
float24_t buffer<SIZE>::GetValue(int pos)
{
	return array[pos];
}

#endif
