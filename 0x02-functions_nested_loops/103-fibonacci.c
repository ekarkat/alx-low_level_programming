/**
 * main - Fibonacci numbers
 * Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	int i, k, n, m;

	i = 1;
	j = 2;
	m = 0;
	while (j < 4000000)
	{
		if (j % 2 == 0)
			m = m + j;
		k = j;
		j = j + i;
		i = k;
	}
	printf("%d\n", m);
	return (0);
}
