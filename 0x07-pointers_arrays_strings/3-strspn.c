#include "main.h"
/**
 * _strspn - get the length of a prefix
 * @s: the string to search
 * @accept: the characters to accept in the prefix
 * Return: then of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 0;

	while (*s != '\0')
	{
		int i;
		found = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				count++;
				found = 1;
				break;
			}
		}

		if (found == 0)
		{
			return (count);
		}
		s++;
	}

	return (count);
}
