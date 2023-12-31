#include "main.h"

/**
 * print_times_table - is a function that prints the (n) times table.
 * @n: the parameter passed to the function.
 * Return: value after processed.
 */

void print_times_table(int n)
{
	int num = 0;
	int mul = 1;
	int out;

	if (n <= 15 && n >= 0)
	{
		while (num <= n)
		{
			_putchar('0');
			while (mul <= n)
			{
				_putchar(',');
				_putchar(' ');
				out = num * mul;
				if (out <= 9)
					_putchar(' ');
				if (out <= 99)
					_putchar(' ');
				if (out >= 100)
				{
					_putchar((out / 100) + '0');
					_putchar(((out / 10)) % 10 + '0');
				}
				else if (out <= 99 && out >= 10)
				{
					_putchar((out / 10) + '0');
				}
				_putchar((out % 10) + '0');
				mul++;
			}
			mul = 1;
			num++;
			_putchar('\n');
		}
	}
}
