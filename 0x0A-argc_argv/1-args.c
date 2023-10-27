#include <stdio.h>

/**
 * main - entry point.
 * @argc: number or arguments passed.
 * @argv: pointer to array of chars.
 * Return: 0 Always (Success).
*/

int main(int argc, __attribute__((__unused__))char *argv[])
{
	printf("%d\n", argc - 1);
	
	return (0);
}
