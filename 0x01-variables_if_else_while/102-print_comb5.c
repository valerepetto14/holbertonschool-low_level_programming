#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  *  *  *  *  main - Entry point
 *   *   *   *  * Return: Always 1 (Success)
 *    *    *    *    *    *      **/
int main(void)
{
int x;

int a;

int b;

int c;

        for (x = 0; x <= 8; x++)
        {
                for (a = 0; a < 10; a++)
                {
                        	for (b = 0; b < 10; b++)
				{
					for (c = 1; 1 <= 9; c++)
					{
				putchar(x + '0');
				putchar(a + '0');
				putchar(' ');
				putchar(b + '0');
				putchar(c + '0');
				putchar(';');
				putchar(' ');
                               		 }
				}
		}
	}	
putchar('\n');
return (0);
}

