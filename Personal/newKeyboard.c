#include <stdio.h>
int main()
{
    char answer[3];
    printf("guess what:");
    scanf("%s",&answer);

    if(answer=="wt")
    {
        printf("\nI got a new keyboard!");
    }
    return 0;
}