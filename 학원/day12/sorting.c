#include <stdio.h>
#define size 10


int sorting(int *arr)
{
    int temp[10];
    for (int count=0; count<size; count++)
    {
        int rank=0;
        while (rank<10)
        {
            if(*(arr+(size-count))<*(arr+rank))
            {
                rank++;
            }        
        }
        temp[rank]=*(arr+(size-count));        
    
    }
    // for(int i=0; i<10; i++)
    // {
    //     printf("%d, ", temp[i]);
    // }   
    arr=temp;
}

int main()
{
    int arr[10]={1,8,66,43,23,554,6,7,86,0};
    
    for(int i=0; i<10; i++)
    {
        printf("%d, ", arr[i]);
    }   
}