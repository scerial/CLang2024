#include <stdio.h>
#define BYTE = 8

void Show_Memory(const char *ap_str)
{
    int i=0;
    do
    {
        printf("%d %x", *(ap_str+i),*(ap_str+i));
        printf("\n");
        do
        {
            
        } while (BYTE - i < 8);
        
    } while (i < 8);
    
}

int main()
(
    Show_Memory("Memory");
)