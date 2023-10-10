#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number.
 * @n: is the parameter passed to the function.
 * Return: it will return n as a result.
 */

int print_last_digit(int n)
{
	int r;

	if (n < 0)
	{
		n *= -1;
		r = n % 10;
		_putchar(()'0' + r);
	}
	else if (n == 0)
	{
		r = n / 10;
		_putchar(('0' + r));
	}
	else
	{
		r = n % 10;
		_putchar(('0' + r));
	}
	return (r);
}
