#include "main.h"
#include <stdio.h>

/**
 * _abs - is a fucntion that computes the absolute value of an integer.
 * @n: is the parameter which is an integer passed to the fucntion.
 * Return: r will be the returned value.
 */

int _abs(int n)
{
	int r;

	if (n < 0)
		r = n * -1;
	else
		r = n;
	return (r);
}
