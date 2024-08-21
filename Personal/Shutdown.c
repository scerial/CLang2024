#include <stdio.h>
#include <stdlib.h>

// #define op1 "Shutdown Now"
// #define op2 "Shutdown in ('time')"
// #define op3 "Abort Scheduled"


char confirm(const char ans[20])
{
    char YesNo;
    printf("You have chosen %s.\n", ans);
    printf("Proceed? (Y/N): ");
    scanf("%c", &YesNo);

    switch (YesNo == 'Y' || YesNo == 'y')
    {
    case 0:
        printf("Terminating action...");
        break;
    
    case 1:
        printf("Proceeding with selection...");
    
    default:
        printf("Error: irrelevant answer. Terminating...");
        break;
    }
    return YesNo;
}

void initiate(const int option)
{
    printf("\n");
    switch (option)
    {
    
    case 1:
        printf("Your PC will shut down shortly.");
        break;
    
    case 1:
        printf("Select time unit:\n 1.hours \n");
        break;
    
    case 1:
        printf("Your PC will shut down shortly.");
        break;
    
    default:
        break;
    }
}

int main()
{
    printf("===========================================\n");
    printf("           Jake's Shutdown Menu\n");
    printf("===========================================\n\n");
    printf("    select option...\n");
    printf("        1. Shutdown Now\n       2. Shutdown in ('time')\n      3. Abort Scheduled\n");
    printf("\n    Option: ");
    
    int option;
    scanf("%d", &option);

        
}