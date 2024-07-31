#include <stdio.h>
#include <string.h>

void show(int *array)
{
    int len=sizeof(array)/sizeof(array);
    printf("%d\n",len);

    for(int i=0;i<len;i++)
    {
        printf("%d",array[i]);
    }
}

int main()
{
    int arr[5]={1,2,3,4,5};
    int *p=arr;

    show(p);

    return 0;
}