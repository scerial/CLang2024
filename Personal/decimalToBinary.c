#include <stdio.h>
#include <string.h>
int main()
{
    int dec;
    printf("enter decimal:");
    scanf("%d",&dec);
    printf("\n");

    int string[]=printf(dec);
    int length=strlen(string);
    
    int i;
    while(i<length)
    {
        printf("%d/",string[i]);
    }
    return 0;
}