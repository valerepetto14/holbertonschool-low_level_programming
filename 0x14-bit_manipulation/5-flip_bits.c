#include "main.h"
/**
*flip_bits - get number of number a change
*@n: binary
*@m: binary
*Return: number
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0, i = n ^ m;

	while (i != 0)
	{
		count += i & 1;
		i = i >> 1
	}	
	return (count);
}
