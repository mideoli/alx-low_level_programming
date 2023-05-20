#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints the lowercase alphabet in reverse.
 *
 * Return: 0 (Success).
 *
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (z >= a)
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
