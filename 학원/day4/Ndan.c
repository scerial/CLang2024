#include <stdio.h>
int main()
{
    int step=1,dan;
    scanf("%d",&dan);

    while(step<10)
    {
        printf("%d*%d=%d\n",dan,step,dan*++step);
    }
    return 0;
}