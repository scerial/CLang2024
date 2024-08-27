#include <stdio.h>
#include <windows.h>
// #include <time.h>
// #include <stdlib.h>

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

/* above are dependencies*/

void countdown(struct time timer)
{
    
    struct time disp = { 0,0,0 };
    int remaining_sec = seconds(timer);
    for ( size_t i = remaining_sec; i >=0; i--)
    {
        disp = hms(i);
        printf("%d:%d:%d", disp.hr, disp.min, disp.sec);
        fflush(stdout);
        Sleep(1000);
        printf("\r");
    }
}

int main()
{    
    struct time togo = {1,0,0};
    countdown(togo);
}