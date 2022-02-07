#include "main.h"
/**
 *
 * time_table - a
 **/
void times_table(void)
{
	int a;
	int b;
	int c;

	for(a = 0; a <= 9; a++)
	{
		 for(b = 0; b <= 9; b++)
		{	
			if(b != 9)
			{
			c= a * b;
			_putchar(c + '0');
			_putchar(',');
			_putchar(' ');
			}
			else
			{
				putchar(c + '0');
			}
		}

	}
}
