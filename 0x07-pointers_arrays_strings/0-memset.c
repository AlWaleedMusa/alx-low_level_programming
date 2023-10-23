#include "main.h"

/**
 * memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte
 * @s: A pointer to the memory area to be filled
 * @b: The character to fill the memory area with
 * @n: The number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;
	char *r = s;

	while (i < n)
	{
		r[i] = b;
		i++;
	}

	r[n] = '\0';
	printf("%s", r);

	return (r);
}
