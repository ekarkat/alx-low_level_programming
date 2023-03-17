#include <stdio.h>
/**
 * main - Entry point Printing numbers
 * Return: always 0
 */

int main(void)
{
	int a;

	a = 48;
	while (a <= 57) /*number loop*/
	{
		putchar(a);
		if (a == 57)
			break;
		putchar(44);
		putchar(32);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
