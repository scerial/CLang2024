#include <stdio.h>
#include <string.h>

typedef struct{
    int withSpc, noSpc;
}length;

length stringlen(char arr[])
{
    length res={0,0};

    while (arr[res.withSpc] != '\0')
    {
        if(arr[res.withSpc]!=' ')
        {
            res.noSpc++;
        }
        res.withSpc++;
    }
    return res;
}

int main()
{
    char arr[] = "string length";

    length res=stringlen(arr);
    printf("no space:%d, with space:%d",res.noSpc,res.withSpc);

    return 0;
}