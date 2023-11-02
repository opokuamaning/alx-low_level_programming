#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked -  a function that allocates memory using malloc
 * @b: memory size allocated
 * Return:  a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(98);
	}

	return (ptr);
}
