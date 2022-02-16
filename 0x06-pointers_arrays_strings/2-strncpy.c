#include "main.h"
/**
 * _strncpy - 123
 * @dest: ssaaa
 * @src: ssaaaa
 * @n: sss
 * Return: 112
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}


