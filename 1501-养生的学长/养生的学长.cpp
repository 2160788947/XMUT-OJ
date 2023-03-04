#include<stdio.h>
int main()
{
	int n,i,a[20],sum=0,time=0,candy=0;
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
		//计算累积时间
		sum += a[i];
		//判断累积时间是否超过30min
		if (sum>30)
		{
			//得到超出30min的时间
			sum -= 30;
			//将oj的五分钟并入作业时间
			a[i] += 5;
		}
		//累积时间恰好为30min时,如果不为最后一份作业,则将oj时间并入作业时间														
		else if (sum == 30 && i != n - 1)
		{
			//同上
			sum = 0;
			a[i] += 5;
		}
	}
	//遍历数组
	for (i = 0; i < n; i++)
	{
		//判断当前含着的糖是否能够完成该份作业
		if (time - a[i] < 0)
		{
			//如果不能,则重新吃一颗糖
			candy++;
			//将时间初始化为10min
			time = 10;
		}
		//减去写作业消耗的时间
		time -= a[i];
	}
	printf("%d", candy);
	return 0;
}