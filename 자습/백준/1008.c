#include <stdio.h>

int main()
{
    //double for accuracy
    double a,b;
    double res;

    scanf("%lf %lf",&a,&b);
    res=a/b;
    printf("%.32g",res);
    //%g for eliminating following zeros, 32 for prescision setting
    return 0;
}