#include <stdio.h>
int main()
{
    /*datatype should be long long in 
    order to administer values up to 10^12*/
    long long a,b,c;
    long long res;

    scanf("%lld %lld %lld",&a,&b,&c);
    res=a+b+c;
    printf("%lld",res);

    return 0;
}