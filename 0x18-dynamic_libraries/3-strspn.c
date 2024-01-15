#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to be searched
 * @accept: The string containing characters to match
 * Return: The number of bytes in the initial segment of s that consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found = 1;
	char *s_ptr, *accept_ptr;
	while (*s)
	{
		s_ptr = s;
		accept_ptr = accept;
		found = 0;

		while (*accept_ptr)
		{
			if (*s_ptr == *accept_ptr)
		{
			found = 1;
			break;
		}
			accept_ptr++;
		}

		if (found == 0)
		{
			break;
		}

		s++;
		count++;
	}

	return (count);
}
