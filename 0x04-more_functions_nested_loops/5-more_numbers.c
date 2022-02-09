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
		for (a = 0; a < 15; a++)
		{
			if (a > 9)
			{
			_putchar(((a / 10) % 10) + '0');
			}
			_putchar((a % 10) + '0');
		}
		 _putchar('\n');
	}
}
