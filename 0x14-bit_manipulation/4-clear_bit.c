#include "holberton.h"
int clear_bit(unsigned long int *n, unsigned int index)
{

	int mask = 1 << index;
	*n = (*n & ~mask) | ((0 << index) & mask);
	return (1);
}
