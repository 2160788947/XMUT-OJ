#include<stdio.h>
int main()
{
	int cnt,score;
	scanf("%d", &cnt);
	if (cnt <= 10)
	{
		score = cnt * 6;
	}
	else if(cnt>10&&cnt<=20)
	{
		score = (cnt - 10) * 2 + 60;
	}
	else if(cnt>20&&cnt<=40)
	{
		score = (cnt - 20) + 80;
	}
	else
	{
		score = 100;
	}
	printf("%d", score);
	return 0;
}