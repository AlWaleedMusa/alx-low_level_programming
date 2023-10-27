#include "main.h"
/**
 * _islower - is a funcition that checks for lowercase character.
 * @c: is the parameter passed to the fuction.
 * Return: 1 if success.
 */

int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
