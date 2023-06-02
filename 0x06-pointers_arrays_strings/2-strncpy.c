#include "main.h"

/**
 * _strncpy - copies a string.
 * @src: source string.
 * @dest: destination string.
 * @n: bytes of @src.
 *
 * Return: pointer to @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* index */

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
	_putchar('\n');
}
