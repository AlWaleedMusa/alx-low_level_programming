#include "lists.h"

/**
 * free_list - function that free allocated memory on a linked list.
 * @head: list passed to the function.
 * Return: nothing.
*/

void free_list(list_t *head)
{
	list_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head->str);
		free(head);
		head = ptr;
	}
}
