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
	int i = 0;
	int j = 0;
	int k = 0;
	int l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	ptr = (char *)malloc(sizeof(char) * (i + j + 1));

	if (ptr == NULL)
		free (ptr);
		return (NULL);

	while (k < i)
	{
		ptr[k] = s1[k];
		k++;
	}
	l = j;
	j = 0;
	while (j <= l)
	{
		ptr[k] = s2[j];
		k++;
		j++;
	}
	return (ptr);
}
