#include "main.h"

/**
 * _strcmp - a function that compare 2 strings
 * @s1: is the first parameter passed to the function
 * @s2: is the second parameter passed to the function
 * Return: int 0 or 1
*/

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
