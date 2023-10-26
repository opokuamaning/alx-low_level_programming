#include "main.h"

/**
 * find_sqrt - Helper function to find the square root recursively
 * @n: The number for which to find the square root
 * @guess: The current guess for the square root
 * Return: The natural square root of n, or -1 if it doesn't exist
 */
int find_sqrt(int n, int guess)
{
        if (guess * guess == n)
        {
                return (guess);
        }

        if (guess * guess > n)
        {
                return (-1);
        }

        return (find_sqrt(n, guess + 1));
}


/**
 * _sqrt_recursion  - returns the natural square root of a number
 * @n: Natural  square root
 * @guess: Curreent gueess for the square root
 * Return: the natual square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (find_sqrt(n, 0));
}
