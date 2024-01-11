#include "lists.h"

/**
 * dlistint_len - returns number of elements in a linked list.
 * @h: pointer to head
 * Return: number of nodes (int)
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	
	return (count);
}
