#include "main.h"
/**
 * _strncpy - copies a string up to 'n' characters
 * @dest: destination buffer
 * @src: source string
 * @n: maximum umber of charachter to copy
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	/* Fill the remaining charachters in dest with null terminators */

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
