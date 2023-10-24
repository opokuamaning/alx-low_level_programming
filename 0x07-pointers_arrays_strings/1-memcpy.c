#include "main.h"
/**
 * _memcpy - spoies memory area
 * @dest: destination memery area
 * @src: source memory area
 * @n: number of bytes to copy
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
