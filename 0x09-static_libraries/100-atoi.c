#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to be converted
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}

	while (s[i] != '\0')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (result * sign);
}
