#include <stdio.h>

/**
 * main - Entry point.
 *
 * Description: This program prints all possible combinations of single
 *		digit numbers separated by comma (,).
 *
 * Return: 0 (Success).
 *
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');
		if (number == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
		number++;
	}
	putchar('\n');

	return (0);
}
