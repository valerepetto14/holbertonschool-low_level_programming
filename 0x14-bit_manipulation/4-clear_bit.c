#include "main.h"
/**
*clear_bit - change a 0
*@n: pointer
*@index: position
*Return: 1 or -1
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = *n & ~(1 << index);

		return (1);

}
