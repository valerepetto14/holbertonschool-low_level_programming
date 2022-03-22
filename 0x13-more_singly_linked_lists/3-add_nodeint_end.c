#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end - printea
 *@head: puntero
 *@n: num
 *Return: puntero
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *aux = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

		while (aux->next != NULL)
		{
		aux = aux->next;
		}
		aux->next = new_node;
		return (new_node);

}
