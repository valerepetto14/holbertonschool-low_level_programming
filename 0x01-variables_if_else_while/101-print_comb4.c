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

	for (x = 0; x <= 8; x++)
	{
		for (a = (x + 1); a < 10; a++)
		{
			for (b = (a + 1); b < 10; b++)
				{
				putchar(x + '0');
				putchar(a + '0');
				putchar(b + '0');
			if (x != 7 || a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}
				}
		}
	}
putchar('\n');
return (0);
}
