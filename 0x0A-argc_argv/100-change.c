#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program that prin change
 * @argc: arguments number
 * @argv: the arguments passed in
 * Return: return 0
 */

int main(int argc, char *argv[])
{

	int a, c25, c10, c5, c2, c1;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(argv[1]);
	if (a <= 0)
	{
		printf("0\n");
		return (0);
	}
	c25 = a / 25;
	c10 = (a % 25) / 10;
	c5 = (a - (c25 * 25 + c10 * 10)) / 5;
	c2 = (a - (c25 * 25 + c10 * 10 + c5 * 5)) / 2;
	c1 = (a - (c25 * 25 + c10 * 10 + c5 * 5 + c2 * 2));
	printf("%d\n", c25 + c10 + c5 + c2 + c1);
	return (0);
}
