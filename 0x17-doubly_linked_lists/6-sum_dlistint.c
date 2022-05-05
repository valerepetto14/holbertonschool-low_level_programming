#include "lists.h"
/**
 * sum_dlistint - main
 *@head: lista
 *Return: int
 **/
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;
	dlistint_t *aux = head;

	if (!head)
		return (0);
	while (aux->prev != NULL)
		aux = aux->prev;
	while (aux->next != NULL)
	{
		aux = aux->next;
		suma += aux->n;
	}
	return (suma);
}
