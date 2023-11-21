#include "lists.h"

/**
 * get_nodeint_at_index - look for a node by index.
 * @head: list passed to the function.
 * @index: index to get value from.
 * Return: pointer to  node we want. or null
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int i = 0;

	while (ptr && i < index)
	{
		ptr = ptr->next;
		i++;
	}

	if (ptr)
	{
		return (ptr);
	}
	else
	{
		return (NULL);
	}
}
