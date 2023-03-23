#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 14
*/
void print_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i = i + 1)
	{
		j = 0;
		for (; j<= 9; j = j + 1)
		_putchar(j + '0');
		_putchar('\n');
	}
	_putchar('\n');
}
