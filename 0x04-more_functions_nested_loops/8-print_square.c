#include "main.h"
/**
 *  print_square - diagonal
 *  @n: n
 **/
void print_square(int size)
{
	int i;
	int c;

	if(size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
		for (c = 0; c <= size; c++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
}
