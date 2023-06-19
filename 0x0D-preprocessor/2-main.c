#ifndef MAIN_C
#define MAIN_C

#include <stdio.h>

/**
 * main - prints the name of the file it was compiled from.
 *
 * Return: 0 (Success).
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

#endif /* MAIN_C */
