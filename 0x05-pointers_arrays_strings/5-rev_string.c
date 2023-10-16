#include "main.h"
#include <stdio.h>

/**
 * rev_string - a funtion that revers a string.
 * @s: the parameter passed to the function.
 * Return: Void.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	int temp;

	while (s[len] != '\0')
		len++;

	i = 0;

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = temp;
	}
}
