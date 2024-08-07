#include <stdio.h>

int main()
{
    int arr1[3][4];
    int arr2[7][9];

    printf("3 row 4 col: %d\n", sizeof(arr1));
    printf("7 col 9 row: %d\n", sizeof(arr2));

    return 0;
}