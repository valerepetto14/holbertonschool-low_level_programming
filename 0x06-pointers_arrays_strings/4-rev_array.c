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

	n -= 1;
	for (b = 0; b < n / 2 ; b++, n--)
	{
		AUX = a[n];
		a[n] = a[b];
		a[b] = AUX;
	}
}
