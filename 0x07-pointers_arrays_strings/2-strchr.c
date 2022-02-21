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

	if (c == '\0')
		return (s);

	while (s[i] != c)
		s++;

	return (s);
}
