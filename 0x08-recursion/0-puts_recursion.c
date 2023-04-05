#include "main.h"

/**
 * _puts_recursion - print string
 * @s : the string
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (*s == '\0')
		return;
	_putchar(*s);
	s++;
	i++;
	_puts_recursion(s);
	if (s[i] == '\0')
		_putchar('\n');
}
