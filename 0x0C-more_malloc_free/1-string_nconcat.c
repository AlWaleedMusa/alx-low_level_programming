// #include "main.h"
// #include <string.h>

// /**
//  * string_nconcat - a function that concatenates two strings.
//  * @s1: first string.
//  * @s2: second string.
//  * @n: number of chars to concat to s1.
//  * Return: pointer to a char.
// */

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *concat;

    concat = string_nconcat("Best ", "School !!!", 6);
    printf("%s\n", concat);
    free(concat);
    return (0);
}

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
		if (i == (s1_len - 1))
		{
			for (int j = i; j < n; j++)
			{
				ptr[i] = s2[j];
			}
		}
	}
	return (ptr);
}
