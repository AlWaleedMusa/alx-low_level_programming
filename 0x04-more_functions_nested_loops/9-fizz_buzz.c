#include <stdio.h>

/**
 * main - entry point.
 *
 * Return: 0 Always (Success).
 */

int main(void)
{
	int i = 0;

	while (i <= 100)
	{
		if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else
			printf("%i ", i);
		i++;
	}
	return (0);
}
