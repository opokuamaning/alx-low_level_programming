#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: character to check
 * Return: 1 if c is a letter, lowercase or uppercase other wise return 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c >= 'z') || (c >= 'A' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
