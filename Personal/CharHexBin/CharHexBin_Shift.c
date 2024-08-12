#include <stdio.h>
#include <string.h>

void Show_Memory(const char *ap_str)
{
    for(int i = 0; i < strlen(ap_str); i++)
    {
        printf("%c %X ",*(ap_str+i),*(ap_str+i));
        
        for (int count = 0; count < 8; count++)
        {
            printf("%d", *(ap_str+i) >> count & 1);

            if (count == 3)
            {
                printf(" ");
            }
        }
        
        
        printf("\n");
    }
}

int main()
{
    Show_Memory("Memory");

    return 0;
}