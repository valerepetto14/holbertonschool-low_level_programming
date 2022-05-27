#include "main.h"
/**
 * _strlen - str
 *@s: char
 *Return: cont
 **/
int _strlen(char *s)
{
	int cont = 0;
	char *a;

	a = s;

	while (*a != 0)
	{
		a++;
		cont++;
	}
	return (cont);
}
