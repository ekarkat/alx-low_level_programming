#include <stdio.h>
/**
 * main - Entry point Printing numbers
 * Return: always 0
 */

int main(void)
{
	int a;

	a = 0;
	while (a <= 9) /*number loop*/
	{
		printf("%d", a);
		a = a + 1;
	}
	putchar('\n');
	return (0);
}
