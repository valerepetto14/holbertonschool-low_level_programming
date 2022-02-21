#include "main.h"
/**
 *_strstr - ddd
 * @haystack: char
 * @needle: char
 * Return: char
 **/
char *_strstr(char *haystack, char *needle)
{

	int cont = -1;

	while (*haystack)
	{
		if (*haystack == needle[0])
			return (haystack + cont);
	cont++;
	haystack++;
	}
	return ('\0');
}
