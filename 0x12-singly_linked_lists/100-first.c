#include <stdio.h>

/**
 * premain - Prints a specific message before ain is executed
 */
void __attribute__((constrcutor)) premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
