#include "lists.h"
/**
 *add_dnodeint - add node
 *@head: head
 *@n: n
 *Return: lista
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (*head->prev != NULL)
		head = head->prev;
	new_node->next = *head;
	*head_prev = new_node;
	*head = new_node;
	return (new_node);
}
