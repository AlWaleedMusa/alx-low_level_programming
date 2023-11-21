#include "lists.h"

/**
 * sum_listint - return sum of data from a list.
 * @head: list passed to the function.
 * Return: an in (sum of data).
*/

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
