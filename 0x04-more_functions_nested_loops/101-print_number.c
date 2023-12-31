#include "main.h"
/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */
void print_number(int n)
{
	unsigned int tens, digit, pos = n;
	double t_beg = 1;

	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		if (n < 0)
		{
			pos = n * -1;
			_putchar('-');
		}
		while (t_beg <= pos)
		{
			t_beg *= 10;
		}
		tens = t_beg / 10;
		while (tens >= 1)
		{
			digit = pos / tens;
			_putchar(digit + '0');
			pos = (pos - (tens * digit));
			tens /= 10;
		}
	}
}
