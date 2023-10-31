#include <stdlib.h>
#include "main.h"

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */

char **strtow(char *str)
{
	int word_count = 0;
	int i, j, k;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			word_count++;
	}

	words = (char **)malloc(sizeof(char *) * (word_count + 1));

	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; k < word_count; k++)
	{
		while (str[i] == ' ')
		i++;

	for (j = i; str[j] && str[j] != ' '; j++)
		;

	words[k] = (char *)malloc(sizeof(char) * (j - i + 1));

	if (words[k] == NULL)
	{
		for (k = 0; k < word_count; k++)
		free(words[k]);
		free(words);
		return (NULL);
	}

	for (j = 0; str[i] && str[i] != ' '; j++, i++)
		words[k][j] = str[i];
		words[k][j] = '\0';
	}
	words[word_count] = NULL;
	return (words);
}

