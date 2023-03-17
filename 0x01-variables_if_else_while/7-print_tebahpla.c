#include <stdio.h>
/**
 * main - Entry point Printing alphabet
 * Return: always 0
 */

int main(void)
{
	int a;

	a = 122;
	while (a >= 97)
	{
		putchar(a);
		a = a - 1;
	}
	putchar('\n');
	return (0);
}
