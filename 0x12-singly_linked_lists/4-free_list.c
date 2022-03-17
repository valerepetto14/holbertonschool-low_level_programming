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
		while (head != NULL)
		{
			free(head->str);
			free(head);
			head = head->next;
		}
}
