#include <stdio.h>

/**
 * main - entry point.
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
}
