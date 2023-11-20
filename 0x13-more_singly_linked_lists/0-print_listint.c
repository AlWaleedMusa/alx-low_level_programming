#include "lists.h"

/**
 * print_listint - print ints from a node.
 * @h: node passed to the function.
 * Return: int (number of nodes);
*/

size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	listint_t *ptr;

	while (h)
	{
		ptr = h->next;
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
