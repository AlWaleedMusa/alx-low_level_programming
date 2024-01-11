#include "lists.h"

/**
 *  add_dnodeint_end -  add a new node at the end of a list.
 * @head: double pointer to the head
 * @n: integer to add to the new node
 * Return:  the address of the new element or NULL
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_n;

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
		return (NULL);

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}

	while ((*head)->next != NULL)
		*head = (*head)->next;

	(*head)->next = new_n;
	new_n->prev = *head;

	return (new_node);
}
