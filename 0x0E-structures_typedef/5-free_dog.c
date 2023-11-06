#include "dog.h"

/**
 * free_dog - free memory allocated in dog_t.
 * @d: struct passed to the function.
 * Return: Nothing.
*/

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
