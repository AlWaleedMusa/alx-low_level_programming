#include "main.h"

/**
 * _isalpha - is a fuction that checks for alphabetic character.
 * @c: is the parameter passed to the fucntion.
 * Return: 1 if its a better a 0 if not.
 */

int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
