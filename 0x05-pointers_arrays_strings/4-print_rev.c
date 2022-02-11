#include "main.h"
/**
* print_rev - str
*@s: char
**/
void print_rev(char *s)
{
	char *a;

	a = s;
	while (*a != 0)
	{
		*a++;
	}

		while (*a != 0)
		{
			_putchar(*a);
			a--;
			}
_putchar('\n');
}
