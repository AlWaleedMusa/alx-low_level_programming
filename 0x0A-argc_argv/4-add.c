#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_number(char *s);

/**
 * main - entry point.
 * @argc: number or arguments passed.
 * @argv: pointer to array of chars.
 * Return: 0 Always (Success).
*/

int main(argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	while (argv[i] != NULL)
	{
		if (is_number(argv[i]))
		{
			sum += atoi(argv[i]);
			i++;

			if (argv[i] == NULL)
			{
				printf("%d", sum);
			}
		}
		else
		{
			printf("Error");
			return (1);
		}
	}

	if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}

 /**
  * is_number - a function that check if char is a number or not.
  * @s: parameter passed to the function.
  * Return: true if number, false if not.
 */

bool is_number(char *s)
{
	while (*s)
	{
		if (*s < '0' || *s > '9')
		{
			return false;
		}
		else
		{
			return true;
		}
		s++;
	}
}
