#include "main.h"

/**
 * swap_int - function that swap 2 values.
 * @a: first parameter passed.
 * @b: second parameter passed.
 * Return: Void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
