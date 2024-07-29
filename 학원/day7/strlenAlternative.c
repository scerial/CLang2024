#include <stdio.h>
#include <string.h>
int length(char string[])
{
    int dex = 0;
    while (string[dex] != '\0')
    {
        dex++;
    }
    return dex;
}
int main()
{
    char arr[] = "string";

    printf("length: %d", length(arr));

    return 0;
}