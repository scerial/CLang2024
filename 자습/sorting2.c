#include <stdio.h>
#define size 10
void sort(int *arr)
{
    int temp[10]={0};
    int place=0;
    
    for(int i=0; i<10; i++)
    {
        for(int j=0; j<10; i++)
        {
        if (*(arr+i)<*(arr+j))
        {
            place++;
        }            
        }

        temp[place]=arr[place];
    }

    for(int i=0; i<10; i++)
    {
        printf("%d",temp[i]);
    }
    
}

int main()
{
    int arr[10]={1,8,66,43,23,554,6,7,86,0};
    sort(arr);
}