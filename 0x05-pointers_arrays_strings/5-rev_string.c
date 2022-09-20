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
	int len = 0;
	char tmp;
	int index = 0;
	
	while (s[index++])
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = s[index];
		s[index] = s[len - index - 1];
		s[len - inex-1] = tmp;
	}
}
