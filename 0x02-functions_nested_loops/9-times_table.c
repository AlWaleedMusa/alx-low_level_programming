#include "main.h"

/**
 * times_table - its a function that prints the 9 times table, starting with 0.
 * Return: output of the function.
 */

void times_table(void)
{
	int n = 0;
	int m = 1;
	int o;

	while (n < 10)
	{
		_putchar('0');
		while (m <= 9)
		{
			_putchar(',');
			_putchar(' ');
			o = n * m;

			if (o <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((o / 10) + '0');
			}
			_putchar((o % 10) + '0');
			m++
		}
		n++'
		m = 1;
		_putchar('\n');
	}

}
