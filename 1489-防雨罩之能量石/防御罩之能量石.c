#include<stdio.h>
//加时效应：放入1型时，如果另一个槽中放着0型，那么这个0型会被激发增加10天的使用时间
int main()
{
	int n, cnt = 0, x, flag = 0, time1 = 0, time2 = 0, day = 0;
	//time1和time2分别为两个槽中能量石的使用时间,day为总天数
	scanf("%d", &n);
	while (n--)
	{
		scanf("%d", &x);
		if (x == 0)//隐性条件:一旦放入0型能量石,后面直到结束,都存在至少一个0型能量石
		{
			flag = 1;//判断加时效应
			if (time1 == 0)//如果存在空的槽,则放入能量石,相应的time变成10
			{
				time1 = 10;
			}
			else if (time2 == 0)
			{
				time2 = 10;
			}
		}
		if (x == 1)
		{
			if (time1 == 0)
			{
				time1 = 10;
			}
			else if (time2 == 0)
			{
				time2 = 10;
			}
			if (flag == 1)//判断加时效应,如果之前放入过0型能量石,则flag==1
			{
				//0型槽的时间必定少于刚放入1型的时间,所以只需判断时间小的,便为0型,加时效应,0型槽time+=10;
				if (time1 > time2)
				{
					time2 += 10;
				}
				else if (time1 < time2)
				{
					time1 += 10;
				}
			}
		}
		if (time2 <= 0 && time1>0)
		{
			time1--;
		}
		else if (time1 <= 0 && time2>0)
		{
			time2--;
		}
		//当只有一个槽有能量石时,模拟使用时间流程

		while (time1 > 0 && time2 > 0)
		{
			time1--;
			time2--;
			day++;
		}
		//当两个槽都有能量石时,模拟使用时间流逝
	}
	printf("%d", day);
	return 0;
}