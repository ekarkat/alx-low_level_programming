#include "main.h"

/**
 * test - check if the number can be devided by i
 * @n : is the number
 * @i : the dev
 * Return: 1 or 0
 */

int test(int n, int i)
{

	if (n % 2 == 0)
		return (0);
	if (n % i == 0 && n != i)
		return (0);
	else if (n % i != 0 && n != i)
		return (test(n, (i + 2)));
	else
		return (1);
}

/**
 * is_prime_number - check if n is a prime number
 * @n : the number
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */


int is_prime_number(int n)
{
	if (n == 1)
		return (1);
	return (test(n, 3));
}
