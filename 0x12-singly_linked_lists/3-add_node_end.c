#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *add_node_end - printea
 *@head: puntero
 *@str: texto
 *Return: size
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *aux = *head;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = strlen(str);
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
