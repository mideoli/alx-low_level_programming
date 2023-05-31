#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * re_string - reverses a string.
 * @s: string
 */

void rev_string(char *s)
{
	int len = 0; /* string length */
	char tmp; /* temp var */
	int i = 0; /* index */

	while (s[i++])
		len++;

	i = len -1;

	while (i >= len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i -1];
		s[len - i - 1] = tmp;
		i--;
	}
}
