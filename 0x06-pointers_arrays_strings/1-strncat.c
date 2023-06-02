#include "main.h"

/**
 * _strncat - concatenates two strings.
 * Is similar to _strcat function, except that it will use at most @n bytes
 * from @src, and @src does not need to be null-teminated
 * if it contains @n or more bytes.
 *
 * @src: source string.
 * @dest: destination string.
 * @n: bytes from @rc
 * Return: pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /* index */
	int dest_len = 0; /* dest length */

	while (dest[i++])
		dest_len++;

	i = 0;

	while (i < n && src[i])
	{
		dest[dest_len++] = src[i];
		i++;
	}

	return (dest);
	_putchar('\n');
}
