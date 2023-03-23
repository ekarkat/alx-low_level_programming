/**
 * main - Fibonacci numbers
 * Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	int i, k, n, m;

	k = 1;
	m = 1;
	i = 1;
	for (; k <= 4000000;)
	{
		if ((k % 2) == 0)
		{
			i = i + k;
			n = k;
			k = k + m;
			m = n;
		}
	}
	printf("%d\n", i);
	return (0);
}
