#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string, in reverse. followed by a new line.
 * @s: string.
 */

void print_rev(char *s)
{
	int len = strlen(s); /* string length */

	while (len--)
	{
		_putchar(*(s + len));
	}

	_putchar('\n');
}
