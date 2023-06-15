#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguments of the program into a string;
 * arguments are separated by a new line in the string.
 * @ac: The number of arguments passed to the program.
 * @av: An array of pointers to the arguments.
 *
 * Return: If ac == 0, av == NULL, or the function fails - NULL.
 * else - a pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, byte, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	arg = 0;
	while (arg < ac)
	{
		byte  = 0;
		while (av[arg][byte])
		{
			size++;
			byte++;
		}
		arg++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;
	arg = 0;
	while (arg < ac)
	{
		byte = 0;
		while (av[arg][byte])
		{
			str[i++] = av[arg][byte];
			byte++;
		}

		str[i++] = '\n';
		arg++;
	}
	str[size] = '\0';
	return (str);
}
