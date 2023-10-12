#include "main.h"

/**
 * _isdigit - is a fucntion that checks for digit ( 0 - 9).
 * @c: is the parameter passed to the function.
 * Return: 1 if c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		if (c >= 0 || c <= 9)
			return (1);
	}
	else
		return (0);
}
