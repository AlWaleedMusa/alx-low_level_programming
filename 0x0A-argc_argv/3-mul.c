#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point.
 * @argc: number or arguments passed.
 * @argv: pointer to array of chars.
 * Return: 0 Always (Success).
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int mul = 1;
	int i = 1;

	while (i < argc)
	{
		if (argc > 2 && argc < 4)
		{
			mul = mul * atoi(argv[i]);
			if (i == 2)
				printf("%i\n", mul);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	return (0);
}
