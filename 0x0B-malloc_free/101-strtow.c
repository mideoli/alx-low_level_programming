#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - Locates the index marking the end of the
 * first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */

int word_len(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * count_words - Counts the number of words contained within a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words(char *str)
{
	int i = 0, words = 0, len = 0;

	while (*(str + i))
	{
		len++;
		i++;
	}

	while (i < len)
	{
		if (*(str + i) != ' ')
		{
			words++;
			i += word_len(str + i);
		}
		i++;
	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 * else - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, words, w, letters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = count_words(str);
	if (words == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (words + 1));
	if (strings == NULL)
		return (NULL);

	w = 0;
	while (w < words)
	{
		while (str[i] == ' ')
		{
			i++;
		}

		letters = word_len(str + i);

		strings[w] = malloc(sizeof(char) * (letters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		l = 0;
		while (l < letters)
		{
			strings[w][l] = str[i++];
			l++;
		}

		strings[w][l] = '\0';
		w++;
	}
	strings[w] = NULL;

	return (strings);
}
