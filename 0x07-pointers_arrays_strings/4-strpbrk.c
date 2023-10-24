#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search
 * @accept: teh characters to search for
 * Return: pointer to the byte
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		int i;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
