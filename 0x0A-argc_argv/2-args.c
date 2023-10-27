#include <stdio.h>

/**
 * main - entry point.
 * @argc: number or arguments passed.
 * @argv: pointer to array of chars.
 * Return: 0 Always (Success).
*/

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
