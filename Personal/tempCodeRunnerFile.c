#include <stdio.h>

int main()
{
    int wee = 15;

    printf("%d\n", wee);
    for (size_t i = 0; i < 8; i++)
    {
        if(i==4)
        {
            printf(" ");
        }
        printf("%d", wee >> i & 1);
    }
         
    return 0;
}