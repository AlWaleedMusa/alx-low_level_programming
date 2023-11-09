#include "variadic_functions.h"

/**
 * sum_them_all - a function that sum all inputs.
 * @n: number of args passed to the function.
 * Return: int.
 */

int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}

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
		sum += va_arg(sumOfAll, int);
		i++;
	}
	va_end(sumOfAll);
	return (sum);
}
