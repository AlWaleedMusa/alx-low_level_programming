#include "main.h"

/**
 * _strcmp - a function that compare 2 strings.
 * @s1: is the first parameter passed to the function.
 * @s2: is the second parameter passed to the function.
 * Return: int 0 or 1. 
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int flag = 0;

	while (flag == 0)
	{
		if (s1[i] < s2[i])
		{
			flag = -1;
		}
		else if (s1[i] > s2[i])
		{
			flag = 1;
		}

		if (s1[i] == '\0')
		{
			break;
		}
		i++;
	}
	return (flag);
}
