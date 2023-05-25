#include "main.h"

/**
 * print_alphabet_x10 - function that prints the alphabet 10 times,
 *			in lowercase, followed by a new line.
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count < 10)
	{
		char alphabet = 'a';
		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		
		count++;
		_putchar('\n');
	}
}
