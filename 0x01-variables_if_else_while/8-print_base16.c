#include <stdio.h>
/**
 * main - Entry point Printing alphabet
 * Return: always 0
 */

int main(void)
{
	int a;

	a = 48;
	while (a <= 122)
	{
		if (a == 57)
			a = 97;
		if (a == 103)
			break;
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
