#include "main.h"

/**
 * _strcpy - copies a string pointed to by @src, including the terminating
 * null byte (\0), to the buffer pointed to by @dest
 *
 * @src: source of string to copy.
 * @dest: buffer to copy string to.
 *
 * Return: pointer to @dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0; /* index */

	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	return (dest);
}
