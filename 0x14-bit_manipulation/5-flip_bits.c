#include "main.h"

/**
 * flip_bits - returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first int passed to use.
 * @m: second int passed to use.
 * Return: an int.
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int temp;
	int c = 0;

	temp = n ^ m;

	while (temp)
	{
		c++;
		temp &= (temp - 1);
	}
	return (c);
}
