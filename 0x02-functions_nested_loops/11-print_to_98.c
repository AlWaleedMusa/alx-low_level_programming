#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - is a function that take input and print all number to 98.
 * @n: is the parameter passed to the function.
 * Return: will print all the number to 98.
 */

void print_to_98(int n)
{
	int i = n;

	if (i <= 98)
	{
		while (i <= 98)
		{
			if (i != n)
				printf("%i, ", i);
			else
				printf("%i", i);
			i++;
		}
	}
	else
	{
		while (i >= 98)
		{
			if (i != n)
				printf("%i, ", i);
			else
				printf("%i", i);
			i--;
		}
	}
}
