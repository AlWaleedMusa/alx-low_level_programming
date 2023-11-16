#include "lists.h"

/**
 * print_list - a function that print ele of a linked list
 * @h: linked list passed to the function.
 * Return: and in (count of elements printed)
*/

size_t print_list(const list_t *h)
{
	int counter = 0;
	list_t const *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", ptr->len, ptr->str);
		}
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
