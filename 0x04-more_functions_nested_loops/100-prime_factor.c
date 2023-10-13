#include <stdio.h>
/**
 * main - print largest prime factor of 612852475143
 * Return: 0 on success
 */
int main(void)
{
	unsigned long number = 612852475143;
	unsigned long divider = 2;

	for (divider = 2; divider < number; divider++)
	{
		if (number % divider == 0)
		{
			number /= divider;
			divider = 2;
		}
	}
	printf("%lu\n", number);
	return (0);
}
