#include "main.h"

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer to the memory previsouly allocated by malloc
 * @old_size: size of the allocated memory
 * @new_size: new size
 * Return: pointer to the new memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	ptr1 = malloc(new_size);
	if (!ptr1)
		return (NULL);

	old_ptr = ptr;

	if (new_size < old_size)
	{
		while (i < new_size)
		{
			ptr1[i] = old_ptr[i];
			i++;
		}
	}
	if (new_size > old_size)
	{
		while (i < old_size)
		{
			ptr1[i] = old_ptr[i];
			i++;
		}
	}
	free(ptr);
	return (ptr1);
}
