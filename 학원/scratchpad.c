#include <stdio.h>

void PrintArr(const char *arr)
{
    
    for(int i = 0; i <= 2; i++)
    {
        for(int j = 0; j <= 2; j++)
        {
            printf("%d\n",*(arr[i][j]));    
        }
    }
}

int main()
{
    int arr[2][2] = {1};
    PrintArr(arr);

    return 0;    
}