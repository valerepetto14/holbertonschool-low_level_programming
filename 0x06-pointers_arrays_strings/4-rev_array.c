#include "main.h"
/**
*reverse_array - ddddd
*@a: dddd
*@n: ddd
**/
void reverse_array(int *a, int n)
{
	int b = 0;
	int AUX;

	for (b = 0; b < n / 2 ; b++)
	{
		AUX = a[b];
		a[b] = a[n - b - 1];
		a[n - b - 1] = AUX;
	}
}
