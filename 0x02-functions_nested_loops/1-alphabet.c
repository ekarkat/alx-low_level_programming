#include "main.h"
/**
 * print_alphabet - Program that Print alphabet
 * Return: return 0
 */
void print_alphabet(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{
		_putchar(a);
		a = a + 1;
	}
}
