#include "main.h"

/**
 * print_sign - is a fuction that prints the signs of a numbers.
 * @n: is tha parameter passed to the fuction.
 * Return: 0 if 0, 1 if greater than 0, -1 if less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
