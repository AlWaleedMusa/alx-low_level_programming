#include "main.h"

/**
 * binary_to_uint - func that turn binary to int.
 * @b: string passed to the function.
 * Return: unsigned int 
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;
	int length = 0;

	if (!b)
	{
		return (0);
	}

	while (b[length])
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}
		length++;
	}

	length = 0;

	while (b[length])
	{
		total <<= 1;
		if (b[length] == '1')
		{
			total += 1;
		}
		length++;
	}
	return (total);
}
