#include "main.h"

/**
 * print_to_98 - is a function that take input and print all number to 98.
 * @n: is the parameter passed to the function.
 * Return: will print all the number to 98.
 */

void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		while (i <= 98)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			else
			{
				_putchar(i);
			}
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i < 9)
			{
				_putchar(i);
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
			i--;
		}
	}
}
