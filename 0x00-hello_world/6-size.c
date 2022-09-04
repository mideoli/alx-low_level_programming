#include <stdio.h>
/**
 * main - is entry point
 * Return: 0 if sucesseful
 * Warnings may occur
 */
int main(void)
{
	printf("Size of a char: ", "%lu\n", sizeof(char), " byte(s)");
	printf("Size of an int: ", "%lu\n", sizeof(int), " byte(s)");
	printf("Size of a long int: ", "%lu\n", sizeof(long int), " byte(s)");
	printf("Size of a long long: ", "%lu\n", sizeof(long long), " byte(s)");
	printf("Size of a float: ", "%lu", sizeof(float), " byte(s)");
	return (0);
}
