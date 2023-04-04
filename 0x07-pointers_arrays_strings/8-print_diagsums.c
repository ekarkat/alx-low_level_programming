#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the diagboles
 * @a: the array matrix
 * @size: matrix size
 */

void print_diagsums(int *a, int size)
{
	int i, d1, d2;

	i = 0;
	d1 = 0;
	d2 = 0;

	for (; i < size; i++)
	{
		d1 = d1 + a[i][i];
		d2 = d2 + a[size - 1 - i][size - 1 - i];
	}

	printf("%i, %i\n", d1, d2);
}
