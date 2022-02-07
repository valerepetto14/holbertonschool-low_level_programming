#include "main.h"
/**
* print_last_digit - dd
 * @c:c
 * Return:0
 **/
int print_last_digit(int c)
{
	int l = c % 10;

	if (l < 0)
		l = l * -1;

	_putchar('0' + l);
	return (l);
}
