#include "main.h"
/**
*reverse_array- asd
*@a: asd
*@n: asd
**/
void reverse_array(int *a, int n)
{
	unsigned int a = 0, d = 0, cont = 0;

	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}
	else
		a = n;

	d = a;
	cont = 1;

	while (d > 9)
	{
		d /= 10;
		cout *= 10;
	}
	for (; cont >= 1; cont /= 10)
		_putchar(((a / cont) % 10) + '0');

}
