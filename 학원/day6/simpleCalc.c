#include <stdio.h>

char opselect()
{
    int op;

    printf("==select operation==\n");
    printf("  1:+ 2:- 3:* 4:/\n");
    printf("choice:");
    scanf("%d",&op);

    printf("\n");
    switch (op)
    {
    case 1:
        op="+";
        printf("operation: %c",op);
        break;
    case 2:
        op="-";
        printf("operation: %c",op);
        break;
    case 3:
        op="*";
        printf("operation: %c",op);
        break;
    case 4:
        op="/";
        printf("operation: %c",op);
        break;
    default:
        op=NULL;
        printf("err: invalid input");
        break;
    }
    return op;
}

int main()
{
    int num1,num2;
    
    opselect();

    return 0;
}