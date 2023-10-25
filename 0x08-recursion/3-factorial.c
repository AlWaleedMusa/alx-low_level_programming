#include "main.h"

/**
 * factorial - a function that give factorial of a givin number.
 * @s: the number passed to the function.
 * Return: an integer.
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
