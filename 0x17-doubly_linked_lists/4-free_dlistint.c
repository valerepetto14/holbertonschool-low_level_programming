#include "lists.h"
/**
 *free_dlistint - main
 *@head: head
 **/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
