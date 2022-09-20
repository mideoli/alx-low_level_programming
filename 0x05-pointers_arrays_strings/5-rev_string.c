#include "main.h"
#include <string.h>

/**
 * print_rev - prints a string i reverse order
 * @s: string to reverse
 * Return: nothing.
 */

void print_rev(char *s)
{
	int len = strlen(s);
	
	while (len--)
	{
		_putchar(*(s + len));
	}
	_putchar (10);
}
