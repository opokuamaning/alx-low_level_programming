#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant style
 * @n: number of bytes to fill
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	if (n > 0)
	{
		unsigned int i;

		for (i = 0; i < n; i++)
		{
			s[i] = b;
		}
	}

	return (s);
}
