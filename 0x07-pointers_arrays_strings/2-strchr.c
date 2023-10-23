#include "main.h"

/**
 * _strchr - is a function that locate a char in a string.
 * @s: the string targeted.
 * @c: the char we r looking for.
 * Return: a pointer to the char.
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;
	char *cptr;

	while (*s)
	{
		if (s[i] == c)
		{
			cptr = &s[i];
			return (cptr);
		}
		else if (s[i] == '\0')
			return (NULL);
		s++;
		i++;
	}
}
