#include <stdio.h>
/**
 * main - Entry point Printing numbers
 * Return: always 0
 */

int main(void)
{
	int d0, d1, d2, d3;

	d3 = 48;
	while (d3 <= 57)
	{
		d2 = 48;
		while (d2 <= 57)
		{
			d1 = d3;
			while (d1 <= 57)
			{
				if (d1 == d3)
				d0 = d2 + 1;
				else
				d0 = 48;
				while (d0 <= 57)
				{
					putchar(d3);
					putchar(d2);
					putchar(32);
					putchar(d1);
					putchar(d0);
					if (d3 == 57 && d2 == 56 && d1 == 57 && d0 == 57)
						break;
					putchar(44);
					putchar(32);
					d0 = d0 + 1;
				}
				d1 = d1 + 1;
			}
			d2 = d2 + 1;
		}
		d3 = d3 + 1;
	}
	putchar('\n');
	return (0);
}
