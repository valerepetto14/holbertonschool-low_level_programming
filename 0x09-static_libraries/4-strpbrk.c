#include "main.h"
/**
 * _strpbrk - asdd
 * @s: char
 * @accept: char
 * Return: char
 **/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			return (s);
		}
		s++;
	}

return ('\0');
}
