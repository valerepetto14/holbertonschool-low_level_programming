#include "main.h"
/**
*_strcmp- asd
*@s1: asd
*@s2: asd
*Return: asd
**/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
