#include "main.h"

/**
 * print_square - is a function that prints a square, followed by a new line.
 * @size: is the parameter passed to the function.
 * Return: return a square shape based on the (size).
 */

void print_square(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			j = 0;
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}
