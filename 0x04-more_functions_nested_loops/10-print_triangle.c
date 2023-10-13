#include "main.h"
/**
 * print_triangle - print traingle with #'s with given size
 * @size: size of triangle to draw
 */
void print_triangle(int size)
{
	int height, width, triangle;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (height = 1; height <= size; height++)
	{
		for (width = 1; width <= (size - height); width++)
		{
			_putchar(' ');
		}
		for (triangle = 1; triangle <= height; triangle++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
