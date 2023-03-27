#include "main.h"

/**
 * print_array - prints n elements of an array
 * @a: array name
 * @n: number of char
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= (n - 1); i++)
	{
		printf("%c, ", a[i]);
	}
	printf("\n");
}
