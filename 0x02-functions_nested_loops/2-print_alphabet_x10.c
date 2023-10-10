#include "main.h"

/**
 * print_alphabet_x10 - is a function prints 10 times the alphabet.
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		for (int j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
		if (i != 9)
			_putchar('\n');
	}
}
