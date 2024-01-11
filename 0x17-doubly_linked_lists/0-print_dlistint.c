#include "lists.h"

/**
 * print_dlistint - prints a list element.
 * @h: pointer to head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{

	int count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
