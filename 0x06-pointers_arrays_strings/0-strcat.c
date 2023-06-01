#include "main.h"

/**
 * _strcat - appends the @src string to the @dest string, overwriting the
 * terminating null byte (\0) at the end of @dest, and then adds a terminating
 * null byte.
 *
 * @src: source string.
 * @dest: destination string.
 *
 * Return: pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; /* index */
	int dest_len = 0; /* dest length */

	while (dest[i++])
		dest_len++;

	while(src[i])
	{
		dest[dest_len++] = src[i];
		i++;
	}

	return (dest);
}
