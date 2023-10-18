#include "main.h"

/**
 * _strncat - a function that concatenates two strings using n.
 * @dest: first parameter passed to the function.
 * @src: second parameter passed to the function.
 * @n: third parameter passed to the function.
 * Return: a pointer to a char.
 */

char *_strncat(char *dest, char *src, int n)
{
	int len1 = 0;
	int len2 = 0;
	int i = 0;
	int size;

	while (dest[len1] != '\0')
		len1++;
	while (src[len2] != '\0')
		len2++;

	size = len1 + len2 + 1;

	while (i < n && src[i] != '\0')
	{
		dest[len1 + i] = src[i];
		i++;
	}

	return (dest);
}
