#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_listint - printea
 *@h: puntero
 *Return: size
 **/
size_t print_listint(const listint_t *h)
{
size_t cont = 0;
while (h != NULL)
{
	if (!h)
		return (0);

	printf("%d\n", h->n);
	h = h->next;
	cont++;
}
	return (cont);
}
