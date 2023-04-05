#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x : the base
 * @y : power
 * Return: x power of y
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else if (y == 0)
		return (x);
	else
		return (-1);
}
