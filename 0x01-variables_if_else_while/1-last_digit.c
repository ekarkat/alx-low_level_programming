#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Printing last digit
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, a, b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	a = 1;
	b = n;
	while (n - a > 0)
	{
		a = a * 10;
		if (n - a < 0)
		{
			a = a / 10;
			break;
		}
	}
	while (a != 1)
	{
		b = b % a;
		a = a / 10;
	}
	if (b > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, b);
	}
	else if (b == 0)
	{
		printf("Last digit of %d is %d and is 0", n, b);
	}
	else
		printf("Last digit of %d is %d and is less than 6 and not 0");
	return (0);
}
