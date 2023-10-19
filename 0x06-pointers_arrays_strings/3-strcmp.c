#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string
 * @s2: second string
 * Return: - 0 if the strings are equal
 * - 1 a negative value if s1 is less than s2
 * - a positive value if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	for (; *s1 && (*s1 == *s2); s1++, s2++)
	{
	}

	return ((int)(*s1) - (int)(*s2));
}
