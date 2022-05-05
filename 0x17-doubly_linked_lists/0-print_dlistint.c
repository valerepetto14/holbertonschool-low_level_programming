#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_dlistint - printea
 *@h: puntero
 *Return: size
 **/
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;
while (h != NULL)
{
	if (!h)
		return (0);
	printf("%d\n", h->n);
	h = h->next;
	n++;
}
	return (n);
}
