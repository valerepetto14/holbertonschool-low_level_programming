#include "main.h"
/**
 *  print_diagonal - diagonal
 *  @n: n
 **/
void print_diagonal(int n)
{
	int i, c;
	int a = 0;
	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
	for (i = 0; i < n; i++)
	{
		a++;
		for (c = 0; c <= a; c++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
		_putchar('\n');

}
