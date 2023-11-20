#include "lists.h"

/**
 * add_nodeint - function that add a new node
 * at the beginning.
 * @head: address of the firs node.
 * @n: data to pass to the node.
 * Return: address of the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
