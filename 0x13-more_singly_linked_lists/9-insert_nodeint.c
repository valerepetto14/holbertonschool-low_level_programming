#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *insert_nodeint_at_index - printea
 *@head: puntero
 *@idx: unsigned int
 *@n: num
 *Return: pointer
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *aux = *head;
	unsigned int iter = 0;
	listint_t *new_node = malloc(sizeof(listint_t));

	new_node->n = n;
	if (*head == NULL && idx > 0)
		return (NULL);
	while (iter < idx - 1)
	{
		if (!aux)
			return (NULL);
		aux = aux->next;
		iter++;
	}
	new_node->next = aux->next;
	aux->next = new_node;
	return (new_node);
}
