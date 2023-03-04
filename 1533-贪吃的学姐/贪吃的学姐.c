#include<stdio.h>
int candy[100][100] = { 0 };
int main()
{
	int n, i,sum=0,max=0,t,x,y,l,j,h;
	scanf("%d", &n);
	for (i = 0;i < n;i++)
	{
		scanf("%d %d",&x,&y);
		for (t = 0; candy[t][y] != 0; t++);//按照天数存放,这个循环遍历到该天没有糖果的位置
		candy[t][y] = x;
		if (y > max)//记住最大天数
		{
			max = y;
		}
	}
	max += 1;
	while (max-->1)//到一天就结束了
	{
		l = 0;//该天最大糖果价值
		for (t = 0; candy[t][max] != 0; t++)//遍历记下最大价值和相应的位置
		{
			if (candy[t][max] > l)
			{
				l = candy[t][max];
				j = t;
			}
		}
		candy[j][max] = 0;//将最大价值位置改为0
		for (h = 0; candy[h][max - 1] != 0; h++);//得到前一天糖果的个数
		sum += l;//总价值
		for (i = 0; i < t; i++)//将该天没有被选中的糖果移到前一天
		{
			if (candy[i][max] != 0)
			{
				candy[h++][max - 1] = candy[i][max];
			}
		}
	}
	printf("%d", sum);
	return 0;
}