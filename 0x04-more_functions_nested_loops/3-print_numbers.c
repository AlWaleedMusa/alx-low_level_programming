#include "main.h"

/**
 * print_numbers - is a function that prints numbers (0 - 9).
 * Return: the numbers (0- 9).
 */

void print_numbers(void)
{
	char i = 48;

	while (i >= 48 && i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
