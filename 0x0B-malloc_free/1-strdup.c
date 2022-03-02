#include <stdlib.h>
#include <stdio.h>
/**
 *_strdup - malloc
 *@str: char
 *Return: char
 **/
char *_strdup(char *str)
{
	int i = 0 , j;
	char *array;

	if (str == NULL)
		return (0);

	while (str[i] != '\0')
		i++;

	array = malloc(sizeof(char) * i);
	if (array == NULL)
		return (0);

	for (j = 0; j < i; j++)
		array[j] = str[j];

	return (array);
}
