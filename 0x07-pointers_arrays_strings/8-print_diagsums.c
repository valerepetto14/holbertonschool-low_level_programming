#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - printea
 * @a: int
 * @size: tamaño
 **/
void print_diagsums(int *a, int size)
{
	int i;
	int sum = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		sum2 += a[i];
		a -= size;
	}

	printf("%i, %i\n", sum, sum2);
}
