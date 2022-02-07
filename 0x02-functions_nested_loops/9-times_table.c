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

	int numA;
	int numB;

	for(a = 0; a <= 9; a++)
	{
		 for(b = 0; b <= 9; b++)
		{	
			c = a * b;
			if(b != 9)
			{
				if (c > 9)
				{
					numA= c % 10;
					numB= (c/10)%10;
					_putchar(numB + '0');
					_putchar(numA + '0');
					 _putchar(',');
					 _putchar(' ');
				}
				else
					{	
					_putchar(c + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					}
			}	
			else
				{
				if(c > 9)
				{
				 numA= c % 10;
				 numB= (c/10)%10;
				 _putchar(numB + '0');
				 _putchar(numA + '0');
				  _putchar(',');
				  _putchar(' ');
					}
				else{
					_putchar(c + '0');
				}
			}
		
		}
		 _putchar('\n');
	}
}

