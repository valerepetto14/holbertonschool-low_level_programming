#include "main.h"
/**
*reverse_array- asd
*@a: asd
*@n: asd
**/
void reverse_array(int *a, int n)
{
	int sup, i;

	for (i = n - 1; i >= n / 2; i--)
	{
		sup = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = sup;
	}
}
