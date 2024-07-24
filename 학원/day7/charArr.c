#include <stdio.h>
#include <string.h>
int main()
{
    char arr[10]="Hello";//at the end of a string is always a null character(\0)
    int res=strcmp("Hellosir",arr);//use "strcmp" to compare strings. "==" operators are not available.   
    printf("comparison: %d",res);
    printf("comparison: %d",strcmp("Hello",arr));
    
    return 0;
}