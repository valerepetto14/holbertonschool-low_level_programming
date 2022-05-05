#include "lists.h"
/**
 * dlistint_len - return numeros de elementos
 * @h: const
 * Return: size t
 **/
size_t dlistint_len(const dlistint_t *h)
{
size_t n = 0;
if (!h)
	return (0);
while (h != NULL)
{
	h = h->next;
	n++;
}
	return (n);
}
