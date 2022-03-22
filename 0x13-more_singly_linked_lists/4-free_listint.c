#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
/**
 *free_listint - printea
 *@head: puntero
 **/
void free_listint(listint_t *head)
{
		while (head != NULL)
		{
			free(head);
			head = head->next;
		}
}
