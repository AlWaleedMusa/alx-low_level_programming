#include "main.h"

/**
 * print_most_numbers - printf number 0 - 9 but nit 2 and 4.
 * Return: numbers not 2,4
 */

void print_most_numbers(void)
{
	char i = 48;

	while (i >= 48 && i <= 57)
	{
		if (i != 50)
		{
			if (i != 52)
				_putchar(i);
		}
		i++;
	}
	_putchar('\n');
}
