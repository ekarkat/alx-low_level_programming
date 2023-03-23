#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i = i + 1)
	{
		for (j = 0; j < 15; j = j + 1)
		{
			if (j >= 10)
				_putchar('1');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
