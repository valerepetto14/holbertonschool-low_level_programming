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

	while (*needle)
	{
		for (i = 0; haystack[i] != '0'; i++)
		{
			if (haystack[i] == *needle)
				return (haystack + i);
		}
	needle++;
	}
	return (0);
}
