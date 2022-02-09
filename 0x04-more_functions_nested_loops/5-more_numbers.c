#include "main.h"
/**
 * more_numbers - 1
 *
 **/
void more_numbers(void)
{
	int i, a;

	for (i = 0; i < 11; i++)
	{
		for (a = 0; i < 15; i++)
		{
			if (i > 9)
			{
			_putchar(((i / 10) % 10) + '0');
			}
			putchar((i % 10) + '0');
		}
	}
	_putchar('\n');
}
