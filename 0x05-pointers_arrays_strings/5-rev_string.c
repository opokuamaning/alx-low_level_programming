#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	for (len = 0; *s != '\0'; len++)
	{
		s++;
	}

	return (len);
}
/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void  rev_string(char *s)
{
	int i = 0;
	int j = (_strlen(s) - 1);
	char string;

	for (i = 0; i < j; i++)
	{
		string = s[i];
		s[i] = s[j];
		s[j] = string;
		j--;
	}
}
