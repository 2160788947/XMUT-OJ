#include<stdio.h>
int point[2][1000000] = {0};
int Max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int t, n, i, m, x, y;
	scanf("%d", &t);
	while (t--)
	{
		int dis[4] = { -9999999,-9999999,-9999999,-9999999 };
		scanf("%d", &n);
		for(i=0;i<n;i++)
		{
			scanf("%d %d", &point[0][i], &point[1][i]);//储存数据
			dis[0] = Max(dis[0], -point[0][i] - point[1][i]);
			dis[1] = Max(dis[1], -point[0][i] + point[1][i]);
			dis[2] = Max(dis[2], point[0][i] + point[1][i]);
			dis[3] = Max(dis[3], point[0][i] - point[1][i]);
			//提前预处理,判断
			/*
			当X > Xi && Y > Yi dist1 = +X - Xi + Y - Yi
			当X > Xi && Y < Yi dist2 = +X - Xi - Y + Yi
			当X < Xi && Y < Yi dist3 = -X + Xi - Y + Yi
			当X < Xi && Y > Yi dist4 = -X + Xi + Y - Yi
			*/
		}
		scanf("%d", &m);
		while (m--)
		{
			int max = 0;
			scanf("%d %d", &x, &y);
			max = Max(max, dis[0] + x + y);
			max = Max(max, dis[1] + x - y);
			max = Max(max, dis[2] - x - y);
			max = Max(max, dis[3] - x + y);
			printf("%d\n", max);
		}
	}
	return 0;
}