#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: array of integers.
 * @n: number of elements to swap.
 *
 */

void reverse_array(int *a, int n)
{
	int  i = n - 1; /* index */
	int tmp; /* temporary */

	while (i >= n / 2)
	{
		tmp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = tmp;
		i--;
	}
}
