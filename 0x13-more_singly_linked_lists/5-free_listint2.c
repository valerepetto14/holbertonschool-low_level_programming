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

	while (aux != NULL)
	{
		aux = *(head);
		(*head) = (*head)->next;
		free(aux);
	}
	(*head) = NULL;
}
