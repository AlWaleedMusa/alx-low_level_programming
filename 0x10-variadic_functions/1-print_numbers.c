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
		printf("%d", va_arg(args, int));
		if (separator != NULL)
			printf("%s", separator);
		i++;
	}
	va_end(args);
	printf("\n");
}
