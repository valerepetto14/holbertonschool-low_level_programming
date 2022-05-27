#include "main.h"
/**
 * _strcat - sss
 * @s: 123
 *@*dest: 122
 *@*src: 1223
 *Return: 2
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
