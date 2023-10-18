#include "main.h"

/**
 * leet - a function that encrypt code using 1337 code lang.
 * @s: the parameter passed to the function.
 * Return: a Pointer to a char.
*/

char *leet(char *s)
{
	char *str = s;
	char keys[] = {'A', 'E', 'O', 'T', 'L'};
	char values[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		i = 0;
		while (i < sizeof(keys) / sizeof(char))
		{
			if (*s == keys[i] || *s == keys[i] + 32)
			{
				*s = 48 + values[i];
			}
			i++;
		}
		s++;
	}
	return (str);
}
