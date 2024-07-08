#include <stdio.h>
int main(){
    int count=0;
    int times;
    scanf("%d",&times);
    
    while(count++<9){
        //printf("9X%d=%d\n",count,9*count);
        printf("%dX%d=%d\n",times,count,times*count);
    }
    return 0;
}