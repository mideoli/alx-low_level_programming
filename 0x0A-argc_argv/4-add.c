#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the addition of positive numbers, followed by a new line.
 * @argc: number of arguments passed to the program.
 * @argv: string arguments pointer.
 *
 * Return: If one of the numbers contains symbols that are non-digits - 1.
 *         Otherwise - 0.
 */
int main(int argc, char *argv[])
{
	int num, digit, sum = 0;

	num = 0;
	while (num < argc)
	{
		digit = 0;
		while (argv[num][digit])
		{
			if (argv[num][digit] < '0' || argv[num][digit] > '9')
			{
				printf("Error\n");
				return (1);
			}
			digit++;
		}

		sum += atoi(argv[num]);
		num++;
	}

	printf("%d\n", sum);

	return (0);
}
