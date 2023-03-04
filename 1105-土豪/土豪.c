#include<stdio.h>
int main()
{
	int x, y, z,n,i,sum,l,cost=0,t_i,t_l,cost_1=0;
	scanf("%d", &n);
	scanf(" %d %d %d", &x, &y, &z);
	for (i = 9;i >= 1;i--)
	{
		for (l = 9;l >= 1;l--)
		{
			sum = i * 10000 + x * 1000 + y * 100 + z * 10 + l;
			if (sum % n == 0)//判断每只烤鸭的价格是否为整数
			{
				cost = sum / n;
				if (cost_1 < cost)//找出最大值
				{
					cost_1 = cost;
					t_i = i;
					t_l = l;
				}
			}
		}
	}
	if(cost!=0)
		printf("%d %d %d", t_i, t_l, cost_1);
	else
		printf("0");
	return 0;
}