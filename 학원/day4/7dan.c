#include <stdio.h>
int main()
{
    int step=0;
    while(step<10)
    {
        printf("7*%d=%d\n",step,7*++step);
    }
    return 0;
}