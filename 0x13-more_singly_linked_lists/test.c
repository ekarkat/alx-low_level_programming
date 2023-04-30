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
    int n;

    int arr[5] = {1,2,3,4,5};
    test_s s1 = {15,"abc"};
    int *ps1;
    int **pps1;
    ps1 = arr;
    pps1 = &ps1;

    printf("address of the array first element : %p\n", &arr[0]);
    printf("the value of ps1 before rn functions : %p\n", ps1);

    changepointervalue(pps1);    
    n = arrr(arr);
    printf("address of the array sec element : %p\n", &arr[1]);

    printf("the value of ps1 after rn functions : %p\n", ps1);


}