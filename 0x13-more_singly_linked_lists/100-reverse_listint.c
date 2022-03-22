#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *reverse_listint - printea
 *@head: pointer
 *Return: int
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *sig;

	while (*head != NULL)
	{
		sig = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = sig;
	}
	*head = prev;
return (*head);
}
