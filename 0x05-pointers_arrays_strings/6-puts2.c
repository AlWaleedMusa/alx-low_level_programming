#include "main.h"

/**
 * puts2 - a function that prints every other character.
 * @str: the parameter passed to the function.
 * Return: Void.
 */

void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
