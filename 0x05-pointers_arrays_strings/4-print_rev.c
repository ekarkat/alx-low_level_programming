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
	{
		i++;
		*str++;
	}	
	i = i - 1;
	while (i >= 0)
	{
		_putchar(str[i]);
	}
		_putchar('\n');
}

