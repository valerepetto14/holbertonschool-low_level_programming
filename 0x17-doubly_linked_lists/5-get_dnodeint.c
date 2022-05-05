#include "lists.h"
/**
 *get_dnodeint_at_index - main
 *@head: head
 *@index: indice
 *Return: lista
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int iter = 0;
	dlistint_t *aux = head;

	while (aux)
	{
		if (iter == index)
			return (aux);
		iter++;
		aux = aux->next;
	}
	return (NULL);
}

