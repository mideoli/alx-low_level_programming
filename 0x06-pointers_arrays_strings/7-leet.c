#include "main.h"

/**
 * leet - encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: string
 * Return: encoded string.
 */
char *leet(char *str)
{
	int i1 = 0; /* index 1 */
	int i2; /* index 2 */

	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[i1])
	{
		i2 = 0;

		while (i2 <= 7)
		{
			if (str[i1] == leet[i2]  || str[i1] - 32 == leet[i2])
			{
				str[i1] = i2 + '0';
			}
			i2++;
		}
		i1++;
	}

	return (str);
}
