#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 * initializes with a specific char.
 * @size: size of the array to be initialized.
 * @c: char to intialize the array with.
 *
 * Return: If size == 0 or the function fails - NULL.
 * else - a pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i; /* iterator */

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}

	return (array);
}
