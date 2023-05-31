#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout.
 * @str: string.
 */

void _puts(char *str)
{
	int len = 0;

	while (*(str + len) != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
