#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Write a program that sum positiv numbers.
 * @argc: arguments number
 * @argv: the arguments passed in
 * Return: return 0
 */

int main(int argc, char *argv[])
{

	int a, b, i, j;

	if (argc == 1)
	{
		printf("Error\n");
		return (0);
	}
	for (i = 1; i <= argc - 1; i++)
	{
		char *r = argv[i];

		for (j = 0; r[j] != '\0'; j++)/*Check if argv[i] is a digit*/
		{
			int id = isdigit(r[j]);

			if (id == 0)
			{
				printf("Errorr\n");
				return (1);
			}
		}
		a = atoi(argv[i]);
		b = b + a;
	}
	printf("%d\n", b);
	return (0);
}
