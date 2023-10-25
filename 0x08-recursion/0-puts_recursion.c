#include "main.h"

/**
 * _puts_recursion - a function that print string using recursion.
 * @s: the string passed to the function to print.
 * Return: Nothing.
*/

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		printf("%c", *s);
		_puts_recursion(s + 1);
		printf("\0");
	}
}
