#include<stdio.h>
int main()
{
	int t;
	double hp1, hp2, speed1, speed2, hurt1, hurt2,time1,time2;
	scanf("%d", &t);
	while (t--)
	{
		time1 = 0, time2 = 0;
		scanf("%lf%lf%lf%lf%lf%lf", &hp1, &hurt1, &speed1, &hp2, &hurt2, &speed2);
		while (hp1 > 0)
		{
			hp1 -= hurt2;
			time2 += speed2;
		}
		while (hp2 > 0)
		{
			hp2 -= hurt1;
			time1 += speed1;
		}
		if (time1 < time2)//判断击杀时间大小
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}