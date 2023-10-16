#include "main.h"

/**
 * puts_half - a function that prints half of a string.
 * @str: the parameter passed to the function.
 * Return: Void.
 */

void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
		len++;

	if (len % 2 != 0)
	{
		len -= 1;
		while (i < len)
		{
			if (i >= len / 2)
			{
				_putchar(str[i]);
			}
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			if (i >= len / 2)
			{
				_putchar(str[i]);
			}
			i++;
		}
	}
	_putchar('\n');
}
