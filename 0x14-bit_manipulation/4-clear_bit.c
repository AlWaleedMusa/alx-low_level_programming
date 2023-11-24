#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: int to use.
 * @index: index to be set to 0.
 * Return: an int.
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int temp;

	if (index > 64)
	{
		return (-1);
	}

	temp = index;
	for (num = 1; temp > 0; num *= 2, temp--)
	{
		;
	}

	if ((*n >> index) & 1)
	{
		*n -= num;
	}
	return (1);
}
