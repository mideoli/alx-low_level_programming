#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: pointer to an integer.
 * @b: pointer to an integer.
 */

void swap_int(int *a, int *b)
{
	int tmp = *a; /* temporary var */
	*a = *b;
	*b = tmp;
}
