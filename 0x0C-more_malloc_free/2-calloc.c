#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *_calloc - malloc
 *@nmemb: unsigned int
 *@size:unsigned int
 *Return: void
 **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (; i < nmemb * size; i++)
		*((char *)array + i) = 0;

	return (array);
}
