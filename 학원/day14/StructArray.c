#include <stdio.h>

typedef struct point
{
    int x, y;
}point;

int main()
{
    point arr[3];
    int i;

    for (size_t i = 0; i < 3; i++)
    {
        printf("enter coordinates: ");
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    
    for (size_t i = 0; i < 3; i++)
    {
        printf("[%d, %d] ", arr[i].x, arr[i].y);
    }

    return 0;    
}