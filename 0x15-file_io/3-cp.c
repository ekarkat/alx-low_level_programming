#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include "main.h"
/**
 * print_error - print error
 * @av : the arg
 * @n : the file discriptor
*/

void print_error(char *av, ssize_t n)
{
	if (n == 1)
	{
	dprintf(2, "Error: Can't read from file %s\n", av);
	exit(98);
	}
	if (n == 2)
	{
		dprintf(2, "Error: Can't write from file %s\n", av);
		exit(99);
	}
}

/**
 * main -  a program that copies the content of a file to another file.
 * @ac: the number of files
 * @av : files names
 * Return: return 1 or -1
*/

int main(int ac, char *av[])
{
	ssize_t fid1, fid2, lnf1, lnf2 = 0;
	char buff[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fid1 = open(av[1], O_RDONLY);
	if (fid1 == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	fid2 = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 664);
	if (fid2 == -1)
	{
		dprintf(2, "Error: Can't write from file %s\n", av[2]);
		exit(99);
	}
	while (lnf1 > 0)
	{
		lnf1 = read(fid1, buff, 1024);
		if (lnf1 == -1)
			print_error(av[1], 1);
		lnf2 = write(fid2, buff, lnf1);
		if (lnf2 == -1)
			print_error(av[2], 2);
	}
	if (close(fid1) == -1)
	{
		dprintf(2, "Error: Can't close fd %li\n", fid1);
		exit(100);
	}
	if (close(fid2) == -1)
	{
		dprintf(2, "Error: Can't close fd %li\n", fid2);
		exit(100);
	}
	return (0);
}
