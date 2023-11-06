#include "dog.h"

/**
 * print_dog - a function that print a struct.
 * @d: struct passed to the function.
 * Return: nothing
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
