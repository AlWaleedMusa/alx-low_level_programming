#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int max = 50;
	int i = 0;
	int sum = 0;

	for (i = 0; i <= max; i++)
	{
		sum += i - 1;
		printf("%i, ", sum);
	}
	return (0);
}
