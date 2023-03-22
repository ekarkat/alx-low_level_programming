#include "main.h"
/**
 * times_table - print time table
 */

void times_table(void)
{
	int i, k, mp;

	while (i <= 9)
	{
		k = 0;
		while (k <= 9)
		{
			mp = i * k;
			if (mp < 10)
			{
				_putchar(mp + '0');
				if (k == 9)
					break;
				_putchar(',');
				_putchar(' ');
				if ((mp + i) < 10)
				_putchar(' ');
			}
			else
			{
				_putchar((mp / 10) + '0');
				_putchar((mp % 10) + '0');
					if (k == 9)
					break;
				_putchar(',');
				_putchar(' ');
			}
			k = k + 1;
		}
		_putchar('\n');
		i = i + 1;
	}

}
