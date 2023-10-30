#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the character to initialize
 * Return: null if size is 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
