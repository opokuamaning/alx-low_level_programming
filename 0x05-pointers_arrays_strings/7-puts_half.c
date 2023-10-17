#include "main.h"

/**
 * _strlen - return the length of a string
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
 * puts_half - prints half of a string, floowed by a new line
 * @str: string to print
 */
void puts_half(char *str)
{
	int index;
	int len = _strlen(str);

	/* find the index to start whether it is even/odd */

	if (len % 2 != 0)
	{
		index = (len / 2) + 1;
	}
	else
	{
		index = (len / 2);
	}

	for (; index < len; index++)
	{
		_putchar(*(str + index));
	}
	_putchar('\n');
}
