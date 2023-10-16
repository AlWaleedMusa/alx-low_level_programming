#include "main.h"
#include <stdio.h>

/**
 * _strcpy -  a function that copies the string pointed to.
 * @dest: first parameter passed to the function.
 * @src: second parameter passed to the function.
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	}
	while (src[i] != '\0');

	return (dest);
}
