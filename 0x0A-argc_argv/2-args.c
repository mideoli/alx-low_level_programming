#include <stdio.h>

/**
 * main - prints all arguments the program receives.
 * @argc: number of arguments passed to the program.
 * @argv: string arguments pointer.
 *
 * Return: 0 (Success).
 */

int main(int argc, char *argv[])
{

	while(argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
