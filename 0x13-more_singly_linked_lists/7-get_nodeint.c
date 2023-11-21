#include "lists.h"

/**
 * get_nodeint_at_index - 
 * @head: list passed to the function.
 * @index: index to get value from.
 * Return: a new node.
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i = 0;

	ptr = head;

	while (i < index)
	{
		ptr = ptr->next;
		i++;
	}
	if (!ptr)
	{
		return (NULL);
	}
	return (ptr);
}
