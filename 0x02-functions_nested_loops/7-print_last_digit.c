#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n : te number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int d0;

	d0 = n % 10;
	if (n < 0)
	{
		d0 = -d0;
	}
	_putchar(d0 + 48);
	return (d0);
}
