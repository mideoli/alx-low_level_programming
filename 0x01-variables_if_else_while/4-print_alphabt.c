#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except for letters 'e' and 'q'.
 * int c: represents the alphabet.
 *
 * Return: 0 (success).
 */

int main(void)
{
	int c = 'a';
	do {
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	} while (c <= 'z');

	putchar('\n');
	return (0);
}
