#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: the first parameter passed to the function.
 * @src: the second parameter passed to the function.
 * Return: a pointer to a char.
 */

char *_strcat(char *dest, char *src)
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

	while (i < len2)
	{
		dest[len1 + i] = src[i];
		i++;
	}

	dest[size - 1] = '\0';

	return (dest);
}
