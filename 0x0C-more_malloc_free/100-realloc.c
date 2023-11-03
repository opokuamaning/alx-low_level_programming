#include <stdlib.h>
#include "main.h"
/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: A pointer to the previously allocated memory
 * @old_size: The size, in bytes, of the allocated space for ptr
 * @new_size: The new size, in bytes, of the new memory block
 *
 * Return: A pointer to the newly allocated memory block
 *
 * The contents are copied to the newly allocated space, up to the minimum
 * of the old and new sizes. If new_size is greater than old_size, the "added"
 * memory is not initialized. If new_size is equal to old_size,
 * nothing is done,
 * and the original pointer is returned. If ptr is NULL,
 * it's equivalent to
 * malloc(new_size). If new_size is 0 and ptr is not NULL, it's equivalent to
 * freeing the memory block and returning NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	unsigned int min_size;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (ptr != NULL)
	{
		min_size = (old_size < new_size) ? old_size : new_size;
		for (i = 0; i < min_size; i++)
		{
			((char *)new_ptr)[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (new_ptr);
}
