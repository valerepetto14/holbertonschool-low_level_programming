#include <stdlib.h>
#include <stdio.h>
/**
 *str_concat - malloc
 *@s1: char
 *@s2: char
 *Return: char
 **/
char *str_concat(char *s1, char *s2)
{
	int largo1 = 0, largo2 = 0, larray = 0, i = 0;
	char *array;

	if (s1 == NULL || s2 == NULL)
		return (0);

	while (s1[largo1] != '\0')
		largo1++;

	while (s2[largo2] != '\0')
		largo2++;
	
	array = malloc(sizeof(char) * (largo1 + largo2) + 1);

	if (array == NULL)
		return (0);
	for (; larray < largo1; larray++)
		array[larray] = s1[larray];

	for (; larray < (largo1 + largo2); larray++)
	{
		if (i < largo2)
		{
		array[larray] = s2[i];
		i++;
		}
	}

	return (array);
}
