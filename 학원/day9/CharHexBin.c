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
    
    return sung;
}

int binary(int *cNum)
{
    int result[8]={0};
    int sung=power(*cNum);
    for (int count=8-sung;count<=1;count--)
    {
        result[count]=0;
    }
    
    for(int count=sung;count>0;count--)
    {
        result[count]=*cNum/(int)pow(2,count);//loop (step 2 3)
    }
    
    return *result;
}

void Show_Memory(const char *ap_str)
{
    int length=strlen(ap_str);

    for (int i = 0; i < length; i++)
    {
        int cNum=(int)(*(ap_str+i));
        
        printf("%c %X ",*(ap_str+i),*(ap_str+i));
        for(int i=0;i<=7;i++)
        {
            printf("%d",binary((int *)(ap_str+i)));
        }
        printf("\n");
    } 
}

int main()
{
    Show_Memory("Memory");

    return 0;
}