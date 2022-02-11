#include "main.h"
/**
 * _strlen - str
 *@s: char
 *Return: cont
 **/
int _strlen(char *s)
{
	int cont = 0, iter = 0;
	char *a[] = *s;

	while (*a[iter] != NULL)
	{
		iter++;
		cont++;
	}
	return (cont);
}
