#include "main.h"

/**
 * print_alphabetx10 - alfabeto 10 veces
 **/
void print_alphabet_x10(void)
{
	int x;

	int a;

	for (x = 0; x < 10; x++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
