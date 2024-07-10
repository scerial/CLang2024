#include <stdio.h>
int main(){
    char i=4;//0100
    i=(i>>2 & 0x01);
    printf("%d\n",i);
    return 0;
}
//bit operations can be used to implicitly depict an array of data.
//ex)on off, is it text?jpg?video?