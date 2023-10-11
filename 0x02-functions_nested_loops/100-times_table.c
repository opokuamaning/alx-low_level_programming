#include "main.h"
/**
 * print_times_table - print multiplication table up to n
 * @n: integer argument
 */
void print_times_table(int n)
{
	int row, col, mul;

	if (n >= 0 && n <= 15)
	{
		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				mul = (row * col);

				if (col == 0)
				{
					_putchar('0' + mul);
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (mul <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar('0' + mul);
					}
					else if (mul > 9 && mul < 00)
					{
						_putchar(' ');
						_putchar('0' + (mul / 10));
						_putchar('0' + (mul % 10));
					}
					else if (mul >= 100)
					{
						_putchar('0' + (mul / 100));
						_putchar('0' + ((mul / 10) % 10));
						_putchar('0' + (mul % 10));
					}
				}
			}
			_putchar('\n');
		}
	}
}
