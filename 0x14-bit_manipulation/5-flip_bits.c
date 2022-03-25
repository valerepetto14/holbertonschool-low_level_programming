#include "main.h"
/**
*flip_bits - get number of number a change
*@n: binary
*@m: binary
*Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, i;

	for (i = n ^ m; i != 0; i = i >> 1)
		count += i & 1;

	return (count);
}
