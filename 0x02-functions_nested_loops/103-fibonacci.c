/**
 * main - Fibonacci numbers
 * Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	int i, k, n, m;

	i = 1;
	n = 2;
	m = 0;
	while (n < 4000000)
	{
		if (n % 2 == 0)
			m = m + n;
		k = n;
		n = n + i;
		i = k;
	}
	printf("%d\n", m);
	return (0);
}
