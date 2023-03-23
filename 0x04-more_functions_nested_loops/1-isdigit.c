#include "main.h"

/**
 * _isdigit - checks for digit
 * @c: the char
 * Return: 1 if c is digit if else return 0
 */
int _isupper(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
