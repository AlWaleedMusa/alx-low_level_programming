#include "lists.h"

/**
 * pop_listint - remove the head list on a list.
 * @head: list passed to the function.
 * Return: an int (value at the removed list).
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

if (!head || !*head)
{
	return (0);
}
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	(*head) = temp;
	return (n);
}
