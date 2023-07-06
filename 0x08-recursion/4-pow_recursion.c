#include "main.h"

/**
*_pow_recursion - raises a number to the power of an exponent
*@x: the base
*@y: the exponent
*
* Return: the result of x raised to the power of y, or -1 if y is less than 0
*/


int _pow_recursion(int x, int y)
{
int temp;
	if (y < 0)
{
		return (-1);
}
	else if (y == 0)
{
		return (1);
}
	else if (y % 2 == 0)
{
		temp = _pow_recursion(x, y / 2);
		return (temp * temp);
}
	else
{
		return (x * _pow_recursion(x, y - 1));
}
}
