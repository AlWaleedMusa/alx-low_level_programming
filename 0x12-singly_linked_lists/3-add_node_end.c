#include "lists.h"

/**
 * add_node_end - a function that add a new node at the end of the list.
 * @head: pointer to a pointer for the first element on the lest.
 * @str: string passed to the function for storing.
 * Return: a new node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr;
	list_t *temp = *head;
	int length = 0;

	while (str[length])
	{
		length++;
	}

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->len = length;
	ptr->str = strdup(str);
	ptr->next = NULL;

	if (*head == NULL)
	{
		*head = ptr;
		return (ptr);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = ptr;
	return (ptr);
}
