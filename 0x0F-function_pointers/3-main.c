#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point of the program
 * @argc: The number of commanline arguments
 * @argv: An array of command line argument strings
 * Return: 0 on success or an error on code failure
 */
int main(int argc, char *argv[])
{
	int num1, num2, result, (*operation)(int, int);
	char *operator;

	if(argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2];
	
	operation = get_op_func(operator);

	if (operation == NULL)
	{
		printf("Error\n");
		return (99);
	}

	result = operation(num1, num2);

	printf("%d\n", result);

	return (0);
}
