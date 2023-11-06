#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strtow - Split a string into words
 * @str: The string to split
 *
 * Return: Pointer to an array of strings (words)
 */
char **strtow(char *str)
{
	int i, j, len = 0, word_count = 0;
	char **words;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}

	word_count = count_words(str);

	if (word_count == 0)
	{
		return (NULL);
	}

	words = malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] && word_count > 0; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;

			while (str[i + len] && str[i + len] != ' ')
			{
				len++;
			}

			words[word_count - 1] = malloc(len + 1);

			if (words[word_count - 1] == NULL)
			{
				return (NULL);
			}

			for (j = 0; j < len; j++, i++)
			{
				words[word_count - 1][j] = str[i];
			}

			words[word_count - 1][j] = '\0';
			word_count--;
		}
	}
	words[0] = NULL;

	return (words);
}
