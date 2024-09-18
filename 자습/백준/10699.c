#include <stdio.h>
#include <time.h>

int main()
{
    time_t now;
    now=time(NULL);
    
    printf("%s",strftime(&now,4,));
}