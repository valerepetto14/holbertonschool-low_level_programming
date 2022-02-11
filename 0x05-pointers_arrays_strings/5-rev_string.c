#include "main.h"
/**
 * rev_string - str
 * *@s: char
 * **/
void rev_string(char *s)
{
	int i;
	char a[10];
	char b;

	for (i = 0; i <= 10; i++)
	{ 	_putchar(s[i]);
		a[10 - i] = s[i];
	}
	_putchar('\n');
	for (i = 0 ; i <= 10; i++)
	{
		b = a[i];
		_putchar(b);
	}
	_putchar('\n');
}
