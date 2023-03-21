#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n : te number
 * Return: last digit
 */

int print_last_digit(int n)
{
	int d0, abs;

	abs = _abs(n);
	d0 = (abs % 10) + '0';
	_putchar(d0);
	return (abs % 10);
}
