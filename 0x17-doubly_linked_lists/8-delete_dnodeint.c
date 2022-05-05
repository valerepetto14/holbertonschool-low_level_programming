#include "lists.h"
/**
 *delete_dnodeint_at_index - function that delets a node at certain position
 *@head: pointer that points to the header
 *@index: index
 *Return: 1 or -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;
	dlistint_t *borrar = NULL;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	aux = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(aux);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (; aux != NULL && i < index - 1; i++)
		aux = aux->next;

	if (aux == NULL || aux->next == NULL)
	{
		borrar = aux;
		aux = aux->prev;
		free(borrar);
		return (1);
	}
	free(aux->next);
	aux->next = aux->next->next;

	return (1);
}
