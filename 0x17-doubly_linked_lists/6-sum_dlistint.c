#include "lists.h"

/**
 * sum_dlistint - sums all of the data of a list
 * @head: pointer to head
 * Return: sum of data (int) , or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
