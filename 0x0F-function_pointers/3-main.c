#include "3-calc.h"

/**
 * main - entry point.
 * @argc: number of arguments pass in command line.
 * @argv: pointer to array of the arguments.
 * Return: (0) always (Success)
*/

int main(int argc, char *argv[])
{
	int num1;
	char ch = *argv[2];
	int num2;
	int (*f)(int, int);
	int r;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	f = get_op_func(argv[2]);

	if (!f)
	{
		printf("Error\n");
		exit(99);
	}
	if ((ch == '/' || ch == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	r = f(num1, num2);

	printf("%d\n", r);
	return (0);
}
