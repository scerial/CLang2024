#include <stdio.h>
#include <string.h>

struct STUDENT_INFO
{
    int age;
    char name[10];
};

int main()
{
    struct STUDENT_INFO student;
    strcpy(student.name,"Youngmin");

    printf("%s\n", student.name);
    
    for(int i=0; student.name[i] != '\0'; i++)
    {
        for(int j = 0; j < 26; j++)
        {
            int howMany=0;
            if(student.name[i] == 97+j || student.name[i] == 65+j)
            {
                howMany++;
            }
            printf("%d ",howMany);
        } 
    }

    
}