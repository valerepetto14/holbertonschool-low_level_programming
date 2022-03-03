#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - malloc
 * @b:unsigned int
 * Return: pointer a memory
 **/
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(sizeof(b));
	if (a == NULL)
		exit(98);

	return (a);
}
