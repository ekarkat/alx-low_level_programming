#include "main.h"

/**
 * print_binary - print binary representation of a number
 * @n : the number
*/

void print_binary(unsigned long int n)
{
	unsigned long int mask;

	if (n == 0)
		_putchar('0');
	mask = 1;
	while (mask < n)
		mask <<= 1;
	if (mask > n)
		mask >>= 1;

	while (mask > 0)
	{
		if (n & mask)
			_putchar('1');
		else
			_putchar('0');
		mask >>= 1;
	}
}
