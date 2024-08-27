#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

struct time
{
    int hr;
    int min;
    int sec;
};

struct time hms(int seconds)
{
    struct time hms = { 0,0,0 };

    hms.hr = seconds / 3600;//get hrs
    hms.min = (seconds % 3600) / 60;//get min
    hms.sec = seconds % 60;//get sec
    return hms;
}

int seconds(struct time time)
{
    int res;
    res = time.hr * 3600;
    res = res + time.min * 60;
    res = res + time.sec;
    return res;
}


int confirm(int option)
{
    while (getchar() != '\n') continue; //clears bloat from buffer
    char ans;
    printf("You have selected option %d.\n", option);
    printf("Proceed? (Y/N): ");
    ans=getchar();

    if (ans == 'Y' || ans == 'y')
    {
        printf("Proceeding...");
        return 1;
    }
    
     printf("Aborting...");
     return 0;
}

void shutdown_now()
{
    printf("Shutting down now...");
    Sleep(1000);
    system("shutdown -s -t 0");
}

void shutdown_timed()
{
    struct time timer = { 0,0,0 };
    char command[20];
    printf("Enter time in hh:mm:ss format: ");
    scanf_s("%d:%d:%d", &timer.hr, &timer.min, &timer.sec);
    printf("Shutting down in %d:%d:%d", timer.hr, timer.min, timer.sec);

    sprintf_s(command,"shutdown -s -t %d", seconds(timer));
    Sleep(500);
    system(command);
}

void abort()
{
    printf("Aborting shutdown\n");
    system("shutdown -a");
}

void execute(int option)
{
    switch (option)
    {
    case 1:
        shutdown_now();
        break;
    case 2:
        shutdown_timed();
        break;
    case 3:
        abort();
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

    //char i = getchar();
    int option;
    scanf_s("%d", &option);
    int go=confirm(option);
    if (go == 1)
        execute(option);
    
    return 0;    
}