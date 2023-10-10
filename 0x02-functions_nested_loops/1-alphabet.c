#include "main.h"

/**
 * print_alphabet - prints the alphabet, in lowercase, followed by a new line.
 */

void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
}
