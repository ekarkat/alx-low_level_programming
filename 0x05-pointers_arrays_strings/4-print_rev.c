#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: string
 */
void print_rev(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		*s++;
	}	
	i = i - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}

