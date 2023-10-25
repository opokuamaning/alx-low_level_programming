#include "main.h"
/**
 * _strlen_recursion - Returns thee length of a string using recursion
 * @s: string to calculate the length
 * Return: lenth of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
