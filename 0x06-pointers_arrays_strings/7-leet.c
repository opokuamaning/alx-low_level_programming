#include "main.h"
/**
 * leet - encode a string into 1337
 * @str: input string to encode
 * Return: pointer to modify
 */
char *leet(char *str)
{
	int i;
	/* Initialize an array for charachter placement */
	char leet_map[256] = {0};

	/* Define the 1337 replacement */
	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Use mapping to replace the charachters */
		if (leet_map[(int)str[i]] != 0)
		{
			str[i] = leet_map[(int)str[i]];
		}
	}

	return (str);
}
