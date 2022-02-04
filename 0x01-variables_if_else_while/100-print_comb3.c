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

	for (x = 0; x <= 8; x++)
	{
		for (a = (x + 1); a < 10; a++)
		{
			putchar(x + '0');
			putchar(a + '0');
			if(x != 8 || a != 9)
			{
 			 putchar(',');
			 putchar(' ');
			}
			}
			
		} 
	
	putchar('\n');
	return (0);
}
