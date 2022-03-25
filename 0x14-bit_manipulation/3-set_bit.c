#include "main.h"
/**
*set_bit - change bit
*@n: pointer
*@index: position
*Return: 1 if work -1 is not
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);

	*n = (*n | 1 << index);

		return (1);

}
