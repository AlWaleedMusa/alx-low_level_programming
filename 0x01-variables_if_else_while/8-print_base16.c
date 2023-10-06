#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 Always (Success)
 */

int main(void)
{
	int i;
	char ch;

	for (i = 0; i <= 10; i++)
	{
		if (i < 10)
			putchar('0' + i);
	}
	if (i > 9)
	{
		for (ch = 'a'; ch < 'g'; ch++)
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
