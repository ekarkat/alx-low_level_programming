#include <stdio.h>

typedef struct test
{
    int a;
    char *s;
}test_s;

int arrr (int *num)
{
    num[0] = 11;
    return(num[1]);
}

void changepointervalue (int **ptr)
{
    *ptr = (*ptr) + 1; 
}


int main(void)
{
	int n = 8;
	int *p1 = &n;
	int *p2, *p3;
	int b = 7;

	p2 = &n;
	if (p1 == p2)
	{
		printf("my theory is right");
	}
	else if (p1 == p3)
	{
		printf("ezae");
	}
	else
	printf("\n tehgfcdjdgxht\n");


	return (0);

}