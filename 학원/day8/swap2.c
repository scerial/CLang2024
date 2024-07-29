#include <stdio.h>

int main()
{
    int i=10, j=20;
    int *ptri=&i, *ptrj=&j;
    
    int temp=ptri;
    ptri=ptrj;
    ptrj=temp;

    

}