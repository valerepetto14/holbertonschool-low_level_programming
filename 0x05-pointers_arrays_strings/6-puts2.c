#include "main.h"
/**
 * puts2 - ddd
 *@str: 0
 **/
void puts2(char *str)
{
	int i = 0;

	while (str[i + 1] != '\0')
	{
	_putchar(str[i]);
	i++;
	}
	_putchar('\n');
}
