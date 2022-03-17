#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *print_list - printea
 *@h: puntero
 *Return: size
 **/
size_t print_list(const list_t *h)
{
size_t n = 0;
while (h != NULL)
{
	if (!h)
		return (0);
	if (!h->str)
	{
		printf("[0] (nil)\n");
	}
	else
		 printf("[%d] %s\n", h->len, h->str);
	h = h->next;
	n++;
}
	return (n);
}
