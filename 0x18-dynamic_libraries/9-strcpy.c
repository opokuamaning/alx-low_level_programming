#include "main.h"

/**
 * _strcpy - Copies a string to another
 * @dest: The destination string
 * @src: The source string
 * Return: A pointer to the resulting string dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0'; /* Null-terminate the resulting string */

	return (dest);
}
