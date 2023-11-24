#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: int to use.
 * @index: index passed to get it bit.
 * Return: an int.
*/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp;

	if (index > 64)
	{
		return (-1);
	}

	temp = n >> index;
	return (temp & 1);
}
