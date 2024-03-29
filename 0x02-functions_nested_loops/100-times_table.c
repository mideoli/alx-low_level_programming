#include "main.h"

/**
 * print_times_table - function that prints the n times table,
 *			starting with 0.
 *
 * @n: value
 */

void print_times_table(int n)
{
	int num; /* number */
	int mult; /* multiplier */
	int prod; /* product */

	if (n >= 0 && n <= 15)
	{
		num = 0;
		while (num <= n)
		{
			_putchar('0');
			mult = 1;
			while (mult <= n)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;
				if (prod <= 99)
				{
					_putchar(' ');
				}
				if (prod <= 9)
				{
					_putchar(' ');
				}
				if (prod >= 100)
				{
					_putchar((prod / 100) + '0');
					_putchar(((prod / 10)) % 10 + '0');
				}
				else if (prod <= 99 && prod >= 10)
				{
					_putchar((prod / 10) + '0');
				}
				_putchar((prod % 10) + '0');
				mult++;
			}
			num++;
			_putchar('\n');
		}
	}
}
