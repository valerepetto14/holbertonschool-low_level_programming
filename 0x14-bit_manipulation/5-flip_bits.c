#include "main.h"

/**
*flip_bits - get number of bit
*@n: binary
*@m: binary
*Return: number of bit
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0, i;

	for (i = n ^ m; i != 0 && i > 0; i = i >> 1)
		count += i & 1;

	return (count);
}
