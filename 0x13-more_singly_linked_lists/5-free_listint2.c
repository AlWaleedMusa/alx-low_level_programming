#include "lists.h"

/**
 * free_listint2 - free memory allocated.
 * @head: node passed to the function.
 * Return: Nothing.
*/

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (!head)
	{
		return;
	}

	while (*head)
	{
		ptr = (*head)->next;
		free(*head);
		*head = ptr;
	}
	*head = NULL;
}
