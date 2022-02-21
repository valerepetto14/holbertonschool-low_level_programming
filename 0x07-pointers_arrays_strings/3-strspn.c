#include "main.h"
/**
 * _strspn - eso
 * @s: char
 * @accept: char
 * Return: u int
 **/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x = 0;
	int cont = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (; accept[x] != '\0'; x++)
			{
				if (s[i] == accept[x])
				cont++;
			}
		}
		else
			return (cont);
	}
	return (cont);
}
