#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @str: string.
 *
 * Return: changed string.
 */

char *string_toupper(char *str)
{
	int i = 0; /* index */

	while (str[i])
	{
		if (str[i] >= 'a' && str <= 'z')
			str[i] -= 32;

		i++;
	}

	return (str);
}
