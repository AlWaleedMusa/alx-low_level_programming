#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters of a string to uppercase.
 * @s: the char parameter passed to the function.
 * Return: a pointer to a Char.
*/

char *string_toupper(char *s)
{
	int i = 0;
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (s[i] < len)
	{
		if (s[i] >= 97 || s[i] <= 122)
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
