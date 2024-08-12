#include <stdio.h>
#include <string.h>


void binary(int content,int* result)
{
    for (size_t i = 0; i < 8; content >> i)
    {
        if (content)
        {
            /* code */
        }
        
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