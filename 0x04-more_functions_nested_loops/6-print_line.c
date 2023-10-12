#include "main.h"

/**
 * print_line - is a function that print stright line (n) times.
 * @n: the parameter passed to the function.
 * Return: (_) printed (n) times.
 */

void print_line(int n)
{
	int i = 0;
	
	while (i < n)
	{
		_putchar('_');
		if (n <= 0)
			_putchar('\n');
		i++;
	}
	_putchar('\n');
}
