#include <stdio.h>
/**
 * array_iterator - Execute a function on each element of an array
 * @array: An array of integers
 * @size: The size of the array
 * @action: A pointer to a function to be executed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
