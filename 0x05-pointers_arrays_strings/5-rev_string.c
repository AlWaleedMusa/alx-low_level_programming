#include "main.h"

/**
 * rev_string - a funtion that revers a string.
 * @s: the parameter passed to the function.
 * Return: Void.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	i = len;

	while (i--)
	{
		printf("%c", s[i]);
	}
}