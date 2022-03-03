#include "main.h"
/**
 *_strncat - 123
 *@s: 123
 *@*dest: 123
 *@*src: 123
 *@*n: 123
 *Return: 1
 **/
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n)
{
	int contdest = _strlen(dest), a = 0, c = 0;

	for (a = contdest; src[c] && a < contdest + n; a++)
	{
		if (c < n)
		{
			dest[a] = src[c];
			c++;
		}
	}
	return (dest);
}

/**
 *_strlen - 123
 *@s: 123
 *Return: 123
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
