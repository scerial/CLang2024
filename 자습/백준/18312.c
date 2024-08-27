#include <stdio.h>
#include <time.h>

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

char eval(struct time time, int K) {
	if (time.hr / 10 == K || time.hr % 10 == K ||
		time.min / 10 == K || time.min % 10 == K ||
		time.sec / 10 == K || time.sec % 10 == K) {
		return 1;
	}
	return 0;
}

int seconds(struct time time)
{
	int res;
	res = time.hr * 3600;
	res + time.min * 60;
	res + time.sec;
	return res;
}

int main()
{
	struct time time={ 0, 0, 0 };
	int N, K;
	scanf("%d %d", &N, &K);
	int ToGo = N*3600 + 59*60 + 59;
	
	char res;
	int count=0;
	while (ToGo != 0 )
	{
		res = 0;
		time = hms(ToGo);
		res=eval(time, K);
		if (res == 1)
			count++;
		ToGo--;
	}
	
	printf("%d", count);
	return 0;
}