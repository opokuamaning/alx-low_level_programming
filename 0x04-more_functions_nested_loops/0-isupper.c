#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: function parameter
 * Return: 1 if c is uppercase and 0 if not
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
