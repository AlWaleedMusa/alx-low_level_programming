#include "main.h"

/**
 * _print_rev_recursion - print a string backwards.
 * @s: the string passed to the function.
*/

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		printf("%c", *s);
	}
	else
	{
		_putchar('\0');
	}
}
