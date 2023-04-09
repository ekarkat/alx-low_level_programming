#include "main.h"

/**
 * _isalpha - Check if c is an alphabet
 * @c: the variable
 * Return: 1 if lowercase 0 if else
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
