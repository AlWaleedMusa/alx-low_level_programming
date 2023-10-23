#include "main.h"

/** print_chessboard - a function that prints the chessboard.
 * @a: the parameter array passed to the function.
 * Return: nothing.
*/

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			printf("%c ", a[i][j]);
			if (j == 7)
			{
				printf("\n");
			}
			j++;
		}
		j = 0;
		i++;
	}
}