#include "lists.h"

/**
 * get_dnodeint_at_index - finds a node of a list
 * @head: pointer to head
 * @index: index of node to get
 * Return: pointer to the indexed node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);

	for (idx = 0; idx < index; idx++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
