#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *get_nodeint_at_index - printea
 *@head: puntero
 *@index: unsigned int
 *Return: int
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	listint_t *aux = head;

	while (aux)
	{
		if (iter == index)
			return (aux);
		iter++;
		aux = aux->next;
	}
	return (NULL);
}
