#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *
 */

void print_alphabet_x10(void)
{
	int counter = 0;
	do{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
	}while (counter < 9);
}
