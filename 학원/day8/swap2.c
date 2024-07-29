#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int i=10, j=20;
    printf("i=%d, j=%d\n",i,j);

    swap(&i,&j);
    printf("i=%d, j=%d",i,j);

    return 0;
}