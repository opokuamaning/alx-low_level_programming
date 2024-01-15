#include "main.h"

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The character to be checked
 * Return: 1 if c is an alphabetic character, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
