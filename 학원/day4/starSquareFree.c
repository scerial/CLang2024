#include <stdio.h>
int main()
{
    int magnitude;
    int count1=0,count2;
    scanf("%d",&magnitude);

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