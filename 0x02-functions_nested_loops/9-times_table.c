#include "main.h"
/**
 * times_table - a
 **/
void times_table(void)
{
	int a, b, c, numA, numB;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			c = a * b;
			if (b != 9)
			{
				if (c > 9)
					{
					numA = c % 10;
					numB = (c / 10) % 10;
					_putchar(numB + '0');
					_putchar(numA + '0');
					_putchar(',');
					_putchar(' '); }
				else if (b == 0)
					{
					_putchar(c + '0');
					_putchar(',');
					_putchar(' '); }
				else
					{
				 _putchar(' ');
				_putchar(c + '0');
				_putchar(',');
				_putchar(' ');
					}	}
		else
		{
			if (c > 9)
				{
				_putchar((c % 10) + '0');
				_putchar(((c / 10) % 10)) + '0');			}
			else
				{
				_putchar(' ');
				_putchar(c + '0');
				}	}	} _putchar('\n');	 }	}
