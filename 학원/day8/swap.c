#include <stdio.h>

typedef struct
{
    int i,j;
}doubleint;


doubleint swap(int i,int j)
{
    /*struct DoubleInt
    {
        int i,j;
    }result;
    
    int *i=&i,*j=&j;
    int temp;*/

    doubleint result;

    int temp;
    temp=i;
    i=j; j=temp;

    result.i=i; result.j=j;

    return result;
}

int main()
{
    int i=10;
    int j=20;
    printf("i=%d, j=%d\n",i,j);

    doubleint result;
    result=swap(i,j);

    i=result.i;
    j=result.j;
    printf("i=%d, j=%d",i,j);

    return 0;
}