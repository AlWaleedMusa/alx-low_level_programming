#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_dnodeint_at_index - inserts a new node at position
 * @h: double pointer to head
 * @idx: index where to insert nod
 * @n: data to insert
 * Return: pointer to the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *next, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *h;
		for (i = 0; i < idx - 1 && current != NULL; i++)
			current = current->next;
		if (current == NULL)
			return (NULL);
	}
	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);
	new_n->n = n;

	if (idx == 0)
	{
		next = *h;
		*h = new_n;
		new_n->prev = NULL;
	}
	else
	{
		new_n->prev = current;
		next = current->next;
		current->next = new_n;
	}
	new_n->next = next;
	if (new_n->next != NULL)
		new_n->next->prev = new_n;

	return (new_n);
}
