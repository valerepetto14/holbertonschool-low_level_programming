#include "lists.h"
/**
 *delete_dnodeint_at_index - main
 *@head: list
 *@index: indice
 *Return: int
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux = *head, *borrar = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	while (iter < idx - 1)
	{
		if (aux->next  == NULL)
			return (NULL);
		aux = aux->next;
		iter++;
	}
	borrar = aux->next;
	aux->next = aux->next->next;
	aux->next->prev = aux;
	free(borrar);
	return (1);
}
