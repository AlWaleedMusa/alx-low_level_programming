#include "main.h"

/**
 * puts2 - a function that prints every other character.
 * @str: the parameter passed to the function.
 * Return: Void.
 */

void puts2(char *str)
{
	int len = 0;
	int i;

	while (str[len] != '\0')
		len++;

	i = 0;

	while (i <= len)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
