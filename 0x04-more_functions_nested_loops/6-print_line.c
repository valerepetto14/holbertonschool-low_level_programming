#include "main.h"
/**
 * print_line - 1
 * @n: int
 * Return: 1
 **/
void print_line(int n)
{
	int i;

	if (n <= 0)
	_putchar('\n');
	else	
	{
		for (i = 0; i < n; i++)
		_putchar('_');
	}
	_putchar('\n');
}
