#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of array
 * @a: array.
 * @n: elements.
 */

void print_array(int *a, int n)
{
	int i = 0; /* index */

	while (i < n)
	{
		if (i != n - 1)
			printf("%d", a[i]);
		else
			printf("%d", a[i]);

		i++;
	}
	_putchar('\n');
}
