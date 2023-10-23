#include "main.h"

/**
 * _strstr - a function that locates a substring.
 * @haystack: main string to look into.
 * @needle: substring to look for.
 * Return: pointer to a char.
*/

char *_strstr(char *haystack, char *needle)
{
	int j = 0;
	unsigned int i = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack [i + j] == needle[j])
			{
				j++;
			}
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (NULL);
}
