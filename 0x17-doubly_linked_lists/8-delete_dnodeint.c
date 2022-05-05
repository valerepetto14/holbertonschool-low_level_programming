#include "lists.h"
/**
 *delete_dnodeint_at_index - main
 *@head: list
 *@index: indice
 *Return: int
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = NULL;
	dlistint_t *borrar = NULL;

	unsigned int i = 0;

	if (*head == NULL || head == NULL)
	{
		free(head);
		return (-1);
	}
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

	if ((aux == NULL || aux->next == NULL))
	{
		borrar = aux;
		aux = aux->prev;
		aux->next = NULL;
		free(borrar);
		return (1);
	}
	borrar = aux->next;
	aux->next = aux->next->next;
	aux->next->prev = aux;
	free(borrar);
	return (1);
}
