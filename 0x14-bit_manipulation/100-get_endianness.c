#include "main.h"
/**
 * get_endianness - Checks the endianness of the system
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	/**
	* If the first byte (lowest address) is 1, it's little-endian.
	* If the last byte (highest address) is 1, it's big-endian.
	*/

	return (*c);
}
