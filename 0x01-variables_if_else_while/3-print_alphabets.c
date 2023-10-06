#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		printf("%c", ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		printf("%c", ch);
	printf("\n");
	return (0);
}
