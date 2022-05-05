#include "lists.h"
/**
 *add_dnodeint_end - main
 *@head: head
 *@n: int
 *Return: lista
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head->next == NULL)
	{
		new_node->prev = *head;
		head->next = new_node;
		return (new_node);
	}
	while (*head->next != NULL)
	{
	*head = *head->next;
	}
	*head->next = new_node;
	return (new_node);
}
