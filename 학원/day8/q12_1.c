#include <stdio.h>

int main()
{
    int num=10;
    int *ptr1=&num;
    printf("*ptr1:%d\n",*ptr1);
    int *ptr2=ptr1;
    printf("num:%d, *ptr1:%d, *ptr2:%d\n",num,*ptr1,*ptr2);
    printf("ptr1:%d, ptr2:%d\n\n",ptr1,ptr2);

    (*ptr1)++;
    printf("num:%d, *ptr1:%d, *ptr2:%d\n",num,*ptr1,*ptr2);
    printf("ptr1:%d, ptr2:%d\n\n",ptr1,ptr2);
    (*ptr2)++;
    printf("num:%d, *ptr1:%d, *ptr2:%d\n",num,*ptr1,*ptr2);
    printf("ptr1:%d, ptr2:%d\n\n",ptr1,ptr2);
    
    return 0;
}