#include <stdio.h>

/**
 * main - printing a program that prints arguments passed into
 * @argc : number of arguments
 * @argv : arguments passed
 * Return: always 0
 */

int main(int argc, char *argv[])
{
	int i, n;

	i = 0;
	n = argc - 1;
	while (i <= n)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
