#include "main.h"

/**
 * _strncpy - Copies a string with a maximum length
 * @dest: The destination string
 * @src: The source string
 * @n: The maximum number of characters to copy
 * Return: A pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
