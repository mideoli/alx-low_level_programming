#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to reverse
 * Return: nothing.
 */

void rev_string(char *s)
{
	int len = strlen(s);
	
	while (len--)
	{
		putchar(*(s + len));
	}
	putchar (10);
}
