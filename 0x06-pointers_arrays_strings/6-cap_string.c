#include "main.h"
#include<ctype.h>
#include<string.h>
#include<stddef.h>
/**
 * cap_string - capitalizes all words of a string
 * @str: string to capitalize
 * Return: string
 */
char *cap_string(char *str)
{
	int i;
	int cap_flag = 1;
	int len = strlen(str);

	char sep_chars[] = " \t\n,;.!?\"(){}";

	for (i = 0; i < len; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		if (strchr(sep_chars, str[i]) != NULL)
		{
			cap_flag = 1;
		}
		else if (cap_flag && isalpha(str[i]))
		{
			str[i] = toupper(str[i]);
			cap_flag = 0;
		}
	}

	return (str);
}
