#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of  '\'
*/
void print_diagonal(int n)
{

	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			j = 0;
			for (; j < n; j++)
			{

				if (j < i)
					_putchar(' ');
				if (j == i)
					_putchar('\\');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');

}
