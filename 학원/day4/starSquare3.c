#include <stdio.h>
int main()
{
    int magnitude=3;
    int count1=0,count2;

    while(count1<magnitude)
    {
        count2=0;
        while(count2<magnitude)
        {
            printf("*");
            count2++;
        }
        printf("\n");
        count1++;
    }
    return 0;
}