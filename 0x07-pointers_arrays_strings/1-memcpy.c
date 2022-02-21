#include "main.h"
/**
 * _memcpy - copie
 * @dest: string
 * @src: string
 * @n: u int
 * Return: char
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	for (; a <= n ; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
