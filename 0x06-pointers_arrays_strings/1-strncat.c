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
	int index = strlen(dest);
	int a = 0;

	while (a < n && *src)
	{
		dest[index + a] = *src;
		src++;
		a++;
	}
	dest[index + a] = '\0';
	return (dest);
}
