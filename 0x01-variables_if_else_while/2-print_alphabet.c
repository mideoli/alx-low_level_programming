#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabet in lowercase.
 * int c: representes the alphabet.
 * return: 0 (success).
 *
 */

int main(void)
{
	int c = 'a';
	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
