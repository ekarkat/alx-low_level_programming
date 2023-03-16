#include <stdio.h>
/*
 *C program that print the size of some types on the computer it is compiled on
 *Warnings are allowed
 *Your program should return 0
 *
 */
int main(voide)
{
	char c;
	int a;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	printf("Size of a int: %lu byte(s)\n", sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", sizeof(f));

	return (0);
}
