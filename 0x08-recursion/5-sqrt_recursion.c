#include "main.h"

/**
* sqrt_helper - helper function to find the square root of a number
* @n: the number to find the square root of
* @i: the current number to check
*
* Return: the square root of n if n has a natural square root, -1 otherwise
*/
int sqrt_helper(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_helper(n, i + 1));
}

/**
* _sqrt_recursion - returns the natural square root of a number
* @n: the number to find the square root of
*
* Return: the square root of n if n has a natural square root, -1 otherwise
*/
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_helper(n, 0));
}
