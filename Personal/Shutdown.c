#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// #define op1 "Shutdown Now"
// #define op2 "Shutdown in ('time')"
// #define op3 "Abort Scheduled"

typedef struct option
{
    int num;
    char text[8];
}op;

void shutdown_now()
{
    system("shutdown -s -t 0");
}

void timer()
{
    int unit;
    char unit_txt[8], command[20];

    int timer;

    printf("Select time unit:\n 1. Hrs  2. Min   3. Sec");
    scanf("%d", &unit);
    switch (unit)
    {
    case 1:
        unit=3600;
        strcpy(unit_txt, "hours");
        break;
        
    case 2:
        unit=60;
        strcpy(unit_txt, "minutes");
        break;
        
    case 3:
        unit=1;
        strcpy(unit_txt, "seconds");
        break;
        
    default:
        printf("Error: invalid answer. Terminating...");
        sleep(1); exit(0);
        break;
    }
    
    printf("Set timer: "); scanf("%d", &timer);
    printf("Setting timer to %d %s.", timer*unit, unit_txt);
    
    sprintf(command,"shutdown -s -t %d", timer*unit);
    system(command);
}


void initiate(const int option)
{
    printf("\n");
    
    switch (option)
    {
    
    case 1:
        printf("Your PC will shut down shortly.");
        sleep(500); shutdown_now();
        break;
    
    case 2:
        timer();
        break;
    
    case 3:
        printf("Aborting Shutdown.");
        system("shutdown -a");
        break;
    
    default:
        printf("Terminating action...");
        sleep(1); exit(0);
        break;
    }
}

void confirm(const char select[8])
{
    char YesNo;
    printf("You have chosen %s.\n", select);
    printf("Proceed? (Y/N): ");
    scanf(" %c", &YesNo);
    
    if(YesNo == 'Y' || YesNo == 'y')
    {
        printf("Proceeding with selection...");
    }
    else
    {
        printf("Terminating action...");
        sleep(1); exit(0);
    }
    // switch ((int)YesNo == 'Y' || YesNo == 'y')
    // {
    // case 0:
    //     printf("Terminating action...");
    //     sleep(1); exit(0);
    //     break;
    
    // case 1:
    //     printf("Proceeding with selection...");
    //     break;
    
    // default:
    //     printf("Error: invalid answer. Terminating...");
    //     sleep(1); exit(0);
    //     break;
    // }
        
    
    //return YesNo;
}

int main()
{
    printf("===========================================\n");
    printf("           Jake's Shutdown Menu\n");
    printf("===========================================\n\n");
    printf("    select option...\n");
    printf("      1. Shutdown Now\n      2. Shutdown in ('time')\n      3. Abort Scheduled\n");
    printf("\n    Option: ");
    
    op option;
    scanf("%d", &option.num);
    switch(option.num)
    {
        case 1:
        strcpy(option.text, "Shutdown Now");
        break;
        
        case 2:
        strcpy(option.text, "Shutdown in ('time')");
        break;
        
        case 3:
        strcpy(option.text, "Abort Scheduled");
        break;
    }
    
    confirm(option.text);
    initiate(option.num);

    return 0;
}