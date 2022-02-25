#include "main.h"
/**
*print_number - asd
<<<<<<< HEAD
*@n: asd
**/
void print_number(int n)
=======
*@a: asd
*@n: asd
**/
void print_number(int *a, int n)
>>>>>>> 292a6a07ee78e46ad5fd1e6539365ffaa9dddf80
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
		cont *= 10;
	}
	for (; cont >= 1; cont /= 10)
		_putchar(((a / cont) % 10) + '0');

}
