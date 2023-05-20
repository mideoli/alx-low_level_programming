#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints the alphabet in lowercase.
 *
 * Return: 0 (Sucess).
 *
 */

int main(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		putchar(a);
		a++;
	}

	return (0);
}
