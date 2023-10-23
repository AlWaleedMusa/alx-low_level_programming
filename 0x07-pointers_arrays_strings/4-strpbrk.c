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

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			else
			{
				return (NULL);
			}
			j++;
		}
		j = 0;
		i++;
	}
}
