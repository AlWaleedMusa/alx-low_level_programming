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
		free(d);
	}
	if (d->name != NULL)
	{
		free(d);
		free(d->name);
	}
	if (d->owner != NULL)
	{
		free(d);
		free(d->name);
		free(d->owner);
	}
	if (d->age != NULL)
	{
		free(d);
		free(d->name);
		free(d->age);
		free(d->owner);
	}
}
