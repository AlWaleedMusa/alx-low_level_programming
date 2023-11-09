#include "variadic_functions.h"

/**
 * sum_them_all - a function that sum all inputs.
 * @n: number of args passed to the function.
 * Return: int.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i = 0;
	unsigned int sum = 0;
	va_list sumOfAll;

	if (n == 0)
		return (0);
	va_start(sumOfAll, n);

	while (i < n)
	{
		sum += va_arg(sumOgAll, int);
		i++;
	}
	va_end(sumOfAll);
	return (sum);
}
