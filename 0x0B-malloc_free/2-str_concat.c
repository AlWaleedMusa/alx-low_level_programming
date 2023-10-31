#include "main.h"

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first sting passed.
 * @s2: second string passed.
 * Return: a pointer to a char.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	size = i + j;

	ptr = (char *)malloc(sizeof(char) * (size + 1));

	if (ptr == NULL)
		return (NULL);

	while (k <= size)
	{
		ptr[k] = s1[k];
		k++;
		if (k == i)
		{
			while (k <= size)
			{
				ptr[k] = s2[l];
				l++;
				k++;
			}
		}
	}
	ptr[size + 1] = '\0';
	return (ptr);
}
