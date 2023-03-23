#include "main.h"

/**
 * print_times_table - prints the n times table
 * @n: number of lines
 */

void print_times_table(int n)
{
int i, k, mp;

for (i = 0; i <= n; i = i + 1)
{
if (n > 15)
break;
k = 0;
for (; k <= n; k = k + 1)
{
mp = i * k;
if (mp < 10)
_putchar(mp + '0');
else if (mp >= 10 && mp < 100)
{
_putchar((mp / 10) + '0');
_putchar((mp % 10) + '0');
}
else
{
_putchar(mp / 100 + '0'); /*detect first digit of a number*/
_putchar(((mp - (mp / 100) * 100) / 10) + '0'); /*detect 2end digit */
_putchar((mp % 10) + '0');
}
if (k == n)
break;
_putchar(',');
_putchar(' ');
if (mp + i < 10)
{
_putchar(' ');
_putchar(' ');
}
else if (mp + i < 100)
{
_putchar(' ');
}
}
_putchar('\n');
}
}
