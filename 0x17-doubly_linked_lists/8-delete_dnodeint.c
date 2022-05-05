#include "lists.h"
/**
 *delete_dnodeint_at_index - function that delets a node at certain position
 *@head: pointer that points to the header
 *@index: index
 *Return: 1 or -1
 **/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *borrar = NULL;
	unsigned int i = 0;

	if (*head == NULL || head == NULL)
		return (-1);
	borrar = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(borrar);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	for (; borrar != NULL && i < index - 1; i++)
		borrar = borrar->next;

	if (borrar->next == NULL)
	{
		borrar->prev->next = borrar->next;
		if (borrar->next != NULL)
			borrar->next->prev = borrar->prev;
		free(borrar);
		return (1);
	}
	return (-1);
}
