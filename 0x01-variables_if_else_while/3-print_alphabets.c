#include <stdio.h>
#include <ctype.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase.
 * int c: represents the alphabet.
 * Return: 0 (success).
 */

int main(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(toupper(c));
	}
	putchar('\n');
	return (0);
}
