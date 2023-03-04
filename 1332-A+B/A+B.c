#include<stdio.h>

int main()
{
	char time[3] = {0};
	int hour, minute, second,pass;
	scanf("%s", &time);
	scanf("%d:%d:%d", &hour, &minute, &second);
	scanf("%d", &pass);
	second += pass;
	while(second >= 60)
	{
		second -= 60;
		minute++;
	}
	while(minute >= 60)
	{
		minute -= 60;
		hour++;
		if (hour == 12)
		{
			if (time[0] == 'A')
				time[0] = 'P';
			else if (time[0] == 'P')
				time[0] = 'A';
		}
		while (hour > 12)
		{
			hour -= 12;
		}
	}
	printf("%s %02d:%02d:%02d", time, hour, minute, second);
	return 0;
}