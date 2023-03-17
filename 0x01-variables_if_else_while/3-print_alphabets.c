#include <stdio.h>
/**
 * main - Entry point Printing alphabet
 * Return: always 0
 */

int main(void)
{
	int a, b;

	a = 97;
	b = 65;
	while (a <= 122) /*lower case*/
	{
		putchar(a);
		a = a + 1;
	}
	while (b <= 90) /* UPPER CASE */
	{
		putchar(b);
		b = b + 1;
	}
	putchar('\n');
	return (0);
}
