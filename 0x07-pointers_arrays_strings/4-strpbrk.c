#include "main.h"

/**
 * _strpbrk - a function that searches a string for any of a set of bytes.
 * @s: the main string passed.
 * @accept: the string to look into.
 * Return: pointer to a char.
*/

char *_strpbrk(char *s, char *accept)
{
	int i = 0;
	int j = 0;

	while (*s)
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
			{
				return (s);
			}
			j++;
		}
		j = 0;
		s++;
	}
	return (NULL);
}
