#include<stdio.h>
#include<algorithm>
#include<iostream>
using namespace std;
int main()
{
	int i, L, N, M, num[120] = { 0 }, l = 0, Min, step=0, t,Len=0;
	scanf("%d %d %d", &L, &N, &M);
	for (i = 1; i <= N; i++)
	{
		scanf("%d", &num[i]);
	}
	num[i] = L;
	//存入N+2个点
	while (M--)
	{
		Min = 9999;//此处Min用来筛选基地
		for (i = 1; i <= N; i++)//遍历每个点
		{
			t = min(num[i] - num[i - 1], num[i + 1] - num[i]);//计算两点距离
			if (t < Min)//记录最小
			{
				Min = t;
				Len = num[i + 1] - num[i - 1];
				step = i;
			}
			if (t == Min && num[i + 1] - num[i - 1] < Len)//如果出现两个最短距离相等,判断左右两个点的距离,选出距离最小的那个点
			{
				Min = t;
				Len = num[i + 1] - num[i - 1];
				step = i;
			}
		}
		t = num[i] - num[i - 1];//火星和最后一个基地计算距离
		if (t < Min)
		{
			Min = t;
			step = i - 1;
		}
		for (; step <= N + 1; step++)//删除空间站
		{
			num[step] = num[step + 1];
		}
		N--;
	}
	Min = 9999;//此次Min用来选出最小距离
	for (i = 1; i <= N + 1; i++)//遍历,得到最小距离
	{
		t = num[i] - num[i - 1];
		if (t < Min)
		{
			Min = t;
		}
	}
	printf("%d", Min);
	return 0;
}