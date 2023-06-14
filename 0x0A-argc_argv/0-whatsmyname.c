#include <stdio.h>

/**
 * main - prints the program name, followed by a new line.
 * @argc: contains the number of arguments passed to the program.
 * @argv: string arguments vector, passed to the program.
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{
	int i;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
