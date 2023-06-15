#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: string to be concatenated upon.
 * @s2: string to be concatenated to @s1.
 *
 * Return: If concatenation fails - (NULL), else - a pointer to
 * the newly-allocated space in memory containing the concatenated strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int i, concat_i = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	i = 0;
	while (s1[i] || s2[i])
	{
		len++;
		i++;
	}

	concat_str = malloc(sizeof(char) * len);

	if (concat_str == NULL)
		return (NULL);

	while (s1[i])
	{
		concat_str[concat_i++] = s1[i];
		i++;
	}

	while (s2[i])
	{
		concat_str[concat_i++] = s2[i];
		i++;
	}

	return (concat_str);
}
