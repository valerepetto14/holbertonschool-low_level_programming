#include "main.h"

/**
 *char *_strcat
 **/
int _strlen(char *s);

char *_strcat(char *dest, char *src)
{
	int contdest = _strlen(dest), a = 0, c = 0;
	int contsrc = _strlen(src);

	for (a = contdest; a < contdest + contsrc; a++)
	{	
		if (c <= contsrc)
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
