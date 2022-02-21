#include "main.h"
/**
 * _strchr - ad
 * @s: char
 * @c: char
 * Return: char
 **/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s)
		if (*s != c)
			s++;
		else
			return (s);
	if (c == '\0')
		return (s);

	return (s);
}
