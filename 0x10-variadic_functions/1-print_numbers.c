#include "variadic_functions.h"

/**
 * print_numbers - function that print all args passed.
 * @separator: char that separate printed numbers.
 * @n: number of args passed to the function.
 * Return: nothing.
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;

	va_start(args, n);
	while (i < n)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && i == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
		i++;
	}
	va_end(args);
	printf("\n");
}
