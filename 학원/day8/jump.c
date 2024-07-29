#include <stdio.h>

int main()
{
    int a[3]={1,2,3};
    
    printf("%d/%p\n\n",a,a);
    
    for(int i=0;i<3;i++)
    {
        printf("%d/%p\n",a[i],a[i]);
    }
    printf("%d/",a[3]);
    printf("%d,%p",*&a+3,*&a+3);
    printf("\n%p",a[3]);
    return 0;
}