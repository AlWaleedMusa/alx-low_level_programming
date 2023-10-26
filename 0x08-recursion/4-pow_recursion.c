#include "main.h"

/**
 * _pow_recursion - a funtion that return the pow of a number.
 * @x: first parameter passed to the function.
 * @y: second parameter passed to the function.
 * Return: an integer.
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
