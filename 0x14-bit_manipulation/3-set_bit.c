#include "main.h"

/**
 * set_bit - that sets the value of a bit to 1 at a given index.
 * @n: pointer to the int to use.
 * @index: index to be set at.
 * Return: an int.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
	{
		return (-1);
	}

	for (temp = 1; index > 0; index--, temp *= 2)
	{
		;
	}
	*n += temp;
	return (1);
}
