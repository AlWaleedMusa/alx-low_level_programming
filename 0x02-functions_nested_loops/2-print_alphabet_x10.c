#include "main.h"

/**
 * print_alphabet_x10 - is a function prints 10 times the alphabet.
 */

void print_alphabet_x10(void)
{
	int i = 0;
	int j = 'a';

	while (i < 10)
	{
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		if (i != 9)
			_putchar('\n');
		i++;
	}
}
