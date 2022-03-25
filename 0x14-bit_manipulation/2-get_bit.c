#include "main.h"
/**
 *get_bit - get position
 *@index: position
 *@n: number
 *Return: value -1 or num_bin
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int num_bin = (n >> index) & 1;

	if (index > 64)
		return (-1);

	return (num_bin);
}
