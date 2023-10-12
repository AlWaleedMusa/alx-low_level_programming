#include "main.h"

/**
 * more_numbers - is a function to print 1-9 (10) times.
 * Return: 1-9 (10) times.
 */

void more_numbers(void)
{
	char i = 0;
	int j = 0;

	while (j < 10)
	{
		while (i <= 14)
		{
			if (i > 9)
				_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			i++;
		}
		_putchar('\n');
		i = 0;
		j++;
	}
}
