#include "function_pointers.h"

/**
 * int_index - search through an array.
 * @array: array passed to the function.
 * @size: size of the array.
 * @cmp: pointer to a function.
 * Return: int.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
	}
	return (-1);
}
