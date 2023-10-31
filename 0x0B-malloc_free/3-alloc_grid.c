#include "main.h"

/**
 * alloc_grid -  a function that returns a pointer to a 2 dimensional array.
 * @width: width of the array.
 * @height: height of the array
 * Return: point to int.
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (i--; i >= 0; i--)
			{
				free(ptr[i]);
			}
			free(ptr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;

	return (ptr);
}
