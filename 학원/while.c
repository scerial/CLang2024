#include <stdio.h>
int main(){
    int count=0;
    while(count<10){
        printf("%d. Hello World!\n",++count);
    }

    char countC='a';
    while(count<'d'){
        printf("%c. Hello World!\n",count++);
    }
    return 0;
}