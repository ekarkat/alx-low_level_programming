#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n : te number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int d0;

	if (n < 0)
	{
		n = -n;
	}
	d0 = (n % 10) + '0';
	_putchar(d0);
	return (n % 10);
}
