#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0, using
 *  the putchar() fuction.
 *
 *
 * Return: 0 (success).
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');
	return (0);
}
