#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: always 0 (Success).
 */

int main(void)
{
	for (int i = 0; i <= 100; i++)
	{
		if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
	}
	return (0);
}
