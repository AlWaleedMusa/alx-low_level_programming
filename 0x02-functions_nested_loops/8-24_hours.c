#include "main.h"

/**
 * jack_bauer - its function that prints every minute of the day.
 * Return: output.
 */

void jack_bauer(void)
{
	int i = 0;
	int j = 0;

	while (i < 24)
	{
		while (j < 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		j = 0;
		i++;
	}
}
