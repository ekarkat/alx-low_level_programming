/**
 * main - Fibonacci numbers
 * Return: Always 0
*/
#include <stdio.h>

int main(void)
{
	long long int i, k, n;

	k = 2;
	i = 1;
	n = 0;
	printf("1, 2, ");
	for (i = 1; i <= 50; i = i + 1)
	{
		k = k + (k - 1);
		printf("%lli", k);
		if (i < 50)	
		printf(", ");
	}
	printf("\n");
	return (0);
}

