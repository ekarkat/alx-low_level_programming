#include "main.h"

/**
 * test - test if i is the sqr root
 * @n : the number
 * @i : the numb to check
 * Return: i or -1
 */
int test(int n, int i)
{

	if (i * i == n && i <= n / 2)
		return (i);
	else if (i * i != n && i <= n / 2)
		return (test(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number
 * @n : the number
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (test(n, 1));
}
