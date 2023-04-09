#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the char
 * Return: 1 if c is digit if else return 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
