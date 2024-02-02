#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: The string to hash.
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash_int;
	int c;

	hash_int = 5381;
	while ((c = *str++))
		hash_int = ((hash_int << 5) + hash_int) + c; /* hash * 33 + c */

	return (hash_int);
}
