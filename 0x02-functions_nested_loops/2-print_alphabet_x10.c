#include "main.h"
/**
 * print_alphabet_x10 - Program that Print alphabet 10 times
 * Return: return 0
 */
void print_alphabet_x10(void)
{
	int a, n;

	n = 1;
	while (n <= 10)
	{
		a = 97;
		while (a <= 122)
		{
			_putchar(a);
			a = a + 1;
		}
		_putchar('\n');
		n = n + 1;	
	}
}
