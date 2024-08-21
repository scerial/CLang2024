#include <stdio.h>
#include <string.h>

struct STUDENT_INFO
{
    int age;
    char name[10];
};

int main()
{
    int alphabet[26]={0};

    struct STUDENT_INFO student;
    strcpy(student.name,"Youngmin");

    printf("%s\n", student.name);
    for(int indx=0; indx < 26; indx++)
        {
            printf("%c ", indx+97);
        }
        printf("\n");        
    
    for(int i=0; student.name[i] != '\0'; i++)
    {
        
        for(int j = 0; j < 26; j++)
        {
            if(student.name[i] == 97+j || student.name[i] == 65+j)
            {
                alphabet[j]++;
            }            
        }      
       
    }
    for(int indx=0; indx < 26; indx++)
    {
        printf("%d ", alphabet[indx]);
    }
    return 0;
}