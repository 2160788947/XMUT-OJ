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
				flag[i][j] = 1;//���ϰ���ռ�ݵĵ�λ���Ϊ1
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
				if(flag[i][j] != 1)//�жϸ�λ���Ƿ����ϰ�
				flag[i][j] = 2;//�������ĵ�λ���Ϊ2
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
				if (flag[i][j] != 1)//�жϸ�λ���Ƿ����ϰ�
				flag[i][j] = 2;//�������ĵ�λ���Ϊ2
			}
		}
	}
	for (i = 1; i <= N; i++)
	{
		for (j = 1; j <= M; j++)
		{
			if (flag[i][j] == 2)//��������,�ж�ֵΪ2�ĵ�λ�м���
				cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}