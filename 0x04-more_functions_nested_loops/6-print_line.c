#include "main.h"
/**
 * print_line - draws a straight line in the terminal
 * @n: function parameter
 * Return: printed line
 */
void print_line(int n)
{
	int line = n;

	for (line = n; line > 0; line--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
