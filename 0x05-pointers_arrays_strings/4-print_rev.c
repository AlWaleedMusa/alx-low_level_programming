#include "main.h"

/**
 * print_rev - a fuction that print a string backwards.
 * @s: is the parameter passed to the function.
 * Return: Void.
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
		len++;

	i = len;

	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
