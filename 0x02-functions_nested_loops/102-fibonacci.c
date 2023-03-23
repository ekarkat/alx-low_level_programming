/**
 * main - Fibonacci numbers
 * Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	long long int i, k, n, m;

	k = 1;
	m = 1;
	for (i = 1; i <= 50; i = i + 1)
	{
		printf("%lli", k);
		if (i < 50)
		printf(", ");
		n = k;
		k = k + m;
		m = n;
	}
	printf("\n");
	return (0);
}
