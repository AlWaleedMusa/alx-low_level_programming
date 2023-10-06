#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (success)
 */

int main(void)
{
	int n;
	int lastOfN;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastOfN = n % 10;

	if (lastOfN == 0)
		printf("Last digit of %i is %i and is 0\n", n, lastOfN);
	else if (lastOfN > 5)
		printf("Last digit of %i is %i and is grater than 5\n", n, lastOfN);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n");
	return (0);
}
