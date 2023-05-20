#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints the alphabet in lowercase,
 *		and then in uppercase
 *
 * Return: 0 (Success)
 *
 */

int main(void)
{
	char lower_a = 'a';
	char lower_z = 'z';
	char upper_a = 'A';
	char upper_z = 'Z';

	while (lower_a <= lower_z)
	{
		putchar(lower_a);
		lower_a++;
	}

	while (upper_a <= upper_z)
	{
		putchar(upper_a);
		upper_a++;
	}
	putchar('\n');

	return (0);
}
