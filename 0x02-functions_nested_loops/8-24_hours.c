#include "main.h"
/**
 * jack_bauer - Prints every minute
 * Retuen: returne 0
*/

void jack_bauer(void)
{
	int d3, d2, d1, d0;

	d3 = 48;
	while (d3 <= 50)
	{
		d2 = 48;
		while (d2 <= 57)
		{
			if (d3 == 50 && d2 == 52)
				break;
			d1 = 48;
			while (d1 <= 53)
			{
				d0 = 48;
				while (d0 <= 57)
				{
					_putchar(d3);
					_putchar(d2);
					_putchar(':');
					_putchar(d1);
					_putchar(d0);
					_putchar('\n');
					d0 = d0 + 1;
				}
				d1 = d1 + 1;
			}
			d2 = d2 + 1;
		}
	d3 = d3 + 1;
	}
	return 0;
}

