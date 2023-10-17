#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line
 * @s: string
 */

void print_rev(char *s)
{
	int len = 0;
	int i;

	/* loop to find the length and point of the las character */
	for (len = 0; *s != '\0'; ++len)
	{
		++s;
	}

	/* return to the character before the null charachter */
	s--;

	/* print reversed string */
	for (i = len; i > 0; i--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');

}
