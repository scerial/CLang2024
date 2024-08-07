#include <stdio.h>

// void PrintArr()
// {
//     for(int i = 0, i )
// }

int main()
{
    int arr[6][4];
     for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            arr[i][j] = 1;
        }
        printf("\n");
    }
    //print original
    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d,", arr[i][j]);
        }
        printf("\n");
    }
    //new values
    arr[2][5] = 10;
    arr[4][1] = 77;
    //print new
    printf("\n");
    for (size_t i = 0; i < 6; i++)
    {
        for (size_t j = 0; j < 4; j++)
        {
            printf("%d,", arr[i][j]);
        }        
        printf("\n");
    }
    return 0;
}