#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int num = 0;
	int max = 1024;
	int sum = 0;

	for (num = 0; num < max; num++)
	{
		if (num % 3 = 0 || num % 5 = 0)
			sum += num;
	}
	printf("%i", sum);
}
