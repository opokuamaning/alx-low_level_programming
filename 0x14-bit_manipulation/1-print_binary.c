#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long integer to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	/* Variable to keep track of the current bit position */
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	/* Variable to check if at least one bit is set */
	int one_found = 0;

	/* Edge case: If n is 0, print 0 and return */
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	/* Iterate through each bit */
	while (mask > 0)
	{
		/* Check if the current bit is set */
		if (n & mask)
		{
			_putchar('1');
			one_found = 1;
		}
		/* Print 0 only if at least one bit is set */
		else if(one_found)
		{
			_putchar('0');
		}
		/* Move to the next lower bit */
		mask >>= 1;
	}

}
