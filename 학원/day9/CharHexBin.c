#include <stdio.h>
#include <string.h>
#include <math.h>

int sung(int toFind)
{
    toFind =4;
    int sung =0;
    //int find;
    //몇승까지 가는지 확인
    while (!((toFind - (int)pow(2, sung) < pow(2, sung))))
    {
        sung++;
    }
    
    return sung;
}

void binary(int cNum)
{
    int sung=sung(cNum);
    for (int count=8-(sung-1);count=0;count--)
    {
        printf("%d",0)
    }
    
    for(int count=sung;count=0;count--)
    {
        printf()//loop (step 2 3)
    }
}

void Show_Memory(const char *ap_str)
{
    int length=strlen(ap_str);

    for (int i = 0; i < length; i++)
    {
        int cNum=(int)(*(ap_str+i));
        printf("%d\n",cNum);
        printf("%c %X \n",*(ap_str+i),*(ap_str+i));
    }
    
}

int main()
{
    Show_Memory("Memory");
}