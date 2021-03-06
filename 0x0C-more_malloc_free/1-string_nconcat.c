#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 *string_nconcat - malloc
 *@s1: char
 *@s2: char
 *@n: unsigned int
 *Return: char
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int largo1 = 0, larray = 0, i = 0;
	char *array;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[largo1] != '\0')
		largo1++;

	array = malloc(sizeof(char) * (largo1 + n + 1));

	if (array == NULL)
		return (NULL);

	if (n >= strlen(s2))
		n = strlen(s2);

	for (; larray < largo1; larray++)
		array[larray] = s1[larray];

	for (; larray <= (largo1 + (n + 1)); larray++)
	{
		if (i <= n)
		{
		array[larray] = s2[i];
		i++;
		}
	}
	array[largo1 + n] = '\0';

	return (array);
}
