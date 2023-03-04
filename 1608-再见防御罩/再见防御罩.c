#include<stdio.h>
int flag[105][105] = { 0 };
int main()
{
	int N, M, z, h, v, i, j, cnt = 0;
	scanf("%d %d %d %d %d", &N, &M, &z, &h, &v);
	while (z--)
	{
		int x1, x2, y1, y2;
		scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
		for (i = x1; i <= x2; i++)
		{
			for (j = y1; j <= y2; j++)
			{
				flag[i][j] = 1;//将障碍物占据的单位标记为1
			}
		}
	}
	while (h--)
	{
		int t, d;
		scanf("%d %d", &t, &d);
		for (i = t; i <= d; i++)
		{
			for (j = 1; j <= M; j++)
			{
				if(flag[i][j] != 1)//判断该位置是否有障碍
				flag[i][j] = 2;//将保护的单位标记为2
			}
		}
	}
	while (v--)
	{
		int l, r;
		scanf("%d %d", &l, &r);
		for (i = 1; i <= N; i++)
		{
			for (j = l; j <= r; j++)
			{
				if (flag[i][j] != 1)//判断该位置是否有障碍
				flag[i][j] = 2;//将保护的单位标记为2
			}
		}
	}
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= M; j++)
		{
			if (flag[i][j] == 2)//遍历数组,判断值为2的单位有几个
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}