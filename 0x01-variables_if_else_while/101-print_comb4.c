#include <stdio.h>
/**
 * main - Entry point Printing numbers
 * Return: always 0
 */

int main(void)
{
	int a, b, c;

	a = 48;
	while (a <= 57) /*number loop*/
	{
		b = a + 1;
		while (b <= 57)
		{
			c = b + 1;
			while (c <= 57)
			{
				putchar(a);
				putchar(b);
				putchar(c);
				if (a == 55)
					break;
				putchar(44);
				putchar(32);
				c = c + 1;
			}
			b = b + 1;
		}
	a = a + 1;
	}
	putchar('\n');
	return (0);
}
