#include "main.h"
/**
 * get_bit - Returns the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index of the bit to retrieve (starting from 0).
 * Return: The value of the bit at the specified index,
 * or -1 if an error occurred.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	/**
	 *  Check if the index is out of bounds
	 *
	 */
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	/*
	 * Use bitwise AND to check if the bit at
	 * the specified index is set
	 */

	return ((n >> index) & 1);
}
