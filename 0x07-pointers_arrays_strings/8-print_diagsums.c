#include "main.h"

/**
 * print_diagsums - a function that prints the sum of the two diagonals of a square of integers.
 * @a: array passed to the function.
 * @size: size of the array passed.
 * Return: nothing.
*/

void print_diagsums(int *a, int size)
{
	int i = 0;
	int j = 0;
	int m = 0;
	int n = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		m = (i * size) + i;
		sum1 += *(a + m);
		i++;
	}

	while (j < size)
	{
		n = (j * size) + (size - 1 - j);
		sum2 += *(a + n);
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
