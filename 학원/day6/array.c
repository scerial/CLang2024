#include <stdio.h>

int main()
{
    int arr1[5]={1,2,3,4,5};
    int arr2[]={1,2,3,4,5,6,7};
    int arr3[5]={1,2};
    int ar1Len, ar2Len, ar3Len, i;

    //sizeof 사용시 array의 길이를 구하고자 하면 array의 size를 구하고  자료형의 size 또는 arr[0]의 크기로 나눈다.
    for (size_t i = 1; i < 4; i++)
    {
        printf("size of array arr%d: %d",i,sizeof(i));
    }
    
   return 0;
}