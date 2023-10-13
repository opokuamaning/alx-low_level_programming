#include "main.h"
/**
 * more_numbersb - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	char i;
	int j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i / 10 > 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
