#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: string
 */
void print_rev(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
		i++;

	while (i >= 0)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}

