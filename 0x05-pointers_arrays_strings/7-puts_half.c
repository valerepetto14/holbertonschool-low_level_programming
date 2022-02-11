#include "main.h"
/**
 *puts_half - 1
 *@str: 1
 **/
void puts_half(char *str)
{
	int cont = 0, i = 0;

	while (str[cont] != '\0')
		cont++;

	if ((cont % 2) == 0)
	{
		for (i = (cont / 2); i <= cont; i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = 0; i < (cont + 1) / 2; i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
