#include <stdio.h>
#include <string.h>
#include <math.h>

int power(int toFind)
{
    int sung =0;
    //int find;
    //몇승까지 가는지 확인
    while (!((toFind - (int)pow(2, sung) < (int)pow(2, sung))))
    {
        sung++;
    }
    //printf("%d",sung);
    return sung;
}

void binary(int content,int* result)
{
    result={0};
    int sung=power(content);
        
    for(int count=sung;count>=0;count--)
    {
        result[7-count]=(int)content/(int)pow(2,count);//loop (step 2 3)
    }
    
}

void Show_Memory(const char *ap_str)
{
    int length=strlen(ap_str);

    for (int i = 0; i < length; i++)
    {
        int content=(int)(*(ap_str+i));
        
        printf("%c %X ",*(ap_str+i),*(ap_str+i));      // dec hex
       
        //get array of binary bits
        int bin[8];
        int contents
        binary(*(ap_str+i), bin);
        
        // print out array by bits
        for(int i=0;i<=7;i++)
        {
            printf("%d",bin[i]);                       
        }                                              
        printf("\n");
    } 
}

int main()
{
    Show_Memory("Memory");

    return 0;
}