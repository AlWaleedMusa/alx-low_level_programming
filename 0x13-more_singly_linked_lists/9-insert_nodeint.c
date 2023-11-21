#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at index.
 * @head: list passed to the function.
 * @idx: index to insert node in.
 * @n: data to put into the node.
 * Return: node.
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *temp = *head;
	unsigned int i = 0;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !head)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;

	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}

	while (i < idx)
	{
		if (i == idx - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
		{
			temp = temp->next;
		}
		i++;
	}
	return (NULL);
}
