#include "main.h"

/**
 * print_diagonal - is a function that draws a diagonal line on the terminal.
 * @n: the paramater passed to the function.
 * Return: diagonal shape.
 */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i = 0;
		int j = 0;

		while (i < n)
		{
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
			j = 0;
			i++;
		}
	}
	_putchar('\n');
}
