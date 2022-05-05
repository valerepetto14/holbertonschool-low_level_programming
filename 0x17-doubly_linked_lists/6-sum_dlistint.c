#include "lists.h"
/**
 * sum_dlistint - main
 *@head: lista
 *Return: int
 **/
int sum_dlistint(dlistint_t *head)
{
	int suma = 0;

	if (!head)
		return (0);
	while (head != NULL)
	{
		suma += head->n;
		head = head->next;
	}
	return (suma);
}
