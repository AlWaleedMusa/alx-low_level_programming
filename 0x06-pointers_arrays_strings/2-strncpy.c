#include "main.h"

/**
 * _strncpy - Write a function that copies a string.
 * @dest: 1st parameter passed to the function.
 * @src: source string to copy from.
 * @n: number of characters to copy.
 * Return: pointer to a char.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && str[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
