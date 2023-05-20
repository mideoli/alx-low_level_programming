#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints all single digite numbers of base 10
 *		starting from 0.
 *
 * Return: 0 (Success).
 *
 */

int main(void)
{
	int numberz = 0;

	while (numberz < 10)
	{
		putchar(numberz + '0');
		numberz++;
	}
	putchar('\n');

	return (0);
}
