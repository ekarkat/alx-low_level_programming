#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n : te number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int d0, abs;
	
	if (n < 0)
	{
		abs = -n;
		d0 = (abs % 10) + '0';
		_putchar(d0);
		return (abs % 10);
	}
	else
	{
	d0 = (n % 10) + '0';
	_putchar(d0);
	return (n % 10);
	}
}
