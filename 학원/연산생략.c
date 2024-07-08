#include <stdio.h>
int main()
{
    int data=5;
    data > 3 && data++;
    printf("1. data = 5 >> %d\n",data);//result: 5+1="6"

    data=2;
    data>3&&data++;//since the first evaluation is false, &&is false. thus data++ is not computed.
    printf("2. data = 2 >> %d\n",data);
}
//the above works the other way in || operations. 