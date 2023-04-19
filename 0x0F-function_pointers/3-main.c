#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - calculate using simple operator
 * @argc : number of arguments
 * @argv : strings
 * Return: return result
 */

int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
