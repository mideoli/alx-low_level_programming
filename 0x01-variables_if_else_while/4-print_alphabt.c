#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints tha alphabet in lowercase,
 *		except for letters q and e.
 *
 * Return: 0 (Success).
 *
 */

int main(void)
{
	char a = 'a';
	char z = 'z';
	char e = 'e';
	char q = 'q';

	while (a <= z)
	{
		if (a != e && a != q)
		{
			putchar(a);
		}
		a++;
	}
	putchar('\n');

	return (0);
}
