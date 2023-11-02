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
	int i = 0;
	int j = 0;
	char *ptr;
	int num;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (num < 0)
		return (NULL);

	s1_len = strlen(s1);
	s2_len = strlen(s2);

	if (num >= s2_len && s2_len != 0)
	{
		num = s2_len;
	}

	size = num + s1_len;
	ptr = (char *)malloc(sizeof(char) * size);

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (i < size)
	{
		ptr[i] = s1[i];
		if (i == s1_len || s1_len == 0)
		{
			while (j < num)
			{
				ptr[i] = s2[j];
				i++;
				j++;
			}
		}
		i++;
	}
	ptr[size] = '\0';
	return (ptr);
}
