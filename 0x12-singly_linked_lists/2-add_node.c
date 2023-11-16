#include "lists.h"

/**
 * add_node - function that add new nodes to a linked list.
 * @str: string passed to the function.
 * @head: pointer to a pointer of pegging of the node.
 * Return: new node.
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;
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
	ptr->next = (*head);
	(*head) = ptr;

	return (*head);
}
