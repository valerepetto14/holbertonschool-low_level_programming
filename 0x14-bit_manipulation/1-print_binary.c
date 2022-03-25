#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
/**
 *print_binary - convert
 *@n: unsigned long int
 **/
void print_binary(unsigned long int n)
{
	unsigned long int num = 1, num2 = 0, pot = 0;

	while (num < n)
	{
		num *= 2;
		pot++;

	}
	while (num2 < n)
	{
		pot--;
		if (num2 + pow(2, pot) <= n)
		{
			num2 += pow(2,pot);
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}

	while (pot > 0)
	{
		_putchar('0');
		pot--;
	}
}
