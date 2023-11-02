#include "main.h"

/**
 * malloc_checked - a function that allocates memory.
 * @b: parameter passed to the function.
 * Return: Void.
*/

void *malloc_checked(unsigned int b)
{
	 void *ptr;
	 
	 ptr = malloc(b);

	 if (ptr == NULL)
	 {
		exit (98);
	 }
	 return (ptr);
}
