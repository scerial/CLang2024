#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int toFind='M';
    int sung =0;
    //int find;
    //몇승까지 가는지 확인
    while (!((toFind - (int)pow(2, sung) < (int)pow(2, sung))))
    {
        sung++;
    }
    printf("%d",sung);
    
    return 0;
}