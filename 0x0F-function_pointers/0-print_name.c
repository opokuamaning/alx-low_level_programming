#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - Prints a name using a custome formatting function
 * @name: A pointer to the character string to be printed
 * @f: A fucntion pointer to a custom formatting function
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
