#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    printf("Enter desired string: ");
    gets(arr);
    printf("\n");
    
    int length = strlen(arr), spaces=0;
    for (size_t i = 0; i < length; i++)
    {
        if(arr[i] == ' ')
        {
            spaces++;
        }
    }
    printf("length: %d, spaces: %d\n", length, spaces);
    printf("length without spaces: %d", length-spaces);

    return 0;
}