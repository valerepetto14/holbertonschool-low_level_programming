#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  *  *  main - Entry point
 *   *  * Return: Always 1 (Success)
 *    *    *    *      **/
int main(void)
{
int x;

char a;

for (x = 0; x <= 9; x++)
{
	putchar(x + '0');
}

for (a = 'a'; a <= 'f'; a++)
{
	putchar(a);
}

	putchar('\n');
	return (0);
}
