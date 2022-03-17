#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_list - printea
 *@head: puntero
 **/
void free_list(list_t *head)
{
	list_t *aux;

	if (head != NULL)
	{
	while (aux->next != NULL)
	{
		aux = head;
		head = head->next;
		free(aux);
	}
	free(head);
	}
}
