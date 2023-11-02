#include "main.h"
#include <string.h>

/**
 * string_nconcat - a function that concat string 1 to n of string 2.
 * @s1: first string.
 * @s2: second string.
 * @n: number of char to pass from string 2.
 * Return: pointer to a char.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1_len;
	int s2_len;
	int size;

	if (s1 == NULL)
		s1 = "";
	else if (s2 == NULL)
		s2 == "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = n + s1_len;

	char *ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (int i = 0; i < size; i++)
	{
		ptr[i] = s1[i];
		if (i == s1_len)
		{
			for (int j = 0; j < n; j++, i++)
			{
				ptr[i] = s2[j];
			}
		}
	}
	return (ptr);
}
