#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int max = 50;
	int i;
	int sum = 1;

	for (i = 1; i <= max; i++)
	{
		int previ = i - 1;
		sum += previ;
		printf("%i, ", sum);
	}
	return (0);
}
