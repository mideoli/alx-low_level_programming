#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success).
 *
 */

int main(void)
{
	int hex = 0;
	char a = 'a';
	char f = 'f';

	while (hex < 10)
	{
		putchar((hex % 10) + '0');
		hex++;
	}

	while (a <= f)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
