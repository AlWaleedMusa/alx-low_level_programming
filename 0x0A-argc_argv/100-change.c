#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * 
 * Return: 0 Always (Success).
*/

int main(int argc, char *argv[])
{
	int i = 0;
	int amount = atoi(argv[1]);
	int _25cents = 0;
	int _10cents = 0;
	int _5cents = 0;
	int _2cents = 0;
	int _1cent = 0;
	int sum;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (argv[1] <= 0)
	{
		printf("0\n");
	}

	if (amount >= 25)
	{
		_25cents = amount / 25;
		amount -= _25cents * 25;
	}
	if (amount >= 10)
	{
		_10cents = amount / 10;
		amount -= _10cents * 10;
	}
	if (amount >= 5)
	{
		_5cents = amount / 5;
		amount -= _5cents * 5;
	}
	if (amount >= 2)
	{
		_25cents = amount / 2;
		amount -= _25cents * 2;
	}
	if (amount >= 1)
	{
		_1cent = amount / 1;
		amount -= _1cent * 1;
	}
	sum = _25cents + _10cents + _5cents + _2cents + _1cent;
	printf("%d\n", sum);

	return (0);
}
