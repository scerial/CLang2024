#include <stdio.h>
int main()
{
    int i=10;
    int* p;
    p=&i;
    
    printf("%d\n",i);
    *p=70;

    printf("%d",i);

    return 0;
}