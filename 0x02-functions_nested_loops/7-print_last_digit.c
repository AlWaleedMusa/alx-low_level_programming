#include "main.h"

/**
 * print_last_digit - is a function that prints the last digit of a number.
 * @n: is the parameter passed to the function.
 * Return: it will return n as a result.
 */

int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(r);
	return (r);
}
