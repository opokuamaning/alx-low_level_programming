#include "main.h"
/**
 * rot13 - encodes a string using ROT13
 * @str: input string to encode
 * Return: string to modify
 */
char *rot13(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		char c = str[i];

		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		{
			/* Apply ROT13 */
			if ((c >= 'A' && c <= 'Z'))
			{
				char base = (c >= 'A' && c <= 'Z') ? 'A' : 'a';

				int offset = (c - base + 13) % 26;
				str[i] = offset + base;
			}
		}
	}
	return (str);
}
