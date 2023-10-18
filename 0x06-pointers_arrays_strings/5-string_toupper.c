#include "main.h"

/**
 * string_toupper - a function that changes all lowercase letters
 * @s: the char parameter passed to the function
 * Return: a pointer to a Char
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
		i++;
	}
	return (s);
}
