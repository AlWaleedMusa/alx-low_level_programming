#include "lists.h"

/**
 * free_listint - free allocated memory by node.
 * @head: node passed to the function.
 * Return: Nothing.
*/

void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
