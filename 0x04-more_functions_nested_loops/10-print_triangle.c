#include "main.h"
/**
 *  print_triangle - diagonal
 *  @size: n
 **/
void print_triangle(int size)
{
	int i, c;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (c = 0; c <= size; c++)
			{
				if (c < (size - i))
				{
				_putchar(' ');
			}
			else
				_putchar('#');

		}
			_putchar('\n');
	}
}
}
