#include "main.h"

/**
 * _strchr - is a function that locate a char in a string.
 * @s: the string targeted.
 * @c: the char we r looking for.
 * Return: a pointer to the char.
*/

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
