#include "main.h"

/**
 * create_array - function that creates an array of chars.
 * @size: the size of the array.
 * @c: the char will be printed.
 * Return: pointer to char.
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;

	char *ptr = (char *)malloc(size * sizeof(c));

	if (size == 0)
	{
		printf("failed to allocate memory");
	}

	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
