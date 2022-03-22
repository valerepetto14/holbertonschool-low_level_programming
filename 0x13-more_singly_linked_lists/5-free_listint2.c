#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint2 - printea
 *@head: puntero
 **/
void free_listint2(listint_t **head)
{
	listint_t *aux = *head;

	if (head == NULL)
		return;
	while (aux != NULL)
	{
		aux = *head;
		*head = aux->next;
		free(aux);
	}
}
