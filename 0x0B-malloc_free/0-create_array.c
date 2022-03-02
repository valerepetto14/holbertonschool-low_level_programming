#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array - malloc
 * @size: tamaño
 * @c: char
 * Return: char
 **/
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (0);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
