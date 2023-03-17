#include <stdio.h>
/**
 * main - Entry point Printing alphabet
 * Return: always 0
 */

int main(void)
{
	int a;

	a = 97;
	while (a <= 122)
	{	
		if (a == 101)
			a = a + 1;
		if (a == 113)
			a = a + 1;
		putchar(a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
