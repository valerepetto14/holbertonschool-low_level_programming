#include "main.h"
/**
 * _puts_recursion - recursion
 * @s:char
 **/
void _puts_recursion(char *s)
{
	if (*s)
	{
	_putchar(s[0]);
	_puts_recursion(s);
	}
	else
		_putchar('\n');
}
