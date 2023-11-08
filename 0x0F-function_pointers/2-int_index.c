#include <stdio.h>
/**
 * int_index - Searches for an integer in an array
 * @array: The array of the integers
 * @size: The size of the array
 * @cmp: A pointer to the comparison function
 * Return: The index of the first matching element,
 * or -1 if no match or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
