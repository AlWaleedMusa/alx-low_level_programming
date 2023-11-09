#include "variadic_functions.h"

/**
 * sum_them_all - a funtion that sum all inputs.
 * @n: number of args passed to the funtion.
 * Return: int.
 */

int sum_them_all(const unsigned int n, ...)
{
	int i = 0;
	int sum = 0;
	va_list sumOfAll;

	va_start(sumOfAll, n);

	while (i < n)
	{
		sum += va_arg(sumOgAll, int);
		i++;
	}
	va_end(sumOfAll);
	return (sum);
}
