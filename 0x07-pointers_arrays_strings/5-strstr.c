#include "main.h"
/**
 *_strstr - ddd
 * @haystack: char
 * @needle: char
 * Return: char
 **/
char *_strstr(char *haystack, char *needle)
{
	int i;
	int b = 0;

	while (needle[b] != '\0')
		b++;

	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != b)
			haystack++;
		else
			return (haystack);
	}

	return ('\0');
}
