#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *delete_nodeint_at_index - printea
 *@head: pointer
 *@index: unsigned int
 *Return: int
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *next;
	unsigned int i = 0;

	/*si esta vacia*/
	if (*head == NULL)
		return (-1);
	/*guardamos el primer nodo*/
	aux = *head;

	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	for (; aux != NULL && i < index - 1; i++)
		aux = aux->next;

	if (aux == NULL || aux->next == NULL)
		return (-1);
	next = aux->next->next;
	free(aux->next);
	aux->next = next;
	return (1);
}
