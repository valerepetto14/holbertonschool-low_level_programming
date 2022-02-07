#include "main.h"
/**
* print_last_digit - dd
 * @c:c
 * Return:0
 **/
int print_last_digit(int c)
{
	int l= c % 10;
	if ((l % 10) < 0)
	{	
		l=l * -1;
		_putchar(l);
	}
	else
	{
		_putchar(l);
	}
	return 0;
}
