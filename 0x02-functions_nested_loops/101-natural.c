#include <stdio.h>

/**
 * main - sums nultplies
 * Return: Always(0) Success
 */

int main(void)
{
	int a, n, t;

	n = 1024;
	t = 0;

	for (a = 0; a < n; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			t = t + a;
		}
		else
		{
			continue;
		}
	}

	printf("%d", t);
	printf("\n");

	return (0);
}
