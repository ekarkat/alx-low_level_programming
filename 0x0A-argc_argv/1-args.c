#include <stdio.h>

/**
 * main - Write a program that prints the number of arguments passed into it.
 * @argc : number of argumùent
 * @argv : the arguments
 * Return: always 0
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
