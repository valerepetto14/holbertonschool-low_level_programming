#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint - printea
 *@head: puntero
 *@n: num
 *Return: puntero
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (*head);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
