#include <stdio.h>
/**
 * main - Entry point Printing numbers
 * Return: always 0
 */

int main(void)
{
	int a, b;

	a = 48;
	while (a <= 57) /*number loop*/
	{
		b = a + 1;
		while (b <= 57)
		{
			putchar(a);
			putchar(b);
			if (a == 56)
				break;
			putchar(44);
			putchar(32);
			b = b + 1;
		}

		a = a + 1;
	}
	putchar('\n');
	return (0);
}
