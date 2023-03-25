#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: size of the square
 */
void print_triangle(int size)
{
int size;

size = 10;
if (size > 0)
{
int i, j;

for (i = 1; i <= size ; i++)
{
for (j = 1; j <= size; j++)
{
if (j <= size - i)
{
putchar(' ');
}
else
putchar('#');
}
putchar('\n');
}
}
else
putchar('\n');
}
