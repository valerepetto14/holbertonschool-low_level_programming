#include "main.h"

/**
 * *_strncat - main
 * @*dest:
 * @*src
 * @n:
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
