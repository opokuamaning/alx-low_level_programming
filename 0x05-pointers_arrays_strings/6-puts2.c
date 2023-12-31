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
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: string
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0' && i < _strlen(str); i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
