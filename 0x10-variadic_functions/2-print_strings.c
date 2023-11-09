#include "variadic_functions.h"

/**
 * print_string - function that print strings.
 * @separator: string will be between printable strings.
 * @n: number of arguments passed in the function.
 * Return: nothing.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned i = 0;
	va_list args;
	char *ch;
	va_start(args, n);

	while (i < n)
	{
		ch = va_arg(args, char *);
		if (!ch)
		{
			ch = "(nil)";	
		}
		if (!separator)
		{
			printf("%s", ch);
		}
		else if (separator && i == 0)
		{
			printf("%s", ch);
		}
		else
		{
			printf("%s%s",separator, ch);
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
