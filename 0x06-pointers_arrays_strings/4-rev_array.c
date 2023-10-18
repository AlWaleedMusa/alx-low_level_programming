#include "main.h"

/**
 *  reverse_array - a function that reverses the content of an array
 * @a: first parameter passed to the function
 * @n: second parameter passed to the function
 * Return: Void
*/

void reverse_array(int *a, int n)
{
	int i, c;

	i = 0;

	while (i < (n - 1) / 2)
	{
		c = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = c;
		i++;
	}
}
