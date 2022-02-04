#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *  *   *  main - Entry point
 *   *     * Return: Always 1 (Success)
 *    *      **/
int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
{
		putchar(x);
}
	for (x = 'A'; x <= 'Z'; x++)
{
		putchar(x);
}
	putchar('\n');
	return (0);
}
