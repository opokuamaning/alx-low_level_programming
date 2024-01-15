#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: The string to search
 * @c: The character to find in s
 * Return: A pointer to the first occurrence
 * of the character c in the string s,
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
	{
		return (s);
	}
		s++;
	}

	if (c == '\0')
	{
		return (s); /* Return a pointer to the null terminator if c is '\0' */
	}

	return (0); /* Character not found in the string */
}
