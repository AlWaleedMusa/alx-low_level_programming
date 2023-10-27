#include "main.h"

/**
 * _isupper - is a function that check for uppercase.
 * @c: is the parameter passed in the function.
 * Return: 1 if uppercase, 0 if not upper case.
 */

int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
