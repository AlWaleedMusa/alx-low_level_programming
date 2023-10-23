#include "main.h"

/** _strspn -  a function that gets the length of a prefix substring.
 * @s: the string targetted.
 * @accept: the char we are looking for.
 * Return : int.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i = 0;
	int j = 0;
	int counter = 0;

	while (s[i] != '\0')
	{
		if (s[i] != 32)
		{
			while (accept[j] != '\0')
			{
				if (s[i] == accept[j])
				{
					counter++;
				}
				j++;
			}
		}
		else
			return (counter);
		i++;
		j = 0;
	}
	return (counter);
}
