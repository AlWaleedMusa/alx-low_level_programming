#include "lists.h"

/**
 * 
*/

size_t print_list(const list_t *h)
{
	int counter = 0;
	list_t const *ptr = NULL;

	ptr = h;
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", ptr->len, ptr->str);
		counter++;
		ptr = ptr->next;
	}
	return (counter);
}
