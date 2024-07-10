#include <stdio.h>
int main(){
    int i;
    char stop=1;
    while(stop)
    {
        printf("TeeHee\n");
        stop=!getchar();
    }
}