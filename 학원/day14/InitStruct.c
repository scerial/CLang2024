#include <stdio.h>

typedef struct point
{
    int x;
    int y;
}point;

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
}person;

int main()
{
    point pos = {10, 20};
    person man = {"Jake", "010-4910-0473", 22};

    printf("%d %d\n", pos.x, pos.y);
    printf("%s %s %d\n", man.name, man.phoneNum, man.age);

    return 0;
}
