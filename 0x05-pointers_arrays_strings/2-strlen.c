#include "main.h"
/**
 * _strlen - str
 *@s: char
 *Return: cont
 **/
int _strlen(char *s)
{
	int cont = 0, iter = 0;

	while (*s[iter] != < NULL)
	{
		iter++;
		cont++;
	}
	return (cont);
}
