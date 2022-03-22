#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *pop_listint - printea
 *@head: puntero
 *Return: int
 **/
int pop_listint(listint_t **head)
{
int date;
if (*head == NULL)
	return (0);
date = (*head)->n;
(*head) = (*head)->next;
return (date);
}
