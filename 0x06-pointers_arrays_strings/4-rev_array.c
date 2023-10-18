#include "main.h"

/**
 *  reverse_array - a function that reverses the content of an array
 * @a: first parameter passed to the function
 * @n: second parameter passed to the function
 * Return: Void
*/

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;
	i = 0;

	while (i < n / 2)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
		i++;
	}
}
