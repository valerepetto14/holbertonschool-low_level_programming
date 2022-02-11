#include "main.h"
/**
 * rev_string - str
 * *@s: char
 * **/
void rev_string(char *s)
{
	int i;
	char a[10];

	for (i = 0; i <= 10; i++)
	{
		a[10 + i] = s[i];
	}
	for (i = 0 ; i <= 10; i++)
	{
		_putchar(a[i]);
	}
_putchar('\n');
}
