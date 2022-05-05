#include "lists.h"
/**
 **insert_dnodeint_at_index - main
 *@h: lista
 *@idx: indice
 *@n: num
 *Return: lista
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *aux = *head;
	int iter = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *h;
		(*h)->prev = new_node;
		aux = new_node;
		return (new_node);
	}
	while (iter < idx)
		aux = aux->next

	new_node->next = aux->next;
	new_node->prev = aux;
	aux->next = new_node;
	return (new_node);
}
