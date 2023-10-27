#include "main.h"

/**
 * _strncat - Concatenates two strings with a maximum length
 * @dest: The destination string
 * @src: The source string to be appended
 * @n: The maximum number of characters to append
 * Return: A pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	for (i = 0; dest[i] != '\0'; i++)
	{
		/* Find the end of dest */
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0'; /* Null-terminate the resulting string */

	return (dest);
}
