#include <stdio.h>
#include <string.h>
#include <math.h>

int power(int *toFind)
{
    int sung =0;
    //int find;
    //몇승까지 가는지 확인
    while (!((*toFind - (int)pow(2, sung) < (int)pow(2, sung))))
    {
        sung++;
    }
    printf("%d", sung);

    return sung;
}

int main()
{
    int dec;
    printf("enter decimal:");
    scanf("%d",&dec);
    printf("\n");

    int string[]=(char)dec;
    int length=strlen(&string);
    
    int i;
    while(i<length)
    {
        printf("%d/",string[i]);
        i++;
    }
    int result[8]={0};
    int sung=power(&dec);
    for (int count=8-(sung-1);count=0;count--)
    {
        result[count]=0;
    }
    
    for(int count=sung;count>0;count--)
    {
        result[count]=dec/pow(2,count);//loop (step 2 3)
    }
    printf("result:%d",result);
    return 0;
}