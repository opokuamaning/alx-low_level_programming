#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the unsigned long integer.
 * @index: The index of the bit to set.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	/* Check if the index is valid */
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	/**
	 * Use bitwise operations to set the value of the
	 * bit at the specified index to 1
	 */
	*n = *n | (1 << index);

	/* Return 1 to indicate success */
	return (1);
}
