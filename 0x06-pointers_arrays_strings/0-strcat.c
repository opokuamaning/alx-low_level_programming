#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: pointer to destination
 */
char *_strcat(char *dest, char *src)
{
	int count1 = 0, count2 = 0;

	for (count1 = 0; *(dest + count1) != '\0'; count1++)
	{

	}

	for (count2 = 0; count2 >= 0; count2++)
	{
		*(dest + count1) = *(src + count2);
		if (*(src + count2) == '\0')
		{
			break;
		}
		count1++;
	}
	return (dest);
}
