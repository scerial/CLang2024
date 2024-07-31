#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int cNum =4;
    int sung =0;
    //int find;
    //몇승까지 가는지 확인
    while (!((cNum - (int)pow(2, sung) < pow(2, sung))))
    {
        sung++;
    }
    printf("%d", sung);

    return 0;
}