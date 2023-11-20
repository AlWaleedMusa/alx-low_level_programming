#include "lists.h"

/**
 * listint_len - print number of nodes in a list.
 * @h: linked list passed to the function.
 * Return: number of elements.
*/

size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
