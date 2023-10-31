#include "main.h"

/**
 * _strdup - function that returns a pointer to a char.
 * @str: parameter passed to the function.
 * Return: pointer to a char.
*/

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		i++;
	}

	ptr = (char *)malloc(sizeof(char) * (i + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while (j <= i)
	{
		ptr[j] = str[j];
		j++;
	}

	return (ptr);
}
