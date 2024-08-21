#include <stdio.h>
#include <math.h>

typedef struct point
{
    int xpos, ypos;
}point;

int main()
{
    point pos1, pos2;
    double distance;

    fputs("point1 pos: ", stdout);
    scanf("%d %d", &pos1.xpos, &pos1.ypos);

    fputs("point2 pos: ", stdout);
    scanf("%d %d", &pos2.xpos, &pos2.ypos);

    distance = sqrt(pow(pos1.xpos-pos2.xpos,2)+pow(pos1.ypos-pos2.ypos,2));

    printf("distance is %g", distance);
    return 0;
}