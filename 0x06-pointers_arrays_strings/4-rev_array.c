#include "main.h"

/**
 *  reverse_array - a function that reverses the content of an array of integers.
 * @a: first parameter passed to the function.
 * @n: second parameter passed to the function.
 * Return: Void.
*/

void reverse_array(int *a, int n)
{
	while (n >= 1)
	{
		printf("%d", a[n - 1]);
		if (n != 1)
			printf(", ");
		n--;
	}
	_putchar('\n');
}
