#include "lists.h"

/**
 * list_len - a function that count ele of a list.
 * @h: list passed to the function.
 * Return: an int (number or ele).
*/

size_t list_len(const list_t *h)
{
	int counter = 0;
	list_t const *ptr = h;

	while (ptr != NULL)
	{
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
