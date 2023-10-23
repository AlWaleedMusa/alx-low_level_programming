#include "main.h"

/** _strspn -  a function that gets the length of a prefix substring.
 * @s: the string targetted.
 * @accept: the char we are looking for.
 * Return : int.
*/

unsigned int _strspn(char *s, char *accept)
{
	int counter = 0;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				accept++;
				counter++;
			}
		}
		counter = 0;
		s++;
	}
	return (counter);
}
