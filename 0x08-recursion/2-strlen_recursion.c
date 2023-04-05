#include "main.h"

/**
 * _strlen_recursion - a function that returns the length of a string.
 * @s: string
 * Return: nimber of char
 */
int _strlen_recursion(char *s)
{
	int n = 1;

	if (*s != '\0')
	{
		return (n + _strlen_recursion(s));
	}
	return (0);
}
