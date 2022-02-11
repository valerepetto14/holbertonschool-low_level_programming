#include "main.h"
/**
* print_rev - str
*@s: char
**/
void print_rev(char *s)
{
	while (*s != 0)
	{	
		_putchar(*s);
		s++;
	}

		while (*s != 0)
		{
			_putchar(*s);
			s--;
			}
_putchar('\n');
}
