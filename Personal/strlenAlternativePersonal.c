#include <stdio.h>
#include <string.h>

typedef struct length
{
    int withSpc, noSpc;
};

struct length length(char string[])
{
    struct length res;
    while (string[res.noSpc] != '\0')
    {
       if(string[res.noSpc]=" ")
       {
         res.withSpc++;
       }
       res.noSpc++;
       res.withSpc++;
    }
    
    return res;
}
int main()
{
    char arr[] = "string";

    struct length length = length(arr);
    printf("length-> w/space:%d w/o space:%d", length.withSpc, length.noSpc);

    return 0;
}