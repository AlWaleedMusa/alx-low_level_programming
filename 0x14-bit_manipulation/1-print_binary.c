#include "main.h"

/**
 * print_binary - func that  prints the binary representation of a number.
 * @n: int passed to the function to convert.
 * Return: Nothing.
*/

void print_binary(unsigned long int n)
{
	unsigned long int num;
	int swaps;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (num = n, swaps = 0; (num >>= 1) > 0; swaps++)
	{
		;
	}

	for (; swaps >= 0; swaps--)
	{
		if ((n >> swaps) & 1)
			printf("1");
		else
			printf("0");
	}
}
