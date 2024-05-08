#include "search_algos.h"

/**
  * binary_search - Searches for a value in a sorted array
  * @array: A pointer to the first element.
  * @size: length of the array.
  * @value: The value to search for.
  * Return: if not found NULL, -1.
  *         Otherwise, the index where the value is located.
  * Description: Prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, prev, next;

	if (array == NULL)
		return (-1);

	for (prev = 0, next = size - 1; next >= prev;)
	{
		printf("Searching in array: ");

		for (i = prev; i < next; i++)
			printf("%d, ", array[i]);

		printf("%d\n", array[i]);

		i = prev + (next - prev) / 2;

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			next = i - 1;
		else
			prev = i + 1;
	}

	return (-1);
}
