#include "main.h"

/**
 * print_triangle - is a function that prints a triangle.
 * @size: parameter passed to the function.
 * Return: trianlge shape based on (size)
 */

void print_triangle(int size)
{
	int i = 0;
	int j = 0;

	if (size > 0)
	{
		while (i < size)
		{
			while (j < size)
			{
				if (i + j < size - 1)
				{
					_putchar(' ');
				}
				else
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
