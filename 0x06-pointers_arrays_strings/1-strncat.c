#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: amount of bytes used from src.
 * Return: pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int count1 = 0, count2 = 0;

	/* find the length of dest */
	for (count1 = 0; dest[count1] != '\0'; count1++)
	{

	}

	/* Append src to dest */
	for (count2 = 0; count2 < n && src[count2] != '\0'; count2++)
	{
		dest[count1 + count2] = src[count2];
	}

	/* Null - terminate the concatenates string */
	dest[count1 + n] = '\0';

	return (dest);
}
