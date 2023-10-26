#include "main.h"

/**
* is_prime_number - check if number is prime.
* @n: the parameter passed to the function.
* Return: true if prime.
*/

int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (_prime(n, start));
}

/**
* _prime - returns 1 if n is a prime num.
* @n: parameter passed to the function.
* @start: number to start checking from.
* Return: 1 if n is prime, 0 otherwise.
*/

int _prime(int n, int start)
{
	if (start <= 1)
	{
		return (1);
	}
	else if (n % start == 0)
	{
		return (0);
	}
	return (_prime(n, start - 1));
}
