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
	//����N+2����
	while (M--)
	{
		Min = 9999;//�˴�Min����ɸѡ����
		for (i = 1; i <= N; i++)//����ÿ����
		{
			t = min(num[i] - num[i - 1], num[i + 1] - num[i]);//�����������
			if (t < Min)//��¼��С
			{
				Min = t;
				Len = num[i + 1] - num[i - 1];
				step = i;
			}
			if (t == Min && num[i + 1] - num[i - 1] < Len)//�������������̾������,�ж�����������ľ���,ѡ��������С���Ǹ���
			{
				Min = t;
				Len = num[i + 1] - num[i - 1];
				step = i;
			}
		}
		t = num[i] - num[i - 1];//���Ǻ����һ�����ؼ������
		if (t < Min)
		{
			Min = t;
			step = i - 1;
		}
		for (; step <= N + 1; step++)//ɾ���ռ�վ
		{
			num[step] = num[step + 1];
		}
		N--;
	}
	Min = 9999;//�˴�Min����ѡ����С����
	for (i = 1; i <= N + 1; i++)//����,�õ���С����
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