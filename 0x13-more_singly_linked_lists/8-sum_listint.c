#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 *sum_listint - printea
 *@head: puntero
 *Return: int
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *aux = head;

	if (!head)
		return (0);
	while (aux)
	{
		sum += aux->n;
		aux = aux->next;
	}
	return (sum);
}
