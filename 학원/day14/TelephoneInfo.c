#include <stdio.h>
#include <string.h>

typedef struct person
{
    char name[20];
    char phoneNum[20];
    int age;
}contact;

int main()
{
    contact man1, man2;
    strcpy(man1.name, "Jake");
    strcpy(man1.phoneNum, "010-4910-0473");
    man1.age = 22;

    printf("enter name: "); scanf("%s",man2.name);
    printf("enter phone number: "); scanf("%s", man2.phoneNum);
    printf("enter age: "); scanf("%d",&man2.age);

    printf("\n");

    printf("name: %s\n", man1.name);
    printf("number: %s\n", man1.phoneNum);
    printf("age: %d\n\n", man1.age);

    printf("name: %s\n", man2.name);
    printf("number: %s\n", man2.phoneNum);
    printf("age: %d\n", man2.age);
    return 0;
}